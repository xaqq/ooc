
#include	<stdarg.h>
#include	<stdlib.h>
#include	<string.h>
#include	"ooc_base.h"
#include	"ooc_list.h"

static unsigned char	*list_save_me_i(int size, unsigned char *ptr)
{
  unsigned char	*data;

  data = malloc(size);
  memcpy(data, ptr, size);
  return (data);
}

t_list_item	*list_get_user_data_i(void *_self, ...)
{
  t_list	*self = (t_list *)_self;
  t_list_item	*item = malloc(sizeof(t_list_item));
  va_list	ap;

  va_start(ap, _self);
  switch (self->data_size)
    {
case 1:
{
unsigned char tmp[1];
tmp = va_arg(ap, unsigned char[1]);
item->data = list_save_me_i(1, tmp);
}
break;
case 2:
{
unsigned char tmp[2];
tmp = va_arg(ap, unsigned char[2]);
item->data = list_save_me_i(2, tmp);
}
break;
case 3:
{
unsigned char tmp[3];
tmp = va_arg(ap, unsigned char[3]);
item->data = list_save_me_i(3, tmp);
}
break;
case 4:
{
unsigned char tmp[4];
tmp = va_arg(ap, unsigned char[4]);
item->data = list_save_me_i(4, tmp);
}
break;
case 5:
{
unsigned char tmp[5];
tmp = va_arg(ap, unsigned char[5]);
item->data = list_save_me_i(5, tmp);
}
break;
case 6:
{
unsigned char tmp[6];
tmp = va_arg(ap, unsigned char[6]);
item->data = list_save_me_i(6, tmp);
}
break;
case 7:
{
unsigned char tmp[7];
tmp = va_arg(ap, unsigned char[7]);
item->data = list_save_me_i(7, tmp);
}
break;
case 8:
{
unsigned char tmp[8];
tmp = va_arg(ap, unsigned char[8]);
item->data = list_save_me_i(8, tmp);
}
break;
case 9:
{
unsigned char tmp[9];
tmp = va_arg(ap, unsigned char[9]);
item->data = list_save_me_i(9, tmp);
}
break;
case 10:
{
unsigned char tmp[10];
tmp = va_arg(ap, unsigned char[10]);
item->data = list_save_me_i(10, tmp);
}
break;
case 11:
{
unsigned char tmp[11];
tmp = va_arg(ap, unsigned char[11]);
item->data = list_save_me_i(11, tmp);
}
break;
case 12:
{
unsigned char tmp[12];
tmp = va_arg(ap, unsigned char[12]);
item->data = list_save_me_i(12, tmp);
}
break;
case 13:
{
unsigned char tmp[13];
tmp = va_arg(ap, unsigned char[13]);
item->data = list_save_me_i(13, tmp);
}
break;
case 14:
{
unsigned char tmp[14];
tmp = va_arg(ap, unsigned char[14]);
item->data = list_save_me_i(14, tmp);
}
break;
case 15:
{
unsigned char tmp[15];
tmp = va_arg(ap, unsigned char[15]);
item->data = list_save_me_i(15, tmp);
}
break;
case 16:
{
unsigned char tmp[16];
tmp = va_arg(ap, unsigned char[16]);
item->data = list_save_me_i(16, tmp);
}
break;
case 17:
{
unsigned char tmp[17];
tmp = va_arg(ap, unsigned char[17]);
item->data = list_save_me_i(17, tmp);
}
break;
case 18:
{
unsigned char tmp[18];
tmp = va_arg(ap, unsigned char[18]);
item->data = list_save_me_i(18, tmp);
}
break;
case 19:
{
unsigned char tmp[19];
tmp = va_arg(ap, unsigned char[19]);
item->data = list_save_me_i(19, tmp);
}
break;
case 20:
{
unsigned char tmp[20];
tmp = va_arg(ap, unsigned char[20]);
item->data = list_save_me_i(20, tmp);
}
break;
case 21:
{
unsigned char tmp[21];
tmp = va_arg(ap, unsigned char[21]);
item->data = list_save_me_i(21, tmp);
}
break;
case 22:
{
unsigned char tmp[22];
tmp = va_arg(ap, unsigned char[22]);
item->data = list_save_me_i(22, tmp);
}
break;
case 23:
{
unsigned char tmp[23];
tmp = va_arg(ap, unsigned char[23]);
item->data = list_save_me_i(23, tmp);
}
break;
case 24:
{
unsigned char tmp[24];
tmp = va_arg(ap, unsigned char[24]);
item->data = list_save_me_i(24, tmp);
}
break;
case 25:
{
unsigned char tmp[25];
tmp = va_arg(ap, unsigned char[25]);
item->data = list_save_me_i(25, tmp);
}
break;
case 26:
{
unsigned char tmp[26];
tmp = va_arg(ap, unsigned char[26]);
item->data = list_save_me_i(26, tmp);
}
break;
case 27:
{
unsigned char tmp[27];
tmp = va_arg(ap, unsigned char[27]);
item->data = list_save_me_i(27, tmp);
}
break;
case 28:
{
unsigned char tmp[28];
tmp = va_arg(ap, unsigned char[28]);
item->data = list_save_me_i(28, tmp);
}
break;
case 29:
{
unsigned char tmp[29];
tmp = va_arg(ap, unsigned char[29]);
item->data = list_save_me_i(29, tmp);
}
break;
case 30:
{
unsigned char tmp[30];
tmp = va_arg(ap, unsigned char[30]);
item->data = list_save_me_i(30, tmp);
}
break;
case 31:
{
unsigned char tmp[31];
tmp = va_arg(ap, unsigned char[31]);
item->data = list_save_me_i(31, tmp);
}
break;
case 32:
{
unsigned char tmp[32];
tmp = va_arg(ap, unsigned char[32]);
item->data = list_save_me_i(32, tmp);
}
break;
case 33:
{
unsigned char tmp[33];
tmp = va_arg(ap, unsigned char[33]);
item->data = list_save_me_i(33, tmp);
}
break;
case 34:
{
unsigned char tmp[34];
tmp = va_arg(ap, unsigned char[34]);
item->data = list_save_me_i(34, tmp);
}
break;
case 35:
{
unsigned char tmp[35];
tmp = va_arg(ap, unsigned char[35]);
item->data = list_save_me_i(35, tmp);
}
break;
case 36:
{
unsigned char tmp[36];
tmp = va_arg(ap, unsigned char[36]);
item->data = list_save_me_i(36, tmp);
}
break;
case 37:
{
unsigned char tmp[37];
tmp = va_arg(ap, unsigned char[37]);
item->data = list_save_me_i(37, tmp);
}
break;
case 38:
{
unsigned char tmp[38];
tmp = va_arg(ap, unsigned char[38]);
item->data = list_save_me_i(38, tmp);
}
break;
case 39:
{
unsigned char tmp[39];
tmp = va_arg(ap, unsigned char[39]);
item->data = list_save_me_i(39, tmp);
}
break;
case 40:
{
unsigned char tmp[40];
tmp = va_arg(ap, unsigned char[40]);
item->data = list_save_me_i(40, tmp);
}
break;
case 41:
{
unsigned char tmp[41];
tmp = va_arg(ap, unsigned char[41]);
item->data = list_save_me_i(41, tmp);
}
break;
case 42:
{
unsigned char tmp[42];
tmp = va_arg(ap, unsigned char[42]);
item->data = list_save_me_i(42, tmp);
}
break;
case 43:
{
unsigned char tmp[43];
tmp = va_arg(ap, unsigned char[43]);
item->data = list_save_me_i(43, tmp);
}
break;
case 44:
{
unsigned char tmp[44];
tmp = va_arg(ap, unsigned char[44]);
item->data = list_save_me_i(44, tmp);
}
break;
case 45:
{
unsigned char tmp[45];
tmp = va_arg(ap, unsigned char[45]);
item->data = list_save_me_i(45, tmp);
}
break;
case 46:
{
unsigned char tmp[46];
tmp = va_arg(ap, unsigned char[46]);
item->data = list_save_me_i(46, tmp);
}
break;
case 47:
{
unsigned char tmp[47];
tmp = va_arg(ap, unsigned char[47]);
item->data = list_save_me_i(47, tmp);
}
break;
case 48:
{
unsigned char tmp[48];
tmp = va_arg(ap, unsigned char[48]);
item->data = list_save_me_i(48, tmp);
}
break;
case 49:
{
unsigned char tmp[49];
tmp = va_arg(ap, unsigned char[49]);
item->data = list_save_me_i(49, tmp);
}
break;
case 50:
{
unsigned char tmp[50];
tmp = va_arg(ap, unsigned char[50]);
item->data = list_save_me_i(50, tmp);
}
break;
case 51:
{
unsigned char tmp[51];
tmp = va_arg(ap, unsigned char[51]);
item->data = list_save_me_i(51, tmp);
}
break;
case 52:
{
unsigned char tmp[52];
tmp = va_arg(ap, unsigned char[52]);
item->data = list_save_me_i(52, tmp);
}
break;
case 53:
{
unsigned char tmp[53];
tmp = va_arg(ap, unsigned char[53]);
item->data = list_save_me_i(53, tmp);
}
break;
case 54:
{
unsigned char tmp[54];
tmp = va_arg(ap, unsigned char[54]);
item->data = list_save_me_i(54, tmp);
}
break;
case 55:
{
unsigned char tmp[55];
tmp = va_arg(ap, unsigned char[55]);
item->data = list_save_me_i(55, tmp);
}
break;
case 56:
{
unsigned char tmp[56];
tmp = va_arg(ap, unsigned char[56]);
item->data = list_save_me_i(56, tmp);
}
break;
case 57:
{
unsigned char tmp[57];
tmp = va_arg(ap, unsigned char[57]);
item->data = list_save_me_i(57, tmp);
}
break;
case 58:
{
unsigned char tmp[58];
tmp = va_arg(ap, unsigned char[58]);
item->data = list_save_me_i(58, tmp);
}
break;
case 59:
{
unsigned char tmp[59];
tmp = va_arg(ap, unsigned char[59]);
item->data = list_save_me_i(59, tmp);
}
break;
case 60:
{
unsigned char tmp[60];
tmp = va_arg(ap, unsigned char[60]);
item->data = list_save_me_i(60, tmp);
}
break;
case 61:
{
unsigned char tmp[61];
tmp = va_arg(ap, unsigned char[61]);
item->data = list_save_me_i(61, tmp);
}
break;
case 62:
{
unsigned char tmp[62];
tmp = va_arg(ap, unsigned char[62]);
item->data = list_save_me_i(62, tmp);
}
break;
case 63:
{
unsigned char tmp[63];
tmp = va_arg(ap, unsigned char[63]);
item->data = list_save_me_i(63, tmp);
}
break;
case 64:
{
unsigned char tmp[64];
tmp = va_arg(ap, unsigned char[64]);
item->data = list_save_me_i(64, tmp);
}
break;
case 65:
{
unsigned char tmp[65];
tmp = va_arg(ap, unsigned char[65]);
item->data = list_save_me_i(65, tmp);
}
break;
case 66:
{
unsigned char tmp[66];
tmp = va_arg(ap, unsigned char[66]);
item->data = list_save_me_i(66, tmp);
}
break;
case 67:
{
unsigned char tmp[67];
tmp = va_arg(ap, unsigned char[67]);
item->data = list_save_me_i(67, tmp);
}
break;
case 68:
{
unsigned char tmp[68];
tmp = va_arg(ap, unsigned char[68]);
item->data = list_save_me_i(68, tmp);
}
break;
case 69:
{
unsigned char tmp[69];
tmp = va_arg(ap, unsigned char[69]);
item->data = list_save_me_i(69, tmp);
}
break;
case 70:
{
unsigned char tmp[70];
tmp = va_arg(ap, unsigned char[70]);
item->data = list_save_me_i(70, tmp);
}
break;
case 71:
{
unsigned char tmp[71];
tmp = va_arg(ap, unsigned char[71]);
item->data = list_save_me_i(71, tmp);
}
break;
case 72:
{
unsigned char tmp[72];
tmp = va_arg(ap, unsigned char[72]);
item->data = list_save_me_i(72, tmp);
}
break;
case 73:
{
unsigned char tmp[73];
tmp = va_arg(ap, unsigned char[73]);
item->data = list_save_me_i(73, tmp);
}
break;
case 74:
{
unsigned char tmp[74];
tmp = va_arg(ap, unsigned char[74]);
item->data = list_save_me_i(74, tmp);
}
break;
case 75:
{
unsigned char tmp[75];
tmp = va_arg(ap, unsigned char[75]);
item->data = list_save_me_i(75, tmp);
}
break;
case 76:
{
unsigned char tmp[76];
tmp = va_arg(ap, unsigned char[76]);
item->data = list_save_me_i(76, tmp);
}
break;
case 77:
{
unsigned char tmp[77];
tmp = va_arg(ap, unsigned char[77]);
item->data = list_save_me_i(77, tmp);
}
break;
case 78:
{
unsigned char tmp[78];
tmp = va_arg(ap, unsigned char[78]);
item->data = list_save_me_i(78, tmp);
}
break;
case 79:
{
unsigned char tmp[79];
tmp = va_arg(ap, unsigned char[79]);
item->data = list_save_me_i(79, tmp);
}
break;
case 80:
{
unsigned char tmp[80];
tmp = va_arg(ap, unsigned char[80]);
item->data = list_save_me_i(80, tmp);
}
break;
case 81:
{
unsigned char tmp[81];
tmp = va_arg(ap, unsigned char[81]);
item->data = list_save_me_i(81, tmp);
}
break;
case 82:
{
unsigned char tmp[82];
tmp = va_arg(ap, unsigned char[82]);
item->data = list_save_me_i(82, tmp);
}
break;
case 83:
{
unsigned char tmp[83];
tmp = va_arg(ap, unsigned char[83]);
item->data = list_save_me_i(83, tmp);
}
break;
case 84:
{
unsigned char tmp[84];
tmp = va_arg(ap, unsigned char[84]);
item->data = list_save_me_i(84, tmp);
}
break;
case 85:
{
unsigned char tmp[85];
tmp = va_arg(ap, unsigned char[85]);
item->data = list_save_me_i(85, tmp);
}
break;
case 86:
{
unsigned char tmp[86];
tmp = va_arg(ap, unsigned char[86]);
item->data = list_save_me_i(86, tmp);
}
break;
case 87:
{
unsigned char tmp[87];
tmp = va_arg(ap, unsigned char[87]);
item->data = list_save_me_i(87, tmp);
}
break;
case 88:
{
unsigned char tmp[88];
tmp = va_arg(ap, unsigned char[88]);
item->data = list_save_me_i(88, tmp);
}
break;
case 89:
{
unsigned char tmp[89];
tmp = va_arg(ap, unsigned char[89]);
item->data = list_save_me_i(89, tmp);
}
break;
case 90:
{
unsigned char tmp[90];
tmp = va_arg(ap, unsigned char[90]);
item->data = list_save_me_i(90, tmp);
}
break;
case 91:
{
unsigned char tmp[91];
tmp = va_arg(ap, unsigned char[91]);
item->data = list_save_me_i(91, tmp);
}
break;
case 92:
{
unsigned char tmp[92];
tmp = va_arg(ap, unsigned char[92]);
item->data = list_save_me_i(92, tmp);
}
break;
case 93:
{
unsigned char tmp[93];
tmp = va_arg(ap, unsigned char[93]);
item->data = list_save_me_i(93, tmp);
}
break;
case 94:
{
unsigned char tmp[94];
tmp = va_arg(ap, unsigned char[94]);
item->data = list_save_me_i(94, tmp);
}
break;
case 95:
{
unsigned char tmp[95];
tmp = va_arg(ap, unsigned char[95]);
item->data = list_save_me_i(95, tmp);
}
break;
case 96:
{
unsigned char tmp[96];
tmp = va_arg(ap, unsigned char[96]);
item->data = list_save_me_i(96, tmp);
}
break;
case 97:
{
unsigned char tmp[97];
tmp = va_arg(ap, unsigned char[97]);
item->data = list_save_me_i(97, tmp);
}
break;
case 98:
{
unsigned char tmp[98];
tmp = va_arg(ap, unsigned char[98]);
item->data = list_save_me_i(98, tmp);
}
break;
case 99:
{
unsigned char tmp[99];
tmp = va_arg(ap, unsigned char[99]);
item->data = list_save_me_i(99, tmp);
}
break;
case 100:
{
unsigned char tmp[100];
tmp = va_arg(ap, unsigned char[100]);
item->data = list_save_me_i(100, tmp);
}
break;
case 101:
{
unsigned char tmp[101];
tmp = va_arg(ap, unsigned char[101]);
item->data = list_save_me_i(101, tmp);
}
break;
case 102:
{
unsigned char tmp[102];
tmp = va_arg(ap, unsigned char[102]);
item->data = list_save_me_i(102, tmp);
}
break;
case 103:
{
unsigned char tmp[103];
tmp = va_arg(ap, unsigned char[103]);
item->data = list_save_me_i(103, tmp);
}
break;
case 104:
{
unsigned char tmp[104];
tmp = va_arg(ap, unsigned char[104]);
item->data = list_save_me_i(104, tmp);
}
break;
case 105:
{
unsigned char tmp[105];
tmp = va_arg(ap, unsigned char[105]);
item->data = list_save_me_i(105, tmp);
}
break;
case 106:
{
unsigned char tmp[106];
tmp = va_arg(ap, unsigned char[106]);
item->data = list_save_me_i(106, tmp);
}
break;
case 107:
{
unsigned char tmp[107];
tmp = va_arg(ap, unsigned char[107]);
item->data = list_save_me_i(107, tmp);
}
break;
case 108:
{
unsigned char tmp[108];
tmp = va_arg(ap, unsigned char[108]);
item->data = list_save_me_i(108, tmp);
}
break;
case 109:
{
unsigned char tmp[109];
tmp = va_arg(ap, unsigned char[109]);
item->data = list_save_me_i(109, tmp);
}
break;
case 110:
{
unsigned char tmp[110];
tmp = va_arg(ap, unsigned char[110]);
item->data = list_save_me_i(110, tmp);
}
break;
case 111:
{
unsigned char tmp[111];
tmp = va_arg(ap, unsigned char[111]);
item->data = list_save_me_i(111, tmp);
}
break;
case 112:
{
unsigned char tmp[112];
tmp = va_arg(ap, unsigned char[112]);
item->data = list_save_me_i(112, tmp);
}
break;
case 113:
{
unsigned char tmp[113];
tmp = va_arg(ap, unsigned char[113]);
item->data = list_save_me_i(113, tmp);
}
break;
case 114:
{
unsigned char tmp[114];
tmp = va_arg(ap, unsigned char[114]);
item->data = list_save_me_i(114, tmp);
}
break;
case 115:
{
unsigned char tmp[115];
tmp = va_arg(ap, unsigned char[115]);
item->data = list_save_me_i(115, tmp);
}
break;
case 116:
{
unsigned char tmp[116];
tmp = va_arg(ap, unsigned char[116]);
item->data = list_save_me_i(116, tmp);
}
break;
case 117:
{
unsigned char tmp[117];
tmp = va_arg(ap, unsigned char[117]);
item->data = list_save_me_i(117, tmp);
}
break;
case 118:
{
unsigned char tmp[118];
tmp = va_arg(ap, unsigned char[118]);
item->data = list_save_me_i(118, tmp);
}
break;
case 119:
{
unsigned char tmp[119];
tmp = va_arg(ap, unsigned char[119]);
item->data = list_save_me_i(119, tmp);
}
break;
case 120:
{
unsigned char tmp[120];
tmp = va_arg(ap, unsigned char[120]);
item->data = list_save_me_i(120, tmp);
}
break;
case 121:
{
unsigned char tmp[121];
tmp = va_arg(ap, unsigned char[121]);
item->data = list_save_me_i(121, tmp);
}
break;
case 122:
{
unsigned char tmp[122];
tmp = va_arg(ap, unsigned char[122]);
item->data = list_save_me_i(122, tmp);
}
break;
case 123:
{
unsigned char tmp[123];
tmp = va_arg(ap, unsigned char[123]);
item->data = list_save_me_i(123, tmp);
}
break;
case 124:
{
unsigned char tmp[124];
tmp = va_arg(ap, unsigned char[124]);
item->data = list_save_me_i(124, tmp);
}
break;
case 125:
{
unsigned char tmp[125];
tmp = va_arg(ap, unsigned char[125]);
item->data = list_save_me_i(125, tmp);
}
break;
case 126:
{
unsigned char tmp[126];
tmp = va_arg(ap, unsigned char[126]);
item->data = list_save_me_i(126, tmp);
}
break;
case 127:
{
unsigned char tmp[127];
tmp = va_arg(ap, unsigned char[127]);
item->data = list_save_me_i(127, tmp);
}
break;
case 128:
{
unsigned char tmp[128];
tmp = va_arg(ap, unsigned char[128]);
item->data = list_save_me_i(128, tmp);
}
break;
case 129:
{
unsigned char tmp[129];
tmp = va_arg(ap, unsigned char[129]);
item->data = list_save_me_i(129, tmp);
}
break;
case 130:
{
unsigned char tmp[130];
tmp = va_arg(ap, unsigned char[130]);
item->data = list_save_me_i(130, tmp);
}
break;
case 131:
{
unsigned char tmp[131];
tmp = va_arg(ap, unsigned char[131]);
item->data = list_save_me_i(131, tmp);
}
break;
case 132:
{
unsigned char tmp[132];
tmp = va_arg(ap, unsigned char[132]);
item->data = list_save_me_i(132, tmp);
}
break;
case 133:
{
unsigned char tmp[133];
tmp = va_arg(ap, unsigned char[133]);
item->data = list_save_me_i(133, tmp);
}
break;
case 134:
{
unsigned char tmp[134];
tmp = va_arg(ap, unsigned char[134]);
item->data = list_save_me_i(134, tmp);
}
break;
case 135:
{
unsigned char tmp[135];
tmp = va_arg(ap, unsigned char[135]);
item->data = list_save_me_i(135, tmp);
}
break;
case 136:
{
unsigned char tmp[136];
tmp = va_arg(ap, unsigned char[136]);
item->data = list_save_me_i(136, tmp);
}
break;
case 137:
{
unsigned char tmp[137];
tmp = va_arg(ap, unsigned char[137]);
item->data = list_save_me_i(137, tmp);
}
break;
case 138:
{
unsigned char tmp[138];
tmp = va_arg(ap, unsigned char[138]);
item->data = list_save_me_i(138, tmp);
}
break;
case 139:
{
unsigned char tmp[139];
tmp = va_arg(ap, unsigned char[139]);
item->data = list_save_me_i(139, tmp);
}
break;
case 140:
{
unsigned char tmp[140];
tmp = va_arg(ap, unsigned char[140]);
item->data = list_save_me_i(140, tmp);
}
break;
case 141:
{
unsigned char tmp[141];
tmp = va_arg(ap, unsigned char[141]);
item->data = list_save_me_i(141, tmp);
}
break;
case 142:
{
unsigned char tmp[142];
tmp = va_arg(ap, unsigned char[142]);
item->data = list_save_me_i(142, tmp);
}
break;
case 143:
{
unsigned char tmp[143];
tmp = va_arg(ap, unsigned char[143]);
item->data = list_save_me_i(143, tmp);
}
break;
case 144:
{
unsigned char tmp[144];
tmp = va_arg(ap, unsigned char[144]);
item->data = list_save_me_i(144, tmp);
}
break;
case 145:
{
unsigned char tmp[145];
tmp = va_arg(ap, unsigned char[145]);
item->data = list_save_me_i(145, tmp);
}
break;
case 146:
{
unsigned char tmp[146];
tmp = va_arg(ap, unsigned char[146]);
item->data = list_save_me_i(146, tmp);
}
break;
case 147:
{
unsigned char tmp[147];
tmp = va_arg(ap, unsigned char[147]);
item->data = list_save_me_i(147, tmp);
}
break;
case 148:
{
unsigned char tmp[148];
tmp = va_arg(ap, unsigned char[148]);
item->data = list_save_me_i(148, tmp);
}
break;
case 149:
{
unsigned char tmp[149];
tmp = va_arg(ap, unsigned char[149]);
item->data = list_save_me_i(149, tmp);
}
break;
case 150:
{
unsigned char tmp[150];
tmp = va_arg(ap, unsigned char[150]);
item->data = list_save_me_i(150, tmp);
}
break;
case 151:
{
unsigned char tmp[151];
tmp = va_arg(ap, unsigned char[151]);
item->data = list_save_me_i(151, tmp);
}
break;
case 152:
{
unsigned char tmp[152];
tmp = va_arg(ap, unsigned char[152]);
item->data = list_save_me_i(152, tmp);
}
break;
case 153:
{
unsigned char tmp[153];
tmp = va_arg(ap, unsigned char[153]);
item->data = list_save_me_i(153, tmp);
}
break;
case 154:
{
unsigned char tmp[154];
tmp = va_arg(ap, unsigned char[154]);
item->data = list_save_me_i(154, tmp);
}
break;
case 155:
{
unsigned char tmp[155];
tmp = va_arg(ap, unsigned char[155]);
item->data = list_save_me_i(155, tmp);
}
break;
case 156:
{
unsigned char tmp[156];
tmp = va_arg(ap, unsigned char[156]);
item->data = list_save_me_i(156, tmp);
}
break;
case 157:
{
unsigned char tmp[157];
tmp = va_arg(ap, unsigned char[157]);
item->data = list_save_me_i(157, tmp);
}
break;
case 158:
{
unsigned char tmp[158];
tmp = va_arg(ap, unsigned char[158]);
item->data = list_save_me_i(158, tmp);
}
break;
case 159:
{
unsigned char tmp[159];
tmp = va_arg(ap, unsigned char[159]);
item->data = list_save_me_i(159, tmp);
}
break;
case 160:
{
unsigned char tmp[160];
tmp = va_arg(ap, unsigned char[160]);
item->data = list_save_me_i(160, tmp);
}
break;
case 161:
{
unsigned char tmp[161];
tmp = va_arg(ap, unsigned char[161]);
item->data = list_save_me_i(161, tmp);
}
break;
case 162:
{
unsigned char tmp[162];
tmp = va_arg(ap, unsigned char[162]);
item->data = list_save_me_i(162, tmp);
}
break;
case 163:
{
unsigned char tmp[163];
tmp = va_arg(ap, unsigned char[163]);
item->data = list_save_me_i(163, tmp);
}
break;
case 164:
{
unsigned char tmp[164];
tmp = va_arg(ap, unsigned char[164]);
item->data = list_save_me_i(164, tmp);
}
break;
case 165:
{
unsigned char tmp[165];
tmp = va_arg(ap, unsigned char[165]);
item->data = list_save_me_i(165, tmp);
}
break;
case 166:
{
unsigned char tmp[166];
tmp = va_arg(ap, unsigned char[166]);
item->data = list_save_me_i(166, tmp);
}
break;
case 167:
{
unsigned char tmp[167];
tmp = va_arg(ap, unsigned char[167]);
item->data = list_save_me_i(167, tmp);
}
break;
case 168:
{
unsigned char tmp[168];
tmp = va_arg(ap, unsigned char[168]);
item->data = list_save_me_i(168, tmp);
}
break;
case 169:
{
unsigned char tmp[169];
tmp = va_arg(ap, unsigned char[169]);
item->data = list_save_me_i(169, tmp);
}
break;
case 170:
{
unsigned char tmp[170];
tmp = va_arg(ap, unsigned char[170]);
item->data = list_save_me_i(170, tmp);
}
break;
case 171:
{
unsigned char tmp[171];
tmp = va_arg(ap, unsigned char[171]);
item->data = list_save_me_i(171, tmp);
}
break;
case 172:
{
unsigned char tmp[172];
tmp = va_arg(ap, unsigned char[172]);
item->data = list_save_me_i(172, tmp);
}
break;
case 173:
{
unsigned char tmp[173];
tmp = va_arg(ap, unsigned char[173]);
item->data = list_save_me_i(173, tmp);
}
break;
case 174:
{
unsigned char tmp[174];
tmp = va_arg(ap, unsigned char[174]);
item->data = list_save_me_i(174, tmp);
}
break;
case 175:
{
unsigned char tmp[175];
tmp = va_arg(ap, unsigned char[175]);
item->data = list_save_me_i(175, tmp);
}
break;
case 176:
{
unsigned char tmp[176];
tmp = va_arg(ap, unsigned char[176]);
item->data = list_save_me_i(176, tmp);
}
break;
case 177:
{
unsigned char tmp[177];
tmp = va_arg(ap, unsigned char[177]);
item->data = list_save_me_i(177, tmp);
}
break;
case 178:
{
unsigned char tmp[178];
tmp = va_arg(ap, unsigned char[178]);
item->data = list_save_me_i(178, tmp);
}
break;
case 179:
{
unsigned char tmp[179];
tmp = va_arg(ap, unsigned char[179]);
item->data = list_save_me_i(179, tmp);
}
break;
case 180:
{
unsigned char tmp[180];
tmp = va_arg(ap, unsigned char[180]);
item->data = list_save_me_i(180, tmp);
}
break;
case 181:
{
unsigned char tmp[181];
tmp = va_arg(ap, unsigned char[181]);
item->data = list_save_me_i(181, tmp);
}
break;
case 182:
{
unsigned char tmp[182];
tmp = va_arg(ap, unsigned char[182]);
item->data = list_save_me_i(182, tmp);
}
break;
case 183:
{
unsigned char tmp[183];
tmp = va_arg(ap, unsigned char[183]);
item->data = list_save_me_i(183, tmp);
}
break;
case 184:
{
unsigned char tmp[184];
tmp = va_arg(ap, unsigned char[184]);
item->data = list_save_me_i(184, tmp);
}
break;
case 185:
{
unsigned char tmp[185];
tmp = va_arg(ap, unsigned char[185]);
item->data = list_save_me_i(185, tmp);
}
break;
case 186:
{
unsigned char tmp[186];
tmp = va_arg(ap, unsigned char[186]);
item->data = list_save_me_i(186, tmp);
}
break;
case 187:
{
unsigned char tmp[187];
tmp = va_arg(ap, unsigned char[187]);
item->data = list_save_me_i(187, tmp);
}
break;
case 188:
{
unsigned char tmp[188];
tmp = va_arg(ap, unsigned char[188]);
item->data = list_save_me_i(188, tmp);
}
break;
case 189:
{
unsigned char tmp[189];
tmp = va_arg(ap, unsigned char[189]);
item->data = list_save_me_i(189, tmp);
}
break;
case 190:
{
unsigned char tmp[190];
tmp = va_arg(ap, unsigned char[190]);
item->data = list_save_me_i(190, tmp);
}
break;
case 191:
{
unsigned char tmp[191];
tmp = va_arg(ap, unsigned char[191]);
item->data = list_save_me_i(191, tmp);
}
break;
case 192:
{
unsigned char tmp[192];
tmp = va_arg(ap, unsigned char[192]);
item->data = list_save_me_i(192, tmp);
}
break;
case 193:
{
unsigned char tmp[193];
tmp = va_arg(ap, unsigned char[193]);
item->data = list_save_me_i(193, tmp);
}
break;
case 194:
{
unsigned char tmp[194];
tmp = va_arg(ap, unsigned char[194]);
item->data = list_save_me_i(194, tmp);
}
break;
case 195:
{
unsigned char tmp[195];
tmp = va_arg(ap, unsigned char[195]);
item->data = list_save_me_i(195, tmp);
}
break;
case 196:
{
unsigned char tmp[196];
tmp = va_arg(ap, unsigned char[196]);
item->data = list_save_me_i(196, tmp);
}
break;
case 197:
{
unsigned char tmp[197];
tmp = va_arg(ap, unsigned char[197]);
item->data = list_save_me_i(197, tmp);
}
break;
case 198:
{
unsigned char tmp[198];
tmp = va_arg(ap, unsigned char[198]);
item->data = list_save_me_i(198, tmp);
}
break;
case 199:
{
unsigned char tmp[199];
tmp = va_arg(ap, unsigned char[199]);
item->data = list_save_me_i(199, tmp);
}
break;
case 200:
{
unsigned char tmp[200];
tmp = va_arg(ap, unsigned char[200]);
item->data = list_save_me_i(200, tmp);
}
break;
case 201:
{
unsigned char tmp[201];
tmp = va_arg(ap, unsigned char[201]);
item->data = list_save_me_i(201, tmp);
}
break;
case 202:
{
unsigned char tmp[202];
tmp = va_arg(ap, unsigned char[202]);
item->data = list_save_me_i(202, tmp);
}
break;
case 203:
{
unsigned char tmp[203];
tmp = va_arg(ap, unsigned char[203]);
item->data = list_save_me_i(203, tmp);
}
break;
case 204:
{
unsigned char tmp[204];
tmp = va_arg(ap, unsigned char[204]);
item->data = list_save_me_i(204, tmp);
}
break;
case 205:
{
unsigned char tmp[205];
tmp = va_arg(ap, unsigned char[205]);
item->data = list_save_me_i(205, tmp);
}
break;
case 206:
{
unsigned char tmp[206];
tmp = va_arg(ap, unsigned char[206]);
item->data = list_save_me_i(206, tmp);
}
break;
case 207:
{
unsigned char tmp[207];
tmp = va_arg(ap, unsigned char[207]);
item->data = list_save_me_i(207, tmp);
}
break;
case 208:
{
unsigned char tmp[208];
tmp = va_arg(ap, unsigned char[208]);
item->data = list_save_me_i(208, tmp);
}
break;
case 209:
{
unsigned char tmp[209];
tmp = va_arg(ap, unsigned char[209]);
item->data = list_save_me_i(209, tmp);
}
break;
case 210:
{
unsigned char tmp[210];
tmp = va_arg(ap, unsigned char[210]);
item->data = list_save_me_i(210, tmp);
}
break;
case 211:
{
unsigned char tmp[211];
tmp = va_arg(ap, unsigned char[211]);
item->data = list_save_me_i(211, tmp);
}
break;
case 212:
{
unsigned char tmp[212];
tmp = va_arg(ap, unsigned char[212]);
item->data = list_save_me_i(212, tmp);
}
break;
case 213:
{
unsigned char tmp[213];
tmp = va_arg(ap, unsigned char[213]);
item->data = list_save_me_i(213, tmp);
}
break;
case 214:
{
unsigned char tmp[214];
tmp = va_arg(ap, unsigned char[214]);
item->data = list_save_me_i(214, tmp);
}
break;
case 215:
{
unsigned char tmp[215];
tmp = va_arg(ap, unsigned char[215]);
item->data = list_save_me_i(215, tmp);
}
break;
case 216:
{
unsigned char tmp[216];
tmp = va_arg(ap, unsigned char[216]);
item->data = list_save_me_i(216, tmp);
}
break;
case 217:
{
unsigned char tmp[217];
tmp = va_arg(ap, unsigned char[217]);
item->data = list_save_me_i(217, tmp);
}
break;
case 218:
{
unsigned char tmp[218];
tmp = va_arg(ap, unsigned char[218]);
item->data = list_save_me_i(218, tmp);
}
break;
case 219:
{
unsigned char tmp[219];
tmp = va_arg(ap, unsigned char[219]);
item->data = list_save_me_i(219, tmp);
}
break;
case 220:
{
unsigned char tmp[220];
tmp = va_arg(ap, unsigned char[220]);
item->data = list_save_me_i(220, tmp);
}
break;
case 221:
{
unsigned char tmp[221];
tmp = va_arg(ap, unsigned char[221]);
item->data = list_save_me_i(221, tmp);
}
break;
case 222:
{
unsigned char tmp[222];
tmp = va_arg(ap, unsigned char[222]);
item->data = list_save_me_i(222, tmp);
}
break;
case 223:
{
unsigned char tmp[223];
tmp = va_arg(ap, unsigned char[223]);
item->data = list_save_me_i(223, tmp);
}
break;
case 224:
{
unsigned char tmp[224];
tmp = va_arg(ap, unsigned char[224]);
item->data = list_save_me_i(224, tmp);
}
break;
case 225:
{
unsigned char tmp[225];
tmp = va_arg(ap, unsigned char[225]);
item->data = list_save_me_i(225, tmp);
}
break;
case 226:
{
unsigned char tmp[226];
tmp = va_arg(ap, unsigned char[226]);
item->data = list_save_me_i(226, tmp);
}
break;
case 227:
{
unsigned char tmp[227];
tmp = va_arg(ap, unsigned char[227]);
item->data = list_save_me_i(227, tmp);
}
break;
case 228:
{
unsigned char tmp[228];
tmp = va_arg(ap, unsigned char[228]);
item->data = list_save_me_i(228, tmp);
}
break;
case 229:
{
unsigned char tmp[229];
tmp = va_arg(ap, unsigned char[229]);
item->data = list_save_me_i(229, tmp);
}
break;
case 230:
{
unsigned char tmp[230];
tmp = va_arg(ap, unsigned char[230]);
item->data = list_save_me_i(230, tmp);
}
break;
case 231:
{
unsigned char tmp[231];
tmp = va_arg(ap, unsigned char[231]);
item->data = list_save_me_i(231, tmp);
}
break;
case 232:
{
unsigned char tmp[232];
tmp = va_arg(ap, unsigned char[232]);
item->data = list_save_me_i(232, tmp);
}
break;
case 233:
{
unsigned char tmp[233];
tmp = va_arg(ap, unsigned char[233]);
item->data = list_save_me_i(233, tmp);
}
break;
case 234:
{
unsigned char tmp[234];
tmp = va_arg(ap, unsigned char[234]);
item->data = list_save_me_i(234, tmp);
}
break;
case 235:
{
unsigned char tmp[235];
tmp = va_arg(ap, unsigned char[235]);
item->data = list_save_me_i(235, tmp);
}
break;
case 236:
{
unsigned char tmp[236];
tmp = va_arg(ap, unsigned char[236]);
item->data = list_save_me_i(236, tmp);
}
break;
case 237:
{
unsigned char tmp[237];
tmp = va_arg(ap, unsigned char[237]);
item->data = list_save_me_i(237, tmp);
}
break;
case 238:
{
unsigned char tmp[238];
tmp = va_arg(ap, unsigned char[238]);
item->data = list_save_me_i(238, tmp);
}
break;
case 239:
{
unsigned char tmp[239];
tmp = va_arg(ap, unsigned char[239]);
item->data = list_save_me_i(239, tmp);
}
break;
case 240:
{
unsigned char tmp[240];
tmp = va_arg(ap, unsigned char[240]);
item->data = list_save_me_i(240, tmp);
}
break;
case 241:
{
unsigned char tmp[241];
tmp = va_arg(ap, unsigned char[241]);
item->data = list_save_me_i(241, tmp);
}
break;
case 242:
{
unsigned char tmp[242];
tmp = va_arg(ap, unsigned char[242]);
item->data = list_save_me_i(242, tmp);
}
break;
case 243:
{
unsigned char tmp[243];
tmp = va_arg(ap, unsigned char[243]);
item->data = list_save_me_i(243, tmp);
}
break;
case 244:
{
unsigned char tmp[244];
tmp = va_arg(ap, unsigned char[244]);
item->data = list_save_me_i(244, tmp);
}
break;
case 245:
{
unsigned char tmp[245];
tmp = va_arg(ap, unsigned char[245]);
item->data = list_save_me_i(245, tmp);
}
break;
case 246:
{
unsigned char tmp[246];
tmp = va_arg(ap, unsigned char[246]);
item->data = list_save_me_i(246, tmp);
}
break;
case 247:
{
unsigned char tmp[247];
tmp = va_arg(ap, unsigned char[247]);
item->data = list_save_me_i(247, tmp);
}
break;
case 248:
{
unsigned char tmp[248];
tmp = va_arg(ap, unsigned char[248]);
item->data = list_save_me_i(248, tmp);
}
break;
case 249:
{
unsigned char tmp[249];
tmp = va_arg(ap, unsigned char[249]);
item->data = list_save_me_i(249, tmp);
}
break;
case 250:
{
unsigned char tmp[250];
tmp = va_arg(ap, unsigned char[250]);
item->data = list_save_me_i(250, tmp);
}
break;
case 251:
{
unsigned char tmp[251];
tmp = va_arg(ap, unsigned char[251]);
item->data = list_save_me_i(251, tmp);
}
break;
case 252:
{
unsigned char tmp[252];
tmp = va_arg(ap, unsigned char[252]);
item->data = list_save_me_i(252, tmp);
}
break;
case 253:
{
unsigned char tmp[253];
tmp = va_arg(ap, unsigned char[253]);
item->data = list_save_me_i(253, tmp);
}
break;
case 254:
{
unsigned char tmp[254];
tmp = va_arg(ap, unsigned char[254]);
item->data = list_save_me_i(254, tmp);
}
break;
case 255:
{
unsigned char tmp[255];
tmp = va_arg(ap, unsigned char[255]);
item->data = list_save_me_i(255, tmp);
}
break;
case 256:
{
unsigned char tmp[256];
tmp = va_arg(ap, unsigned char[256]);
item->data = list_save_me_i(256, tmp);
}
break;
case 257:
{
unsigned char tmp[257];
tmp = va_arg(ap, unsigned char[257]);
item->data = list_save_me_i(257, tmp);
}
break;
case 258:
{
unsigned char tmp[258];
tmp = va_arg(ap, unsigned char[258]);
item->data = list_save_me_i(258, tmp);
}
break;
case 259:
{
unsigned char tmp[259];
tmp = va_arg(ap, unsigned char[259]);
item->data = list_save_me_i(259, tmp);
}
break;
case 260:
{
unsigned char tmp[260];
tmp = va_arg(ap, unsigned char[260]);
item->data = list_save_me_i(260, tmp);
}
break;
case 261:
{
unsigned char tmp[261];
tmp = va_arg(ap, unsigned char[261]);
item->data = list_save_me_i(261, tmp);
}
break;
case 262:
{
unsigned char tmp[262];
tmp = va_arg(ap, unsigned char[262]);
item->data = list_save_me_i(262, tmp);
}
break;
case 263:
{
unsigned char tmp[263];
tmp = va_arg(ap, unsigned char[263]);
item->data = list_save_me_i(263, tmp);
}
break;
case 264:
{
unsigned char tmp[264];
tmp = va_arg(ap, unsigned char[264]);
item->data = list_save_me_i(264, tmp);
}
break;
case 265:
{
unsigned char tmp[265];
tmp = va_arg(ap, unsigned char[265]);
item->data = list_save_me_i(265, tmp);
}
break;
case 266:
{
unsigned char tmp[266];
tmp = va_arg(ap, unsigned char[266]);
item->data = list_save_me_i(266, tmp);
}
break;
case 267:
{
unsigned char tmp[267];
tmp = va_arg(ap, unsigned char[267]);
item->data = list_save_me_i(267, tmp);
}
break;
case 268:
{
unsigned char tmp[268];
tmp = va_arg(ap, unsigned char[268]);
item->data = list_save_me_i(268, tmp);
}
break;
case 269:
{
unsigned char tmp[269];
tmp = va_arg(ap, unsigned char[269]);
item->data = list_save_me_i(269, tmp);
}
break;
case 270:
{
unsigned char tmp[270];
tmp = va_arg(ap, unsigned char[270]);
item->data = list_save_me_i(270, tmp);
}
break;
case 271:
{
unsigned char tmp[271];
tmp = va_arg(ap, unsigned char[271]);
item->data = list_save_me_i(271, tmp);
}
break;
case 272:
{
unsigned char tmp[272];
tmp = va_arg(ap, unsigned char[272]);
item->data = list_save_me_i(272, tmp);
}
break;
case 273:
{
unsigned char tmp[273];
tmp = va_arg(ap, unsigned char[273]);
item->data = list_save_me_i(273, tmp);
}
break;
case 274:
{
unsigned char tmp[274];
tmp = va_arg(ap, unsigned char[274]);
item->data = list_save_me_i(274, tmp);
}
break;
case 275:
{
unsigned char tmp[275];
tmp = va_arg(ap, unsigned char[275]);
item->data = list_save_me_i(275, tmp);
}
break;
case 276:
{
unsigned char tmp[276];
tmp = va_arg(ap, unsigned char[276]);
item->data = list_save_me_i(276, tmp);
}
break;
case 277:
{
unsigned char tmp[277];
tmp = va_arg(ap, unsigned char[277]);
item->data = list_save_me_i(277, tmp);
}
break;
case 278:
{
unsigned char tmp[278];
tmp = va_arg(ap, unsigned char[278]);
item->data = list_save_me_i(278, tmp);
}
break;
case 279:
{
unsigned char tmp[279];
tmp = va_arg(ap, unsigned char[279]);
item->data = list_save_me_i(279, tmp);
}
break;
case 280:
{
unsigned char tmp[280];
tmp = va_arg(ap, unsigned char[280]);
item->data = list_save_me_i(280, tmp);
}
break;
case 281:
{
unsigned char tmp[281];
tmp = va_arg(ap, unsigned char[281]);
item->data = list_save_me_i(281, tmp);
}
break;
case 282:
{
unsigned char tmp[282];
tmp = va_arg(ap, unsigned char[282]);
item->data = list_save_me_i(282, tmp);
}
break;
case 283:
{
unsigned char tmp[283];
tmp = va_arg(ap, unsigned char[283]);
item->data = list_save_me_i(283, tmp);
}
break;
case 284:
{
unsigned char tmp[284];
tmp = va_arg(ap, unsigned char[284]);
item->data = list_save_me_i(284, tmp);
}
break;
case 285:
{
unsigned char tmp[285];
tmp = va_arg(ap, unsigned char[285]);
item->data = list_save_me_i(285, tmp);
}
break;
case 286:
{
unsigned char tmp[286];
tmp = va_arg(ap, unsigned char[286]);
item->data = list_save_me_i(286, tmp);
}
break;
case 287:
{
unsigned char tmp[287];
tmp = va_arg(ap, unsigned char[287]);
item->data = list_save_me_i(287, tmp);
}
break;
case 288:
{
unsigned char tmp[288];
tmp = va_arg(ap, unsigned char[288]);
item->data = list_save_me_i(288, tmp);
}
break;
case 289:
{
unsigned char tmp[289];
tmp = va_arg(ap, unsigned char[289]);
item->data = list_save_me_i(289, tmp);
}
break;
case 290:
{
unsigned char tmp[290];
tmp = va_arg(ap, unsigned char[290]);
item->data = list_save_me_i(290, tmp);
}
break;
case 291:
{
unsigned char tmp[291];
tmp = va_arg(ap, unsigned char[291]);
item->data = list_save_me_i(291, tmp);
}
break;
case 292:
{
unsigned char tmp[292];
tmp = va_arg(ap, unsigned char[292]);
item->data = list_save_me_i(292, tmp);
}
break;
case 293:
{
unsigned char tmp[293];
tmp = va_arg(ap, unsigned char[293]);
item->data = list_save_me_i(293, tmp);
}
break;
case 294:
{
unsigned char tmp[294];
tmp = va_arg(ap, unsigned char[294]);
item->data = list_save_me_i(294, tmp);
}
break;
case 295:
{
unsigned char tmp[295];
tmp = va_arg(ap, unsigned char[295]);
item->data = list_save_me_i(295, tmp);
}
break;
case 296:
{
unsigned char tmp[296];
tmp = va_arg(ap, unsigned char[296]);
item->data = list_save_me_i(296, tmp);
}
break;
case 297:
{
unsigned char tmp[297];
tmp = va_arg(ap, unsigned char[297]);
item->data = list_save_me_i(297, tmp);
}
break;
case 298:
{
unsigned char tmp[298];
tmp = va_arg(ap, unsigned char[298]);
item->data = list_save_me_i(298, tmp);
}
break;
case 299:
{
unsigned char tmp[299];
tmp = va_arg(ap, unsigned char[299]);
item->data = list_save_me_i(299, tmp);
}
break;
case 300:
{
unsigned char tmp[300];
tmp = va_arg(ap, unsigned char[300]);
item->data = list_save_me_i(300, tmp);
}
break;
case 301:
{
unsigned char tmp[301];
tmp = va_arg(ap, unsigned char[301]);
item->data = list_save_me_i(301, tmp);
}
break;
case 302:
{
unsigned char tmp[302];
tmp = va_arg(ap, unsigned char[302]);
item->data = list_save_me_i(302, tmp);
}
break;
case 303:
{
unsigned char tmp[303];
tmp = va_arg(ap, unsigned char[303]);
item->data = list_save_me_i(303, tmp);
}
break;
case 304:
{
unsigned char tmp[304];
tmp = va_arg(ap, unsigned char[304]);
item->data = list_save_me_i(304, tmp);
}
break;
case 305:
{
unsigned char tmp[305];
tmp = va_arg(ap, unsigned char[305]);
item->data = list_save_me_i(305, tmp);
}
break;
case 306:
{
unsigned char tmp[306];
tmp = va_arg(ap, unsigned char[306]);
item->data = list_save_me_i(306, tmp);
}
break;
case 307:
{
unsigned char tmp[307];
tmp = va_arg(ap, unsigned char[307]);
item->data = list_save_me_i(307, tmp);
}
break;
case 308:
{
unsigned char tmp[308];
tmp = va_arg(ap, unsigned char[308]);
item->data = list_save_me_i(308, tmp);
}
break;
case 309:
{
unsigned char tmp[309];
tmp = va_arg(ap, unsigned char[309]);
item->data = list_save_me_i(309, tmp);
}
break;
case 310:
{
unsigned char tmp[310];
tmp = va_arg(ap, unsigned char[310]);
item->data = list_save_me_i(310, tmp);
}
break;
case 311:
{
unsigned char tmp[311];
tmp = va_arg(ap, unsigned char[311]);
item->data = list_save_me_i(311, tmp);
}
break;
case 312:
{
unsigned char tmp[312];
tmp = va_arg(ap, unsigned char[312]);
item->data = list_save_me_i(312, tmp);
}
break;
case 313:
{
unsigned char tmp[313];
tmp = va_arg(ap, unsigned char[313]);
item->data = list_save_me_i(313, tmp);
}
break;
case 314:
{
unsigned char tmp[314];
tmp = va_arg(ap, unsigned char[314]);
item->data = list_save_me_i(314, tmp);
}
break;
case 315:
{
unsigned char tmp[315];
tmp = va_arg(ap, unsigned char[315]);
item->data = list_save_me_i(315, tmp);
}
break;
case 316:
{
unsigned char tmp[316];
tmp = va_arg(ap, unsigned char[316]);
item->data = list_save_me_i(316, tmp);
}
break;
case 317:
{
unsigned char tmp[317];
tmp = va_arg(ap, unsigned char[317]);
item->data = list_save_me_i(317, tmp);
}
break;
case 318:
{
unsigned char tmp[318];
tmp = va_arg(ap, unsigned char[318]);
item->data = list_save_me_i(318, tmp);
}
break;
case 319:
{
unsigned char tmp[319];
tmp = va_arg(ap, unsigned char[319]);
item->data = list_save_me_i(319, tmp);
}
break;
case 320:
{
unsigned char tmp[320];
tmp = va_arg(ap, unsigned char[320]);
item->data = list_save_me_i(320, tmp);
}
break;
case 321:
{
unsigned char tmp[321];
tmp = va_arg(ap, unsigned char[321]);
item->data = list_save_me_i(321, tmp);
}
break;
case 322:
{
unsigned char tmp[322];
tmp = va_arg(ap, unsigned char[322]);
item->data = list_save_me_i(322, tmp);
}
break;
case 323:
{
unsigned char tmp[323];
tmp = va_arg(ap, unsigned char[323]);
item->data = list_save_me_i(323, tmp);
}
break;
case 324:
{
unsigned char tmp[324];
tmp = va_arg(ap, unsigned char[324]);
item->data = list_save_me_i(324, tmp);
}
break;
case 325:
{
unsigned char tmp[325];
tmp = va_arg(ap, unsigned char[325]);
item->data = list_save_me_i(325, tmp);
}
break;
case 326:
{
unsigned char tmp[326];
tmp = va_arg(ap, unsigned char[326]);
item->data = list_save_me_i(326, tmp);
}
break;
case 327:
{
unsigned char tmp[327];
tmp = va_arg(ap, unsigned char[327]);
item->data = list_save_me_i(327, tmp);
}
break;
case 328:
{
unsigned char tmp[328];
tmp = va_arg(ap, unsigned char[328]);
item->data = list_save_me_i(328, tmp);
}
break;
case 329:
{
unsigned char tmp[329];
tmp = va_arg(ap, unsigned char[329]);
item->data = list_save_me_i(329, tmp);
}
break;
case 330:
{
unsigned char tmp[330];
tmp = va_arg(ap, unsigned char[330]);
item->data = list_save_me_i(330, tmp);
}
break;
case 331:
{
unsigned char tmp[331];
tmp = va_arg(ap, unsigned char[331]);
item->data = list_save_me_i(331, tmp);
}
break;
case 332:
{
unsigned char tmp[332];
tmp = va_arg(ap, unsigned char[332]);
item->data = list_save_me_i(332, tmp);
}
break;
case 333:
{
unsigned char tmp[333];
tmp = va_arg(ap, unsigned char[333]);
item->data = list_save_me_i(333, tmp);
}
break;
case 334:
{
unsigned char tmp[334];
tmp = va_arg(ap, unsigned char[334]);
item->data = list_save_me_i(334, tmp);
}
break;
case 335:
{
unsigned char tmp[335];
tmp = va_arg(ap, unsigned char[335]);
item->data = list_save_me_i(335, tmp);
}
break;
case 336:
{
unsigned char tmp[336];
tmp = va_arg(ap, unsigned char[336]);
item->data = list_save_me_i(336, tmp);
}
break;
case 337:
{
unsigned char tmp[337];
tmp = va_arg(ap, unsigned char[337]);
item->data = list_save_me_i(337, tmp);
}
break;
case 338:
{
unsigned char tmp[338];
tmp = va_arg(ap, unsigned char[338]);
item->data = list_save_me_i(338, tmp);
}
break;
case 339:
{
unsigned char tmp[339];
tmp = va_arg(ap, unsigned char[339]);
item->data = list_save_me_i(339, tmp);
}
break;
case 340:
{
unsigned char tmp[340];
tmp = va_arg(ap, unsigned char[340]);
item->data = list_save_me_i(340, tmp);
}
break;
case 341:
{
unsigned char tmp[341];
tmp = va_arg(ap, unsigned char[341]);
item->data = list_save_me_i(341, tmp);
}
break;
case 342:
{
unsigned char tmp[342];
tmp = va_arg(ap, unsigned char[342]);
item->data = list_save_me_i(342, tmp);
}
break;
case 343:
{
unsigned char tmp[343];
tmp = va_arg(ap, unsigned char[343]);
item->data = list_save_me_i(343, tmp);
}
break;
case 344:
{
unsigned char tmp[344];
tmp = va_arg(ap, unsigned char[344]);
item->data = list_save_me_i(344, tmp);
}
break;
case 345:
{
unsigned char tmp[345];
tmp = va_arg(ap, unsigned char[345]);
item->data = list_save_me_i(345, tmp);
}
break;
case 346:
{
unsigned char tmp[346];
tmp = va_arg(ap, unsigned char[346]);
item->data = list_save_me_i(346, tmp);
}
break;
case 347:
{
unsigned char tmp[347];
tmp = va_arg(ap, unsigned char[347]);
item->data = list_save_me_i(347, tmp);
}
break;
case 348:
{
unsigned char tmp[348];
tmp = va_arg(ap, unsigned char[348]);
item->data = list_save_me_i(348, tmp);
}
break;
case 349:
{
unsigned char tmp[349];
tmp = va_arg(ap, unsigned char[349]);
item->data = list_save_me_i(349, tmp);
}
break;
case 350:
{
unsigned char tmp[350];
tmp = va_arg(ap, unsigned char[350]);
item->data = list_save_me_i(350, tmp);
}
break;
case 351:
{
unsigned char tmp[351];
tmp = va_arg(ap, unsigned char[351]);
item->data = list_save_me_i(351, tmp);
}
break;
case 352:
{
unsigned char tmp[352];
tmp = va_arg(ap, unsigned char[352]);
item->data = list_save_me_i(352, tmp);
}
break;
case 353:
{
unsigned char tmp[353];
tmp = va_arg(ap, unsigned char[353]);
item->data = list_save_me_i(353, tmp);
}
break;
case 354:
{
unsigned char tmp[354];
tmp = va_arg(ap, unsigned char[354]);
item->data = list_save_me_i(354, tmp);
}
break;
case 355:
{
unsigned char tmp[355];
tmp = va_arg(ap, unsigned char[355]);
item->data = list_save_me_i(355, tmp);
}
break;
case 356:
{
unsigned char tmp[356];
tmp = va_arg(ap, unsigned char[356]);
item->data = list_save_me_i(356, tmp);
}
break;
case 357:
{
unsigned char tmp[357];
tmp = va_arg(ap, unsigned char[357]);
item->data = list_save_me_i(357, tmp);
}
break;
case 358:
{
unsigned char tmp[358];
tmp = va_arg(ap, unsigned char[358]);
item->data = list_save_me_i(358, tmp);
}
break;
case 359:
{
unsigned char tmp[359];
tmp = va_arg(ap, unsigned char[359]);
item->data = list_save_me_i(359, tmp);
}
break;
case 360:
{
unsigned char tmp[360];
tmp = va_arg(ap, unsigned char[360]);
item->data = list_save_me_i(360, tmp);
}
break;
case 361:
{
unsigned char tmp[361];
tmp = va_arg(ap, unsigned char[361]);
item->data = list_save_me_i(361, tmp);
}
break;
case 362:
{
unsigned char tmp[362];
tmp = va_arg(ap, unsigned char[362]);
item->data = list_save_me_i(362, tmp);
}
break;
case 363:
{
unsigned char tmp[363];
tmp = va_arg(ap, unsigned char[363]);
item->data = list_save_me_i(363, tmp);
}
break;
case 364:
{
unsigned char tmp[364];
tmp = va_arg(ap, unsigned char[364]);
item->data = list_save_me_i(364, tmp);
}
break;
case 365:
{
unsigned char tmp[365];
tmp = va_arg(ap, unsigned char[365]);
item->data = list_save_me_i(365, tmp);
}
break;
case 366:
{
unsigned char tmp[366];
tmp = va_arg(ap, unsigned char[366]);
item->data = list_save_me_i(366, tmp);
}
break;
case 367:
{
unsigned char tmp[367];
tmp = va_arg(ap, unsigned char[367]);
item->data = list_save_me_i(367, tmp);
}
break;
case 368:
{
unsigned char tmp[368];
tmp = va_arg(ap, unsigned char[368]);
item->data = list_save_me_i(368, tmp);
}
break;
case 369:
{
unsigned char tmp[369];
tmp = va_arg(ap, unsigned char[369]);
item->data = list_save_me_i(369, tmp);
}
break;
case 370:
{
unsigned char tmp[370];
tmp = va_arg(ap, unsigned char[370]);
item->data = list_save_me_i(370, tmp);
}
break;
case 371:
{
unsigned char tmp[371];
tmp = va_arg(ap, unsigned char[371]);
item->data = list_save_me_i(371, tmp);
}
break;
case 372:
{
unsigned char tmp[372];
tmp = va_arg(ap, unsigned char[372]);
item->data = list_save_me_i(372, tmp);
}
break;
case 373:
{
unsigned char tmp[373];
tmp = va_arg(ap, unsigned char[373]);
item->data = list_save_me_i(373, tmp);
}
break;
case 374:
{
unsigned char tmp[374];
tmp = va_arg(ap, unsigned char[374]);
item->data = list_save_me_i(374, tmp);
}
break;
case 375:
{
unsigned char tmp[375];
tmp = va_arg(ap, unsigned char[375]);
item->data = list_save_me_i(375, tmp);
}
break;
case 376:
{
unsigned char tmp[376];
tmp = va_arg(ap, unsigned char[376]);
item->data = list_save_me_i(376, tmp);
}
break;
case 377:
{
unsigned char tmp[377];
tmp = va_arg(ap, unsigned char[377]);
item->data = list_save_me_i(377, tmp);
}
break;
case 378:
{
unsigned char tmp[378];
tmp = va_arg(ap, unsigned char[378]);
item->data = list_save_me_i(378, tmp);
}
break;
case 379:
{
unsigned char tmp[379];
tmp = va_arg(ap, unsigned char[379]);
item->data = list_save_me_i(379, tmp);
}
break;
case 380:
{
unsigned char tmp[380];
tmp = va_arg(ap, unsigned char[380]);
item->data = list_save_me_i(380, tmp);
}
break;
case 381:
{
unsigned char tmp[381];
tmp = va_arg(ap, unsigned char[381]);
item->data = list_save_me_i(381, tmp);
}
break;
case 382:
{
unsigned char tmp[382];
tmp = va_arg(ap, unsigned char[382]);
item->data = list_save_me_i(382, tmp);
}
break;
case 383:
{
unsigned char tmp[383];
tmp = va_arg(ap, unsigned char[383]);
item->data = list_save_me_i(383, tmp);
}
break;
case 384:
{
unsigned char tmp[384];
tmp = va_arg(ap, unsigned char[384]);
item->data = list_save_me_i(384, tmp);
}
break;
case 385:
{
unsigned char tmp[385];
tmp = va_arg(ap, unsigned char[385]);
item->data = list_save_me_i(385, tmp);
}
break;
case 386:
{
unsigned char tmp[386];
tmp = va_arg(ap, unsigned char[386]);
item->data = list_save_me_i(386, tmp);
}
break;
case 387:
{
unsigned char tmp[387];
tmp = va_arg(ap, unsigned char[387]);
item->data = list_save_me_i(387, tmp);
}
break;
case 388:
{
unsigned char tmp[388];
tmp = va_arg(ap, unsigned char[388]);
item->data = list_save_me_i(388, tmp);
}
break;
case 389:
{
unsigned char tmp[389];
tmp = va_arg(ap, unsigned char[389]);
item->data = list_save_me_i(389, tmp);
}
break;
case 390:
{
unsigned char tmp[390];
tmp = va_arg(ap, unsigned char[390]);
item->data = list_save_me_i(390, tmp);
}
break;
case 391:
{
unsigned char tmp[391];
tmp = va_arg(ap, unsigned char[391]);
item->data = list_save_me_i(391, tmp);
}
break;
case 392:
{
unsigned char tmp[392];
tmp = va_arg(ap, unsigned char[392]);
item->data = list_save_me_i(392, tmp);
}
break;
case 393:
{
unsigned char tmp[393];
tmp = va_arg(ap, unsigned char[393]);
item->data = list_save_me_i(393, tmp);
}
break;
case 394:
{
unsigned char tmp[394];
tmp = va_arg(ap, unsigned char[394]);
item->data = list_save_me_i(394, tmp);
}
break;
case 395:
{
unsigned char tmp[395];
tmp = va_arg(ap, unsigned char[395]);
item->data = list_save_me_i(395, tmp);
}
break;
case 396:
{
unsigned char tmp[396];
tmp = va_arg(ap, unsigned char[396]);
item->data = list_save_me_i(396, tmp);
}
break;
case 397:
{
unsigned char tmp[397];
tmp = va_arg(ap, unsigned char[397]);
item->data = list_save_me_i(397, tmp);
}
break;
case 398:
{
unsigned char tmp[398];
tmp = va_arg(ap, unsigned char[398]);
item->data = list_save_me_i(398, tmp);
}
break;
case 399:
{
unsigned char tmp[399];
tmp = va_arg(ap, unsigned char[399]);
item->data = list_save_me_i(399, tmp);
}
break;
case 400:
{
unsigned char tmp[400];
tmp = va_arg(ap, unsigned char[400]);
item->data = list_save_me_i(400, tmp);
}
break;
case 401:
{
unsigned char tmp[401];
tmp = va_arg(ap, unsigned char[401]);
item->data = list_save_me_i(401, tmp);
}
break;
case 402:
{
unsigned char tmp[402];
tmp = va_arg(ap, unsigned char[402]);
item->data = list_save_me_i(402, tmp);
}
break;
case 403:
{
unsigned char tmp[403];
tmp = va_arg(ap, unsigned char[403]);
item->data = list_save_me_i(403, tmp);
}
break;
case 404:
{
unsigned char tmp[404];
tmp = va_arg(ap, unsigned char[404]);
item->data = list_save_me_i(404, tmp);
}
break;
case 405:
{
unsigned char tmp[405];
tmp = va_arg(ap, unsigned char[405]);
item->data = list_save_me_i(405, tmp);
}
break;
case 406:
{
unsigned char tmp[406];
tmp = va_arg(ap, unsigned char[406]);
item->data = list_save_me_i(406, tmp);
}
break;
case 407:
{
unsigned char tmp[407];
tmp = va_arg(ap, unsigned char[407]);
item->data = list_save_me_i(407, tmp);
}
break;
case 408:
{
unsigned char tmp[408];
tmp = va_arg(ap, unsigned char[408]);
item->data = list_save_me_i(408, tmp);
}
break;
case 409:
{
unsigned char tmp[409];
tmp = va_arg(ap, unsigned char[409]);
item->data = list_save_me_i(409, tmp);
}
break;
case 410:
{
unsigned char tmp[410];
tmp = va_arg(ap, unsigned char[410]);
item->data = list_save_me_i(410, tmp);
}
break;
case 411:
{
unsigned char tmp[411];
tmp = va_arg(ap, unsigned char[411]);
item->data = list_save_me_i(411, tmp);
}
break;
case 412:
{
unsigned char tmp[412];
tmp = va_arg(ap, unsigned char[412]);
item->data = list_save_me_i(412, tmp);
}
break;
case 413:
{
unsigned char tmp[413];
tmp = va_arg(ap, unsigned char[413]);
item->data = list_save_me_i(413, tmp);
}
break;
case 414:
{
unsigned char tmp[414];
tmp = va_arg(ap, unsigned char[414]);
item->data = list_save_me_i(414, tmp);
}
break;
case 415:
{
unsigned char tmp[415];
tmp = va_arg(ap, unsigned char[415]);
item->data = list_save_me_i(415, tmp);
}
break;
case 416:
{
unsigned char tmp[416];
tmp = va_arg(ap, unsigned char[416]);
item->data = list_save_me_i(416, tmp);
}
break;
case 417:
{
unsigned char tmp[417];
tmp = va_arg(ap, unsigned char[417]);
item->data = list_save_me_i(417, tmp);
}
break;
case 418:
{
unsigned char tmp[418];
tmp = va_arg(ap, unsigned char[418]);
item->data = list_save_me_i(418, tmp);
}
break;
case 419:
{
unsigned char tmp[419];
tmp = va_arg(ap, unsigned char[419]);
item->data = list_save_me_i(419, tmp);
}
break;
case 420:
{
unsigned char tmp[420];
tmp = va_arg(ap, unsigned char[420]);
item->data = list_save_me_i(420, tmp);
}
break;
case 421:
{
unsigned char tmp[421];
tmp = va_arg(ap, unsigned char[421]);
item->data = list_save_me_i(421, tmp);
}
break;
case 422:
{
unsigned char tmp[422];
tmp = va_arg(ap, unsigned char[422]);
item->data = list_save_me_i(422, tmp);
}
break;
case 423:
{
unsigned char tmp[423];
tmp = va_arg(ap, unsigned char[423]);
item->data = list_save_me_i(423, tmp);
}
break;
case 424:
{
unsigned char tmp[424];
tmp = va_arg(ap, unsigned char[424]);
item->data = list_save_me_i(424, tmp);
}
break;
case 425:
{
unsigned char tmp[425];
tmp = va_arg(ap, unsigned char[425]);
item->data = list_save_me_i(425, tmp);
}
break;
case 426:
{
unsigned char tmp[426];
tmp = va_arg(ap, unsigned char[426]);
item->data = list_save_me_i(426, tmp);
}
break;
case 427:
{
unsigned char tmp[427];
tmp = va_arg(ap, unsigned char[427]);
item->data = list_save_me_i(427, tmp);
}
break;
case 428:
{
unsigned char tmp[428];
tmp = va_arg(ap, unsigned char[428]);
item->data = list_save_me_i(428, tmp);
}
break;
case 429:
{
unsigned char tmp[429];
tmp = va_arg(ap, unsigned char[429]);
item->data = list_save_me_i(429, tmp);
}
break;
case 430:
{
unsigned char tmp[430];
tmp = va_arg(ap, unsigned char[430]);
item->data = list_save_me_i(430, tmp);
}
break;
case 431:
{
unsigned char tmp[431];
tmp = va_arg(ap, unsigned char[431]);
item->data = list_save_me_i(431, tmp);
}
break;
case 432:
{
unsigned char tmp[432];
tmp = va_arg(ap, unsigned char[432]);
item->data = list_save_me_i(432, tmp);
}
break;
case 433:
{
unsigned char tmp[433];
tmp = va_arg(ap, unsigned char[433]);
item->data = list_save_me_i(433, tmp);
}
break;
case 434:
{
unsigned char tmp[434];
tmp = va_arg(ap, unsigned char[434]);
item->data = list_save_me_i(434, tmp);
}
break;
case 435:
{
unsigned char tmp[435];
tmp = va_arg(ap, unsigned char[435]);
item->data = list_save_me_i(435, tmp);
}
break;
case 436:
{
unsigned char tmp[436];
tmp = va_arg(ap, unsigned char[436]);
item->data = list_save_me_i(436, tmp);
}
break;
case 437:
{
unsigned char tmp[437];
tmp = va_arg(ap, unsigned char[437]);
item->data = list_save_me_i(437, tmp);
}
break;
case 438:
{
unsigned char tmp[438];
tmp = va_arg(ap, unsigned char[438]);
item->data = list_save_me_i(438, tmp);
}
break;
case 439:
{
unsigned char tmp[439];
tmp = va_arg(ap, unsigned char[439]);
item->data = list_save_me_i(439, tmp);
}
break;
case 440:
{
unsigned char tmp[440];
tmp = va_arg(ap, unsigned char[440]);
item->data = list_save_me_i(440, tmp);
}
break;
case 441:
{
unsigned char tmp[441];
tmp = va_arg(ap, unsigned char[441]);
item->data = list_save_me_i(441, tmp);
}
break;
case 442:
{
unsigned char tmp[442];
tmp = va_arg(ap, unsigned char[442]);
item->data = list_save_me_i(442, tmp);
}
break;
case 443:
{
unsigned char tmp[443];
tmp = va_arg(ap, unsigned char[443]);
item->data = list_save_me_i(443, tmp);
}
break;
case 444:
{
unsigned char tmp[444];
tmp = va_arg(ap, unsigned char[444]);
item->data = list_save_me_i(444, tmp);
}
break;
case 445:
{
unsigned char tmp[445];
tmp = va_arg(ap, unsigned char[445]);
item->data = list_save_me_i(445, tmp);
}
break;
case 446:
{
unsigned char tmp[446];
tmp = va_arg(ap, unsigned char[446]);
item->data = list_save_me_i(446, tmp);
}
break;
case 447:
{
unsigned char tmp[447];
tmp = va_arg(ap, unsigned char[447]);
item->data = list_save_me_i(447, tmp);
}
break;
case 448:
{
unsigned char tmp[448];
tmp = va_arg(ap, unsigned char[448]);
item->data = list_save_me_i(448, tmp);
}
break;
case 449:
{
unsigned char tmp[449];
tmp = va_arg(ap, unsigned char[449]);
item->data = list_save_me_i(449, tmp);
}
break;
case 450:
{
unsigned char tmp[450];
tmp = va_arg(ap, unsigned char[450]);
item->data = list_save_me_i(450, tmp);
}
break;
case 451:
{
unsigned char tmp[451];
tmp = va_arg(ap, unsigned char[451]);
item->data = list_save_me_i(451, tmp);
}
break;
case 452:
{
unsigned char tmp[452];
tmp = va_arg(ap, unsigned char[452]);
item->data = list_save_me_i(452, tmp);
}
break;
case 453:
{
unsigned char tmp[453];
tmp = va_arg(ap, unsigned char[453]);
item->data = list_save_me_i(453, tmp);
}
break;
case 454:
{
unsigned char tmp[454];
tmp = va_arg(ap, unsigned char[454]);
item->data = list_save_me_i(454, tmp);
}
break;
case 455:
{
unsigned char tmp[455];
tmp = va_arg(ap, unsigned char[455]);
item->data = list_save_me_i(455, tmp);
}
break;
case 456:
{
unsigned char tmp[456];
tmp = va_arg(ap, unsigned char[456]);
item->data = list_save_me_i(456, tmp);
}
break;
case 457:
{
unsigned char tmp[457];
tmp = va_arg(ap, unsigned char[457]);
item->data = list_save_me_i(457, tmp);
}
break;
case 458:
{
unsigned char tmp[458];
tmp = va_arg(ap, unsigned char[458]);
item->data = list_save_me_i(458, tmp);
}
break;
case 459:
{
unsigned char tmp[459];
tmp = va_arg(ap, unsigned char[459]);
item->data = list_save_me_i(459, tmp);
}
break;
case 460:
{
unsigned char tmp[460];
tmp = va_arg(ap, unsigned char[460]);
item->data = list_save_me_i(460, tmp);
}
break;
case 461:
{
unsigned char tmp[461];
tmp = va_arg(ap, unsigned char[461]);
item->data = list_save_me_i(461, tmp);
}
break;
case 462:
{
unsigned char tmp[462];
tmp = va_arg(ap, unsigned char[462]);
item->data = list_save_me_i(462, tmp);
}
break;
case 463:
{
unsigned char tmp[463];
tmp = va_arg(ap, unsigned char[463]);
item->data = list_save_me_i(463, tmp);
}
break;
case 464:
{
unsigned char tmp[464];
tmp = va_arg(ap, unsigned char[464]);
item->data = list_save_me_i(464, tmp);
}
break;
case 465:
{
unsigned char tmp[465];
tmp = va_arg(ap, unsigned char[465]);
item->data = list_save_me_i(465, tmp);
}
break;
case 466:
{
unsigned char tmp[466];
tmp = va_arg(ap, unsigned char[466]);
item->data = list_save_me_i(466, tmp);
}
break;
case 467:
{
unsigned char tmp[467];
tmp = va_arg(ap, unsigned char[467]);
item->data = list_save_me_i(467, tmp);
}
break;
case 468:
{
unsigned char tmp[468];
tmp = va_arg(ap, unsigned char[468]);
item->data = list_save_me_i(468, tmp);
}
break;
case 469:
{
unsigned char tmp[469];
tmp = va_arg(ap, unsigned char[469]);
item->data = list_save_me_i(469, tmp);
}
break;
case 470:
{
unsigned char tmp[470];
tmp = va_arg(ap, unsigned char[470]);
item->data = list_save_me_i(470, tmp);
}
break;
case 471:
{
unsigned char tmp[471];
tmp = va_arg(ap, unsigned char[471]);
item->data = list_save_me_i(471, tmp);
}
break;
case 472:
{
unsigned char tmp[472];
tmp = va_arg(ap, unsigned char[472]);
item->data = list_save_me_i(472, tmp);
}
break;
case 473:
{
unsigned char tmp[473];
tmp = va_arg(ap, unsigned char[473]);
item->data = list_save_me_i(473, tmp);
}
break;
case 474:
{
unsigned char tmp[474];
tmp = va_arg(ap, unsigned char[474]);
item->data = list_save_me_i(474, tmp);
}
break;
case 475:
{
unsigned char tmp[475];
tmp = va_arg(ap, unsigned char[475]);
item->data = list_save_me_i(475, tmp);
}
break;
case 476:
{
unsigned char tmp[476];
tmp = va_arg(ap, unsigned char[476]);
item->data = list_save_me_i(476, tmp);
}
break;
case 477:
{
unsigned char tmp[477];
tmp = va_arg(ap, unsigned char[477]);
item->data = list_save_me_i(477, tmp);
}
break;
case 478:
{
unsigned char tmp[478];
tmp = va_arg(ap, unsigned char[478]);
item->data = list_save_me_i(478, tmp);
}
break;
case 479:
{
unsigned char tmp[479];
tmp = va_arg(ap, unsigned char[479]);
item->data = list_save_me_i(479, tmp);
}
break;
case 480:
{
unsigned char tmp[480];
tmp = va_arg(ap, unsigned char[480]);
item->data = list_save_me_i(480, tmp);
}
break;
case 481:
{
unsigned char tmp[481];
tmp = va_arg(ap, unsigned char[481]);
item->data = list_save_me_i(481, tmp);
}
break;
case 482:
{
unsigned char tmp[482];
tmp = va_arg(ap, unsigned char[482]);
item->data = list_save_me_i(482, tmp);
}
break;
case 483:
{
unsigned char tmp[483];
tmp = va_arg(ap, unsigned char[483]);
item->data = list_save_me_i(483, tmp);
}
break;
case 484:
{
unsigned char tmp[484];
tmp = va_arg(ap, unsigned char[484]);
item->data = list_save_me_i(484, tmp);
}
break;
case 485:
{
unsigned char tmp[485];
tmp = va_arg(ap, unsigned char[485]);
item->data = list_save_me_i(485, tmp);
}
break;
case 486:
{
unsigned char tmp[486];
tmp = va_arg(ap, unsigned char[486]);
item->data = list_save_me_i(486, tmp);
}
break;
case 487:
{
unsigned char tmp[487];
tmp = va_arg(ap, unsigned char[487]);
item->data = list_save_me_i(487, tmp);
}
break;
case 488:
{
unsigned char tmp[488];
tmp = va_arg(ap, unsigned char[488]);
item->data = list_save_me_i(488, tmp);
}
break;
case 489:
{
unsigned char tmp[489];
tmp = va_arg(ap, unsigned char[489]);
item->data = list_save_me_i(489, tmp);
}
break;
case 490:
{
unsigned char tmp[490];
tmp = va_arg(ap, unsigned char[490]);
item->data = list_save_me_i(490, tmp);
}
break;
case 491:
{
unsigned char tmp[491];
tmp = va_arg(ap, unsigned char[491]);
item->data = list_save_me_i(491, tmp);
}
break;
case 492:
{
unsigned char tmp[492];
tmp = va_arg(ap, unsigned char[492]);
item->data = list_save_me_i(492, tmp);
}
break;
case 493:
{
unsigned char tmp[493];
tmp = va_arg(ap, unsigned char[493]);
item->data = list_save_me_i(493, tmp);
}
break;
case 494:
{
unsigned char tmp[494];
tmp = va_arg(ap, unsigned char[494]);
item->data = list_save_me_i(494, tmp);
}
break;
case 495:
{
unsigned char tmp[495];
tmp = va_arg(ap, unsigned char[495]);
item->data = list_save_me_i(495, tmp);
}
break;
case 496:
{
unsigned char tmp[496];
tmp = va_arg(ap, unsigned char[496]);
item->data = list_save_me_i(496, tmp);
}
break;
case 497:
{
unsigned char tmp[497];
tmp = va_arg(ap, unsigned char[497]);
item->data = list_save_me_i(497, tmp);
}
break;
case 498:
{
unsigned char tmp[498];
tmp = va_arg(ap, unsigned char[498]);
item->data = list_save_me_i(498, tmp);
}
break;
case 499:
{
unsigned char tmp[499];
tmp = va_arg(ap, unsigned char[499]);
item->data = list_save_me_i(499, tmp);
}
break;
case 500:
{
unsigned char tmp[500];
tmp = va_arg(ap, unsigned char[500]);
item->data = list_save_me_i(500, tmp);
}
break;
case 501:
{
unsigned char tmp[501];
tmp = va_arg(ap, unsigned char[501]);
item->data = list_save_me_i(501, tmp);
}
break;
case 502:
{
unsigned char tmp[502];
tmp = va_arg(ap, unsigned char[502]);
item->data = list_save_me_i(502, tmp);
}
break;
case 503:
{
unsigned char tmp[503];
tmp = va_arg(ap, unsigned char[503]);
item->data = list_save_me_i(503, tmp);
}
break;
case 504:
{
unsigned char tmp[504];
tmp = va_arg(ap, unsigned char[504]);
item->data = list_save_me_i(504, tmp);
}
break;
case 505:
{
unsigned char tmp[505];
tmp = va_arg(ap, unsigned char[505]);
item->data = list_save_me_i(505, tmp);
}
break;
case 506:
{
unsigned char tmp[506];
tmp = va_arg(ap, unsigned char[506]);
item->data = list_save_me_i(506, tmp);
}
break;
case 507:
{
unsigned char tmp[507];
tmp = va_arg(ap, unsigned char[507]);
item->data = list_save_me_i(507, tmp);
}
break;
case 508:
{
unsigned char tmp[508];
tmp = va_arg(ap, unsigned char[508]);
item->data = list_save_me_i(508, tmp);
}
break;
case 509:
{
unsigned char tmp[509];
tmp = va_arg(ap, unsigned char[509]);
item->data = list_save_me_i(509, tmp);
}
break;
case 510:
{
unsigned char tmp[510];
tmp = va_arg(ap, unsigned char[510]);
item->data = list_save_me_i(510, tmp);
}
break;
case 511:
{
unsigned char tmp[511];
tmp = va_arg(ap, unsigned char[511]);
item->data = list_save_me_i(511, tmp);
}
break;
case 512:
{
unsigned char tmp[512];
tmp = va_arg(ap, unsigned char[512]);
item->data = list_save_me_i(512, tmp);
}
break;
case 513:
{
unsigned char tmp[513];
tmp = va_arg(ap, unsigned char[513]);
item->data = list_save_me_i(513, tmp);
}
break;
case 514:
{
unsigned char tmp[514];
tmp = va_arg(ap, unsigned char[514]);
item->data = list_save_me_i(514, tmp);
}
break;
case 515:
{
unsigned char tmp[515];
tmp = va_arg(ap, unsigned char[515]);
item->data = list_save_me_i(515, tmp);
}
break;
case 516:
{
unsigned char tmp[516];
tmp = va_arg(ap, unsigned char[516]);
item->data = list_save_me_i(516, tmp);
}
break;
case 517:
{
unsigned char tmp[517];
tmp = va_arg(ap, unsigned char[517]);
item->data = list_save_me_i(517, tmp);
}
break;
case 518:
{
unsigned char tmp[518];
tmp = va_arg(ap, unsigned char[518]);
item->data = list_save_me_i(518, tmp);
}
break;
case 519:
{
unsigned char tmp[519];
tmp = va_arg(ap, unsigned char[519]);
item->data = list_save_me_i(519, tmp);
}
break;
case 520:
{
unsigned char tmp[520];
tmp = va_arg(ap, unsigned char[520]);
item->data = list_save_me_i(520, tmp);
}
break;
case 521:
{
unsigned char tmp[521];
tmp = va_arg(ap, unsigned char[521]);
item->data = list_save_me_i(521, tmp);
}
break;
case 522:
{
unsigned char tmp[522];
tmp = va_arg(ap, unsigned char[522]);
item->data = list_save_me_i(522, tmp);
}
break;
case 523:
{
unsigned char tmp[523];
tmp = va_arg(ap, unsigned char[523]);
item->data = list_save_me_i(523, tmp);
}
break;
case 524:
{
unsigned char tmp[524];
tmp = va_arg(ap, unsigned char[524]);
item->data = list_save_me_i(524, tmp);
}
break;
case 525:
{
unsigned char tmp[525];
tmp = va_arg(ap, unsigned char[525]);
item->data = list_save_me_i(525, tmp);
}
break;
case 526:
{
unsigned char tmp[526];
tmp = va_arg(ap, unsigned char[526]);
item->data = list_save_me_i(526, tmp);
}
break;
case 527:
{
unsigned char tmp[527];
tmp = va_arg(ap, unsigned char[527]);
item->data = list_save_me_i(527, tmp);
}
break;
case 528:
{
unsigned char tmp[528];
tmp = va_arg(ap, unsigned char[528]);
item->data = list_save_me_i(528, tmp);
}
break;
case 529:
{
unsigned char tmp[529];
tmp = va_arg(ap, unsigned char[529]);
item->data = list_save_me_i(529, tmp);
}
break;
case 530:
{
unsigned char tmp[530];
tmp = va_arg(ap, unsigned char[530]);
item->data = list_save_me_i(530, tmp);
}
break;
case 531:
{
unsigned char tmp[531];
tmp = va_arg(ap, unsigned char[531]);
item->data = list_save_me_i(531, tmp);
}
break;
case 532:
{
unsigned char tmp[532];
tmp = va_arg(ap, unsigned char[532]);
item->data = list_save_me_i(532, tmp);
}
break;
case 533:
{
unsigned char tmp[533];
tmp = va_arg(ap, unsigned char[533]);
item->data = list_save_me_i(533, tmp);
}
break;
case 534:
{
unsigned char tmp[534];
tmp = va_arg(ap, unsigned char[534]);
item->data = list_save_me_i(534, tmp);
}
break;
case 535:
{
unsigned char tmp[535];
tmp = va_arg(ap, unsigned char[535]);
item->data = list_save_me_i(535, tmp);
}
break;
case 536:
{
unsigned char tmp[536];
tmp = va_arg(ap, unsigned char[536]);
item->data = list_save_me_i(536, tmp);
}
break;
case 537:
{
unsigned char tmp[537];
tmp = va_arg(ap, unsigned char[537]);
item->data = list_save_me_i(537, tmp);
}
break;
case 538:
{
unsigned char tmp[538];
tmp = va_arg(ap, unsigned char[538]);
item->data = list_save_me_i(538, tmp);
}
break;
case 539:
{
unsigned char tmp[539];
tmp = va_arg(ap, unsigned char[539]);
item->data = list_save_me_i(539, tmp);
}
break;
case 540:
{
unsigned char tmp[540];
tmp = va_arg(ap, unsigned char[540]);
item->data = list_save_me_i(540, tmp);
}
break;
case 541:
{
unsigned char tmp[541];
tmp = va_arg(ap, unsigned char[541]);
item->data = list_save_me_i(541, tmp);
}
break;
case 542:
{
unsigned char tmp[542];
tmp = va_arg(ap, unsigned char[542]);
item->data = list_save_me_i(542, tmp);
}
break;
case 543:
{
unsigned char tmp[543];
tmp = va_arg(ap, unsigned char[543]);
item->data = list_save_me_i(543, tmp);
}
break;
case 544:
{
unsigned char tmp[544];
tmp = va_arg(ap, unsigned char[544]);
item->data = list_save_me_i(544, tmp);
}
break;
case 545:
{
unsigned char tmp[545];
tmp = va_arg(ap, unsigned char[545]);
item->data = list_save_me_i(545, tmp);
}
break;
case 546:
{
unsigned char tmp[546];
tmp = va_arg(ap, unsigned char[546]);
item->data = list_save_me_i(546, tmp);
}
break;
case 547:
{
unsigned char tmp[547];
tmp = va_arg(ap, unsigned char[547]);
item->data = list_save_me_i(547, tmp);
}
break;
case 548:
{
unsigned char tmp[548];
tmp = va_arg(ap, unsigned char[548]);
item->data = list_save_me_i(548, tmp);
}
break;
case 549:
{
unsigned char tmp[549];
tmp = va_arg(ap, unsigned char[549]);
item->data = list_save_me_i(549, tmp);
}
break;
case 550:
{
unsigned char tmp[550];
tmp = va_arg(ap, unsigned char[550]);
item->data = list_save_me_i(550, tmp);
}
break;
case 551:
{
unsigned char tmp[551];
tmp = va_arg(ap, unsigned char[551]);
item->data = list_save_me_i(551, tmp);
}
break;
case 552:
{
unsigned char tmp[552];
tmp = va_arg(ap, unsigned char[552]);
item->data = list_save_me_i(552, tmp);
}
break;
case 553:
{
unsigned char tmp[553];
tmp = va_arg(ap, unsigned char[553]);
item->data = list_save_me_i(553, tmp);
}
break;
case 554:
{
unsigned char tmp[554];
tmp = va_arg(ap, unsigned char[554]);
item->data = list_save_me_i(554, tmp);
}
break;
case 555:
{
unsigned char tmp[555];
tmp = va_arg(ap, unsigned char[555]);
item->data = list_save_me_i(555, tmp);
}
break;
case 556:
{
unsigned char tmp[556];
tmp = va_arg(ap, unsigned char[556]);
item->data = list_save_me_i(556, tmp);
}
break;
case 557:
{
unsigned char tmp[557];
tmp = va_arg(ap, unsigned char[557]);
item->data = list_save_me_i(557, tmp);
}
break;
case 558:
{
unsigned char tmp[558];
tmp = va_arg(ap, unsigned char[558]);
item->data = list_save_me_i(558, tmp);
}
break;
case 559:
{
unsigned char tmp[559];
tmp = va_arg(ap, unsigned char[559]);
item->data = list_save_me_i(559, tmp);
}
break;
case 560:
{
unsigned char tmp[560];
tmp = va_arg(ap, unsigned char[560]);
item->data = list_save_me_i(560, tmp);
}
break;
case 561:
{
unsigned char tmp[561];
tmp = va_arg(ap, unsigned char[561]);
item->data = list_save_me_i(561, tmp);
}
break;
case 562:
{
unsigned char tmp[562];
tmp = va_arg(ap, unsigned char[562]);
item->data = list_save_me_i(562, tmp);
}
break;
case 563:
{
unsigned char tmp[563];
tmp = va_arg(ap, unsigned char[563]);
item->data = list_save_me_i(563, tmp);
}
break;
case 564:
{
unsigned char tmp[564];
tmp = va_arg(ap, unsigned char[564]);
item->data = list_save_me_i(564, tmp);
}
break;
case 565:
{
unsigned char tmp[565];
tmp = va_arg(ap, unsigned char[565]);
item->data = list_save_me_i(565, tmp);
}
break;
case 566:
{
unsigned char tmp[566];
tmp = va_arg(ap, unsigned char[566]);
item->data = list_save_me_i(566, tmp);
}
break;
case 567:
{
unsigned char tmp[567];
tmp = va_arg(ap, unsigned char[567]);
item->data = list_save_me_i(567, tmp);
}
break;
case 568:
{
unsigned char tmp[568];
tmp = va_arg(ap, unsigned char[568]);
item->data = list_save_me_i(568, tmp);
}
break;
case 569:
{
unsigned char tmp[569];
tmp = va_arg(ap, unsigned char[569]);
item->data = list_save_me_i(569, tmp);
}
break;
case 570:
{
unsigned char tmp[570];
tmp = va_arg(ap, unsigned char[570]);
item->data = list_save_me_i(570, tmp);
}
break;
case 571:
{
unsigned char tmp[571];
tmp = va_arg(ap, unsigned char[571]);
item->data = list_save_me_i(571, tmp);
}
break;
case 572:
{
unsigned char tmp[572];
tmp = va_arg(ap, unsigned char[572]);
item->data = list_save_me_i(572, tmp);
}
break;
case 573:
{
unsigned char tmp[573];
tmp = va_arg(ap, unsigned char[573]);
item->data = list_save_me_i(573, tmp);
}
break;
case 574:
{
unsigned char tmp[574];
tmp = va_arg(ap, unsigned char[574]);
item->data = list_save_me_i(574, tmp);
}
break;
case 575:
{
unsigned char tmp[575];
tmp = va_arg(ap, unsigned char[575]);
item->data = list_save_me_i(575, tmp);
}
break;
case 576:
{
unsigned char tmp[576];
tmp = va_arg(ap, unsigned char[576]);
item->data = list_save_me_i(576, tmp);
}
break;
case 577:
{
unsigned char tmp[577];
tmp = va_arg(ap, unsigned char[577]);
item->data = list_save_me_i(577, tmp);
}
break;
case 578:
{
unsigned char tmp[578];
tmp = va_arg(ap, unsigned char[578]);
item->data = list_save_me_i(578, tmp);
}
break;
case 579:
{
unsigned char tmp[579];
tmp = va_arg(ap, unsigned char[579]);
item->data = list_save_me_i(579, tmp);
}
break;
case 580:
{
unsigned char tmp[580];
tmp = va_arg(ap, unsigned char[580]);
item->data = list_save_me_i(580, tmp);
}
break;
case 581:
{
unsigned char tmp[581];
tmp = va_arg(ap, unsigned char[581]);
item->data = list_save_me_i(581, tmp);
}
break;
case 582:
{
unsigned char tmp[582];
tmp = va_arg(ap, unsigned char[582]);
item->data = list_save_me_i(582, tmp);
}
break;
case 583:
{
unsigned char tmp[583];
tmp = va_arg(ap, unsigned char[583]);
item->data = list_save_me_i(583, tmp);
}
break;
case 584:
{
unsigned char tmp[584];
tmp = va_arg(ap, unsigned char[584]);
item->data = list_save_me_i(584, tmp);
}
break;
case 585:
{
unsigned char tmp[585];
tmp = va_arg(ap, unsigned char[585]);
item->data = list_save_me_i(585, tmp);
}
break;
case 586:
{
unsigned char tmp[586];
tmp = va_arg(ap, unsigned char[586]);
item->data = list_save_me_i(586, tmp);
}
break;
case 587:
{
unsigned char tmp[587];
tmp = va_arg(ap, unsigned char[587]);
item->data = list_save_me_i(587, tmp);
}
break;
case 588:
{
unsigned char tmp[588];
tmp = va_arg(ap, unsigned char[588]);
item->data = list_save_me_i(588, tmp);
}
break;
case 589:
{
unsigned char tmp[589];
tmp = va_arg(ap, unsigned char[589]);
item->data = list_save_me_i(589, tmp);
}
break;
case 590:
{
unsigned char tmp[590];
tmp = va_arg(ap, unsigned char[590]);
item->data = list_save_me_i(590, tmp);
}
break;
case 591:
{
unsigned char tmp[591];
tmp = va_arg(ap, unsigned char[591]);
item->data = list_save_me_i(591, tmp);
}
break;
case 592:
{
unsigned char tmp[592];
tmp = va_arg(ap, unsigned char[592]);
item->data = list_save_me_i(592, tmp);
}
break;
case 593:
{
unsigned char tmp[593];
tmp = va_arg(ap, unsigned char[593]);
item->data = list_save_me_i(593, tmp);
}
break;
case 594:
{
unsigned char tmp[594];
tmp = va_arg(ap, unsigned char[594]);
item->data = list_save_me_i(594, tmp);
}
break;
case 595:
{
unsigned char tmp[595];
tmp = va_arg(ap, unsigned char[595]);
item->data = list_save_me_i(595, tmp);
}
break;
case 596:
{
unsigned char tmp[596];
tmp = va_arg(ap, unsigned char[596]);
item->data = list_save_me_i(596, tmp);
}
break;
case 597:
{
unsigned char tmp[597];
tmp = va_arg(ap, unsigned char[597]);
item->data = list_save_me_i(597, tmp);
}
break;
case 598:
{
unsigned char tmp[598];
tmp = va_arg(ap, unsigned char[598]);
item->data = list_save_me_i(598, tmp);
}
break;
case 599:
{
unsigned char tmp[599];
tmp = va_arg(ap, unsigned char[599]);
item->data = list_save_me_i(599, tmp);
}
break;
case 600:
{
unsigned char tmp[600];
tmp = va_arg(ap, unsigned char[600]);
item->data = list_save_me_i(600, tmp);
}
break;
case 601:
{
unsigned char tmp[601];
tmp = va_arg(ap, unsigned char[601]);
item->data = list_save_me_i(601, tmp);
}
break;
case 602:
{
unsigned char tmp[602];
tmp = va_arg(ap, unsigned char[602]);
item->data = list_save_me_i(602, tmp);
}
break;
case 603:
{
unsigned char tmp[603];
tmp = va_arg(ap, unsigned char[603]);
item->data = list_save_me_i(603, tmp);
}
break;
case 604:
{
unsigned char tmp[604];
tmp = va_arg(ap, unsigned char[604]);
item->data = list_save_me_i(604, tmp);
}
break;
case 605:
{
unsigned char tmp[605];
tmp = va_arg(ap, unsigned char[605]);
item->data = list_save_me_i(605, tmp);
}
break;
case 606:
{
unsigned char tmp[606];
tmp = va_arg(ap, unsigned char[606]);
item->data = list_save_me_i(606, tmp);
}
break;
case 607:
{
unsigned char tmp[607];
tmp = va_arg(ap, unsigned char[607]);
item->data = list_save_me_i(607, tmp);
}
break;
case 608:
{
unsigned char tmp[608];
tmp = va_arg(ap, unsigned char[608]);
item->data = list_save_me_i(608, tmp);
}
break;
case 609:
{
unsigned char tmp[609];
tmp = va_arg(ap, unsigned char[609]);
item->data = list_save_me_i(609, tmp);
}
break;
case 610:
{
unsigned char tmp[610];
tmp = va_arg(ap, unsigned char[610]);
item->data = list_save_me_i(610, tmp);
}
break;
case 611:
{
unsigned char tmp[611];
tmp = va_arg(ap, unsigned char[611]);
item->data = list_save_me_i(611, tmp);
}
break;
case 612:
{
unsigned char tmp[612];
tmp = va_arg(ap, unsigned char[612]);
item->data = list_save_me_i(612, tmp);
}
break;
case 613:
{
unsigned char tmp[613];
tmp = va_arg(ap, unsigned char[613]);
item->data = list_save_me_i(613, tmp);
}
break;
case 614:
{
unsigned char tmp[614];
tmp = va_arg(ap, unsigned char[614]);
item->data = list_save_me_i(614, tmp);
}
break;
case 615:
{
unsigned char tmp[615];
tmp = va_arg(ap, unsigned char[615]);
item->data = list_save_me_i(615, tmp);
}
break;
case 616:
{
unsigned char tmp[616];
tmp = va_arg(ap, unsigned char[616]);
item->data = list_save_me_i(616, tmp);
}
break;
case 617:
{
unsigned char tmp[617];
tmp = va_arg(ap, unsigned char[617]);
item->data = list_save_me_i(617, tmp);
}
break;
case 618:
{
unsigned char tmp[618];
tmp = va_arg(ap, unsigned char[618]);
item->data = list_save_me_i(618, tmp);
}
break;
case 619:
{
unsigned char tmp[619];
tmp = va_arg(ap, unsigned char[619]);
item->data = list_save_me_i(619, tmp);
}
break;
case 620:
{
unsigned char tmp[620];
tmp = va_arg(ap, unsigned char[620]);
item->data = list_save_me_i(620, tmp);
}
break;
case 621:
{
unsigned char tmp[621];
tmp = va_arg(ap, unsigned char[621]);
item->data = list_save_me_i(621, tmp);
}
break;
case 622:
{
unsigned char tmp[622];
tmp = va_arg(ap, unsigned char[622]);
item->data = list_save_me_i(622, tmp);
}
break;
case 623:
{
unsigned char tmp[623];
tmp = va_arg(ap, unsigned char[623]);
item->data = list_save_me_i(623, tmp);
}
break;
case 624:
{
unsigned char tmp[624];
tmp = va_arg(ap, unsigned char[624]);
item->data = list_save_me_i(624, tmp);
}
break;
case 625:
{
unsigned char tmp[625];
tmp = va_arg(ap, unsigned char[625]);
item->data = list_save_me_i(625, tmp);
}
break;
case 626:
{
unsigned char tmp[626];
tmp = va_arg(ap, unsigned char[626]);
item->data = list_save_me_i(626, tmp);
}
break;
case 627:
{
unsigned char tmp[627];
tmp = va_arg(ap, unsigned char[627]);
item->data = list_save_me_i(627, tmp);
}
break;
case 628:
{
unsigned char tmp[628];
tmp = va_arg(ap, unsigned char[628]);
item->data = list_save_me_i(628, tmp);
}
break;
case 629:
{
unsigned char tmp[629];
tmp = va_arg(ap, unsigned char[629]);
item->data = list_save_me_i(629, tmp);
}
break;
case 630:
{
unsigned char tmp[630];
tmp = va_arg(ap, unsigned char[630]);
item->data = list_save_me_i(630, tmp);
}
break;
case 631:
{
unsigned char tmp[631];
tmp = va_arg(ap, unsigned char[631]);
item->data = list_save_me_i(631, tmp);
}
break;
case 632:
{
unsigned char tmp[632];
tmp = va_arg(ap, unsigned char[632]);
item->data = list_save_me_i(632, tmp);
}
break;
case 633:
{
unsigned char tmp[633];
tmp = va_arg(ap, unsigned char[633]);
item->data = list_save_me_i(633, tmp);
}
break;
case 634:
{
unsigned char tmp[634];
tmp = va_arg(ap, unsigned char[634]);
item->data = list_save_me_i(634, tmp);
}
break;
case 635:
{
unsigned char tmp[635];
tmp = va_arg(ap, unsigned char[635]);
item->data = list_save_me_i(635, tmp);
}
break;
case 636:
{
unsigned char tmp[636];
tmp = va_arg(ap, unsigned char[636]);
item->data = list_save_me_i(636, tmp);
}
break;
case 637:
{
unsigned char tmp[637];
tmp = va_arg(ap, unsigned char[637]);
item->data = list_save_me_i(637, tmp);
}
break;
case 638:
{
unsigned char tmp[638];
tmp = va_arg(ap, unsigned char[638]);
item->data = list_save_me_i(638, tmp);
}
break;
case 639:
{
unsigned char tmp[639];
tmp = va_arg(ap, unsigned char[639]);
item->data = list_save_me_i(639, tmp);
}
break;
case 640:
{
unsigned char tmp[640];
tmp = va_arg(ap, unsigned char[640]);
item->data = list_save_me_i(640, tmp);
}
break;
case 641:
{
unsigned char tmp[641];
tmp = va_arg(ap, unsigned char[641]);
item->data = list_save_me_i(641, tmp);
}
break;
case 642:
{
unsigned char tmp[642];
tmp = va_arg(ap, unsigned char[642]);
item->data = list_save_me_i(642, tmp);
}
break;
case 643:
{
unsigned char tmp[643];
tmp = va_arg(ap, unsigned char[643]);
item->data = list_save_me_i(643, tmp);
}
break;
case 644:
{
unsigned char tmp[644];
tmp = va_arg(ap, unsigned char[644]);
item->data = list_save_me_i(644, tmp);
}
break;
case 645:
{
unsigned char tmp[645];
tmp = va_arg(ap, unsigned char[645]);
item->data = list_save_me_i(645, tmp);
}
break;
case 646:
{
unsigned char tmp[646];
tmp = va_arg(ap, unsigned char[646]);
item->data = list_save_me_i(646, tmp);
}
break;
case 647:
{
unsigned char tmp[647];
tmp = va_arg(ap, unsigned char[647]);
item->data = list_save_me_i(647, tmp);
}
break;
case 648:
{
unsigned char tmp[648];
tmp = va_arg(ap, unsigned char[648]);
item->data = list_save_me_i(648, tmp);
}
break;
case 649:
{
unsigned char tmp[649];
tmp = va_arg(ap, unsigned char[649]);
item->data = list_save_me_i(649, tmp);
}
break;
case 650:
{
unsigned char tmp[650];
tmp = va_arg(ap, unsigned char[650]);
item->data = list_save_me_i(650, tmp);
}
break;
case 651:
{
unsigned char tmp[651];
tmp = va_arg(ap, unsigned char[651]);
item->data = list_save_me_i(651, tmp);
}
break;
case 652:
{
unsigned char tmp[652];
tmp = va_arg(ap, unsigned char[652]);
item->data = list_save_me_i(652, tmp);
}
break;
case 653:
{
unsigned char tmp[653];
tmp = va_arg(ap, unsigned char[653]);
item->data = list_save_me_i(653, tmp);
}
break;
case 654:
{
unsigned char tmp[654];
tmp = va_arg(ap, unsigned char[654]);
item->data = list_save_me_i(654, tmp);
}
break;
case 655:
{
unsigned char tmp[655];
tmp = va_arg(ap, unsigned char[655]);
item->data = list_save_me_i(655, tmp);
}
break;
case 656:
{
unsigned char tmp[656];
tmp = va_arg(ap, unsigned char[656]);
item->data = list_save_me_i(656, tmp);
}
break;
case 657:
{
unsigned char tmp[657];
tmp = va_arg(ap, unsigned char[657]);
item->data = list_save_me_i(657, tmp);
}
break;
case 658:
{
unsigned char tmp[658];
tmp = va_arg(ap, unsigned char[658]);
item->data = list_save_me_i(658, tmp);
}
break;
case 659:
{
unsigned char tmp[659];
tmp = va_arg(ap, unsigned char[659]);
item->data = list_save_me_i(659, tmp);
}
break;
case 660:
{
unsigned char tmp[660];
tmp = va_arg(ap, unsigned char[660]);
item->data = list_save_me_i(660, tmp);
}
break;
case 661:
{
unsigned char tmp[661];
tmp = va_arg(ap, unsigned char[661]);
item->data = list_save_me_i(661, tmp);
}
break;
case 662:
{
unsigned char tmp[662];
tmp = va_arg(ap, unsigned char[662]);
item->data = list_save_me_i(662, tmp);
}
break;
case 663:
{
unsigned char tmp[663];
tmp = va_arg(ap, unsigned char[663]);
item->data = list_save_me_i(663, tmp);
}
break;
case 664:
{
unsigned char tmp[664];
tmp = va_arg(ap, unsigned char[664]);
item->data = list_save_me_i(664, tmp);
}
break;
case 665:
{
unsigned char tmp[665];
tmp = va_arg(ap, unsigned char[665]);
item->data = list_save_me_i(665, tmp);
}
break;
case 666:
{
unsigned char tmp[666];
tmp = va_arg(ap, unsigned char[666]);
item->data = list_save_me_i(666, tmp);
}
break;
case 667:
{
unsigned char tmp[667];
tmp = va_arg(ap, unsigned char[667]);
item->data = list_save_me_i(667, tmp);
}
break;
case 668:
{
unsigned char tmp[668];
tmp = va_arg(ap, unsigned char[668]);
item->data = list_save_me_i(668, tmp);
}
break;
case 669:
{
unsigned char tmp[669];
tmp = va_arg(ap, unsigned char[669]);
item->data = list_save_me_i(669, tmp);
}
break;
case 670:
{
unsigned char tmp[670];
tmp = va_arg(ap, unsigned char[670]);
item->data = list_save_me_i(670, tmp);
}
break;
case 671:
{
unsigned char tmp[671];
tmp = va_arg(ap, unsigned char[671]);
item->data = list_save_me_i(671, tmp);
}
break;
case 672:
{
unsigned char tmp[672];
tmp = va_arg(ap, unsigned char[672]);
item->data = list_save_me_i(672, tmp);
}
break;
case 673:
{
unsigned char tmp[673];
tmp = va_arg(ap, unsigned char[673]);
item->data = list_save_me_i(673, tmp);
}
break;
case 674:
{
unsigned char tmp[674];
tmp = va_arg(ap, unsigned char[674]);
item->data = list_save_me_i(674, tmp);
}
break;
case 675:
{
unsigned char tmp[675];
tmp = va_arg(ap, unsigned char[675]);
item->data = list_save_me_i(675, tmp);
}
break;
case 676:
{
unsigned char tmp[676];
tmp = va_arg(ap, unsigned char[676]);
item->data = list_save_me_i(676, tmp);
}
break;
case 677:
{
unsigned char tmp[677];
tmp = va_arg(ap, unsigned char[677]);
item->data = list_save_me_i(677, tmp);
}
break;
case 678:
{
unsigned char tmp[678];
tmp = va_arg(ap, unsigned char[678]);
item->data = list_save_me_i(678, tmp);
}
break;
case 679:
{
unsigned char tmp[679];
tmp = va_arg(ap, unsigned char[679]);
item->data = list_save_me_i(679, tmp);
}
break;
case 680:
{
unsigned char tmp[680];
tmp = va_arg(ap, unsigned char[680]);
item->data = list_save_me_i(680, tmp);
}
break;
case 681:
{
unsigned char tmp[681];
tmp = va_arg(ap, unsigned char[681]);
item->data = list_save_me_i(681, tmp);
}
break;
case 682:
{
unsigned char tmp[682];
tmp = va_arg(ap, unsigned char[682]);
item->data = list_save_me_i(682, tmp);
}
break;
case 683:
{
unsigned char tmp[683];
tmp = va_arg(ap, unsigned char[683]);
item->data = list_save_me_i(683, tmp);
}
break;
case 684:
{
unsigned char tmp[684];
tmp = va_arg(ap, unsigned char[684]);
item->data = list_save_me_i(684, tmp);
}
break;
case 685:
{
unsigned char tmp[685];
tmp = va_arg(ap, unsigned char[685]);
item->data = list_save_me_i(685, tmp);
}
break;
case 686:
{
unsigned char tmp[686];
tmp = va_arg(ap, unsigned char[686]);
item->data = list_save_me_i(686, tmp);
}
break;
case 687:
{
unsigned char tmp[687];
tmp = va_arg(ap, unsigned char[687]);
item->data = list_save_me_i(687, tmp);
}
break;
case 688:
{
unsigned char tmp[688];
tmp = va_arg(ap, unsigned char[688]);
item->data = list_save_me_i(688, tmp);
}
break;
case 689:
{
unsigned char tmp[689];
tmp = va_arg(ap, unsigned char[689]);
item->data = list_save_me_i(689, tmp);
}
break;
case 690:
{
unsigned char tmp[690];
tmp = va_arg(ap, unsigned char[690]);
item->data = list_save_me_i(690, tmp);
}
break;
case 691:
{
unsigned char tmp[691];
tmp = va_arg(ap, unsigned char[691]);
item->data = list_save_me_i(691, tmp);
}
break;
case 692:
{
unsigned char tmp[692];
tmp = va_arg(ap, unsigned char[692]);
item->data = list_save_me_i(692, tmp);
}
break;
case 693:
{
unsigned char tmp[693];
tmp = va_arg(ap, unsigned char[693]);
item->data = list_save_me_i(693, tmp);
}
break;
case 694:
{
unsigned char tmp[694];
tmp = va_arg(ap, unsigned char[694]);
item->data = list_save_me_i(694, tmp);
}
break;
case 695:
{
unsigned char tmp[695];
tmp = va_arg(ap, unsigned char[695]);
item->data = list_save_me_i(695, tmp);
}
break;
case 696:
{
unsigned char tmp[696];
tmp = va_arg(ap, unsigned char[696]);
item->data = list_save_me_i(696, tmp);
}
break;
case 697:
{
unsigned char tmp[697];
tmp = va_arg(ap, unsigned char[697]);
item->data = list_save_me_i(697, tmp);
}
break;
case 698:
{
unsigned char tmp[698];
tmp = va_arg(ap, unsigned char[698]);
item->data = list_save_me_i(698, tmp);
}
break;
case 699:
{
unsigned char tmp[699];
tmp = va_arg(ap, unsigned char[699]);
item->data = list_save_me_i(699, tmp);
}
break;
case 700:
{
unsigned char tmp[700];
tmp = va_arg(ap, unsigned char[700]);
item->data = list_save_me_i(700, tmp);
}
break;
case 701:
{
unsigned char tmp[701];
tmp = va_arg(ap, unsigned char[701]);
item->data = list_save_me_i(701, tmp);
}
break;
case 702:
{
unsigned char tmp[702];
tmp = va_arg(ap, unsigned char[702]);
item->data = list_save_me_i(702, tmp);
}
break;
case 703:
{
unsigned char tmp[703];
tmp = va_arg(ap, unsigned char[703]);
item->data = list_save_me_i(703, tmp);
}
break;
case 704:
{
unsigned char tmp[704];
tmp = va_arg(ap, unsigned char[704]);
item->data = list_save_me_i(704, tmp);
}
break;
case 705:
{
unsigned char tmp[705];
tmp = va_arg(ap, unsigned char[705]);
item->data = list_save_me_i(705, tmp);
}
break;
case 706:
{
unsigned char tmp[706];
tmp = va_arg(ap, unsigned char[706]);
item->data = list_save_me_i(706, tmp);
}
break;
case 707:
{
unsigned char tmp[707];
tmp = va_arg(ap, unsigned char[707]);
item->data = list_save_me_i(707, tmp);
}
break;
case 708:
{
unsigned char tmp[708];
tmp = va_arg(ap, unsigned char[708]);
item->data = list_save_me_i(708, tmp);
}
break;
case 709:
{
unsigned char tmp[709];
tmp = va_arg(ap, unsigned char[709]);
item->data = list_save_me_i(709, tmp);
}
break;
case 710:
{
unsigned char tmp[710];
tmp = va_arg(ap, unsigned char[710]);
item->data = list_save_me_i(710, tmp);
}
break;
case 711:
{
unsigned char tmp[711];
tmp = va_arg(ap, unsigned char[711]);
item->data = list_save_me_i(711, tmp);
}
break;
case 712:
{
unsigned char tmp[712];
tmp = va_arg(ap, unsigned char[712]);
item->data = list_save_me_i(712, tmp);
}
break;
case 713:
{
unsigned char tmp[713];
tmp = va_arg(ap, unsigned char[713]);
item->data = list_save_me_i(713, tmp);
}
break;
case 714:
{
unsigned char tmp[714];
tmp = va_arg(ap, unsigned char[714]);
item->data = list_save_me_i(714, tmp);
}
break;
case 715:
{
unsigned char tmp[715];
tmp = va_arg(ap, unsigned char[715]);
item->data = list_save_me_i(715, tmp);
}
break;
case 716:
{
unsigned char tmp[716];
tmp = va_arg(ap, unsigned char[716]);
item->data = list_save_me_i(716, tmp);
}
break;
case 717:
{
unsigned char tmp[717];
tmp = va_arg(ap, unsigned char[717]);
item->data = list_save_me_i(717, tmp);
}
break;
case 718:
{
unsigned char tmp[718];
tmp = va_arg(ap, unsigned char[718]);
item->data = list_save_me_i(718, tmp);
}
break;
case 719:
{
unsigned char tmp[719];
tmp = va_arg(ap, unsigned char[719]);
item->data = list_save_me_i(719, tmp);
}
break;
case 720:
{
unsigned char tmp[720];
tmp = va_arg(ap, unsigned char[720]);
item->data = list_save_me_i(720, tmp);
}
break;
case 721:
{
unsigned char tmp[721];
tmp = va_arg(ap, unsigned char[721]);
item->data = list_save_me_i(721, tmp);
}
break;
case 722:
{
unsigned char tmp[722];
tmp = va_arg(ap, unsigned char[722]);
item->data = list_save_me_i(722, tmp);
}
break;
case 723:
{
unsigned char tmp[723];
tmp = va_arg(ap, unsigned char[723]);
item->data = list_save_me_i(723, tmp);
}
break;
case 724:
{
unsigned char tmp[724];
tmp = va_arg(ap, unsigned char[724]);
item->data = list_save_me_i(724, tmp);
}
break;
case 725:
{
unsigned char tmp[725];
tmp = va_arg(ap, unsigned char[725]);
item->data = list_save_me_i(725, tmp);
}
break;
case 726:
{
unsigned char tmp[726];
tmp = va_arg(ap, unsigned char[726]);
item->data = list_save_me_i(726, tmp);
}
break;
case 727:
{
unsigned char tmp[727];
tmp = va_arg(ap, unsigned char[727]);
item->data = list_save_me_i(727, tmp);
}
break;
case 728:
{
unsigned char tmp[728];
tmp = va_arg(ap, unsigned char[728]);
item->data = list_save_me_i(728, tmp);
}
break;
case 729:
{
unsigned char tmp[729];
tmp = va_arg(ap, unsigned char[729]);
item->data = list_save_me_i(729, tmp);
}
break;
case 730:
{
unsigned char tmp[730];
tmp = va_arg(ap, unsigned char[730]);
item->data = list_save_me_i(730, tmp);
}
break;
case 731:
{
unsigned char tmp[731];
tmp = va_arg(ap, unsigned char[731]);
item->data = list_save_me_i(731, tmp);
}
break;
case 732:
{
unsigned char tmp[732];
tmp = va_arg(ap, unsigned char[732]);
item->data = list_save_me_i(732, tmp);
}
break;
case 733:
{
unsigned char tmp[733];
tmp = va_arg(ap, unsigned char[733]);
item->data = list_save_me_i(733, tmp);
}
break;
case 734:
{
unsigned char tmp[734];
tmp = va_arg(ap, unsigned char[734]);
item->data = list_save_me_i(734, tmp);
}
break;
case 735:
{
unsigned char tmp[735];
tmp = va_arg(ap, unsigned char[735]);
item->data = list_save_me_i(735, tmp);
}
break;
case 736:
{
unsigned char tmp[736];
tmp = va_arg(ap, unsigned char[736]);
item->data = list_save_me_i(736, tmp);
}
break;
case 737:
{
unsigned char tmp[737];
tmp = va_arg(ap, unsigned char[737]);
item->data = list_save_me_i(737, tmp);
}
break;
case 738:
{
unsigned char tmp[738];
tmp = va_arg(ap, unsigned char[738]);
item->data = list_save_me_i(738, tmp);
}
break;
case 739:
{
unsigned char tmp[739];
tmp = va_arg(ap, unsigned char[739]);
item->data = list_save_me_i(739, tmp);
}
break;
case 740:
{
unsigned char tmp[740];
tmp = va_arg(ap, unsigned char[740]);
item->data = list_save_me_i(740, tmp);
}
break;
case 741:
{
unsigned char tmp[741];
tmp = va_arg(ap, unsigned char[741]);
item->data = list_save_me_i(741, tmp);
}
break;
case 742:
{
unsigned char tmp[742];
tmp = va_arg(ap, unsigned char[742]);
item->data = list_save_me_i(742, tmp);
}
break;
case 743:
{
unsigned char tmp[743];
tmp = va_arg(ap, unsigned char[743]);
item->data = list_save_me_i(743, tmp);
}
break;
case 744:
{
unsigned char tmp[744];
tmp = va_arg(ap, unsigned char[744]);
item->data = list_save_me_i(744, tmp);
}
break;
case 745:
{
unsigned char tmp[745];
tmp = va_arg(ap, unsigned char[745]);
item->data = list_save_me_i(745, tmp);
}
break;
case 746:
{
unsigned char tmp[746];
tmp = va_arg(ap, unsigned char[746]);
item->data = list_save_me_i(746, tmp);
}
break;
case 747:
{
unsigned char tmp[747];
tmp = va_arg(ap, unsigned char[747]);
item->data = list_save_me_i(747, tmp);
}
break;
case 748:
{
unsigned char tmp[748];
tmp = va_arg(ap, unsigned char[748]);
item->data = list_save_me_i(748, tmp);
}
break;
case 749:
{
unsigned char tmp[749];
tmp = va_arg(ap, unsigned char[749]);
item->data = list_save_me_i(749, tmp);
}
break;
case 750:
{
unsigned char tmp[750];
tmp = va_arg(ap, unsigned char[750]);
item->data = list_save_me_i(750, tmp);
}
break;
case 751:
{
unsigned char tmp[751];
tmp = va_arg(ap, unsigned char[751]);
item->data = list_save_me_i(751, tmp);
}
break;
case 752:
{
unsigned char tmp[752];
tmp = va_arg(ap, unsigned char[752]);
item->data = list_save_me_i(752, tmp);
}
break;
case 753:
{
unsigned char tmp[753];
tmp = va_arg(ap, unsigned char[753]);
item->data = list_save_me_i(753, tmp);
}
break;
case 754:
{
unsigned char tmp[754];
tmp = va_arg(ap, unsigned char[754]);
item->data = list_save_me_i(754, tmp);
}
break;
case 755:
{
unsigned char tmp[755];
tmp = va_arg(ap, unsigned char[755]);
item->data = list_save_me_i(755, tmp);
}
break;
case 756:
{
unsigned char tmp[756];
tmp = va_arg(ap, unsigned char[756]);
item->data = list_save_me_i(756, tmp);
}
break;
case 757:
{
unsigned char tmp[757];
tmp = va_arg(ap, unsigned char[757]);
item->data = list_save_me_i(757, tmp);
}
break;
case 758:
{
unsigned char tmp[758];
tmp = va_arg(ap, unsigned char[758]);
item->data = list_save_me_i(758, tmp);
}
break;
case 759:
{
unsigned char tmp[759];
tmp = va_arg(ap, unsigned char[759]);
item->data = list_save_me_i(759, tmp);
}
break;
case 760:
{
unsigned char tmp[760];
tmp = va_arg(ap, unsigned char[760]);
item->data = list_save_me_i(760, tmp);
}
break;
case 761:
{
unsigned char tmp[761];
tmp = va_arg(ap, unsigned char[761]);
item->data = list_save_me_i(761, tmp);
}
break;
case 762:
{
unsigned char tmp[762];
tmp = va_arg(ap, unsigned char[762]);
item->data = list_save_me_i(762, tmp);
}
break;
case 763:
{
unsigned char tmp[763];
tmp = va_arg(ap, unsigned char[763]);
item->data = list_save_me_i(763, tmp);
}
break;
case 764:
{
unsigned char tmp[764];
tmp = va_arg(ap, unsigned char[764]);
item->data = list_save_me_i(764, tmp);
}
break;
case 765:
{
unsigned char tmp[765];
tmp = va_arg(ap, unsigned char[765]);
item->data = list_save_me_i(765, tmp);
}
break;
case 766:
{
unsigned char tmp[766];
tmp = va_arg(ap, unsigned char[766]);
item->data = list_save_me_i(766, tmp);
}
break;
case 767:
{
unsigned char tmp[767];
tmp = va_arg(ap, unsigned char[767]);
item->data = list_save_me_i(767, tmp);
}
break;
case 768:
{
unsigned char tmp[768];
tmp = va_arg(ap, unsigned char[768]);
item->data = list_save_me_i(768, tmp);
}
break;
case 769:
{
unsigned char tmp[769];
tmp = va_arg(ap, unsigned char[769]);
item->data = list_save_me_i(769, tmp);
}
break;
case 770:
{
unsigned char tmp[770];
tmp = va_arg(ap, unsigned char[770]);
item->data = list_save_me_i(770, tmp);
}
break;
case 771:
{
unsigned char tmp[771];
tmp = va_arg(ap, unsigned char[771]);
item->data = list_save_me_i(771, tmp);
}
break;
case 772:
{
unsigned char tmp[772];
tmp = va_arg(ap, unsigned char[772]);
item->data = list_save_me_i(772, tmp);
}
break;
case 773:
{
unsigned char tmp[773];
tmp = va_arg(ap, unsigned char[773]);
item->data = list_save_me_i(773, tmp);
}
break;
case 774:
{
unsigned char tmp[774];
tmp = va_arg(ap, unsigned char[774]);
item->data = list_save_me_i(774, tmp);
}
break;
case 775:
{
unsigned char tmp[775];
tmp = va_arg(ap, unsigned char[775]);
item->data = list_save_me_i(775, tmp);
}
break;
case 776:
{
unsigned char tmp[776];
tmp = va_arg(ap, unsigned char[776]);
item->data = list_save_me_i(776, tmp);
}
break;
case 777:
{
unsigned char tmp[777];
tmp = va_arg(ap, unsigned char[777]);
item->data = list_save_me_i(777, tmp);
}
break;
case 778:
{
unsigned char tmp[778];
tmp = va_arg(ap, unsigned char[778]);
item->data = list_save_me_i(778, tmp);
}
break;
case 779:
{
unsigned char tmp[779];
tmp = va_arg(ap, unsigned char[779]);
item->data = list_save_me_i(779, tmp);
}
break;
case 780:
{
unsigned char tmp[780];
tmp = va_arg(ap, unsigned char[780]);
item->data = list_save_me_i(780, tmp);
}
break;
case 781:
{
unsigned char tmp[781];
tmp = va_arg(ap, unsigned char[781]);
item->data = list_save_me_i(781, tmp);
}
break;
case 782:
{
unsigned char tmp[782];
tmp = va_arg(ap, unsigned char[782]);
item->data = list_save_me_i(782, tmp);
}
break;
case 783:
{
unsigned char tmp[783];
tmp = va_arg(ap, unsigned char[783]);
item->data = list_save_me_i(783, tmp);
}
break;
case 784:
{
unsigned char tmp[784];
tmp = va_arg(ap, unsigned char[784]);
item->data = list_save_me_i(784, tmp);
}
break;
case 785:
{
unsigned char tmp[785];
tmp = va_arg(ap, unsigned char[785]);
item->data = list_save_me_i(785, tmp);
}
break;
case 786:
{
unsigned char tmp[786];
tmp = va_arg(ap, unsigned char[786]);
item->data = list_save_me_i(786, tmp);
}
break;
case 787:
{
unsigned char tmp[787];
tmp = va_arg(ap, unsigned char[787]);
item->data = list_save_me_i(787, tmp);
}
break;
case 788:
{
unsigned char tmp[788];
tmp = va_arg(ap, unsigned char[788]);
item->data = list_save_me_i(788, tmp);
}
break;
case 789:
{
unsigned char tmp[789];
tmp = va_arg(ap, unsigned char[789]);
item->data = list_save_me_i(789, tmp);
}
break;
case 790:
{
unsigned char tmp[790];
tmp = va_arg(ap, unsigned char[790]);
item->data = list_save_me_i(790, tmp);
}
break;
case 791:
{
unsigned char tmp[791];
tmp = va_arg(ap, unsigned char[791]);
item->data = list_save_me_i(791, tmp);
}
break;
case 792:
{
unsigned char tmp[792];
tmp = va_arg(ap, unsigned char[792]);
item->data = list_save_me_i(792, tmp);
}
break;
case 793:
{
unsigned char tmp[793];
tmp = va_arg(ap, unsigned char[793]);
item->data = list_save_me_i(793, tmp);
}
break;
case 794:
{
unsigned char tmp[794];
tmp = va_arg(ap, unsigned char[794]);
item->data = list_save_me_i(794, tmp);
}
break;
case 795:
{
unsigned char tmp[795];
tmp = va_arg(ap, unsigned char[795]);
item->data = list_save_me_i(795, tmp);
}
break;
case 796:
{
unsigned char tmp[796];
tmp = va_arg(ap, unsigned char[796]);
item->data = list_save_me_i(796, tmp);
}
break;
case 797:
{
unsigned char tmp[797];
tmp = va_arg(ap, unsigned char[797]);
item->data = list_save_me_i(797, tmp);
}
break;
case 798:
{
unsigned char tmp[798];
tmp = va_arg(ap, unsigned char[798]);
item->data = list_save_me_i(798, tmp);
}
break;
case 799:
{
unsigned char tmp[799];
tmp = va_arg(ap, unsigned char[799]);
item->data = list_save_me_i(799, tmp);
}
break;
case 800:
{
unsigned char tmp[800];
tmp = va_arg(ap, unsigned char[800]);
item->data = list_save_me_i(800, tmp);
}
break;
case 801:
{
unsigned char tmp[801];
tmp = va_arg(ap, unsigned char[801]);
item->data = list_save_me_i(801, tmp);
}
break;
case 802:
{
unsigned char tmp[802];
tmp = va_arg(ap, unsigned char[802]);
item->data = list_save_me_i(802, tmp);
}
break;
case 803:
{
unsigned char tmp[803];
tmp = va_arg(ap, unsigned char[803]);
item->data = list_save_me_i(803, tmp);
}
break;
case 804:
{
unsigned char tmp[804];
tmp = va_arg(ap, unsigned char[804]);
item->data = list_save_me_i(804, tmp);
}
break;
case 805:
{
unsigned char tmp[805];
tmp = va_arg(ap, unsigned char[805]);
item->data = list_save_me_i(805, tmp);
}
break;
case 806:
{
unsigned char tmp[806];
tmp = va_arg(ap, unsigned char[806]);
item->data = list_save_me_i(806, tmp);
}
break;
case 807:
{
unsigned char tmp[807];
tmp = va_arg(ap, unsigned char[807]);
item->data = list_save_me_i(807, tmp);
}
break;
case 808:
{
unsigned char tmp[808];
tmp = va_arg(ap, unsigned char[808]);
item->data = list_save_me_i(808, tmp);
}
break;
case 809:
{
unsigned char tmp[809];
tmp = va_arg(ap, unsigned char[809]);
item->data = list_save_me_i(809, tmp);
}
break;
case 810:
{
unsigned char tmp[810];
tmp = va_arg(ap, unsigned char[810]);
item->data = list_save_me_i(810, tmp);
}
break;
case 811:
{
unsigned char tmp[811];
tmp = va_arg(ap, unsigned char[811]);
item->data = list_save_me_i(811, tmp);
}
break;
case 812:
{
unsigned char tmp[812];
tmp = va_arg(ap, unsigned char[812]);
item->data = list_save_me_i(812, tmp);
}
break;
case 813:
{
unsigned char tmp[813];
tmp = va_arg(ap, unsigned char[813]);
item->data = list_save_me_i(813, tmp);
}
break;
case 814:
{
unsigned char tmp[814];
tmp = va_arg(ap, unsigned char[814]);
item->data = list_save_me_i(814, tmp);
}
break;
case 815:
{
unsigned char tmp[815];
tmp = va_arg(ap, unsigned char[815]);
item->data = list_save_me_i(815, tmp);
}
break;
case 816:
{
unsigned char tmp[816];
tmp = va_arg(ap, unsigned char[816]);
item->data = list_save_me_i(816, tmp);
}
break;
case 817:
{
unsigned char tmp[817];
tmp = va_arg(ap, unsigned char[817]);
item->data = list_save_me_i(817, tmp);
}
break;
case 818:
{
unsigned char tmp[818];
tmp = va_arg(ap, unsigned char[818]);
item->data = list_save_me_i(818, tmp);
}
break;
case 819:
{
unsigned char tmp[819];
tmp = va_arg(ap, unsigned char[819]);
item->data = list_save_me_i(819, tmp);
}
break;
case 820:
{
unsigned char tmp[820];
tmp = va_arg(ap, unsigned char[820]);
item->data = list_save_me_i(820, tmp);
}
break;
case 821:
{
unsigned char tmp[821];
tmp = va_arg(ap, unsigned char[821]);
item->data = list_save_me_i(821, tmp);
}
break;
case 822:
{
unsigned char tmp[822];
tmp = va_arg(ap, unsigned char[822]);
item->data = list_save_me_i(822, tmp);
}
break;
case 823:
{
unsigned char tmp[823];
tmp = va_arg(ap, unsigned char[823]);
item->data = list_save_me_i(823, tmp);
}
break;
case 824:
{
unsigned char tmp[824];
tmp = va_arg(ap, unsigned char[824]);
item->data = list_save_me_i(824, tmp);
}
break;
case 825:
{
unsigned char tmp[825];
tmp = va_arg(ap, unsigned char[825]);
item->data = list_save_me_i(825, tmp);
}
break;
case 826:
{
unsigned char tmp[826];
tmp = va_arg(ap, unsigned char[826]);
item->data = list_save_me_i(826, tmp);
}
break;
case 827:
{
unsigned char tmp[827];
tmp = va_arg(ap, unsigned char[827]);
item->data = list_save_me_i(827, tmp);
}
break;
case 828:
{
unsigned char tmp[828];
tmp = va_arg(ap, unsigned char[828]);
item->data = list_save_me_i(828, tmp);
}
break;
case 829:
{
unsigned char tmp[829];
tmp = va_arg(ap, unsigned char[829]);
item->data = list_save_me_i(829, tmp);
}
break;
case 830:
{
unsigned char tmp[830];
tmp = va_arg(ap, unsigned char[830]);
item->data = list_save_me_i(830, tmp);
}
break;
case 831:
{
unsigned char tmp[831];
tmp = va_arg(ap, unsigned char[831]);
item->data = list_save_me_i(831, tmp);
}
break;
case 832:
{
unsigned char tmp[832];
tmp = va_arg(ap, unsigned char[832]);
item->data = list_save_me_i(832, tmp);
}
break;
case 833:
{
unsigned char tmp[833];
tmp = va_arg(ap, unsigned char[833]);
item->data = list_save_me_i(833, tmp);
}
break;
case 834:
{
unsigned char tmp[834];
tmp = va_arg(ap, unsigned char[834]);
item->data = list_save_me_i(834, tmp);
}
break;
case 835:
{
unsigned char tmp[835];
tmp = va_arg(ap, unsigned char[835]);
item->data = list_save_me_i(835, tmp);
}
break;
case 836:
{
unsigned char tmp[836];
tmp = va_arg(ap, unsigned char[836]);
item->data = list_save_me_i(836, tmp);
}
break;
case 837:
{
unsigned char tmp[837];
tmp = va_arg(ap, unsigned char[837]);
item->data = list_save_me_i(837, tmp);
}
break;
case 838:
{
unsigned char tmp[838];
tmp = va_arg(ap, unsigned char[838]);
item->data = list_save_me_i(838, tmp);
}
break;
case 839:
{
unsigned char tmp[839];
tmp = va_arg(ap, unsigned char[839]);
item->data = list_save_me_i(839, tmp);
}
break;
case 840:
{
unsigned char tmp[840];
tmp = va_arg(ap, unsigned char[840]);
item->data = list_save_me_i(840, tmp);
}
break;
case 841:
{
unsigned char tmp[841];
tmp = va_arg(ap, unsigned char[841]);
item->data = list_save_me_i(841, tmp);
}
break;
case 842:
{
unsigned char tmp[842];
tmp = va_arg(ap, unsigned char[842]);
item->data = list_save_me_i(842, tmp);
}
break;
case 843:
{
unsigned char tmp[843];
tmp = va_arg(ap, unsigned char[843]);
item->data = list_save_me_i(843, tmp);
}
break;
case 844:
{
unsigned char tmp[844];
tmp = va_arg(ap, unsigned char[844]);
item->data = list_save_me_i(844, tmp);
}
break;
case 845:
{
unsigned char tmp[845];
tmp = va_arg(ap, unsigned char[845]);
item->data = list_save_me_i(845, tmp);
}
break;
case 846:
{
unsigned char tmp[846];
tmp = va_arg(ap, unsigned char[846]);
item->data = list_save_me_i(846, tmp);
}
break;
case 847:
{
unsigned char tmp[847];
tmp = va_arg(ap, unsigned char[847]);
item->data = list_save_me_i(847, tmp);
}
break;
case 848:
{
unsigned char tmp[848];
tmp = va_arg(ap, unsigned char[848]);
item->data = list_save_me_i(848, tmp);
}
break;
case 849:
{
unsigned char tmp[849];
tmp = va_arg(ap, unsigned char[849]);
item->data = list_save_me_i(849, tmp);
}
break;
case 850:
{
unsigned char tmp[850];
tmp = va_arg(ap, unsigned char[850]);
item->data = list_save_me_i(850, tmp);
}
break;
case 851:
{
unsigned char tmp[851];
tmp = va_arg(ap, unsigned char[851]);
item->data = list_save_me_i(851, tmp);
}
break;
case 852:
{
unsigned char tmp[852];
tmp = va_arg(ap, unsigned char[852]);
item->data = list_save_me_i(852, tmp);
}
break;
case 853:
{
unsigned char tmp[853];
tmp = va_arg(ap, unsigned char[853]);
item->data = list_save_me_i(853, tmp);
}
break;
case 854:
{
unsigned char tmp[854];
tmp = va_arg(ap, unsigned char[854]);
item->data = list_save_me_i(854, tmp);
}
break;
case 855:
{
unsigned char tmp[855];
tmp = va_arg(ap, unsigned char[855]);
item->data = list_save_me_i(855, tmp);
}
break;
case 856:
{
unsigned char tmp[856];
tmp = va_arg(ap, unsigned char[856]);
item->data = list_save_me_i(856, tmp);
}
break;
case 857:
{
unsigned char tmp[857];
tmp = va_arg(ap, unsigned char[857]);
item->data = list_save_me_i(857, tmp);
}
break;
case 858:
{
unsigned char tmp[858];
tmp = va_arg(ap, unsigned char[858]);
item->data = list_save_me_i(858, tmp);
}
break;
case 859:
{
unsigned char tmp[859];
tmp = va_arg(ap, unsigned char[859]);
item->data = list_save_me_i(859, tmp);
}
break;
case 860:
{
unsigned char tmp[860];
tmp = va_arg(ap, unsigned char[860]);
item->data = list_save_me_i(860, tmp);
}
break;
case 861:
{
unsigned char tmp[861];
tmp = va_arg(ap, unsigned char[861]);
item->data = list_save_me_i(861, tmp);
}
break;
case 862:
{
unsigned char tmp[862];
tmp = va_arg(ap, unsigned char[862]);
item->data = list_save_me_i(862, tmp);
}
break;
case 863:
{
unsigned char tmp[863];
tmp = va_arg(ap, unsigned char[863]);
item->data = list_save_me_i(863, tmp);
}
break;
case 864:
{
unsigned char tmp[864];
tmp = va_arg(ap, unsigned char[864]);
item->data = list_save_me_i(864, tmp);
}
break;
case 865:
{
unsigned char tmp[865];
tmp = va_arg(ap, unsigned char[865]);
item->data = list_save_me_i(865, tmp);
}
break;
case 866:
{
unsigned char tmp[866];
tmp = va_arg(ap, unsigned char[866]);
item->data = list_save_me_i(866, tmp);
}
break;
case 867:
{
unsigned char tmp[867];
tmp = va_arg(ap, unsigned char[867]);
item->data = list_save_me_i(867, tmp);
}
break;
case 868:
{
unsigned char tmp[868];
tmp = va_arg(ap, unsigned char[868]);
item->data = list_save_me_i(868, tmp);
}
break;
case 869:
{
unsigned char tmp[869];
tmp = va_arg(ap, unsigned char[869]);
item->data = list_save_me_i(869, tmp);
}
break;
case 870:
{
unsigned char tmp[870];
tmp = va_arg(ap, unsigned char[870]);
item->data = list_save_me_i(870, tmp);
}
break;
case 871:
{
unsigned char tmp[871];
tmp = va_arg(ap, unsigned char[871]);
item->data = list_save_me_i(871, tmp);
}
break;
case 872:
{
unsigned char tmp[872];
tmp = va_arg(ap, unsigned char[872]);
item->data = list_save_me_i(872, tmp);
}
break;
case 873:
{
unsigned char tmp[873];
tmp = va_arg(ap, unsigned char[873]);
item->data = list_save_me_i(873, tmp);
}
break;
case 874:
{
unsigned char tmp[874];
tmp = va_arg(ap, unsigned char[874]);
item->data = list_save_me_i(874, tmp);
}
break;
case 875:
{
unsigned char tmp[875];
tmp = va_arg(ap, unsigned char[875]);
item->data = list_save_me_i(875, tmp);
}
break;
case 876:
{
unsigned char tmp[876];
tmp = va_arg(ap, unsigned char[876]);
item->data = list_save_me_i(876, tmp);
}
break;
case 877:
{
unsigned char tmp[877];
tmp = va_arg(ap, unsigned char[877]);
item->data = list_save_me_i(877, tmp);
}
break;
case 878:
{
unsigned char tmp[878];
tmp = va_arg(ap, unsigned char[878]);
item->data = list_save_me_i(878, tmp);
}
break;
case 879:
{
unsigned char tmp[879];
tmp = va_arg(ap, unsigned char[879]);
item->data = list_save_me_i(879, tmp);
}
break;
case 880:
{
unsigned char tmp[880];
tmp = va_arg(ap, unsigned char[880]);
item->data = list_save_me_i(880, tmp);
}
break;
case 881:
{
unsigned char tmp[881];
tmp = va_arg(ap, unsigned char[881]);
item->data = list_save_me_i(881, tmp);
}
break;
case 882:
{
unsigned char tmp[882];
tmp = va_arg(ap, unsigned char[882]);
item->data = list_save_me_i(882, tmp);
}
break;
case 883:
{
unsigned char tmp[883];
tmp = va_arg(ap, unsigned char[883]);
item->data = list_save_me_i(883, tmp);
}
break;
case 884:
{
unsigned char tmp[884];
tmp = va_arg(ap, unsigned char[884]);
item->data = list_save_me_i(884, tmp);
}
break;
case 885:
{
unsigned char tmp[885];
tmp = va_arg(ap, unsigned char[885]);
item->data = list_save_me_i(885, tmp);
}
break;
case 886:
{
unsigned char tmp[886];
tmp = va_arg(ap, unsigned char[886]);
item->data = list_save_me_i(886, tmp);
}
break;
case 887:
{
unsigned char tmp[887];
tmp = va_arg(ap, unsigned char[887]);
item->data = list_save_me_i(887, tmp);
}
break;
case 888:
{
unsigned char tmp[888];
tmp = va_arg(ap, unsigned char[888]);
item->data = list_save_me_i(888, tmp);
}
break;
case 889:
{
unsigned char tmp[889];
tmp = va_arg(ap, unsigned char[889]);
item->data = list_save_me_i(889, tmp);
}
break;
case 890:
{
unsigned char tmp[890];
tmp = va_arg(ap, unsigned char[890]);
item->data = list_save_me_i(890, tmp);
}
break;
case 891:
{
unsigned char tmp[891];
tmp = va_arg(ap, unsigned char[891]);
item->data = list_save_me_i(891, tmp);
}
break;
case 892:
{
unsigned char tmp[892];
tmp = va_arg(ap, unsigned char[892]);
item->data = list_save_me_i(892, tmp);
}
break;
case 893:
{
unsigned char tmp[893];
tmp = va_arg(ap, unsigned char[893]);
item->data = list_save_me_i(893, tmp);
}
break;
case 894:
{
unsigned char tmp[894];
tmp = va_arg(ap, unsigned char[894]);
item->data = list_save_me_i(894, tmp);
}
break;
case 895:
{
unsigned char tmp[895];
tmp = va_arg(ap, unsigned char[895]);
item->data = list_save_me_i(895, tmp);
}
break;
case 896:
{
unsigned char tmp[896];
tmp = va_arg(ap, unsigned char[896]);
item->data = list_save_me_i(896, tmp);
}
break;
case 897:
{
unsigned char tmp[897];
tmp = va_arg(ap, unsigned char[897]);
item->data = list_save_me_i(897, tmp);
}
break;
case 898:
{
unsigned char tmp[898];
tmp = va_arg(ap, unsigned char[898]);
item->data = list_save_me_i(898, tmp);
}
break;
case 899:
{
unsigned char tmp[899];
tmp = va_arg(ap, unsigned char[899]);
item->data = list_save_me_i(899, tmp);
}
break;
case 900:
{
unsigned char tmp[900];
tmp = va_arg(ap, unsigned char[900]);
item->data = list_save_me_i(900, tmp);
}
break;
case 901:
{
unsigned char tmp[901];
tmp = va_arg(ap, unsigned char[901]);
item->data = list_save_me_i(901, tmp);
}
break;
case 902:
{
unsigned char tmp[902];
tmp = va_arg(ap, unsigned char[902]);
item->data = list_save_me_i(902, tmp);
}
break;
case 903:
{
unsigned char tmp[903];
tmp = va_arg(ap, unsigned char[903]);
item->data = list_save_me_i(903, tmp);
}
break;
case 904:
{
unsigned char tmp[904];
tmp = va_arg(ap, unsigned char[904]);
item->data = list_save_me_i(904, tmp);
}
break;
case 905:
{
unsigned char tmp[905];
tmp = va_arg(ap, unsigned char[905]);
item->data = list_save_me_i(905, tmp);
}
break;
case 906:
{
unsigned char tmp[906];
tmp = va_arg(ap, unsigned char[906]);
item->data = list_save_me_i(906, tmp);
}
break;
case 907:
{
unsigned char tmp[907];
tmp = va_arg(ap, unsigned char[907]);
item->data = list_save_me_i(907, tmp);
}
break;
case 908:
{
unsigned char tmp[908];
tmp = va_arg(ap, unsigned char[908]);
item->data = list_save_me_i(908, tmp);
}
break;
case 909:
{
unsigned char tmp[909];
tmp = va_arg(ap, unsigned char[909]);
item->data = list_save_me_i(909, tmp);
}
break;
case 910:
{
unsigned char tmp[910];
tmp = va_arg(ap, unsigned char[910]);
item->data = list_save_me_i(910, tmp);
}
break;
case 911:
{
unsigned char tmp[911];
tmp = va_arg(ap, unsigned char[911]);
item->data = list_save_me_i(911, tmp);
}
break;
case 912:
{
unsigned char tmp[912];
tmp = va_arg(ap, unsigned char[912]);
item->data = list_save_me_i(912, tmp);
}
break;
case 913:
{
unsigned char tmp[913];
tmp = va_arg(ap, unsigned char[913]);
item->data = list_save_me_i(913, tmp);
}
break;
case 914:
{
unsigned char tmp[914];
tmp = va_arg(ap, unsigned char[914]);
item->data = list_save_me_i(914, tmp);
}
break;
case 915:
{
unsigned char tmp[915];
tmp = va_arg(ap, unsigned char[915]);
item->data = list_save_me_i(915, tmp);
}
break;
case 916:
{
unsigned char tmp[916];
tmp = va_arg(ap, unsigned char[916]);
item->data = list_save_me_i(916, tmp);
}
break;
case 917:
{
unsigned char tmp[917];
tmp = va_arg(ap, unsigned char[917]);
item->data = list_save_me_i(917, tmp);
}
break;
case 918:
{
unsigned char tmp[918];
tmp = va_arg(ap, unsigned char[918]);
item->data = list_save_me_i(918, tmp);
}
break;
case 919:
{
unsigned char tmp[919];
tmp = va_arg(ap, unsigned char[919]);
item->data = list_save_me_i(919, tmp);
}
break;
case 920:
{
unsigned char tmp[920];
tmp = va_arg(ap, unsigned char[920]);
item->data = list_save_me_i(920, tmp);
}
break;
case 921:
{
unsigned char tmp[921];
tmp = va_arg(ap, unsigned char[921]);
item->data = list_save_me_i(921, tmp);
}
break;
case 922:
{
unsigned char tmp[922];
tmp = va_arg(ap, unsigned char[922]);
item->data = list_save_me_i(922, tmp);
}
break;
case 923:
{
unsigned char tmp[923];
tmp = va_arg(ap, unsigned char[923]);
item->data = list_save_me_i(923, tmp);
}
break;
case 924:
{
unsigned char tmp[924];
tmp = va_arg(ap, unsigned char[924]);
item->data = list_save_me_i(924, tmp);
}
break;
case 925:
{
unsigned char tmp[925];
tmp = va_arg(ap, unsigned char[925]);
item->data = list_save_me_i(925, tmp);
}
break;
case 926:
{
unsigned char tmp[926];
tmp = va_arg(ap, unsigned char[926]);
item->data = list_save_me_i(926, tmp);
}
break;
case 927:
{
unsigned char tmp[927];
tmp = va_arg(ap, unsigned char[927]);
item->data = list_save_me_i(927, tmp);
}
break;
case 928:
{
unsigned char tmp[928];
tmp = va_arg(ap, unsigned char[928]);
item->data = list_save_me_i(928, tmp);
}
break;
case 929:
{
unsigned char tmp[929];
tmp = va_arg(ap, unsigned char[929]);
item->data = list_save_me_i(929, tmp);
}
break;
case 930:
{
unsigned char tmp[930];
tmp = va_arg(ap, unsigned char[930]);
item->data = list_save_me_i(930, tmp);
}
break;
case 931:
{
unsigned char tmp[931];
tmp = va_arg(ap, unsigned char[931]);
item->data = list_save_me_i(931, tmp);
}
break;
case 932:
{
unsigned char tmp[932];
tmp = va_arg(ap, unsigned char[932]);
item->data = list_save_me_i(932, tmp);
}
break;
case 933:
{
unsigned char tmp[933];
tmp = va_arg(ap, unsigned char[933]);
item->data = list_save_me_i(933, tmp);
}
break;
case 934:
{
unsigned char tmp[934];
tmp = va_arg(ap, unsigned char[934]);
item->data = list_save_me_i(934, tmp);
}
break;
case 935:
{
unsigned char tmp[935];
tmp = va_arg(ap, unsigned char[935]);
item->data = list_save_me_i(935, tmp);
}
break;
case 936:
{
unsigned char tmp[936];
tmp = va_arg(ap, unsigned char[936]);
item->data = list_save_me_i(936, tmp);
}
break;
case 937:
{
unsigned char tmp[937];
tmp = va_arg(ap, unsigned char[937]);
item->data = list_save_me_i(937, tmp);
}
break;
case 938:
{
unsigned char tmp[938];
tmp = va_arg(ap, unsigned char[938]);
item->data = list_save_me_i(938, tmp);
}
break;
case 939:
{
unsigned char tmp[939];
tmp = va_arg(ap, unsigned char[939]);
item->data = list_save_me_i(939, tmp);
}
break;
case 940:
{
unsigned char tmp[940];
tmp = va_arg(ap, unsigned char[940]);
item->data = list_save_me_i(940, tmp);
}
break;
case 941:
{
unsigned char tmp[941];
tmp = va_arg(ap, unsigned char[941]);
item->data = list_save_me_i(941, tmp);
}
break;
case 942:
{
unsigned char tmp[942];
tmp = va_arg(ap, unsigned char[942]);
item->data = list_save_me_i(942, tmp);
}
break;
case 943:
{
unsigned char tmp[943];
tmp = va_arg(ap, unsigned char[943]);
item->data = list_save_me_i(943, tmp);
}
break;
case 944:
{
unsigned char tmp[944];
tmp = va_arg(ap, unsigned char[944]);
item->data = list_save_me_i(944, tmp);
}
break;
case 945:
{
unsigned char tmp[945];
tmp = va_arg(ap, unsigned char[945]);
item->data = list_save_me_i(945, tmp);
}
break;
case 946:
{
unsigned char tmp[946];
tmp = va_arg(ap, unsigned char[946]);
item->data = list_save_me_i(946, tmp);
}
break;
case 947:
{
unsigned char tmp[947];
tmp = va_arg(ap, unsigned char[947]);
item->data = list_save_me_i(947, tmp);
}
break;
case 948:
{
unsigned char tmp[948];
tmp = va_arg(ap, unsigned char[948]);
item->data = list_save_me_i(948, tmp);
}
break;
case 949:
{
unsigned char tmp[949];
tmp = va_arg(ap, unsigned char[949]);
item->data = list_save_me_i(949, tmp);
}
break;
case 950:
{
unsigned char tmp[950];
tmp = va_arg(ap, unsigned char[950]);
item->data = list_save_me_i(950, tmp);
}
break;
case 951:
{
unsigned char tmp[951];
tmp = va_arg(ap, unsigned char[951]);
item->data = list_save_me_i(951, tmp);
}
break;
case 952:
{
unsigned char tmp[952];
tmp = va_arg(ap, unsigned char[952]);
item->data = list_save_me_i(952, tmp);
}
break;
case 953:
{
unsigned char tmp[953];
tmp = va_arg(ap, unsigned char[953]);
item->data = list_save_me_i(953, tmp);
}
break;
case 954:
{
unsigned char tmp[954];
tmp = va_arg(ap, unsigned char[954]);
item->data = list_save_me_i(954, tmp);
}
break;
case 955:
{
unsigned char tmp[955];
tmp = va_arg(ap, unsigned char[955]);
item->data = list_save_me_i(955, tmp);
}
break;
case 956:
{
unsigned char tmp[956];
tmp = va_arg(ap, unsigned char[956]);
item->data = list_save_me_i(956, tmp);
}
break;
case 957:
{
unsigned char tmp[957];
tmp = va_arg(ap, unsigned char[957]);
item->data = list_save_me_i(957, tmp);
}
break;
case 958:
{
unsigned char tmp[958];
tmp = va_arg(ap, unsigned char[958]);
item->data = list_save_me_i(958, tmp);
}
break;
case 959:
{
unsigned char tmp[959];
tmp = va_arg(ap, unsigned char[959]);
item->data = list_save_me_i(959, tmp);
}
break;
case 960:
{
unsigned char tmp[960];
tmp = va_arg(ap, unsigned char[960]);
item->data = list_save_me_i(960, tmp);
}
break;
case 961:
{
unsigned char tmp[961];
tmp = va_arg(ap, unsigned char[961]);
item->data = list_save_me_i(961, tmp);
}
break;
case 962:
{
unsigned char tmp[962];
tmp = va_arg(ap, unsigned char[962]);
item->data = list_save_me_i(962, tmp);
}
break;
case 963:
{
unsigned char tmp[963];
tmp = va_arg(ap, unsigned char[963]);
item->data = list_save_me_i(963, tmp);
}
break;
case 964:
{
unsigned char tmp[964];
tmp = va_arg(ap, unsigned char[964]);
item->data = list_save_me_i(964, tmp);
}
break;
case 965:
{
unsigned char tmp[965];
tmp = va_arg(ap, unsigned char[965]);
item->data = list_save_me_i(965, tmp);
}
break;
case 966:
{
unsigned char tmp[966];
tmp = va_arg(ap, unsigned char[966]);
item->data = list_save_me_i(966, tmp);
}
break;
case 967:
{
unsigned char tmp[967];
tmp = va_arg(ap, unsigned char[967]);
item->data = list_save_me_i(967, tmp);
}
break;
case 968:
{
unsigned char tmp[968];
tmp = va_arg(ap, unsigned char[968]);
item->data = list_save_me_i(968, tmp);
}
break;
case 969:
{
unsigned char tmp[969];
tmp = va_arg(ap, unsigned char[969]);
item->data = list_save_me_i(969, tmp);
}
break;
case 970:
{
unsigned char tmp[970];
tmp = va_arg(ap, unsigned char[970]);
item->data = list_save_me_i(970, tmp);
}
break;
case 971:
{
unsigned char tmp[971];
tmp = va_arg(ap, unsigned char[971]);
item->data = list_save_me_i(971, tmp);
}
break;
case 972:
{
unsigned char tmp[972];
tmp = va_arg(ap, unsigned char[972]);
item->data = list_save_me_i(972, tmp);
}
break;
case 973:
{
unsigned char tmp[973];
tmp = va_arg(ap, unsigned char[973]);
item->data = list_save_me_i(973, tmp);
}
break;
case 974:
{
unsigned char tmp[974];
tmp = va_arg(ap, unsigned char[974]);
item->data = list_save_me_i(974, tmp);
}
break;
case 975:
{
unsigned char tmp[975];
tmp = va_arg(ap, unsigned char[975]);
item->data = list_save_me_i(975, tmp);
}
break;
case 976:
{
unsigned char tmp[976];
tmp = va_arg(ap, unsigned char[976]);
item->data = list_save_me_i(976, tmp);
}
break;
case 977:
{
unsigned char tmp[977];
tmp = va_arg(ap, unsigned char[977]);
item->data = list_save_me_i(977, tmp);
}
break;
case 978:
{
unsigned char tmp[978];
tmp = va_arg(ap, unsigned char[978]);
item->data = list_save_me_i(978, tmp);
}
break;
case 979:
{
unsigned char tmp[979];
tmp = va_arg(ap, unsigned char[979]);
item->data = list_save_me_i(979, tmp);
}
break;
case 980:
{
unsigned char tmp[980];
tmp = va_arg(ap, unsigned char[980]);
item->data = list_save_me_i(980, tmp);
}
break;
case 981:
{
unsigned char tmp[981];
tmp = va_arg(ap, unsigned char[981]);
item->data = list_save_me_i(981, tmp);
}
break;
case 982:
{
unsigned char tmp[982];
tmp = va_arg(ap, unsigned char[982]);
item->data = list_save_me_i(982, tmp);
}
break;
case 983:
{
unsigned char tmp[983];
tmp = va_arg(ap, unsigned char[983]);
item->data = list_save_me_i(983, tmp);
}
break;
case 984:
{
unsigned char tmp[984];
tmp = va_arg(ap, unsigned char[984]);
item->data = list_save_me_i(984, tmp);
}
break;
case 985:
{
unsigned char tmp[985];
tmp = va_arg(ap, unsigned char[985]);
item->data = list_save_me_i(985, tmp);
}
break;
case 986:
{
unsigned char tmp[986];
tmp = va_arg(ap, unsigned char[986]);
item->data = list_save_me_i(986, tmp);
}
break;
case 987:
{
unsigned char tmp[987];
tmp = va_arg(ap, unsigned char[987]);
item->data = list_save_me_i(987, tmp);
}
break;
case 988:
{
unsigned char tmp[988];
tmp = va_arg(ap, unsigned char[988]);
item->data = list_save_me_i(988, tmp);
}
break;
case 989:
{
unsigned char tmp[989];
tmp = va_arg(ap, unsigned char[989]);
item->data = list_save_me_i(989, tmp);
}
break;
case 990:
{
unsigned char tmp[990];
tmp = va_arg(ap, unsigned char[990]);
item->data = list_save_me_i(990, tmp);
}
break;
case 991:
{
unsigned char tmp[991];
tmp = va_arg(ap, unsigned char[991]);
item->data = list_save_me_i(991, tmp);
}
break;
case 992:
{
unsigned char tmp[992];
tmp = va_arg(ap, unsigned char[992]);
item->data = list_save_me_i(992, tmp);
}
break;
case 993:
{
unsigned char tmp[993];
tmp = va_arg(ap, unsigned char[993]);
item->data = list_save_me_i(993, tmp);
}
break;
case 994:
{
unsigned char tmp[994];
tmp = va_arg(ap, unsigned char[994]);
item->data = list_save_me_i(994, tmp);
}
break;
case 995:
{
unsigned char tmp[995];
tmp = va_arg(ap, unsigned char[995]);
item->data = list_save_me_i(995, tmp);
}
break;
case 996:
{
unsigned char tmp[996];
tmp = va_arg(ap, unsigned char[996]);
item->data = list_save_me_i(996, tmp);
}
break;
case 997:
{
unsigned char tmp[997];
tmp = va_arg(ap, unsigned char[997]);
item->data = list_save_me_i(997, tmp);
}
break;
case 998:
{
unsigned char tmp[998];
tmp = va_arg(ap, unsigned char[998]);
item->data = list_save_me_i(998, tmp);
}
break;
case 999:
{
unsigned char tmp[999];
tmp = va_arg(ap, unsigned char[999]);
item->data = list_save_me_i(999, tmp);
}
break;
case 1000:
{
unsigned char tmp[1000];
tmp = va_arg(ap, unsigned char[1000]);
item->data = list_save_me_i(1000, tmp);
}
break;
    }
  va_end(ap);
  return (item);
}
