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

[Token(Token = "0x200091B")]
public class Color255
{
	[Token(Token = "0x4002DE9")]
	[FieldOffset(Offset = "0x10")]
	public int R;

	[Token(Token = "0x4002DEA")]
	[FieldOffset(Offset = "0x14")]
	public int G;

	[Token(Token = "0x4002DEB")]
	[FieldOffset(Offset = "0x18")]
	public int B;

	[Token(Token = "0x4002DEC")]
	[FieldOffset(Offset = "0x1C")]
	public int A;

	[Token(Token = "0x6005641")]
	[Address(RVA = "0x5CE7730", Offset = "0x5CE6730", VA = "0x5CE7730")]
	public Color255(int r, int g, int b, int a = 255)
	{
	}

	[Token(Token = "0x6005642")]
	[Address(RVA = "0x5CE7770", Offset = "0x5CE6770", VA = "0x5CE7770")]
	public Color255()
	{
	}

	[Token(Token = "0x6005643")]
	[Address(RVA = "0x5CE7790", Offset = "0x5CE6790", VA = "0x5CE7790")]
	public Color255(Color color)
	{
	}

	[Token(Token = "0x6005644")]
	[Address(RVA = "0x5CE77D0", Offset = "0x5CE67D0", VA = "0x5CE77D0")]
	public Color ToColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6005645")]
	[Address(RVA = "0x5CE77F0", Offset = "0x5CE67F0", VA = "0x5CE77F0")]
	public static Color255 Lerp(Color255 from, Color255 to, float t)
	{
		return null;
	}

	[Token(Token = "0x6005646")]
	[Address(RVA = "0x5CE78A0", Offset = "0x5CE68A0", VA = "0x5CE78A0")]
	public static Color255 Gradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphakeys, GradientMode mode, float t)
	{
		return null;
	}

	[Token(Token = "0x6005647")]
	[Address(RVA = "0x5CE7970", Offset = "0x5CE6970", VA = "0x5CE7970", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6005648")]
	[Address(RVA = "0x5CE7A00", Offset = "0x5CE6A00", VA = "0x5CE7A00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
