using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006DD")]
public class Color255
{
	[Token(Token = "0x4002116")]
	[FieldOffset(Offset = "0x10")]
	public int R;

	[Token(Token = "0x4002117")]
	[FieldOffset(Offset = "0x14")]
	public int G;

	[Token(Token = "0x4002118")]
	[FieldOffset(Offset = "0x18")]
	public int B;

	[Token(Token = "0x4002119")]
	[FieldOffset(Offset = "0x1C")]
	public int A;

	[Token(Token = "0x6004426")]
	[Address(RVA = "0x4053A30", Offset = "0x4053A30", VA = "0x4053A30")]
	public Color255(int r, int g, int b, int a = 255)
	{
	}

	[Token(Token = "0x6004427")]
	[Address(RVA = "0x4058230", Offset = "0x4058230", VA = "0x4058230")]
	public Color255()
	{
	}

	[Token(Token = "0x6004428")]
	[Address(RVA = "0x4058250", Offset = "0x4058250", VA = "0x4058250")]
	public Color255(Color color)
	{
	}

	[Token(Token = "0x6004429")]
	[Address(RVA = "0x4058290", Offset = "0x4058290", VA = "0x4058290")]
	public Color ToColor()
	{
		return default(Color);
	}

	[Token(Token = "0x600442A")]
	[Address(RVA = "0x40582D0", Offset = "0x40582D0", VA = "0x40582D0")]
	public static Color255 Lerp(Color255 from, Color255 to, float t)
	{
		return null;
	}

	[Token(Token = "0x600442B")]
	[Address(RVA = "0x4058380", Offset = "0x4058380", VA = "0x4058380")]
	public static Color255 Gradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphakeys, GradientMode mode, float t)
	{
		return null;
	}

	[Token(Token = "0x600442C")]
	[Address(RVA = "0x4058450", Offset = "0x4058450", VA = "0x4058450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600442D")]
	[Address(RVA = "0x40584E0", Offset = "0x40584E0", VA = "0x40584E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
