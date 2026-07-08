using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200013F")]
public sealed class AddComponentMenu : Attribute
{
	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x10")]
	private string m_AddComponentMenu;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x18")]
	private int m_Ordering;

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x4ACC380", Offset = "0x4ACC380", VA = "0x4ACC380")]
	public AddComponentMenu(string menuName)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x4ACC3B0", Offset = "0x4ACC3B0", VA = "0x4ACC3B0")]
	public AddComponentMenu(string menuName, int order)
	{
	}
}
