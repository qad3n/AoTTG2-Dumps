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

[Token(Token = "0x20008B0")]
public class Color255
{
	[Token(Token = "0x4002B32")]
	[FieldOffset(Offset = "0x10")]
	public int R;

	[Token(Token = "0x4002B33")]
	[FieldOffset(Offset = "0x14")]
	public int G;

	[Token(Token = "0x4002B34")]
	[FieldOffset(Offset = "0x18")]
	public int B;

	[Token(Token = "0x4002B35")]
	[FieldOffset(Offset = "0x1C")]
	public int A;

	[Token(Token = "0x60052EA")]
	[Address(RVA = "0x2332760", Offset = "0x2330D60", VA = "0x182332760")]
	public Color255(int r, int g, int b, int a = 255)
	{
	}

	[Token(Token = "0x60052EB")]
	[Address(RVA = "0x2332720", Offset = "0x2330D20", VA = "0x182332720")]
	public Color255()
	{
	}

	[Token(Token = "0x60052EC")]
	[Address(RVA = "0x23327A0", Offset = "0x2330DA0", VA = "0x1823327A0")]
	public Color255(Color color)
	{
	}

	[Token(Token = "0x60052ED")]
	[Address(RVA = "0x23326D0", Offset = "0x2330CD0", VA = "0x1823326D0")]
	public Color ToColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60052EE")]
	[Address(RVA = "0x2332520", Offset = "0x2330B20", VA = "0x182332520")]
	public static Color255 Lerp(Color255 from, Color255 to, float t)
	{
		return null;
	}

	[Token(Token = "0x60052EF")]
	[Address(RVA = "0x23323E0", Offset = "0x23309E0", VA = "0x1823323E0")]
	public static Color255 Gradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphakeys, GradientMode mode, float t)
	{
		return null;
	}

	[Token(Token = "0x60052F0")]
	[Address(RVA = "0x2332290", Offset = "0x2330890", VA = "0x182332290", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60052F1")]
	[Address(RVA = "0x2332350", Offset = "0x2330950", VA = "0x182332350", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
