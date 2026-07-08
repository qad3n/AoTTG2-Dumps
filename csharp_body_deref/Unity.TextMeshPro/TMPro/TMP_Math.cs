using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000095")]
public static class TMP_Math
{
	[Token(Token = "0x400052B")]
	public const float FLOAT_MAX = 32767f;

	[Token(Token = "0x400052C")]
	public const float FLOAT_MIN = -32767f;

	[Token(Token = "0x400052D")]
	public const int INT_MAX = int.MaxValue;

	[Token(Token = "0x400052E")]
	public const int INT_MIN = -2147483647;

	[Token(Token = "0x400052F")]
	public const float FLOAT_UNSET = -32767f;

	[Token(Token = "0x4000530")]
	public const int INT_UNSET = -32767;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x0")]
	public static Vector2 MAX_16BIT;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x8")]
	public static Vector2 MIN_16BIT;

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x49670C0", Offset = "0x49670C0", VA = "0x49670C0")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x49670F0", Offset = "0x49670F0", VA = "0x49670F0")]
	public static int Mod(int a, int b)
	{
		return default(int);
	}
}
