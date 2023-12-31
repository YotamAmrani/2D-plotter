#include "Drawings.h"
#define NUMBER_OF_DRAWINGS 3

const static PROGMEM int16_t diamond[5][N_INSTRUCTIONS] = {{100, 100, PEN_OFF},
                                                            {200,100, PEN_ON},
                                                            {200, 200, PEN_ON},
                                                            {100, 200, PEN_ON},
                                                            {100, 100, PEN_ON}
                                                            };

const static PROGMEM int16_t diamond2[5][N_INSTRUCTIONS] = {{110, 10, PEN_OFF},
                                                            {210, 110, PEN_ON},
                                                            {110, 210, PEN_ON},
                                                            {10, 110, PEN_ON},
                                                            {110, 10, PEN_ON}
                                                            };

// const static PROGMEM int16_t hexagon[6][N_INSTRUCTIONS] = {
//                                                           {250, 250, PEN_OFF},
//                                                           {383, 250, PEN_ON},
//                                                           {433, 300, PEN_ON},
//                                                           {383, 350, PEN_ON},
//                                                           {317, 350, PEN_ON},
//                                                           {267, 300, PEN_ON}
//                                                           };

const static PROGMEM int16_t triangle[5][N_INSTRUCTIONS] = {
                                                          {450, 450, PEN_OFF},
                                                          {400, 400, PEN_ON},
                                                          {500, 400, PEN_ON},
                                                          {450, 450, PEN_ON},
                                                          {450, 450, PEN_ON}  // Closing the triangle
                                                          };

const static PROGMEM int16_t hexagon[7][N_INSTRUCTIONS] = {
                                                          {72, 0, PEN_OFF},
                                                          {36, 62, PEN_ON},
                                                          {-36, 62, PEN_ON},
                                                          {-72, 0, PEN_ON},
                                                          {-36, -62, PEN_ON},  // Closing the triangle
                                                          {36, -62, PEN_ON},  // Closing the triangle
                                                          {72, 0, PEN_ON}
                                                          };

const static PROGMEM int16_t triangle2[4][N_INSTRUCTIONS] = {
                                                          {72, 0, PEN_OFF},
                                                          {-36, 62, PEN_ON},
                                                          {-36, -62, PEN_ON},
                                                          {72, 0, PEN_ON}
                                                          };

