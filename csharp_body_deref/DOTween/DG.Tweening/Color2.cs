using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x2000004")]
public struct Color2
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	public Color ca;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x10")]
	public Color cb;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x22ED610", Offset = "0x22ED610", VA = "0x22ED610")]
	public Color2(Color ca, Color cb)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x22ED620", Offset = "0x22ED620", VA = "0x22ED620")]
	public static Color2 operator +(Color2 c1, Color2 c2)
	{
		return default(Color2);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x22ED670", Offset = "0x22ED670", VA = "0x22ED670")]
	public static Color2 operator -(Color2 c1, Color2 c2)
	{
		return default(Color2);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x22ED6C0", Offset = "0x22ED6C0", VA = "0x22ED6C0")]
	public static Color2 operator *(Color2 c1, float f)
	{
		return default(Color2);
	}
}
