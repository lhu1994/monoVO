  t2 = b_dy*dt;
  t3 = dt*dt;
  t4 = b_ay*t3*(1.0/2.0);
  t5 = t2+t4;
  t6 = b_az*t3*(1.0/2.0);
  t7 = t2+t6;
  t8 = b_dx*dt;
  t9 = b_ax*t3*(1.0/2.0);
  t10 = t8+t9;
  t11 = b_dy*2.0;
  t12 = qy*qy;
  t13 = t12*2.0;
  t14 = qz*qz;
  t15 = t14*2.0;
  t16 = t13+t15-1.0;
  t17 = qw*qy*2.0;
  t46 = qx*qz*2.0;
  t18 = t17-t46;
  t19 = qw*qz*2.0;
  t20 = qx*qy*2.0;
  t21 = t19+t20;
  t22 = lambda*qx*t7*2.0;
  t23 = lambda*qz*t7*2.0;
  t24 = b_ay*dt;
  t25 = t11+t24;
  t26 = b_dx*2.0;
  t27 = b_ax*dt;
  t28 = t26+t27;
  t29 = b_az*dt;
  t30 = t11+t29;
  t31 = qw*qz;
  t32 = qx*qy;
  t33 = qw*qx*2.0;
  t34 = qy*qz*2.0;
  t35 = t33+t34;
  t36 = qx*qx;
  t37 = t36*2.0;
  t38 = t15+t37-1.0;
  t39 = t31-t32;
  t40 = lambda*qx*t5*2.0;
  t41 = lambda*qy*t10*2.0;
  t42 = lambda*qw*t5*2.0;
  t43 = lambda*qz*t5*2.0;
  t44 = lambda*qx*t10*2.0;
  t45 = lambda*qy*t5*2.0;
  t47 = t17+t46;
  t48 = t33-t34;
  t49 = t13+t37-1.0;
  t50 = qw*qy;
  t51 = qw*qx;
  t52 = qy*qz;
  t53 = fabs(b_wx);
  t54 = fabs(b_wy);
  t55 = fabs(b_wz);
  t57 = t53*t53;
  t58 = t54*t54;
  t59 = t55*t55;
  t56 = t57+t58+t59;
  t60 = t3*t3;
  t61 = t56*t56;
  t62 = t60*t61*2.604166666666667E-4;
  t64 = t3*t56*(1.0/4.8E1);
  t63 = t62-t64+1.0/2.0;
  t65 = (b_wx/fabs(b_wx));
  t66 = t3*t53*t65*(1.0/2.4E1);
  t68 = t53*t56*t60*t65*(1.0/9.6E2);
  t67 = t66-t68;
  t69 = (b_wy/fabs(b_wy));
  t70 = t3*t54*t69*(1.0/2.4E1);
  t72 = t54*t56*t60*t69*(1.0/9.6E2);
  t71 = t70-t72;
  t73 = (b_wz/fabs(b_wz));
  t74 = t3*t55*t73*(1.0/2.4E1);
  t76 = t55*t56*t60*t73*(1.0/9.6E2);
  t75 = t74-t76;
  t77 = t60*t61*(1.0/3.84E2);
  t86 = t3*t56*(1.0/2.0);
  t78 = t77-t86+1.0;
  t79 = t3*t53*t65;
  t88 = t53*t56*t60*t65*(1.0/9.6E1);
  t80 = t79-t88;
  t81 = t3*t54*t69;
  t90 = t54*t56*t60*t69*(1.0/9.6E1);
  t82 = t81-t90;
  t83 = t3*t55*t73;
  t91 = t55*t56*t60*t73*(1.0/9.6E1);
  t84 = t83-t91;
  t85 = b_wz*t63;
  t87 = b_wx*t63;
  t89 = qw*t63;
  t92 = b_wy*t63;
  t93 = qy*t63;
  t94 = t63*t63;
  t95 = b_wy*b_wy;
  t96 = b_wz*b_wz;
  t97 = b_wx*t94*2.0;
  t99 = t60*t61;
  t100 = t3*t56*8.0E1;
  t98 = t99-t100+1.92E3;
  t101 = t98*t98;
  t102 = t63*t78*2.0;
  t103 = b_wy*t94*2.0;
  t104 = b_wz*t67*t78*2.0;
  t105 = b_wz*t63*t80*2.0;
  t106 = t63*t67*t96*4.0;
  t107 = b_wz*t71*t78*2.0;
  t108 = b_wz*t63*t82*2.0;
  t109 = b_wx*b_wx;
  t110 = t63*t71*t96*4.0;
  t111 = b_wx*b_wy*t63*t75*4.0;
  t112 = t63*t75*t96*4.0;
  t113 = b_wx*b_wy*t101*1.356336805555556E-7;
  t114 = b_wy*b_wz*t63*t67*4.0;
  t115 = b_wz*t94*2.0;
  t116 = b_wy*t67*t78*2.0;
  t117 = b_wy*t63*t80*2.0;
  t118 = b_wx*b_wz*t63*t67*4.0;
  t119 = t63*t67*t109*4.0;
  t120 = t63*t67*t95*4.0;
  t121 = b_wy*t71*t78*2.0;
  t122 = b_wy*t63*t82*2.0;
  t123 = b_wx*b_wz*t63*t71*4.0;
  t124 = b_wx*t71*t78*2.0;
  t125 = b_wx*t63*t82*2.0;
  t126 = t63*t71*t109*4.0;
  t127 = t63*t71*t95*4.0;
  t128 = b_wy*t75*t78*2.0;
  t129 = b_wy*t63*t84*2.0;
  t130 = b_wx*b_wz*t63*t75*4.0;
  t131 = b_wx*t75*t78*2.0;
  t132 = b_wx*t63*t84*2.0;
  t133 = t63*t75*t109*4.0;
  t134 = t63*t75*t95*4.0;
  t135 = b_wx*b_wz*t101*1.356336805555556E-7;
  t136 = b_wy*t63*t78*2.0;
  t137 = b_wy*b_wz*t101*1.356336805555556E-7;
  A0[0][0] = 1.0;
  A0[0][3] = t43-lambda*qy*t7*2.0;
  A0[0][4] = t23+t45;
  A0[0][5] = t40-lambda*qw*t7*2.0-lambda*qy*t10*4.0;
  A0[0][6] = t22+t42-lambda*qz*t10*4.0;
  A0[0][7] = dt*t16*t28*(-1.0/2.0)+dt*t21*t25*(1.0/2.0)-dt*t18*t30*(1.0/2.0);
  A0[0][8] = -dt*lambda*t16;
  A0[0][9] = -dt*lambda*t18+dt*lambda*t21;
  A0[0][14] = lambda*t3*t16*(-1.0/2.0);
  A0[0][15] = lambda*t3*(t31+t32);
  A0[0][16] = -lambda*t3*(t50-qx*qz);
  A0[1][1] = 1.0;
  A0[1][3] = t22-lambda*qz*t10*2.0;
  A0[1][4] = t41+lambda*qw*t7*2.0-lambda*qx*t5*4.0;
  A0[1][5] = t23+t44;
  A0[1][6] = lambda*qw*t10*-2.0+lambda*qy*t7*2.0-lambda*qz*t5*4.0;
  A0[1][7] = dt*t25*t38*(-1.0/2.0)+dt*t30*t35*(1.0/2.0)-dt*t28*(t19-t20)*(1.0/2.0);
  A0[1][8] = dt*lambda*t39*-2.0;
  A0[1][9] = dt*lambda*t35-dt*lambda*t38;
  A0[1][14] = -lambda*t3*t39;
  A0[1][15] = lambda*t3*t38*(-1.0/2.0);
  A0[1][16] = lambda*t3*(t51+t52);
  A0[2][2] = 1.0;
  A0[2][3] = -t40+t41;
  A0[2][4] = -t42-lambda*qx*t7*4.0+lambda*qz*t10*2.0;
  A0[2][5] = t43+lambda*qw*t10*2.0-lambda*qy*t7*4.0;
  A0[2][6] = t44+t45;
  A0[2][7] = dt*t25*t48*(-1.0/2.0)+dt*t28*t47*(1.0/2.0)-dt*t30*t49*(1.0/2.0);
  A0[2][8] = dt*lambda*t47;
  A0[2][9] = -dt*lambda*t48-dt*lambda*t49;
  A0[2][14] = lambda*t3*(t50+qx*qz);
  A0[2][15] = -lambda*t3*(t51-t52);
  A0[2][16] = lambda*t3*t49*(-1.0/2.0);
  A0[3][3] = t78;
  A0[3][4] = -b_wx*t63;
  A0[3][5] = -b_wy*t63;
  A0[3][6] = -b_wz*t63;
  A0[3][11] = -qw*t80-qx*t63+b_wx*qx*t67+b_wy*qy*t67+b_wz*qz*t67;
  A0[3][12] = -qw*t82-qy*t63+b_wx*qx*t71+b_wy*qy*t71+b_wz*qz*t71;
  A0[3][13] = -qw*t84-qz*t63+b_wx*qx*t75+b_wy*qy*t75+b_wz*qz*t75;
  A0[4][3] = t87;
  A0[4][4] = t78;
  A0[4][5] = t85;
  A0[4][6] = -b_wy*t63;
  A0[4][11] = t89-qx*t80-b_wx*qw*t67-b_wz*qy*t67+b_wy*qz*t67;
  A0[4][12] = -qx*t82-qz*t63-b_wx*qw*t71-b_wz*qy*t71+b_wy*qz*t71;
  A0[4][13] = t93-qx*t84-b_wx*qw*t75-b_wz*qy*t75+b_wy*qz*t75;
  A0[5][3] = t92;
  A0[5][4] = -t85;
  A0[5][5] = t78;
  A0[5][6] = t87;
  A0[5][11] = -qy*t80+qz*t63-b_wy*qw*t67+b_wz*qx*t67-b_wx*qz*t67;
  A0[5][12] = t89-qy*t82-b_wy*qw*t71+b_wz*qx*t71-b_wx*qz*t71;
  A0[5][13] = -qx*t63-qy*t84-b_wy*qw*t75+b_wz*qx*t75-b_wx*qz*t75;
  A0[6][3] = t85;
  A0[6][4] = t92;
  A0[6][5] = -t87;
  A0[6][6] = t78;
  A0[6][11] = -t93-qz*t80-b_wz*qw*t67-b_wy*qx*t67+b_wx*qy*t67;
  A0[6][12] = qx*t63-qz*t82-b_wz*qw*t71-b_wy*qx*t71+b_wx*qy*t71;
  A0[6][13] = t89-qz*t84-b_wz*qw*t75-b_wy*qx*t75+b_wx*qy*t75;
  A0[7][7] = 1.0;
  A0[8][8] = 1.0;
  A0[8][14] = dt;
  A0[9][9] = 1.0;
  A0[9][15] = dt;
  A0[10][9] = 1.0;
  A0[10][16] = dt;
  A0[11][11] = 1.0;
  A0[12][12] = 1.0;
  A0[13][13] = 1.0;
  A0[14][14] = 1.0;
  A0[15][15] = 1.0;
  A0[16][16] = 1.0;
  A0[17][11] = gx*(t106+t120)+gy*(t103+t104+t105-b_wx*b_wy*t63*t67*4.0)-gz*(t116+t117+t118-b_wz*t94*2.0);
  A0[17][12] = gx*(t110+t127-b_wy*t94*4.0)+gy*(t97+t107+t108-b_wx*b_wy*t63*t71*4.0)-gz*(t121+t122+t123-t63*t78*2.0);
  A0[17][13] = gx*(t112+t134-b_wz*t94*4.0)-gz*(-t97+t128+t129+t130)-gy*(t102+t111-b_wz*t63*t84*2.0-b_wz*t75*t78*2.0);
  A0[17][17] = t95*t101*(-1.356336805555556E-7)-t96*t101*1.356336805555556E-7+1.0;
  A0[17][18] = t113-b_wz*t63*t78*2.0;
  A0[17][19] = t135+t136;
  A0[18][11] = gy*(t106+t119-b_wx*t94*4.0)-gz*(t102+t114-b_wx*t63*t80*2.0-b_wx*t67*t78*2.0)-gx*(-t103+t104+t105+b_wx*b_wy*t63*t67*4.0);
  A0[18][12] = gy*(t110+t126)+gz*(t115+t124+t125-b_wy*b_wz*t63*t71*4.0)-gx*(-t97+t107+t108+b_wx*b_wy*t63*t71*4.0);
  A0[18][13] = gy*(t112+t133-b_wz*t94*4.0)+gz*(t103+t131+t132-b_wy*b_wz*t63*t75*4.0)-gx*(-t102+t111+b_wz*t63*t84*2.0+b_wz*t75*t78*2.0);
  A0[18][17] = t113+b_wz*t63*t78*2.0;
  A0[18][18] = t96*t101*(-1.356336805555556E-7)-t101*t109*1.356336805555556E-7+1.0;
  A0[18][19] = t137-b_wx*t63*t78*2.0;
  A0[19][11] = gz*(t119+t120-b_wx*t94*4.0)+gx*(t115+t116+t117-t118)-gy*(-t102+t114+b_wx*t63*t80*2.0+b_wx*t67*t78*2.0);
  A0[19][12] = gz*(t126+t127-b_wy*t94*4.0)-gx*(t102-t121-t122+t123)-gy*(-t115+t124+t125+b_wy*b_wz*t63*t71*4.0);
  A0[19][13] = gz*(t133+t134)+gx*(t97+t128+t129-t130)-gy*(-t103+t131+t132+b_wy*b_wz*t63*t75*4.0);
  A0[19][17] = t135-t136;
  A0[19][18] = t137+b_wx*t63*t78*2.0;
  A0[19][19] = t95*t101*(-1.356336805555556E-7)-t101*t109*1.356336805555556E-7+1.0;
  A0[20][20] = 1.0;
  A0[21][21] = 1.0;
  A0[22][22] = 1.0;
  A0[23][23] = 1.0;
  A0[24][24] = 1.0;
  A0[25][25] = 1.0;
