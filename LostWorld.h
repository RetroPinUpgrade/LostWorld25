
#define LAMP_F                      32    // Q1
//#define LAMP_                     36    // Q2
//#define LAMP_                     40    // Q3
#define LAMP_SAUCER_8K              28    // Q4
#define LAMP_HEAD_1_PLAYER          52    // Q5
#define LAMP_HEAD_PLAYER_1_UP       56    // Q6
#define LAMP_RIGHT_INLANE           44    // Q7
#define LAMP_SPINNER_1_BOTTOM       12    // Q8
#define LAMP_SPINNER_5_TOP          16    // Q9
//#define LAMP_                     20    // Q10
#define LAMP_SAUCER_1K              24    // Q11
#define LAMP_BONUS_5K               4     // Q12
#define LAMP_BONUS_9K               8     // Q13
#define LAMP_BONUS_1K               0     // Q14
#define LAMP_HEAD_HIGH_SCORE        49    // Q15
#define LAMP_BALL_IN_PLAY           48    // Q16
//#define LAMP_                     37    // Q17
#define LAMP_HEAD_2_PLAYERS         53    // Q18
#define LAMP_HEAD_PLAYER_2_UP       57    // Q19
#define LAMP_SAUCER_SPECIAL         30    // Q20
#define LAMP_LEFT_INLANE            45    // Q21
#define LAMP_5X                     21    // Q22
#define LAMP_HEAD_MATCH             41    // Q23
#define LAMP_E                      33    // Q24
#define LAMP_SAUCER_10K             29    // Q25
#define LAMP_SAUCER_2K              25    // Q26
#define LAMP_BONUS_6K               5     // Q27
#define LAMP_BONUS_10K              9     // Q28
#define LAMP_BONUS_2K               1     // Q29
#define LAMP_HEAD_3_PLAYERS         54    // Q30
#define LAMP_HEAD_PLAYER_3_UP       58    // Q31
#define LAMP_SAUCER_4K              26    // Q32
#define LAMP_HEAD_GAME_OVER         50    // Q33
//#define LAMP_                     17    // Q34
#define LAMP_SPINNER_2              13    // Q35
#define LAMP_BONUS_3K               2     // Q36
#define LAMP_3X                     22    // Q37
#define LAMP_BONUS_7K               6     // Q38
#define LAMP_RIGHT_OUTLANE          46    // Q39
#define LAMP_SHOOT_AGAIN            42    // Q40
#define LAMP_B                      38    // Q41
#define LAMP_D                      34    // Q42
#define LAMP_HEAD_4_PLAYERS         55    // Q43
#define LAMP_BONUS_20K              10    // Q44
#define LAMP_HEAD_PLAYER_4_UP       59    // Q45
#define LAMP_A                      39    // Q46
#define LAMP_HEAD_TILT              51    // Q47
#define LAMP_DRAGONS_DEN_EB         18    // Q48
#define LAMP_SPINNER_3              14    // Q49
#define LAMP_BONUS_8K               7     // Q50
//#define LAMP_                     11    // Q51
#define LAMP_APRON_CREDIT           43    // Q52
#define LAMP_LEFT_OUTLANE           47    // Q53
#define LAMP_SPINNER_4              15    // Q54
#define LAMP_DRAGONS_DEN_5K         19    // Q55
#define LAMP_C                      35    // Q56
#define LAMP_BONUS_4K               3     // Q57
//#define LAMP_                     31    // Q58
#define LAMP_SAUCER_6K              27    // Q59
#define LAMP_2X                     23    // Q60



#define SW_RIGHT_10PT               0
#define SW_LEFT_10PT                1
#define SW_RIGHT_OUTLANE            2
#define SW_LEFT_OUTLANE             3
#define SW_ROLLOVER_RIGHT_STANDUP   4
#define SW_CREDIT_RESET             5
#define SW_TILT                     6
#define SW_OUTHOLE                  7
#define SW_COIN_3                   8
#define SW_COIN_1                   9
#define SW_COIN_2                   10
//#define SW_                       11
//#define SW_                       12
//#define SW_                       13
//#define SW_                       14
#define SW_SLAM                     15
#define SW_SPINNER                  16
//#define SW_                       17
//#define SW_                       18
//#define SW_                       19
//#define SW_                       20
#define SW_DRAGONS_DEN              21
#define SW_LEFT_SAUCER              22
#define SW_RIGHT_SAUCER             23
#define SW_RIGHT_INLANE             24
#define SW_LEFT_INLANE              25
#define SW_F                        26
#define SW_E                        27
#define SW_D                        28
#define SW_C                        29
#define SW_B                        30
#define SW_A                        31
//#define SW_                       32
//#define SW_                       33
//#define SW_                       34
#define SW_RIGHT_SLING              35
#define SW_LEFT_SLING               36
#define SW_BOTTOM_POP               37
#define SW_RIGHT_POP                38
#define SW_LEFT_POP                 39

#define SOL_KNOCKER                 5
#define SOL_OUTHOLE                 6
#define SOL_LEFT_SAUCER             7
#define SOL_LEFT_POP                8
#define SOL_RIGHT_POP               9
#define SOL_BOTTOM_POP              10
#define SOL_LEFT_SLING              11
#define SOL_RIGHT_SAUCER            12
#define SOL_RIGHT_SLING             13


#define NUM_SWITCHES_WITH_TRIGGERS          5 // total number of solenoid/switch pairs
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 5 // This number should match the define above

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 4},
  { SW_LEFT_SLING, SOL_LEFT_SLING, 4},
  { SW_RIGHT_POP, SOL_RIGHT_POP, 4},
  { SW_BOTTOM_POP, SOL_BOTTOM_POP, 4},
  { SW_LEFT_POP, SOL_LEFT_POP, 4}
};
