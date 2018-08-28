//
//  ChapterSeven.cpp
//  ChapterSeven
//
//  Created by Jorge Figueroa Solarte on 1/18/18.
//  Copyright © 2018 Jorge Figueroa Solarte. All rights reserved.
//
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "ChapterSeven.h"

using namespace std;

void ChapterSeven::figureSevenThree()
{
    
    int n[ 10 ];
    
    for( int i = 0 ; i < 10 ; i++ )
    {
        n[ i ] = 0;
    }
    
    cout << "Element" << setw( 13 ) << "Value" << endl;
    
    for( int j = 0 ; j < 10 ; j++ )
    {
        cout << setw( 4 ) << "n[ " << j << " ]" << setw( 13 ) << n[ j ] << endl;
    }
}

void ChapterSeven::figureSevenFour()
{
    
    int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    
    cout << "Element" << setw( 13 ) << "Value" << endl;
    
    for( int i = 0 ; i < 10 ; i++ )
    {
        cout << setw( 4 ) << "n[ " << i << " ]" << setw( 13 ) << n[ i ] << endl;
    }
}

void ChapterSeven::figureSevenFive()
{
    
    const int arraySize = 10;
    
    int s[ arraySize ];
    
    for( int i = 0 ; i < 10 ; i++ )
    {
        s[ i ] = ( 2 * i ) + 2;
    }
    
    cout << "Element" << setw( 13 ) << "Value" << endl;
    
    for( int j = 0 ; j < 10 ; j++ )
    {
        cout << setw( 4 ) << "s[ " << j << " ]" << setw( 13 ) << s[ j ] << endl;
    }
    
    
    
}

void ChapterSeven::figureSevenEight()
{
    int total = 0;
    int average = 0;
    
    int arraySize;
    
    cout << "Enter de number of grades: " ;
    cin >> arraySize ;

    int s[ arraySize ];
    
    for( int j = 0 ; j < arraySize ; j++ )
    {
        cout<< "Type a grade: " ;
        cin>> s[ j ] ;
  
    }
    
    for( int i = 0 ; i < arraySize ; i++ )
    {
        total = total + s[ i ];
    }
    
    average = total / arraySize;
    
    cout << "The average is: " << average << ". Total is: " << total << endl;
    
   
    
}

void ChapterSeven:: figureSevenNine()
{
    const int arraySize = 11 ;
    
    int s[ arraySize ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };
    
    cout << "Grade distribution: " << endl;
    
    for( int i = 0 ; i < arraySize ; i++ )
    {
        if ( i == 0 )
        {
            cout << "   0 - 9: " ;
        }
        else if( i == 10 )
        {
            cout << "91 - 100: ";
        }
        else
        {
            cout << " " << ( i * 10 ) << " - " << ( i * 10 + 9 ) << ":";
            
        }
        
        cout << "\t";
        for( int j = 0 ; j < s[ i ] ; j++ )
        {
            
            cout << "*";
            
        }
        cout << endl;
    }
    
    
    
}

void ChapterSeven::figureSevenTen()
{
    const int arraySize = 7;
    
    int frequency[ arraySize ] = {};
    int rollFace = 0;
    
    //srand ( time( 0 ) );
    
    for( int roll = 1 ; roll <= 20 ; ++roll)
    {
        rollFace = 1 + rand() % 6;
        cout << "Dice face: " << rollFace << endl;
        ++frequency[ rollFace ];
    }
    
    cout << "Face" << setw( 13 ) << "Frequency" << endl;
    
    for( int face = 1 ; face < arraySize ; ++face)
    {
        cout << setw( 4 ) << face << setw( 13 ) << frequency[ face ] << endl;
    }
    
    
    
    
}

void ChapterSeven::figureSevenEleven()
{
    
    const int frequencySize = 6;
    int answer;
    int responsiveSize;
    
    
    
    
        cout << "Enter the number of surveys you are going to enter: ";
        cin >> responsiveSize ;
    
    
    int frequency[ frequencySize ] = {};
    //1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5
    for( int survey = 1 ;  survey <= responsiveSize ; survey++ )
    {
        cout << "Enter the response: ";
        cin >> answer;
        ++frequency[ answer ];
    }
    
    for( int printVariable = 1 ; printVariable < frequencySize ; ++printVariable )
    {
        
        cout << printVariable << setw( 13 ) << frequency[ printVariable ] << endl;
        
        
    }
    
}

void ChapterSeven::exerciseSevenTen()
{
    
    const int arraySize = 11;
    int salaryCounter[ arraySize ] = {};
    
    
    int salary;
    const int basicSalary = 200;
    
    int grosses;
    int commission;
    int indexCounter;
    int workingPeople = 10;
    
    
    
    
    for(int salesPeople = 1 ; salesPeople <= workingPeople ; salesPeople++ )
    {
        cout << "Enter the value of your monthly grosses: ";
        cin >> grosses ;

        commission = 0.09 * grosses;
        salary = commission + basicSalary;
        cout << "Monthly salary is: " << salary << endl;
        
        indexCounter = salary / 100;
        cout << indexCounter << endl;

        
        if( indexCounter < 10 )
        {
            ++salaryCounter[ indexCounter ];
        }
        else
        {
            ++salaryCounter[ 10 ];
        }
        
    }
    
    for ( int results = 2 ; results <= workingPeople ; results++ )
    {
        if ( results == 10 )
        {
            cout << "      100 :" << salaryCounter[ results ] << endl;
        }
        else
        {
            cout << results * 100 << " - " << results * 100 + 99 << ":" << salaryCounter[ results ] << endl;
        }
    }
 
    
    
    
}

