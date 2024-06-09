// Automatically generated header file
// Date: 2024-06-09 23:52:18.084695
// Quantized model exported from opt_Cosine_lr0.001_Aug_BitMnist_PerTensor_4bitsym_RMS_width32_16_16_bs128_epochs60.pth
// Generated by exportquant.py

#include <stdint.h>

#ifndef BITNETMCU_MODEL_H
#define BITNETMCU_MODEL_H

// Number of layers
#define NUM_LAYERS 4

// Maximum number of activations per layer
#define MAX_N_ACTIVATIONS 32

// Layer: L1
// QuantType: 4bitsym
#define L1_active
#define L1_bitperweight 4
#define L1_incoming_weights 256
#define L1_outgoing_weights 32
const uint32_t L1_weights[] = {
	0x8002118c,0xcc011000,0x810343cf,0xf8420188,0x123659ff,0xf6388088,0x81465bff,0x86288989,
	0x025458ff,0x4621aaa9,0x081265fc,0x441aa9a9,0x88080599,0x218a8090,0x89908091,0x90801118,
	0x89981018,0x90888088,0x88111888,0x80801181,0x00119088,0xa8989880,0x08008988,0x80089088,
	0x88908089,0x00082188,0x98888888,0x0a011000,0x98880180,0x81880888,0x00888818,0x08889880,
	0x3121219b,0xa0011212,0x321198af,0xfd901222,0x3220888f,0xffd91122,0x2101301a,0xffff9112,
	0x23223220,0xbfffb901,0x22898242,0xadfffa00,0x32180245,0x928dcca0,0x20110814,0x981a9990,
	0x18908882,0x9080809a,0x18889982,0x20881201,0x20800082,0x00880881,0x38000000,0x11888801,
	0x10088909,0x00080000,0x32198100,0x08810911,0x22899899,0x8091a813,0x22110010,0x08801131,
	0x42333201,0x12212333,0x34342008,0x88888822,0x43322280,0x00089802,0x32111080,0x81890081,
	0x32110181,0x80210101,0x28021188,0x031898a8,0x2108001b,0x13088aa8,0x18012008,0x44199ba8,
	0x18021808,0x45309a91,0x19908122,0x751a9aa0,0x1ab9aa90,0x1bffcc91,0x0999accb,0xdfffcfa1,
	0x18888888,0x9aecaca2,0x089888aa,0x98898882,0x20102818,0x889a0822,0x22880888,0x08898232,
	0x99999a98,0x9888009a,0x9a881211,0x18022208,0xa8812220,0x22333408,0x89232464,0x55431130,
	0x98001476,0x74218810,0x9009810b,0xcca81010,0x9122989d,0xf8102031,0x91218888,0xb9988801,
	0x88898880,0xb9999888,0x9a9aa992,0xa8baaa89,0x8a889901,0xa8999988,0x9881a980,0x08989809,
	0x988aa98a,0x11089008,0x99a99a99,0x09182088,0xaa800808,0x80200998,0xa99a98aa,0x99a99a9a,
	0x89990800,0x00888089,0x08881001,0x01008000,0x88990989,0x90080111,0x89008008,0x08080011,
	0x88888808,0x08888111,0x00880800,0x0100a990,0x80080808,0x08080088,0x8109a899,0x981188a9,
	0x12308a98,0x10889a99,0x00456552,0x10899080,0x8bb00224,0x18800109,0x9effffff,0xea001010,
	0x9befffff,0x20180110,0x81133345,0x18881110,0x83433210,0x01121899,0x90232222,0x1108890a,
	0x8880108b,0xdcdb9998,0x80012530,0xbefeca90,0x81135332,0x88effc89,0x00121088,0x021effaa,
	0x8010108a,0x4529dfca,0x01234189,0x25319cdb,0x11245308,0x111309ba,0x8899899b,0x08081189,
	0x8aab8980,0x88112188,0x9908a801,0x91889998,0x00008110,0x90889898,0x00102108,0x88800180,
	0x02401880,0x88900088,0x02211808,0x00180100,0x00231010,0x81010000,0x88101111,0x10011100,
	0x9abaaa88,0x8099a8a9,0xaab8aa00,0x1888908a,0x9998a981,0x08010899,0x99800808,0x090a0001,
	0xa8819812,0x80088000,0x91100010,0x998899a0,0x80080882,0x9a880890,0x92008121,0xb8801092,
	0x8101124b,0xd9990010,0x8243234e,0xa9809911,0x8133473c,0xba899911,0x82198228,0xaba99808,
	0x03322233,0x08a99989,0x82223320,0x289999aa,0xa0111812,0x13209abb,0xba010112,0x1219aaab,
	0x81112010,0x11010001,0x88111101,0x10000110,0x80010010,0x11212211,0x80220018,0x01008bb9,
	0x0100100a,0xacdcefeb,0x81211120,0x19aaa998,0x11310104,0x67777762,0x88001089,0x01467773,
	0x88a09889,0x9abb0082,0x8a988888,0x09089a90,0x9a890800,0x09898aa0,0x8a08a888,0x088b999a,
	0x88998889,0x88808aa8,0x99a99089,0x8888aa90,0x80989980,0x00908888,0x80088088,0x99089088,
	0x1008889a,0x88988001,0x18089a98,0x88080880,0x00889889,0x80888013,0x80899808,0x00123433,
	0x08980908,0x24342311,0x0988888a,0xcffffffc,0x00000008,0x8cffffff,0x00000881,0x322109ca,
	0x00080888,0x01132308,0x10889000,0x01108110,0x80001080,0x80011020,0x80808110,0x00080121,
	0x18088800,0x01000821,0x00808088,0x10019011,0x10080081,0x88001111,0x11010008,0x00800110,
	0xbabb8818,0x110989aa,0xa9a91310,0x89808889,0x9a812521,0x00899099,0xb9025528,0xaa8a9a99,
	0x9803770a,0x89999999,0x822467be,0x28818889,0x132146ff,0x10988808,0x131162fd,0x20888000,
	0x822221d8,0x80108890,0x801320a9,0x88a9ab98,0x02028188,0x88881928,0x03010108,0x81808828,
	0x00028008,0x89889308,0x91088080,0x08988188,0xa8188809,0x99990088,0xab999988,0x88a8899a,
	0x34444343,0x18800122,0x33312222,0x18801123,0x32111210,0x09018823,0x32088908,0x01890801,
	0x31190088,0x88888080,0x30100808,0x10888890,0x20088000,0x00809898,0x28908809,0x08888080,
	0x29a88898,0x88801101,0x20818109,0x89811222,0x42281910,0x12112000,0x43120122,0x33532890,
	0x30812322,0x418addb0,0x20cbcbdc,0xffffffb0,0x20bdffff,0xfffffb82,0x33189cee,0xffeb8023,
	0x11008998,0x88900001,0x1009abcc,0xeedba811,0x089bceff,0xdabc9810,0x008aa9bc,0xaa992000,
	0x18808221,0x00181001,0x10214677,0x76119020,0x18800022,0x32230102,0x08a8898c,0xba889080,
	0x10821089,0xbc888311,0x01000880,0xc9901231,0x0011899a,0x99981222,0x18889a98,0x98800221,
	0x08889101,0x01100200,0x00110110,0x12088180,0x10020900,0x88110880,0x11081100,0x98988888,
	0x0009bccc,0xcca80008,0x1899cfff,0xfbb98101,0x808adebd,0xabab8811,0x019aa99b,0xbb881010,
	0x00800088,0x81001801,0x10811238,0x11989811,0x11000220,0x80800211,0x21022209,0x88812321,
	0x11121108,0x80233429,0x2121010a,0x12321088,0x01011012,0x41110aa8,0x80800022,0x21088b88,
	0x09abb999,0x889ccc80,0x88aaabcb,0xab999811,0x08810818,0x01110120,0x01011212,0x21323110,
	0x80111111,0x10000110,0x00111112,0x01809110,0x00801101,0x11111011,0x10801101,0x01100102,
	0x08808100,0x00081120,0x09900002,0x01800010,0x8ba84212,0x32108a98,0x0acfc914,0x3109aa99,
	0x089fffff,0x00801089,0x13429fff,0xfa808089,0x12545609,0x0a988188,0x00001222,0x89988008,
	0x9ba99998,0x80881998,0x889ba980,0x08899889,0x01881098,0x88990000,0x1010899a,0x98a80000,
	0x12200800,0x80011211,0x21109920,0x99891810,0x12118910,0xa9088801,0x11080902,0x08891001,
	0x21180902,0x890888a1,0x11800202,0x9999aca1,0x11112005,0x19800880,0x01810025,0x8d988081,
	0x19980025,0xcfbca009,0x18991242,0xffca8088,0x01888268,0xffdda908,0x13208018,0xcffedb80,
	0x33311880,0x9cddbaa0,0x01210089,0x9abccb91,0x28212001,0x00cec802,0x01008802,0x88a98001,
	0x98812211,0x88888998,0x98012189,0x888089a8,0x00990809,0x998089a9,0x888babaa,0x808aa999,
	0x89b9bb8a,0x99999aab,0x89bacbbc,0xcaa89ab9,0x89a8a8ab,0xcccbbccb,0x82120180,0x99a9a988,
	0x04423321,0x90811341,0x03354554,0x33344474,0x11343343,0x44444663,0x00180021,0x35553542,
	0x8a100880,0x98001211,0x9aab988a,0xa9b98008,0x99a88a99,0x99aba988,0x00898998,0x88808909,
	0x11111122,0x20089002,0x22110220,0x10acb902,0x11088811,0x40adea02,0x22899900,0x38bff912,
	0x20898900,0x52aff014,0x200109a0,0x71dfb334,0x10010890,0x70fd2321,0x00008108,0x68b02081,
	0x208888a0,0x2aa12100,0x20100101,0x2a801012,0x011180a0,0x1b080100,0x0099a990,0x108bcb98,
	0x199a9019,0x23108a90,0x08898889,0x98008801,0x20981809,0x08111012,0x21009888,0x98802111,
	0x24455666,0x64233232,0x44343022,0x11801213,0x221099a8,0x80880012,0x22118881,0x90980011,
	0x30008000,0x81080020,0x18898810,0x80081801,0x28911230,0x00880112,0x20210010,0x80000311,
	0x22232201,0x11231322,0x22111801,0x13101a23,0x21008180,0x21008b91,0x2ba81818,0xaceeffd0,
	0x8cffffff,0xffffffe0,0x1adfffff,0xeccccc91,0x309ccb88,0x8acc9011,0x31299abc,0xbba80122,
	0x100888a0,0x89810810,0x08099881,0x11800110,0x00801100,0x18888000,0x00889100,0x00899908,
	0x180908a8,0x88999908,0x80108010,0x98890001,0x2245658a,0x88912231,0x82300ddb,0x898a889a,
	0xacffffa8,0x088aaffd,0xbefff010,0x008bdfb9,0x9dd83310,0x14232442,0x88231220,0x81577753,
	0x01321280,0xaa823332,0x01120000,0x8bcdb901,0x08001081,0x00accb90,0x01800110,0x108aa908,
	0x9990088a,0x89889989,0x80021108,0x81800899,0x81244322,0x81080189,0x01367673,0x01111110,
	0x80134003,0x31088808,0xadffffff,0xb9888800,0xbfffffd8,0x91888898,0x9bb84453,0x08800088,
	0x02554190,0x08888800,0x1319a988,0x80988021,0x21801108,0x98081129,0x00019880,0x88990000,
	0x88888088,0x8000a898,0x90100880,0x08908988,0x88000010,0x98081898,0x88898998,0x11010889,
	0x10881998,0x99888100,0x18888988,0x00181000,0x00108008,0x80888818,0x88128010,0x00008000,
	0x18000000,0x01008980,0x01101808,0x88880018,0x01218998,0x80880100,0x08121111,0x01008890,
	0x89a45544,0x20098880,0x9bfffb99,0x28080110,0x89ffffff,0xeaa80800,0x0228bbca,0x00098018,
	0x23555652,0x08800080,0x21323110,0x00108899,0x00898080,0x00890808,0x1889aa99,0xa9988888,
	0x12110080,0x81010001,0x00000999,0x08888000,0x1109aabb,0x01888110,0x109ab890,0x80080101,
	0x08881899,0x80800080,0x20000898,0x98808808,0x12180029,0xc8818000,0x2332210f,0xc1988012,
	0x133339ef,0x21009111,0x8988fff9,0x41222201,0xacefff05,0x41098900,0xacfff030,0x31889902,
	0x8bda1200,0x32310021,0x88910081,0x11313311,0x11008100,0x10222111,0x00102110,0x11110011,
	0x10101110,0x10080081,0x01100008,0x88080000,0x080acda8,0x88819808,0x010999aa,0x80001100,
	0x13345542,0x18100088,0x03677632,0x00080900,0x09badfff,0xc8888810,0xbfffffd1,0x11888001,
	0xafff9241,0x10001080,0x9a156201,0x08000100,0x12419808,0x00988880,0x21201088,0x80088880,
	0x10880910,0x08010008,0x20800080,0x80080880,0x00188889,0x889a8888,0x00180088,0x09808110,
	0x01008880,0x21081010,0x18889983,0x418a8121,0x1118a983,0x19998111,0x00898914,0x18c80212,
	0x00088904,0x8aa88100,0x10080a84,0x80133220,0x18111902,0xc1223210,0x00112032,0xc3333420,
	0x08880130,0xb4432300,0x88998088,0x02201189,0x098a9abd,0x918aac98,0x08abbcbc,0xb89bccb9,
	0x89988899,0xb9899ba8,0x09808b9b,0xa8889a90,0x1998b88a,0xaa998a80,0x08888989,0x89889888,
	0x00811342,0x9ba91188,0x11080651,0xffc01011,0x0889067d,0xff921108,0x09a8055f,0xff511101,
	0x8899827f,0xf0410888,0x0809807d,0xf4210999,0x1808084c,0xa2008a89,0x09888988,0x10089890,
	0x08809100,0x00800098,0x00080802,0x89880100,0x81800010,0x00001100,0x10088088,0x08980990,
	0x08181808,0x00888988,0x00088880,0x18080800,0x18088888,0x08088801,0x10000889,0x98810000,
	0x11110011,0x01111101,0x11001881,0x11001811,0x189bbdcc,0x98881112,0x09cfffff,0xfffedba8,
	0x09deffff,0xffcdb999,0x19839bff,0xf9090098,0x10112442,0x22111022,0x21412245,0x53001144,
	0x20888110,0x88988133,0x19800010,0x99801121,0x28010809,0x99988081,0x10108998,0x80100081,
	0x19000888,0x98000802,0x28981800,0x00880802,0x11888898,0x00810121,0x22111011,0x81120221,
	0x10011080,0x11122110,0x11108110,0x00221800,0x21000888,0x009a8aa8,0x00188889,0xabbbcb80,
	0x80880000,0x02233233,0x88080801,0x47777775,0x08080099,0xccdb8111,0x08088890,0x8dfffffa,
	0x80018080,0x1110dffb,0x88090089,0x10804aeb,0x08888000,0x112890c9,0x88a00810,0x880008a9,
	0x88990080,0x80881888,0x08008818,0x88008001,0x08998800,0x01880010,0x88801800,0x01111010,
	0x9aaa898a,0x9998899a,0xa9a8128c,0xacba8999,0x9a01341a,0x98988809,0xa8023109,0xa890808a,
	0x90212189,0xaa99a9aa,0x8881231b,0x98a08088,0x8023355a,0xd089a801,0x90124374,0xfca90132,
	0x99980035,0x8a800088,0xaaaaa016,0x2099bbbb,0x80009903,0x19c8a9a9,0x82111188,0x09898118,
	0x01200000,0x02088128,0x90310010,0x11111219,0x80022008,0x80222198,0x88101122,0x22101899,
	0x9a9a9aa8,0x80088989,0x89aaccc8,0x22198889,0x9b9aa980,0x01898899,0x99aaaa10,0x19980088,
	0x999a9a82,0x19908800,0x99a99a98,0x88900131,0x9a88a9b8,0x00801442,0x988189a1,0x38998111,
	0x9aa91023,0x18088010,0x98990812,0x12888088,0xa8909822,0x00990218,0x90118880,0x00125530,
	0x81110900,0x03564530,0x90103323,0x34322219,0xa8880101,0x0011008a,0x98988980,0x880180a9,
	0xaaa98001,0x01001089,0xaa800212,0x21222109,0x98812118,0x92321021,0x90321320,0x13232110,
	0x81222430,0x81210110,0x01322330,0x80001188,0x83221988,0x12001209,0x91310891,0x322418aa,
	0x90012102,0x4429ccc9,0x99011023,0x28eecbaa,0xbac9980a,0xdbb08008,0x99cbbccb,0xa8888101,
	0x9981008a,0x9aa90000,0x89990898,0x89a89099,0x98899988,0x8999999a,0x9990009a,0xabac9a99,
	0x89908124,0x430099a9,0x88090122,0x454189a9,0x8998999a,0x266309ba,0x8aaa999a,0xa47528ab,
	0x9ab99bbe,0xb167328b,0x9aca898a,0xd8044309,0x8a893118,0x80a03428,0x8121988a,0xa8812319,
	0x13089988,0xb0111180,0x11888092,0x80808880,0x08891888,0x88800001,0x11000100,0x80899000,
	0x80080888,0x80800001,0x88a88018,0x80000100,0x80888188,0x08a80089,0x00880880,0x08098008,
	0x98988899,0x99898009,0x09800111,0x01988898,0x09801000,0x80888088,0x98080818,0x88800000,
	0x8a089100,0x00998880,0x99090889,0x01208088,0x88a20001,0x01001010,0x88b9188d,0xcbb9a28a,
	0x88eeefec,0xcdc98cfc,0x010899b9,0xcbbcfffd,0x23333320,0xcdfffffc,0x15232346,0x42991090,
	0x11211122,0x57744531,0x01211222,0x24667661,0x98800000,0x13556631,0x8888998a,0x98134310,
}; //first channel is topmost bit

