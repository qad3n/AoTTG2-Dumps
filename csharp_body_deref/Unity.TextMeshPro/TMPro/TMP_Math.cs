// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Math
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000016")]
public static class TMP_Math
{
	[Token(Token = "0x400009B")]
	public const float FLOAT_MAX = 32767f;

	[Token(Token = "0x400009C")]
	public const float FLOAT_MIN = -32767f;

	[Token(Token = "0x400009D")]
	public const int INT_MAX = int.MaxValue;

	[Token(Token = "0x400009E")]
	public const int INT_MIN = -2147483647;

	[Token(Token = "0x400009F")]
	public const float FLOAT_UNSET = -32767f;

	[Token(Token = "0x40000A0")]
	public const int INT_UNSET = -32767;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x0")]
	public static Vector2 MAX_16BIT;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x8")]
	public static Vector2 MIN_16BIT;

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4C441F0", Offset = "0x4C441F0", VA = "0x4C441F0")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4C44220", Offset = "0x4C44220", VA = "0x4C44220")]
	public static int Mod(int a, int b)
	{
		return default(int);
	}
}
