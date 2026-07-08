using System;
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x2000487")]
internal class HumanAICallback
{
	[Token(Token = "0x400141C")]
	[FieldOffset(Offset = "0x10")]
	public Action OnIdle;

	[Token(Token = "0x400141D")]
	[FieldOffset(Offset = "0x18")]
	public Action PreAction;

	[Token(Token = "0x400141E")]
	[FieldOffset(Offset = "0x20")]
	public Action PostAction;

	[Token(Token = "0x400141F")]
	[FieldOffset(Offset = "0x28")]
	public Action MoveToCallback;

	[Token(Token = "0x600309C")]
	[Address(RVA = "0x3E8ADB0", Offset = "0x3E8ADB0", VA = "0x3E8ADB0")]
	public HumanAICallback()
	{
	}
}