// Layer: L2
// QuantType: 4bitsym
#define L2_active
#define L2_bitperweight 4
#define L2_incoming_weights 32
#define L2_outgoing_weights 16
const uint32_t L2_weights[] = {
	0x82249129,0xd3032af8,0x98ba0cd0,0x85bc1a39,0x80100089,0x81f95002,0x0c9c0aa0,0x81880801,
	0x3a018a1e,0xf1120992,0x31400281,0x23c88883,0x4b1a9b22,0x020b0a83,0x008e89d2,0x4d8029b1,
	0x2eb0ab14,0x61118190,0x988a8190,0x234211b0,0x091a18c1,0xc8ca2231,0x10cb3bc3,0x0aa1a38a,
	0xa22112a1,0x0ab21920,0x1c150141,0xa01ba828,0xb2a98211,0x08309aa3,0x96019209,0xb8811025,
	0x020060c1,0x1a109729,0x19007800,0x80018a18,0x512a1980,0xac1ba93a,0x212a8303,0x50092880,
	0x9bd84028,0x985812bc,0xa4a0380b,0x9983410c,0x4001a992,0x32b1080a,0x123c8291,0x2311b8b9,
	0xa8020281,0x14801001,0x99bc1ad8,0xda008280,0x0898d008,0xa889111a,0x0a89b1a2,0x8a82158a,
	0x09134a03,0x43020018,0xd2092fa8,0x90318ba1,0x1282c128,0x12188c99,0x03dce9d8,0x1a90380b,
}; //first channel is topmost bit