const static PROGMEM int16_t squares[565][N_INSTRUCTIONS] = {{-155,-1,PEN_OFF},
{-155,-7,PEN_ON},
{-149,-7,PEN_ON},
{-149,-1,PEN_ON},
{-155,-1,PEN_ON},
{76,56,PEN_OFF},
{76,49,PEN_ON},
{83,49,PEN_ON},
{83,56,PEN_ON},
{76,56,PEN_ON},
{-77,142,PEN_OFF},
{-77,135,PEN_ON},
{-70,135,PEN_ON},
{-70,142,PEN_ON},
{-77,142,PEN_ON},
{129,-118,PEN_OFF},
{129,-132,PEN_ON},
{144,-132,PEN_ON},
{144,-118,PEN_ON},
{129,-118,PEN_ON},
{53,207,PEN_OFF},
{53,182,PEN_ON},
{77,182,PEN_ON},
{77,207,PEN_ON},
{53,207,PEN_ON},
{-53,46,PEN_OFF},
{-53,23,PEN_ON},
{-30,23,PEN_ON},
{-30,46,PEN_ON},
{-53,46,PEN_ON},
{-115,-140,PEN_OFF},
{-115,-152,PEN_ON},
{-103,-152,PEN_ON},
{-103,-140,PEN_ON},
{-115,-140,PEN_ON},
{193,43,PEN_OFF},
{193,17,PEN_ON},
{220,17,PEN_ON},
{220,43,PEN_ON},
{193,43,PEN_ON},
{-24,-72,PEN_OFF},
{-24,-85,PEN_ON},
{-11,-85,PEN_ON},
{-11,-72,PEN_ON},
{-24,-72,PEN_ON},
{166,218,PEN_OFF},
{166,146,PEN_ON},
{237,146,PEN_ON},
{237,218,PEN_ON},
{166,218,PEN_ON},
{157,119,PEN_OFF},
{157,96,PEN_ON},
{179,96,PEN_ON},
{179,119,PEN_ON},
{157,119,PEN_ON},
{56,-104,PEN_OFF},
{56,-109,PEN_ON},
{61,-109,PEN_ON},
{61,-104,PEN_ON},
{56,-104,PEN_ON},
{136,-12,PEN_OFF},
{136,-17,PEN_ON},
{141,-17,PEN_ON},
{141,-12,PEN_ON},
{136,-12,PEN_ON},
{-131,79,PEN_OFF},
{-131,74,PEN_ON},
{-126,74,PEN_ON},
{-126,79,PEN_ON},
{-131,79,PEN_ON},
{12,117,PEN_OFF},
{12,112,PEN_ON},
{17,112,PEN_ON},
{17,117,PEN_ON},
{12,117,PEN_ON},
{-20,-160,PEN_OFF},
{-20,-168,PEN_ON},
{-12,-168,PEN_ON},
{-12,-160,PEN_ON},
{-20,-160,PEN_ON},
{-153,-74,PEN_OFF},
{-153,-83,PEN_ON},
{-145,-83,PEN_ON},
{-145,-74,PEN_ON},
{-153,-74,PEN_ON},
{-183,197,PEN_OFF},
{-183,155,PEN_ON},
{-141,155,PEN_ON},
{-141,197,PEN_ON},
{-183,197,PEN_ON},
{-87,-32,PEN_OFF},
{-87,-43,PEN_ON},
{-76,-43,PEN_ON},
{-76,-32,PEN_ON},
{-87,-32,PEN_ON},
{108,162,PEN_OFF},
{108,143,PEN_ON},
{127,143,PEN_ON},
{127,162,PEN_ON},
{108,162,PEN_ON},
{39,-27,PEN_OFF},
{39,-46,PEN_ON},
{58,-46,PEN_ON},
{58,-27,PEN_ON},
{39,-27,PEN_ON},
{4,37,PEN_OFF},
{4,5,PEN_ON},
{37,5,PEN_ON},
{37,37,PEN_ON},
{4,37,PEN_ON},
{-119,205,PEN_OFF},
{-119,176,PEN_ON},
{-89,176,PEN_ON},
{-89,205,PEN_ON},
{-119,205,PEN_ON},
{108,-59,PEN_OFF},
{108,-64,PEN_ON},
{113,-64,PEN_ON},
{113,-59,PEN_ON},
{108,-59,PEN_ON},
{-41,99,PEN_OFF},
{-41,92,PEN_ON},
{-35,92,PEN_ON},
{-35,99,PEN_ON},
{-41,99,PEN_ON},
{129,70,PEN_OFF},
{129,64,PEN_ON},
{135,64,PEN_ON},
{135,70,PEN_ON},
{129,70,PEN_ON},
{-48,-5,PEN_OFF},
{-48,-38,PEN_ON},
{-14,-38,PEN_ON},
{-14,-5,PEN_ON},
{-48,-5,PEN_ON},
{-69,-104,PEN_OFF},
{-69,-109,PEN_ON},
{-64,-109,PEN_ON},
{-64,-104,PEN_ON},
{-69,-104,PEN_ON},
{171,-84,PEN_OFF},
{171,-108,PEN_ON},
{195,-108,PEN_ON},
{195,-84,PEN_ON},
{171,-84,PEN_ON},
{-109,26,PEN_OFF},
{-109,19,PEN_ON},
{-103,19,PEN_ON},
{-103,26,PEN_ON},
{-109,26,PEN_ON},
{-192,132,PEN_OFF},
{-192,105,PEN_ON},
{-166,105,PEN_ON},
{-166,132,PEN_ON},
{-192,132,PEN_ON},
{85,6,PEN_OFF},
{85,-2,PEN_ON},
{94,-2,PEN_ON},
{94,6,PEN_ON},
{85,6,PEN_ON},
{15,156,PEN_OFF},
{15,149,PEN_ON},
{22,149,PEN_ON},
{22,156,PEN_ON},
{15,156,PEN_ON},
{77,130,PEN_OFF},
{77,124,PEN_ON},
{83,124,PEN_ON},
{83,130,PEN_ON},
{77,130,PEN_ON},
{-192,-44,PEN_OFF},
{-192,-59,PEN_ON},
{-177,-59,PEN_ON},
{-177,-44,PEN_ON},
{-192,-44,PEN_ON},
{161,-141,PEN_OFF},
{161,-192,PEN_ON},
{211,-192,PEN_ON},
{211,-141,PEN_ON},
{161,-141,PEN_ON},
{192,-7,PEN_OFF},
{192,-32,PEN_ON},
{217,-32,PEN_ON},
{217,-7,PEN_ON},
{192,-7,PEN_ON},
{-187,79,PEN_OFF},
{-187,63,PEN_ON},
{-171,63,PEN_ON},
{-171,79,PEN_ON},
{-187,79,PEN_ON},
{-84,64,PEN_OFF},
{-84,57,PEN_ON},
{-76,57,PEN_ON},
{-76,64,PEN_ON},
{-84,64,PEN_ON},
{31,-145,PEN_OFF},
{31,-151,PEN_ON},
{37,-151,PEN_ON},
{37,-145,PEN_ON},
{31,-145,PEN_ON},
{-132,157,PEN_OFF},
{-132,140,PEN_ON},
{-114,140,PEN_ON},
{-114,157,PEN_ON},
{-132,157,PEN_ON},
{-113,-100,PEN_OFF},
{-113,-106,PEN_ON},
{-107,-106,PEN_ON},
{-107,-100,PEN_ON},
{-113,-100,PEN_ON},
{-5,76,PEN_OFF},
{-5,60,PEN_ON},
{11,60,PEN_ON},
{11,76,PEN_ON},
{-5,76,PEN_ON},
{22,-70,PEN_OFF},
{22,-83,PEN_ON},
{34,-83,PEN_ON},
{34,-70,PEN_ON},
{22,-70,PEN_ON},
{92,-147,PEN_OFF},
{92,-160,PEN_ON},
{105,-160,PEN_ON},
{105,-147,PEN_ON},
{92,-147,PEN_ON},
{-50,188,PEN_OFF},
{-50,173,PEN_ON},
{-35,173,PEN_ON},
{-35,188,PEN_ON},
{-50,188,PEN_ON},
{160,39,PEN_OFF},
{160,29,PEN_ON},
{170,29,PEN_ON},
{170,39,PEN_ON},
{160,39,PEN_ON},
{133,226,PEN_OFF},
{133,169,PEN_ON},
{191,169,PEN_ON},
{191,226,PEN_ON},
{133,226,PEN_ON},
{-156,-119,PEN_OFF},
{-156,-135,PEN_ON},
{-140,-135,PEN_ON},
{-140,-119,PEN_ON},
{-156,-119,PEN_ON},
{150,176,PEN_OFF},
{150,136,PEN_ON},
{189,136,PEN_ON},
{189,176,PEN_ON},
{150,176,PEN_ON},
{-12,2,PEN_OFF},
{-12,-40,PEN_ON},
{29,-40,PEN_ON},
{29,2,PEN_ON},
{-12,2,PEN_ON},
{-98,102,PEN_OFF},
{-98,97,PEN_ON},
{-94,97,PEN_ON},
{-94,102,PEN_ON},
{-98,102,PEN_ON},
{-169,-151,PEN_OFF},
{-169,-182,PEN_ON},
{-138,-182,PEN_ON},
{-138,-151,PEN_ON},
{-169,-151,PEN_ON},
{-192,-89,PEN_OFF},
{-192,-110,PEN_ON},
{-171,-110,PEN_ON},
{-171,-89,PEN_ON},
{-192,-89,PEN_ON},
{-59,-163,PEN_OFF},
{-59,-174,PEN_ON},
{-48,-174,PEN_ON},
{-48,-163,PEN_ON},
{-59,-163,PEN_ON},
{167,-46,PEN_OFF},
{167,-60,PEN_ON},
{181,-60,PEN_ON},
{181,-46,PEN_ON},
{167,-46,PEN_ON},
{-162,241,PEN_OFF},
{-162,188,PEN_ON},
{-108,188,PEN_ON},
{-108,241,PEN_ON},
{-162,241,PEN_ON},
{-5,-120,PEN_OFF},
{-5,-125,PEN_ON},
{0,-125,PEN_ON},
{0,-120,PEN_ON},
{-5,-120,PEN_ON},
{77,88,PEN_OFF},
{77,83,PEN_ON},
{81,83,PEN_ON},
{81,88,PEN_ON},
{77,88,PEN_ON},
{-72,9,PEN_OFF},
{-72,-11,PEN_ON},
{-52,-11,PEN_ON},
{-52,9,PEN_ON},
{-72,9,PEN_ON},
{47,118,PEN_OFF},
{47,113,PEN_ON},
{52,113,PEN_ON},
{52,118,PEN_ON},
{47,118,PEN_ON},
{-145,-41,PEN_OFF},
{-145,-47,PEN_ON},
{-139,-47,PEN_ON},
{-139,-41,PEN_ON},
{-145,-41,PEN_ON},
{146,-78,PEN_OFF},
{146,-89,PEN_ON},
{157,-89,PEN_ON},
{157,-78,PEN_ON},
{146,-78,PEN_ON},
{104,-98,PEN_OFF},
{104,-104,PEN_ON},
{110,-104,PEN_ON},
{110,-98,PEN_ON},
{104,-98,PEN_ON},
{178,173,PEN_OFF},
{178,118,PEN_ON},
{233,118,PEN_ON},
{233,173,PEN_ON},
{178,173,PEN_ON},
{178,79,PEN_OFF},
{178,56,PEN_ON},
{201,56,PEN_ON},
{201,79,PEN_ON},
{178,79,PEN_ON},
{-22,139,PEN_OFF},
{-22,134,PEN_ON},
{-17,134,PEN_ON},
{-17,139,PEN_ON},
{-22,139,PEN_ON},
{-114,-19,PEN_OFF},
{-114,-25,PEN_ON},
{-108,-25,PEN_ON},
{-108,-19,PEN_ON},
{-114,-19,PEN_ON},
{-183,36,PEN_OFF},
{-183,25,PEN_ON},
{-171,25,PEN_ON},
{-171,36,PEN_ON},
{-183,36,PEN_ON},
{14,200,PEN_OFF},
{14,182,PEN_ON},
{33,182,PEN_ON},
{33,200,PEN_ON},
{14,200,PEN_ON},
{165,-117,PEN_OFF},
{165,-152,PEN_ON},
{199,-152,PEN_ON},
{199,-117,PEN_ON},
{165,-117,PEN_ON},
{-94,-67,PEN_OFF},
{-94,-73,PEN_ON},
{-88,-73,PEN_ON},
{-88,-67,PEN_ON},
{-94,-67,PEN_ON},
{44,167,PEN_OFF},
{44,157,PEN_ON},
{55,157,PEN_ON},
{55,167,PEN_ON},
{44,167,PEN_ON},
{77,178,PEN_OFF},
{77,160,PEN_ON},
{95,160,PEN_ON},
{95,178,PEN_ON},
{77,178,PEN_ON},
{122,107,PEN_OFF},
{122,98,PEN_ON},
{132,98,PEN_ON},
{132,107,PEN_ON},
{122,107,PEN_ON},
{-43,-135,PEN_OFF},
{-43,-140,PEN_ON},
{-38,-140,PEN_ON},
{-38,-135,PEN_ON},
{-43,-135,PEN_ON},
{58,-69,PEN_OFF},
{58,-77,PEN_ON},
{66,-77,PEN_ON},
{66,-69,PEN_ON},
{58,-69,PEN_ON},
{44,78,PEN_OFF},
{44,69,PEN_ON},
{53,69,PEN_ON},
{53,78,PEN_ON},
{44,78,PEN_ON},
{93,-28,PEN_OFF},
{93,-35,PEN_ON},
{99,-35,PEN_ON},
{99,-28,PEN_ON},
{93,-28,PEN_ON},
{167,-8,PEN_OFF},
{167,-19,PEN_ON},
{179,-19,PEN_ON},
{179,-8,PEN_ON},
{167,-8,PEN_ON},
{-78,-133,PEN_OFF},
{-78,-139,PEN_ON},
{-72,-139,PEN_ON},
{-72,-133,PEN_ON},
{-78,-133,PEN_ON},
{-78,216,PEN_OFF},
{-78,189,PEN_ON},
{-51,189,PEN_ON},
{-51,216,PEN_ON},
{-78,216,PEN_ON},
{-147,54,PEN_OFF},
{-147,48,PEN_ON},
{-141,48,PEN_ON},
{-141,54,PEN_ON},
{-147,54,PEN_ON},
{-170,156,PEN_OFF},
{-170,131,PEN_ON},
{-144,131,PEN_ON},
{-144,156,PEN_ON},
{-170,156,PEN_ON},
{-35,70,PEN_OFF},
{-35,54,PEN_ON},
{-19,54,PEN_ON},
{-19,70,PEN_ON},
{-35,70,PEN_ON},
{129,147,PEN_OFF},
{129,126,PEN_ON},
{149,126,PEN_ON},
{149,147,PEN_ON},
{129,147,PEN_ON},
{-122,-65,PEN_OFF},
{-122,-69,PEN_ON},
{-118,-69,PEN_ON},
{-118,-65,PEN_ON},
{-122,-65,PEN_ON},
{133,31,PEN_OFF},
{133,26,PEN_ON},
{139,26,PEN_ON},
{139,31,PEN_ON},
{133,31,PEN_ON},
{-21,188,PEN_OFF},
{-21,174,PEN_ON},
{-7,174,PEN_ON},
{-7,188,PEN_ON},
{-21,188,PEN_ON},
{-96,-168,PEN_OFF},
{-96,-185,PEN_ON},
{-79,-185,PEN_ON},
{-79,-168,PEN_ON},
{-96,-168,PEN_ON},
{-163,95,PEN_OFF},
{-163,83,PEN_ON},
{-151,83,PEN_ON},
{-151,95,PEN_ON},
{-163,95,PEN_ON},
{-58,74,PEN_OFF},
{-58,63,PEN_ON},
{-47,63,PEN_ON},
{-47,74,PEN_ON},
{-58,74,PEN_ON},
{44,51,PEN_OFF},
{44,37,PEN_ON},
{59,37,PEN_ON},
{59,51,PEN_ON},
{44,51,PEN_ON},
{-18,-30,PEN_OFF},
{-18,-59,PEN_ON},
{11,-59,PEN_ON},
{11,-30,PEN_ON},
{-18,-30,PEN_ON},
{63,-137,PEN_OFF},
{63,-144,PEN_ON},
{69,-144,PEN_ON},
{69,-137,PEN_ON},
{63,-137,PEN_ON},
{180,114,PEN_OFF},
{180,81,PEN_ON},
{213,81,PEN_ON},
{213,114,PEN_ON},
{180,114,PEN_ON},
{140,-141,PEN_OFF},
{140,-172,PEN_ON},
{172,-172,PEN_ON},
{172,-141,PEN_ON},
{140,-141,PEN_ON},
{-63,-33,PEN_OFF},
{-63,-51,PEN_ON},
{-44,-51,PEN_ON},
{-44,-33,PEN_ON},
{-63,-33,PEN_ON},
{-34,32,PEN_OFF},
{-34,-14,PEN_ON},
{12,-14,PEN_ON},
{12,32,PEN_ON},
{-34,32,PEN_ON},
{80,211,PEN_OFF},
{80,180,PEN_ON},
{111,180,PEN_ON},
{111,211,PEN_ON},
{80,211,PEN_ON},
{-35,-102,PEN_OFF},
{-35,-108,PEN_ON},
{-28,-108,PEN_ON},
{-28,-102,PEN_ON},
{-35,-102,PEN_ON},
{40,14,PEN_OFF},
{40,-8,PEN_ON},
{62,-8,PEN_ON},
{62,14,PEN_ON},
{40,14,PEN_ON},
{135,-50,PEN_OFF},
{135,-56,PEN_ON},
{141,-56,PEN_ON},
{141,-50,PEN_ON},
{135,-50,PEN_ON},
{69,-39,PEN_OFF},
{69,-49,PEN_ON},
{79,-49,PEN_ON},
{79,-39,PEN_ON},
{69,-39,PEN_ON},
{20,-100,PEN_OFF},
{20,-107,PEN_ON},
{27,-107,PEN_ON},
{27,-100,PEN_ON},
{20,-100,PEN_ON},
{115,10,PEN_OFF},
{115,5,PEN_ON},
{120,5,PEN_ON},
{120,10,PEN_ON},
{115,10,PEN_ON},
{-154,211,PEN_OFF},
{-154,172,PEN_ON},
{-115,172,PEN_ON},
{-115,211,PEN_ON},
{-154,211,PEN_ON},
{-206,-156,PEN_OFF},
{-206,-206,PEN_ON},
{-155,-206,PEN_ON},
{-155,-156,PEN_ON},
{-206,-156,PEN_ON},
{116,-151,PEN_OFF},
{116,-175,PEN_ON},
{139,-175,PEN_ON},
{139,-151,PEN_ON},
{116,-151,PEN_ON},
{2,-172,PEN_OFF},
{2,-183,PEN_ON},
{13,-183,PEN_ON},
{13,-172,PEN_ON},
{2,-172,PEN_ON},
{144,255,PEN_OFF},
{144,173,PEN_ON},
{227,173,PEN_ON},
{227,255,PEN_ON},
{144,255,PEN_ON},
{102,128,PEN_OFF},
{102,119,PEN_ON},
{111,119,PEN_ON},
{111,128,PEN_ON},
{102,128,PEN_ON},
{99,-123,PEN_OFF},
{99,-132,PEN_ON},
{108,-132,PEN_ON},
{108,-123,PEN_ON},
{99,-123,PEN_ON}};

 
Drawing drawings[NUMBER_OF_DRAWINGS] = {Drawing(hexagon, 7, 1500, true),
                                        Drawing(diamond, 5, 1500, true), // draw randomly on screen

                                        // Drawing(diamond2, 5, 1000), 
                                        // Drawing(hexagon, 6, 1000),
                                        Drawing(triangle2, 4, 1000, true)
                                     };
