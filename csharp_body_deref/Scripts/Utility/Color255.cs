// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Color255
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Color255.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Color255.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000725")]
public class Color255
{
	[Token(Token = "0x400226F")]
	[FieldOffset(Offset = "0x10")]
	public int R;

	[Token(Token = "0x4002270")]
	[FieldOffset(Offset = "0x14")]
	public int G;

	[Token(Token = "0x4002271")]
	[FieldOffset(Offset = "0x18")]
	public int B;

	[Token(Token = "0x4002272")]
	[FieldOffset(Offset = "0x1C")]
	public int A;

	[Token(Token = "0x6004671")]
	[Address(RVA = "0x4388B50", Offset = "0x4388B50", VA = "0x4388B50")]
	public Color255(int r, int g, int b, int a = 255)
	{
	}

	[Token(Token = "0x6004672")]
	[Address(RVA = "0x4388B90", Offset = "0x4388B90", VA = "0x4388B90")]
	public Color255()
	{
	}

	[Token(Token = "0x6004673")]
	[Address(RVA = "0x4388BB0", Offset = "0x4388BB0", VA = "0x4388BB0")]
	public Color255(Color color)
	{
	}

	[Token(Token = "0x6004674")]
	[Address(RVA = "0x4388BF0", Offset = "0x4388BF0", VA = "0x4388BF0")]
	public Color ToColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6004675")]
	[Address(RVA = "0x4388C30", Offset = "0x4388C30", VA = "0x4388C30")]
	public static Color255 Lerp(Color255 from, Color255 to, float t)
	{
		return null;
	}

	[Token(Token = "0x6004676")]
	[Address(RVA = "0x4388CE0", Offset = "0x4388CE0", VA = "0x4388CE0")]
	public static Color255 Gradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphakeys, GradientMode mode, float t)
	{
		return null;
	}

	[Token(Token = "0x6004677")]
	[Address(RVA = "0x4388DB0", Offset = "0x4388DB0", VA = "0x4388DB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6004678")]
	[Address(RVA = "0x4388E40", Offset = "0x4388E40", VA = "0x4388E40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
