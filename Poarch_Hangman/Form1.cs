using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Poarch_Hangman
{
    public partial class hangMan : Form
    {
        public hangMan()
        {
            InitializeComponent();
        }
        int number;
        int tries = 0;

        private void hangMan_Load(object sender, EventArgs e)
        {
            ///
            ///gets number from text box and compares it to random number generated
            ///if it is correct you win and displays dancing skeleton,else
            ///it progresses through stages of tries up to 6 times and then gives option 
            ///to try again with picture depicting noose being built
            ///

            Random generator = new Random();  //initializes random generator
            number = generator.Next(0, 101);

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void numbBtn_Click(object sender, EventArgs e)
        {
            int numguess = Convert.ToInt32(textBox1.Text);


            hangBox.Image = Properties.Resources.Hangman_Game_red; //initializes first picture user sees

            ///
            ///begins the if statements that test to see if the number entered
            ///by the user is greater than or less than the random number
            ///generated or if it is equal to it. It keeps asking the user for 
            ///input till they hit 6 tries which ends the game.  Each step if 
            ///guessed incorrectly the user addes a piece to the hangman
            ///till he dies at the end the user has the choice to either play again
            ///(respawn) or close the program
            ///
            if (tries < 6)  /* begins comparison of input vs. computer # and records tries */
            {
                if (numguess > number)
                {
                    MessageBox.Show("Too High, want to guess again?");
                    tries++;
                }
                if (numguess < number)
                {
                    MessageBox.Show("Too Low, want to guess again?");
                    tries++;
                }
                if (numguess == number)
                {
                    MessageBox.Show("You Win Want to play again?");
                    hangBox.Image = Properties.Resources.spawn;


                }
                else /*begins displaying try results*/
                  if (tries == 1)
                {
                    hangBox.Image = Properties.Resources.hangman01;
                }
                if (tries == 2)
                {
                    hangBox.Image = Properties.Resources.hangman02;
                }
                if (tries == 3)
                {
                    hangBox.Image = Properties.Resources.hangman05;
                }
                if (tries == 4)
                {
                    hangBox.Image = Properties.Resources.hangman06;
                }
                if (tries == 5)
                {
                    hangBox.Image = Properties.Resources.hangman07;
                }
                if (tries == 6)
                {
                    hangBox.Image = Properties.Resources.dead;
                    MessageBox.Show("Sorry Dead Men Can't Play, Respawn?");
                }

            }
        }

        private void hangBox_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (exitBtn.Checked) /* closes program*/
            {
                this.Close(); 
            }
                else if (radioButton1.Checked) /* respawns player and clears textbox*/
            {
                MessageBox.Show("Welcome Back");
                hangBox.Image = Properties.Resources.spawn;
                textBox1.Clear();
            }
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }
    }
}