// Layer: L3
// QuantType: 4bitsym
#define L3_active
#define L3_bitperweight 4
#define L3_incoming_weights 16
#define L3_outgoing_weights 16
const uint32_t L3_weights[] = {
	0xa02611a0,0x91018382,0xa8189023,0x3a01aaa9,0x880a4b92,0xb82a0381,0x310005a0,0x09822189,
	0x1220d182,0xc90a0ab0,0xb9819244,0xa8c40998,0x4c899b39,0x99108112,0x4b9220b2,0xb28a2d04,
	0x2a3cb094,0x05888014,0xd9a12998,0x04891950,0x20098c3a,0x82b3a214,0x21ac900a,0x0a8b4009,
	0x0540081a,0x30b88300,0x159c1933,0x098824b9,0x294b4880,0x1083994a,0x90b89a01,0x3141100a,
}; //first channel is topmost bit

// Layer: L4
// QuantType: 4bitsym
#define L4_active
#define L4_bitperweight 4
#define L4_incoming_weights 16
#define L4_outgoing_weights 10
const uint32_t L4_weights[] = {
	0x9d800b32,0x2ca0ca0b,0x11accabc,0x3029299a,0x9189238a,0x1ab9a80a,0xa3a98908,0x89988893,
	0x38a228a9,0xacaa2999,0x99888988,0x93a09931,0x2b88c294,0xa0bbbb9a,0xa0b8b22a,0xbc38011a,
	0x1a398a8a,0x899991a0,0xabb109a8,0x98a31298,
}; //first channel is topmost bit

#endif
