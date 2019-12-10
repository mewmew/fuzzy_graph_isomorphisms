void OperateStoryBook(int pnum, int i)
{
	if (object[i]._oSelFlag != 0 && !deltaload && !qtextflag && pnum == myplr) {
		object[i]._oAnimFrame = object[i]._oVar4;
		PlaySfxLoc(IS_ISCROL, object[i]._ox, object[i]._oy);
		InitQTextMsg(object[i]._oVar2);
		NetSendCmdParam1(FALSE, CMD_OPERATEOBJ, i);
	}
}