void ChapterSeven::figureSevenNineTeen()
{
    
    const int arraySize = 10;
    
    int data[ arraySize ]  = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
    
    int insert;
    
    cout << "Unsort array: " << endl;
    
    for( int i = 0 ; i < arraySize ; i++ )
    {
        cout<< setw( 4 ) << data[ i ] ;
    }
    
    cout<< endl;
    
    for( int next = 1 ; next < arraySize ; next++ )
    {
        
        insert = data[ next ];
        
        int moveItem = next;
        
        while( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
        {
            data[ moveItem ] = data[ moveItem - 1 ];
            moveItem--;
        }
        
        data[ moveItem ] = insert;
        
    }
    
    cout << "\nSort array: " << endl;
    
    for( int j = 0 ; j < arraySize ; j++ )
    {
        cout << setw( 4 ) << data[ j ];
    }

    cout << endl;
             
         
}

void ChapterSeven::exerciseSevenEleven()
{
    const int arraySize = 10;
    int count = 0;
    
    int array[ arraySize ] = { 34, 103, 4, 10, 77, 51, 93, 30, 5, 1 };
    
    for( int i = 1 ; i <= arraySize ; i++ )
    {
    
        for( int j = 1 ; j < arraySize ; j++ )
        {
            int lower = array[ j - 1 ];
            int upper = array[ j ];
            if( array[ j - 1 ] > array[ j ])
            {
                array[ j - 1 ] = upper;
                array[ j ] = lower;
            }
            
            for( int k = 0 ; k < arraySize ; k++ )
            {
                cout << array[ k ] << "  ";
            }
            
            cout << endl;
            count++;
        }
        
    }
    
    cout << count << endl;
    
}

void ChapterSeven::exerciseSevenTwelve()
{
    const int arraySize = 10;
    
    int decreseValue = arraySize - 1 ;
    int count = 0;
    int swepCount = 0;

 
    
    int array[ arraySize ] = { 340, 13, 4, 10, 77, 51, 103, 30, 5, 520 };

    for( int i = 0 ; i < arraySize ; i++ )
    {
      

       
   
        for( int j = 1; j <= decreseValue ; j++)
        {
            
        
            int lower = array[ j - 1 ];
            int upper;
           
            upper = array[j];
         
            if( array[ j - 1 ] > array[ j ])
            {
                array[ j - 1 ] = upper;
                array[ j ] = lower;
                swepCount++;
            }
            
            for( int k = 0 ; k < arraySize ; k++ )
            {
                cout << array[ k ] << "  ";
            }
            
            cout << endl;
        
            count++;
        }
        
        
        if(swepCount == 0)
        {
            i = decreseValue + 1;
        }
      

        //array[ decreseValue ] = biggest;
        decreseValue--;
        cout << endl;
     
    }
    cout << "Counter of loops passed: " << count << endl;
}

void ChapterSeven::exerciseSevenThirteen()
{
    const int arraySize = 12;
    
    int array[arraySize] = {};
    
    for( int i = 0; i < arraySize ; i++ )
    {
        array [ i ] = array[ i ] + 1;
        cout << array[ i ] << " ";
    }
    
    cout << endl;
    
    double monthlyTemperatures[ arraySize ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  
    for( int i = 0; i < arraySize ; i++ )
    {
        monthlyTemperatures [ i ] = monthlyTemperatures[ i ] + 1;
        cout << monthlyTemperatures[ i ] << " ";
    }

    
    
}

void ChapterSeven::exerciseSevenFourteen()
{
    const int arraySize = 20;
    
    int array[arraySize] = {};
    int value;
    
    for( int i = 0 ; i < arraySize ; i++ )
    {
        int pass = 0;
        
        if( i == -1 )
        {
            i = 0;
        }
       
        cout << "Enter a value to be stored: " ;
        cin >> value;
        
        if( ( value >= 10 ) & ( value <= 100) )
        {
            
            for( int j = 0 ; j < arraySize ; j++ )
            {
                if( value == array[ j ] )
                {
                    cout << "Enter another value, the one you enter there is alredy in the array: " << endl;
                    i--;
                    pass = 1;
                    j = arraySize;
                    cout << endl;
                }
            }
        }
        else
        {
            cout << "The value is out of range. Enter another value: " << endl;
            i--;
            pass = 1;
            cout << endl;
        }
        
        if( pass == 0 )
        {
         
            array[ i ]  = value;
        }
       
        for( int k = 0 ; k < arraySize ; k++ )
        {
            cout << array[ k ] << " ";
        }
        
        cout << endl;
        cout << endl;
       
    }
}

void ChapterSeven::exerciseSevenFifteen()
{
    const int rowSize = 3;
    const int columnSize = 5;
    int sales[rowSize][columnSize] = {};
    int counter = 0;
    
    
    for( int row = 0 ; row < rowSize ; row++ )
    {
        for( int column = 0 ; column < columnSize ; column++)
        {
         
            sales[ row ][ column ] = counter;
            cout << row << "," << column << " ";
        }
        cout << endl;
    }
    
    cout << fixed ;
    for( int row = 0 ; row < rowSize ; row++ )
    {
        for( int column = 0 ; column < columnSize ; column++)
        {
            counter++;
            sales[ row ][ column ] = counter;
            cout << setw(3) << sales[ row ][ column ]  << setw(4);
        }
        cout << endl;
    }
}

void ChapterSeven::exerciseSevenSixteen()
{
    
    
    int loopCounter = 36000;
    const int arraySize = 11;
    
    int diceArray[ arraySize ] = {};
    int sumDiceValue = 0;
    
    for( int i = 0 ; i < loopCounter ; i++ )
    {
        sumDiceValue = rollDice();
        
        for( int j = 0 ; j < arraySize ; j++ )
        {
            if( sumDiceValue == ( j + 2 ))
            {
                diceArray[ j ] = diceArray[ j ] + 1 ;
            }
        }
    }
    
    for( int k = 0 ; k < 6 ; k++ )
    {
        int printLoopCounter = k;
        int printLoopEnd = k + 5;
        do
        {
            cout << setw( 5 );
            cout << diceArray[ printLoopCounter ] ;
            printLoopCounter++;
            
        }while(printLoopCounter < ( printLoopEnd + 1 ) );
        
        cout << endl;
    }
}

int ChapterSeven::rollDice()
{
    //srand( time ( 0 ));
    int sumDiceOneDiceTwo = 0;
    int dieOne = 1 + rand() % 6;
    int dieTwo = 1 + rand() % 6;
    
    sumDiceOneDiceTwo = dieOne + dieTwo;
    
    //cout << "Player rolled: " << sumDiceOneDiceTwo << endl; // This line should be a coment for the exercise seven sixteen.
    
    return sumDiceOneDiceTwo;
}

void ChapterSeven::exerciseSevenSeventeen()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int result = whatIsThis( a, arraySize );
    
    cout << "Result is : " << result << endl;
    
}

int ChapterSeven:: whatIsThis( int b[], int size )
{
    if( size == 1 )
        return b[ 0 ];
    else
        return b[ size - 1 ] + whatIsThis( b, size - 1);
}

void ChapterSeven:: exerciseSevenEightteen()
{
    const int arraySize = 20;
    int wonArray[ arraySize ] = {};
    int lostArray[ arraySize ] = {};
   
    int myPoint = 0;
    
    enum Status{ CONTINUE, WON, LOST };
    Status gameStatus;
    
    for( int i = 0 ; i < 1000 ; i++ )
    {
        int rollCounter = 1;
        //unsigned seed = time ( 0 ); //erase the comment simbols ("//") to make it work
        
        int sumOfDice = rollDice();
        
      
        //srand( seed ); //erase the comment simbols ("//") to make it work
        
        switch (sumOfDice)
        {
            case 7:
            case 11:
                gameStatus = WON;
                wonArray[ 0 ] = wonArray[ 0 ] + 1;
                break;
                
            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                lostArray[ 0 ] = lostArray[ 0 ] + 1;
                break;
                
            default:
                gameStatus = CONTINUE;
                myPoint = sumOfDice;
                //cout << "Point is: " << myPoint << endl;
                break;
        }
        
        while( gameStatus == CONTINUE )
        {
            rollCounter++;
            
            sumOfDice = rollDice();
            
            if( sumOfDice == myPoint)
            {
                gameStatus = WON;
                wonArray[ rollCounter ] = wonArray[ rollCounter ] + 1;
            }
            else
            {
                if( sumOfDice == 7 )
                {
                    gameStatus = LOST;
                    lostArray [ rollCounter ] = lostArray[ rollCounter ] + 1;
                }
            }
        }
        
        if( gameStatus == WON)
        {
            //cout << "Player wins" << endl;
     
        }
        else
        {
            //cout << "Player loses" << endl;
          
        }
        
    }
    
    cout << endl;
    cout << "The result for the winings in the respective order of dice roll " << endl;
    cout << endl;
    for( int h = 0 ; h < arraySize ; h++ )
    {
        cout << setw(5);
        cout << h + 1;
    }
    cout << endl;
    for( int m = 0 ; m < arraySize ; m++ )
    {
        cout << setw(5);
        cout << wonArray[ m ] ;
    }
    
    cout << endl;
    cout << endl;
    cout << "The result for the losses in the respective order of dice roll " << endl;
    cout << endl;
    for( int j = 0 ; j < arraySize ; j++ )
    {
        cout << setw(5);
        cout << j + 1;
    }
    cout << endl;
    for( int n = 0 ; n < arraySize ; n++ )
    {
        cout << setw(5);
        cout << lostArray[ n ] ;
    }
    
    cout<< endl;
}

void ChapterSeven::exerciseSevenTwenty()
{
    const int arraySize = 10;
    bool sitsArray[ arraySize ] = {};
    int sit;
    int sentinel;
    
    
    cout << "Welcome to the madeUp airlianes if you want to by a ticket press 1 or O to exit: ";
    cin >> sentinel;
    do
    {
        if( sentinel == 1)
        {
            int loopIndex = 0;
            int loopIndexDisplay = 0;
            int sentinel = 0 ;
            
            cout << "The following chart show the empty and  occupied sits:" << endl;
            cout << endl;
            
            for( int i = 0 ; i < ( arraySize / 2 ) ; i++ )
            {
                int loopEnd = 2 + i;
                int loopCounter = i;
                
                do
                {
                    if( sitsArray[ loopIndex ] == 0)
                    {
                        if( loopIndex < 9 )
                        {
                            cout << setw( 6 ) ;
                            cout << "sit" << setw( 2 ) << loopIndex + 1 << setw( 7 ) <<"Empty";
                        }
                        if( loopIndex == 9)
                        {
                            cout << setw( 6 );
                            cout << "sit" << setw( 3 ) << loopIndex + 1 << setw( 6 ) << "Empty";
                        }
                        
                    }
                    else
                    {
                        if( loopIndex < 9)
                        {
                            cout << setw( 6 );
                            cout << "sit" << setw( 2 ) << loopIndex + 1 << setw( 7 ) << "Ocupied";
                        }
                        
                        if( loopIndex  == 9 )
                        {
                            cout << setw( 6 );
                            cout << "sit" << setw( 3 ) << loopIndex + 1 << setw( 6 ) << "Ocupied";
                        }
                        
                    }
                    loopCounter++;
                    loopIndex++;
                    
                    
                }while( loopCounter < ( loopEnd));
                cout << endl;
            }
            cout << endl;
            
            cout << "From the free sits above select one: ";
            cin>> sit;
            cout << endl;
            
            do
            {
                if ( sitsArray[ sit - 1 ] == true)
                {
                    cout << "The sit is alredy taken, Enter another sit: " ;
                    cin >> sit;
                    cout << endl;
                    sentinel = 0;
                }
                else
                {
                    sitsArray[ sit - 1 ] = true;
                    sentinel = 1;
                }
                
            }while( sentinel == 0 );
            
            
            
            for( int i = 0 ; i < ( arraySize / 2 ) ; i++ )
            {
                int loopEnd = 2 + i;
                int loopCounter = i;
                
                do
                {
                    if( sitsArray[ loopIndexDisplay ] == 0)
                    {
                        if( loopIndexDisplay < 9 )
                        {
                            cout << setw( 6 ) ;
                            cout << "sit" << setw( 2 ) << loopIndexDisplay + 1 << setw( 7 ) <<"Empty";
                        }
                        if( loopIndexDisplay == 9)
                        {
                            cout << setw( 6 );
                            cout << "sit" << setw( 3 ) << loopIndexDisplay + 1 << setw( 6 ) << "Empty";
                        }
                        
                    }
                    else
                    {
                        
                        if( loopIndexDisplay < 9)
                        {
                            cout << setw( 6 );
                            cout << "sit" << setw( 2 ) << loopIndexDisplay + 1 << setw( 7 ) << "Ocupied";
                        }
                        
                        if( loopIndexDisplay  == 9 )
                        {
                            cout << setw( 6 );
                            cout << "sit" << setw( 3 ) << loopIndexDisplay + 1 << setw( 6 ) << "Ocupied";
                        }
                        
                    }
                    loopCounter++;
                    loopIndexDisplay++;
                    
                    
                }while( loopCounter < ( loopEnd));
                cout << endl;
            }
            cout << endl;
            
        }
        
        cout << "Press 1 to buy another ticket or 0 to exit: ";
        cin >> sentinel;
        
    }while( sentinel == 1);
    
    cout << "You bougth the following seats" << endl;
    
    for( int h = 0; h < arraySize ; h++)
    {
        if( sitsArray [ h ] == 1 )
        {
            cout << "Seat" << setw( 2 ) << h << setw( 4 ) << endl;
        }
        
    }
    
}

int ChapterSeven::exerciseSevenTwentyOneVoidFunction(int b[], int current, int arraySize)
{
    
    if(current < arraySize)
    {
        cout << b[current] << " ";
        return exerciseSevenTwentyOneVoidFunction( b, current + 1, arraySize);
    }
    else
        return 0;
    
    
}

void ChapterSeven::exerciseSevenTwentyOne()
{
    const int arraySize = 10;
    int a[arraySize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "The vaules of the array are: " << endl;
    exerciseSevenTwentyOneVoidFunction(a, 0, arraySize);
}

void ChapterSeven::exerciseSevenTwentyTwo()
{
    
    int sentinel;
    int employeNumber;
    int productNumber = 0;
    int itemSold = 0;
    int sentinelThree = 0 ;
    
    

    const int arraySizeColumns = 7;
    const int arraySizeRow = 4;
    const int salesColums = 6;
    const int salesRows = 4;
    const int products = 5;
    
    int sales[salesRows][salesColums] = {};
    int productsValu[products] = {5, 8, 4, 6, 9};
    
    string rowNames[arraySizeColumns] = {"|             |", "|Product One  |", "|Product Two  |", "|Product Three|", "|Product Four |", "|Product Five |", "|Totals       |"};
    string columnNames[arraySizeRow] = { "|Employe One  |", "|Employe Two  |", "|Employe Three|", "|Employe Four |"};
    
    
    do
    {
        cout << "Enter 1 to input your values of 0 to exit: ";
        cin >> sentinel;
        cout << endl;
        
        if( sentinel == 1 )
        {
            cout << "Enter your employe number: ";
            cin >> employeNumber;
            cout << endl;
            
            while( ( employeNumber <= 0 ) || ( employeNumber >= 5 ) )
            {
                cout << "The number you entered is incorrect. Please try again: ";
                cin >> employeNumber;
            }
            
            do
            {
                cout << "What product would you like to input: " ;
                cin >> productNumber;
                
                while( ( productNumber <= 0 ) || ( productNumber >= 6 ) )
                {
                    cout << "The number you entered is incorrect. Please try again: ";
                    cin >> productNumber;
                }
                
                cout << "How many item did you sell from this product: ";
                cin >> itemSold;
                
                
                sales[( employeNumber - 1 )][( productNumber - 1 )] = itemSold * productsValu[ ( productNumber - 1) ];
                
                cout << "Would you like to enter another product ? press 1 to do so or 0 to exit: " ;
                cin >> sentinelThree;
                
                if( sentinelThree == 0 )
                {
                    productNumber = sentinelThree;
                }
                
            }while( productNumber != 0 );
            
            for( int i = 0 ; i < ( salesColums - 1 ) ; i++ )
            {
                sales[( employeNumber - 1 ) ][ ( salesColums - 1 ) ] += sales[( employeNumber - 1 ) ][ i ];
            }
        }
        
       
        
    }while( sentinel == 1 );
    
    cout << fixed << setprecision( 2 );
    
    
    for( int i = 0 ; i < arraySizeColumns ;  i++)
    {
        cout << rowNames[i] ;
    }
    cout << endl;
    
    for( int j = 0 ; j < salesRows ; j++)
    {
        for( int k = 0 ; k < salesColums ; k++)
        {
            if( k == 0 )
            {
                cout << setw( 14 ) << columnNames[j] << setw( 14 ) << sales[j][k] ;
            }
            else
            {
                cout << setw( 14 ) << sales[j][k];
            }
        }
        cout << endl;
    }
    
    cout << endl;
    
}

void ChapterSeven:: exerciseSevenTwentyThree()
{
    
    const int arraySizeColums = 20;
    const int arraySizeRows = 20;
    int command = 0;
    int previousCommand = 0;
    int currentDirection = 0;
    int columnLastPosition = 0;
    int rowLastPosition = 0;
    int numberOfMoves = 0;
    
    int counter = 0;
   
    //turtle dirctions
    
    int horizontalProgressive = 111;
    int horizontalRegresive = 110;
    int verticalProgressive = 101;
    int verticalRegressive = 100;
    
    // turtle commands
    int penn = 0;
    bool penUp = false ;
    bool penDown = true;
    int rightMove = 3;
    int leftMove = 4;
    int forwardMove = 5;
    int sentinel = 0;
    int sentinelOne = 0;
    int sentinelTwo = 0;
    
    bool floor[arraySizeRows][arraySizeColums]={};
    
    
   
    
    do
    {
        
        cout << "Enter 1 to penn up or 0 to penn down: ";
        cin >> penn;
        cout << endl;
        
        if( penn == 0 )
        {
            penDown = true;
        }
        else if( penn == 1 )
        {
            penUp = true;
        }
        
        while( penDown == true )
        {
            do
            {
                cout << "Enter a turtle command: ";
                cin >> command ;
                cout << endl;;
                
                
                if( ( currentDirection == 0 ) && ( command == rightMove ) )
                {
                    currentDirection = horizontalProgressive;
                    cout << currentDirection << endl;
                }
                else if( ( currentDirection == 0 ) && ( command == leftMove ) )
                {
                    currentDirection = verticalProgressive;
                    cout << currentDirection << endl;
                }
                
                if( command == 5 )
                {
                    cin >> numberOfMoves;
                    
                    if(((currentDirection == verticalProgressive) & (previousCommand == leftMove)) | ((currentDirection == verticalRegressive) && (previousCommand == rightMove)))
                    {
                        for( int i = columnLastPosition ; i < ( columnLastPosition + numberOfMoves ) ; i++ )
                        {
                            floor[ rowLastPosition ][ i ] = true;
                        }
                        currentDirection = horizontalProgressive;
                        columnLastPosition = columnLastPosition + ( numberOfMoves - 1 );
                        cout << "First case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalProgressive) & (previousCommand == rightMove)) | ((currentDirection == horizontalRegresive) && (previousCommand == leftMove)))
                    {
                        for( int j = rowLastPosition ; j < ( rowLastPosition + numberOfMoves ) ; j++ )
                        {
                            floor[ j ][ columnLastPosition ] = true;
                        }
                        currentDirection = verticalProgressive;
                        rowLastPosition = rowLastPosition + ( numberOfMoves - 1 );
                        cout << "Second Case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", " << columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == verticalProgressive) & (previousCommand == rightMove)) | ((currentDirection == verticalRegressive) && (previousCommand == leftMove)))
                    {
                        for( int m = columnLastPosition ; m > ( columnLastPosition - numberOfMoves ) ; m-- )
                        {
                            floor[ rowLastPosition ][ m ] = true;
                        }
                        currentDirection = horizontalRegresive;
                        columnLastPosition = columnLastPosition - ( numberOfMoves - 1 );
                        cout << "Third case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalProgressive) & (previousCommand == leftMove)) | ((currentDirection == horizontalRegresive) && (previousCommand == rightMove)))
                    {
                        for( int n = rowLastPosition ; n > ( rowLastPosition - numberOfMoves ) ; n-- )
                        {
                            floor[ n ][ columnLastPosition ] = true;
                        }
                        currentDirection = verticalRegressive;
                        rowLastPosition = rowLastPosition - ( numberOfMoves - 1 );
                        cout << "Fourd case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                        
                    }
                    
                    else if(((currentDirection == verticalProgressive) & (previousCommand == forwardMove)))
                    {
                        for( int k = rowLastPosition ; k <= ( rowLastPosition + numberOfMoves ) ; k++ )
                        {
                            floor[ k ][ columnLastPosition ] = true;
                        }
                        currentDirection = verticalProgressive;
                        rowLastPosition = rowLastPosition + numberOfMoves;
                        cout << "Fifth case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalProgressive) & (previousCommand == forwardMove)))
                    {
                        for( int l = columnLastPosition ; l <= ( columnLastPosition + numberOfMoves ) ; l++ )
                        {
                            floor[ rowLastPosition ][ l ] = true;
                        }
                        currentDirection = horizontalProgressive;
                        columnLastPosition = columnLastPosition + numberOfMoves;
                        cout << "Sixth case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalRegresive) & (previousCommand == forwardMove)))
                    {
                        for( int v = columnLastPosition ; v >= ( columnLastPosition - numberOfMoves ) ; v-- )
                        {
                            floor[ rowLastPosition ][ v ] = true;
                        }
                        currentDirection = horizontalRegresive;
                        columnLastPosition = columnLastPosition - numberOfMoves;
                        cout << "Seventh case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    else if((currentDirection == verticalRegressive) & (previousCommand == forwardMove))
                    {
                        for( int w = rowLastPosition ; w >= ( rowLastPosition - numberOfMoves ) ; w-- )
                        {
                            floor[ w ][ columnLastPosition ] = true;
                        }
                        currentDirection = verticalRegressive;
                        rowLastPosition = rowLastPosition - numberOfMoves;
                        cout << "Eigth case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                        
                    }
                    
                }//
                
                if( command == 6 )
                {
                    for( int u = 0 ; u < arraySizeRows ; u++ )
                    {
                        for( int w = 0 ; w < arraySizeColums ; w++ )
                        {
                            
                            if( ( floor[ u ][ w ] ) == false )
                            {
                                cout << "@" << " ";
                            }
                            else if( ( floor[ u ][ w ] ) == true )
                            {
                                cout << "*" << " ";
                            }
                        }
                        cout << endl;
                    }
                }
                if( command != 6 )
                {
                    previousCommand = command;
                    cout << previousCommand << endl;
                }
                
                if( command == 9 )
                {
                    sentinelOne = 9;
                    penDown = false;
                }
                counter++;
                cout << counter << endl;
            }while( sentinelOne != 9);
        }
        
        while( penUp == true )
        {
            do
            {
                cout << "Enter a turtle command: ";
                cin >> command ;
                cout << endl;;
                
                
                if( ( currentDirection == 0 ) && ( command == rightMove ) )
                {
                    currentDirection = horizontalProgressive;
                    cout << currentDirection << endl;
                }
                else if( ( currentDirection == 0 ) && ( command == leftMove ) )
                {
                    currentDirection = verticalProgressive;
                    cout << currentDirection << endl;
                }
                
                if( command == 5 )
                {
                    cin >> numberOfMoves;
                    
                    if(((currentDirection == verticalProgressive) & (previousCommand == leftMove)) | ((currentDirection == verticalRegressive) && (previousCommand == rightMove)))
                    {
                        
                        currentDirection = horizontalProgressive;
                        columnLastPosition = columnLastPosition + ( numberOfMoves - 1 );
                        cout << "First case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalProgressive) & (previousCommand == rightMove)) | ((currentDirection == horizontalRegresive) && (previousCommand == leftMove)))
                    {
                        
                        currentDirection = verticalProgressive;
                        rowLastPosition = rowLastPosition + ( numberOfMoves - 1 );
                        cout << "Second Case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", " << columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == verticalProgressive) & (previousCommand == rightMove)) | ((currentDirection == verticalRegressive) && (previousCommand == leftMove)))
                    {
                        
                        currentDirection = horizontalRegresive;
                        columnLastPosition = columnLastPosition - ( numberOfMoves - 1 );
                        cout << "Third case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalProgressive) & (previousCommand == leftMove)) | ((currentDirection == horizontalRegresive) && (previousCommand == rightMove)))
                    {
                        
                        currentDirection = verticalRegressive;
                        rowLastPosition = rowLastPosition - ( numberOfMoves - 1 );
                        cout << "Fourd case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                        
                    }
                    
                    else if(((currentDirection == verticalProgressive) & (previousCommand == forwardMove)))
                    {
                        
                        currentDirection = verticalProgressive;
                        rowLastPosition = rowLastPosition + numberOfMoves;
                        cout << "Fifth case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalProgressive) & (previousCommand == forwardMove)))
                    {
                        
                        currentDirection = horizontalProgressive;
                        columnLastPosition = columnLastPosition + numberOfMoves;
                        cout << "Sixth case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    
                    else if(((currentDirection == horizontalRegresive) & (previousCommand == forwardMove)))
                    {
                        
                        currentDirection = horizontalRegresive;
                        columnLastPosition = columnLastPosition - numberOfMoves;
                        cout << "Seventh case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                    }
                    else if((currentDirection == verticalRegressive) & (previousCommand == forwardMove))
                    {
                       
                        currentDirection = verticalRegressive;
                        rowLastPosition = rowLastPosition - numberOfMoves;
                        cout << "Eigth case" << ", Direction: " << currentDirection << ", Position: " << rowLastPosition << ", "<< columnLastPosition << endl;
                        
                    }
                    
                }//
                
                if( command == 6 )
                {
                    for( int u = 0 ; u < arraySizeRows ; u++ )
                    {
                        for( int w = 0 ; w < arraySizeColums ; w++ )
                        {
                            
                            if( ( floor[ u ][ w ] ) == false )
                            {
                                cout << "@" << " ";
                            }
                            else if( ( floor[ u ][ w ] ) == true )
                            {
                                cout << "*" << " ";
                            }
                        }
                        cout << endl;
                    }
                }
                if( command != 6 )
                {
                    previousCommand = command;
                    cout << previousCommand << endl;
                }
                
                if( command == 9 )
                {
                    sentinelTwo = 9;
                    penUp = false;
                }
                counter++;
                cout << counter << endl;
            }while( sentinelTwo != 9 );
        }
        
        cout << "Enter  9 to exit or any number to continue: ";
        cin >> sentinel;
        cout << endl;
    }while( sentinel != 9 );
    
  
}//end

void ChapterSeven::exerciseSevenTwentyFour()
{
    const int boardSize = 8;
    int currentRow = 0;
    int currentColumn =0;
    int counter = 0;
    int counterBoard = 0;
    //int moveNumber = 0;
    int nextMoveRow = 0;
    int nextMoveColumn = 0;
    int posibleNextRow = 0;
    int posibleNextColumn = 0;
    int nextPositionRow = 0;
    int nextPositionColumn = 0;
    int sentinel = 0;
    
    int vertical[ boardSize ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int horizontal[ boardSize ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int board[ boardSize ][ boardSize ] = {false};
    int moveBoard[ boardSize ][ boardSize ] = {};
    board[ currentRow ][ currentColumn ] = true;
    int accessibility[ boardSize ][ boardSize ] ={ {2, 3, 4, 4, 4, 4, 3, 2},
                                                   {3, 4, 6, 6, 6, 6, 4, 3},
                                                   {4, 6, 8, 8, 8, 8, 6, 4},
                                                   {4, 6, 8, 8, 8, 8, 6, 4},
                                                   {4, 6, 8, 8, 8, 8, 6, 4},
                                                   {4, 6, 8, 8, 8, 8, 6, 4},
                                                   {3, 4, 6, 6, 6, 6, 4, 3},
                                                   {2, 3, 4, 4, 4, 4, 3, 2}};
    
    
 
    do
    {
        int smallest = 9;
        int smallestOne = 9;
        int counterTrueArray = 0;
        int trueMarix[ boardSize ][ boardSize ] = {false};
        sentinel = 0;
        
        for( int d = 0 ; d < boardSize ; d++ )
        {
             if((( currentRow + vertical[ d ] ) >= 0 ) & ( ( currentColumn + horizontal[ d ] ) >= 0 ) & (( currentRow + vertical[ d ] ) <= 7 ) & (( currentColumn + horizontal[ d ] ) <= 7 ) & (( accessibility[ currentRow + vertical[ d ] ][ currentColumn + horizontal[ d ] ] ) < smallest) & ( ( board[ currentRow + vertical[ d ] ][ currentColumn + horizontal[ d ] ] ) == false))
             {
                 nextMoveRow = currentRow + vertical[ d ];
                 nextMoveColumn = currentColumn + horizontal[ d ];
                 smallest = accessibility[ nextMoveRow ][ nextMoveColumn ];
                // cout << "Smallest " << smallest << "  ";
                //cout << endl;
             }
        }
        
        for( int q = 0 ; q < boardSize  ; q++ )
        {
            if((( currentRow + vertical[ q ] ) >= 0 ) & ( ( currentColumn + horizontal[ q ] ) >= 0 ) & (( currentRow + vertical[ q ] ) <= 7 ) & (( currentColumn + horizontal[ q ] ) <= 7 ) & ( smallest == ( accessibility[ currentRow + vertical[ q ]][ currentColumn + horizontal[ q ]])) & ( ( board[ currentRow + vertical[ q ] ][ currentColumn + horizontal[ q ] ] ) == false))
            {
                counterTrueArray++;
                posibleNextRow = currentRow + vertical[ q ];
                posibleNextColumn = currentColumn + horizontal[ q ];
                trueMarix[ currentRow + vertical[ q ] ][ currentColumn + horizontal[ q ] ] = true;
                //cout << "Same: " << ( currentRow + vertical[ q ]) << ", " << ( currentColumn + horizontal[ q ]) << endl;
            }
        }
        /*
        for( int w = 0 ; w < boardSize ; w++ )
        {
            for( int z = 0 ; z < boardSize ; z++ )
            {
                cout << trueMarix[ w ][ z ] << " ";
            }
            cout << endl;
        }*/
        
        //cout << "counterTrueArray: " << counterTrueArray;
        //cout << endl;
        //cout << endl;
        //cout << "Enter your move: ";
        //cin >> moveNumber;
        //cout << endl;
        /*
        if( board[ ( currentRow + vertical[ moveNumber ] ) ][ ( currentColumn + horizontal[ moveNumber ]) ] == true )
        {
            cout << "The box has been  visit before, enter another number." << endl;
        }
        else if( ( ( vertical[ moveNumber] ) < 0  ) & ( ( currentRow + vertical[ moveNumber ] ) < 0 ) )
        {
            cout << "You are out of the box. Try again. " << "One " << endl;
        }
        else if( ( ( vertical[ moveNumber] ) > 0  ) & ( ( currentRow - vertical[ moveNumber ] ) > 7 ) )
        {
            cout << "You are out of the box. Try again. " << "Two " << endl;
        }
        else if( ( ( horizontal[ moveNumber] ) < 0  ) & ( ( currentColumn + horizontal[ moveNumber ] ) < 0 ) )
        {
            cout << "You are out of the box. Try again. " << "Three " << endl;
        }
        else if( ( ( horizontal[ moveNumber] ) > 0  ) & ( ( currentColumn - horizontal[ moveNumber ] ) >= 7 ) )
        {
            cout << "You are out of the box. Try again. " << "Four " << endl;
        }
         */
      
           //currentRow += vertical[ moveNumber ];
           //currentColumn += horizontal[ moveNumber ];
        
        //currentRow += vertical[ moveNumber ];
        //currentColumn += horizontal[ moveNumber ];
    
        
        if( counterTrueArray >= 2)
        {
            for( int n = 0 ; n < boardSize ; n++)
            {
                if((( currentRow + vertical[ n ] ) >= 0 ) & (( currentColumn + horizontal[ n ] ) >= 0 ) & (( currentRow + vertical[ n ] ) <= 7 ) & (( currentColumn + horizontal[ n ] ) <= 7 ) & (( trueMarix[ currentRow + vertical[ n ]][ currentColumn + horizontal[ n ]] ) == true ))
                {
                    posibleNextRow = currentRow + vertical[ n ];
                    posibleNextColumn = currentColumn + horizontal[ n ];
                    
                    //cout << "Next Position: " << posibleNextRow << ", " << posibleNextColumn << endl;

                    
                    for( int u = 0 ; u < boardSize ; u++)
                    {
                        if((( posibleNextRow + vertical[ u ] ) >= 0 ) & ( ( posibleNextColumn + horizontal[ u ] ) >= 0 ) & (( posibleNextRow + vertical[ u ] ) <= 7 ) & (( posibleNextColumn + horizontal[ u ] ) <= 7 ) & (( accessibility[ posibleNextRow + vertical[ u ] ][ posibleNextColumn + horizontal[ u ] ] ) < smallestOne) & ( ( board[ posibleNextRow + vertical[ u ] ][ posibleNextColumn + horizontal[ u ] ] ) == false))
                        {
                            smallestOne = accessibility[ posibleNextRow + vertical[ u ] ][ posibleNextColumn + horizontal[ u ] ];
                            nextPositionRow = posibleNextRow + vertical[ u ];
                            nextPositionColumn = posibleNextColumn + horizontal[ u ];
                            smallestOne = accessibility[ nextPositionRow][ nextPositionColumn ];
                            nextMoveRow = currentRow + vertical[ n ];
                            nextMoveColumn = currentColumn + horizontal[ n ];
                            //cout << "Next move: " << nextPositionRow << ", " << nextPositionColumn << endl;
                        }
                    }
                }
                
            }
        }
        cout << endl;
        board[ nextMoveRow ][ nextMoveColumn ] = true;
            
            for( int j = 0 ; j < boardSize ; j++)
            {
                if( ( ( currentRow + vertical[ j ] ) >= 0 ) & ( ( currentColumn + horizontal[ j ] ) >= 0 ) & (( currentRow + vertical[ j ] ) <= 7 ) & ( ( currentColumn + horizontal[ j ] ) <= 7 ) & ( ( accessibility[ currentRow + vertical[ j ] ][ currentColumn + horizontal[ j ] ] ) != 0 ))
                {
                    accessibility[ currentRow + vertical[ j ] ][ currentColumn + horizontal[ j ] ] = accessibility[ currentRow + vertical[ j ] ][ currentColumn + horizontal[ j ] ] - 1;
                }
            }
        
        counter++;
        currentRow = nextMoveRow;
        currentColumn = nextMoveColumn;

        
        //cout << "Current Row: " << currentRow << ", Current Column: " << currentColumn << endl;
        //cout << endl;
        
        //for( int m = 0 ; m < boardSize ; m++ )
        //{
        //    cout << "    " << m ;
        //}
        
        cout << endl;
        cout << endl;
 
        for( int i = 0 ; i < boardSize ; i++ )
        {
            //cout << i << "  ";
            for( int j = 0 ; j < boardSize ; j++ )
            {
                
                if( ( board[ i ][ j ] == true ) && ( moveBoard[ i ][ j ] == 0 ))
                {
                    counterBoard++;
                    moveBoard[ i ][ j ] = counterBoard;
                    
                }
                //cout <<  " " << accessibility[ i ][ j ] << "  ";
              
            }
        }
        
        for( int a = 0 ; a < boardSize ; a++)
        {
            for( int b = 0 ; b < boardSize ; b++)
            {
                cout << setw( 3 ) << moveBoard[ a ][ b ];
            }
            
            cout << endl;
        }
        
        for( int r = 0 ; r < boardSize ; r++ )
        {
            for( int s = 0 ; s < boardSize ; s++ )
            {
                if( ( board [ r ][ s ]) == true)
                {
                    sentinel++;
                }
            }
        }
        //cout << "Sentinel: " << sentinel << endl;
        
        
    }while( sentinel != 64);
    cout << "Sentinel: " << counter << endl;
    
    
}// end


void ChapterSeven::exerciseSevenTwentyFive()
{
    srand( ( unsigned )  time( NULL )  );
    const int boardSize = 8;
    int currentRow = 0;
    int currentColumn =0;
    int counter = 0;
    int counterBoard = 0;
    int nextMoveRow = 0;
    int nextMoveColumn = 0;
    
    int sentinel = 0;
    int vertical[ boardSize ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int horizontal[ boardSize ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int moveNumberArray[ boardSize ][ boardSize ] = {};
    int board[ boardSize ][ boardSize ] = {false};
    board[ currentRow ][ currentColumn ] = true;
    int numberOfToursBoard[ boardSize ][ boardSize ] = {};
    int referenceNumberOfToursBoard[ boardSize ][ boardSize ] = {  {0, 1, 2, 3, 4, 5, 6, 7},
                                                                   {8, 9, 10, 11, 12, 13, 14, 15},
                                                                   {16, 17, 18, 19, 20, 21, 22, 23},
                                                                   {24, 25, 26, 27, 28, 29, 30, 31},
                                                                   {32, 33, 34, 35, 36, 37, 38, 39},
                                                                   {40, 41, 42, 43, 44, 45, 46, 47},
                                                                   {48, 49, 50, 51, 52, 53, 54, 55},
                                                                   {56, 57, 58, 59, 60, 61, 63, 63}};
    int accessibility[ boardSize ][ boardSize ] ={  {2, 3, 4, 4, 4, 4, 3, 2},
                                                    {3, 4, 6, 6, 6, 6, 4, 3},
                                                    {4, 6, 8, 8, 8, 8, 6, 4},
                                                    {4, 6, 8, 8, 8, 8, 6, 4},
                                                    {4, 6, 8, 8, 8, 8, 6, 4},
                                                    {4, 6, 8, 8, 8, 8, 6, 4},
                                                    {3, 4, 6, 6, 6, 6, 4, 3},
                                                    {2, 3, 4, 4, 4, 4, 3, 2}};

    do
    {
        
        do
        {
            
            int movesLeftSentinel = 0;
            int accessSentinel = 0;
            int randomMove = rand() % 8;
            
            if((( currentRow + vertical[ randomMove ] ) >= 0 ) & ( ( currentColumn + horizontal[ randomMove ] ) >= 0 ) & (( currentRow + vertical[ randomMove ] ) <= 7 ) & (( currentColumn + horizontal[ randomMove ] ) <= 7 )  & ( ( board[ currentRow + vertical[ randomMove ] ][ currentColumn + horizontal[ randomMove ] ] ) == false))
            {
                accessSentinel = 1;
                nextMoveRow = currentRow + vertical[ randomMove ];
                nextMoveColumn = currentColumn + horizontal[ randomMove ];
                counterBoard++;
                moveNumberArray[ nextMoveRow ][ nextMoveColumn ] = counterBoard;
                board[ nextMoveRow ][ nextMoveColumn ] = true;
            }
            for( int j = 0 ; j < boardSize ; j++)
            {
                if( ( ( currentRow + vertical[ j ] ) >= 0 ) & ( ( currentColumn + horizontal[ j ] ) >= 0 ) & (( currentRow + vertical[ j ] ) <= 7 ) & ( ( currentColumn + horizontal[ j ] ) <= 7 ) & ( ( accessibility[ currentRow + vertical[ j ] ][ currentColumn + horizontal[ j ] ] ) != 0 ) & ( ( board[ currentRow  ][ currentColumn ] ) == true) & ( accessSentinel == 1))
                {
                    accessibility[ currentRow + vertical[ j ] ][ currentColumn + horizontal[ j ] ] = accessibility[ currentRow + vertical[ j ] ][ currentColumn + horizontal[ j ] ] - 1;
                }
            }
            currentRow = nextMoveRow;
            currentColumn = nextMoveColumn;
            for( int q = 0 ; q < boardSize ; q++ )
            {
                if((( currentRow + vertical[ q ] ) >= 0 ) & ( ( currentColumn + horizontal[ q ] ) >= 0 ) & (( currentRow + vertical[ q ] ) <= 7 ) & (( currentColumn + horizontal[ q ] ) <= 7 )  & ( ( board[ currentRow + vertical[ q ] ][ currentColumn + horizontal[ q ] ] ) == true))
                {
                    movesLeftSentinel++;
                }
                
            }
            
            
            
            
            
            
            if( accessibility[ currentRow ][ currentColumn ] ==  0 )
            {
                sentinel = 1;
            }
            
        }while( sentinel != 1 );
        
        for( int j = 0 ; j < boardSize ; j++ )
        {
            for( int k = 0 ; k < boardSize ; k++ )
            {
                if( referenceNumberOfToursBoard[ j ][ k ] == counterBoard )
                {
                    numberOfToursBoard[ j ][ k ] = numberOfToursBoard[ j ][ k ] + 1;
                }
            }
        }
        
        cout << endl << counterBoard << endl;
        
        for( int i = 0 ; i < boardSize ; i++ )
        {
            for( int j = 0 ; j < boardSize ; j++ )
            {
                cout << setw( 3 ) << moveNumberArray[ i ][ j ];
            }
            cout << endl;
        }
        
        cout << endl;
        
        for( int i = 0 ; i < boardSize ; i++ )
        {
            for( int j = 0 ; j < boardSize ; j++ )
            {
                cout << setw( 3 ) << numberOfToursBoard[ i ][ j ] ;
            }
            cout << endl;
        }
        
        cout << endl;
        counter++;
        
    }while( counter < 10 );
    
    cout << "Sentinel: " << counter << endl;
}






