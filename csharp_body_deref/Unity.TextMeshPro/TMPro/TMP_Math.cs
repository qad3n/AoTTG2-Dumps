// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Math
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000A7")]
public static class TMP_Math
{
	[Token(Token = "0x40005AC")]
	public const float FLOAT_MAX = 32767f;

	[Token(Token = "0x40005AD")]
	public const float FLOAT_MIN = -32767f;

	[Token(Token = "0x40005AE")]
	public const int INT_MAX = 2147483647;

	[Token(Token = "0x40005AF")]
	public const int INT_MIN = -2147483647;

	[Token(Token = "0x40005B0")]
	public const float FLOAT_UNSET = -32767f;

	[Token(Token = "0x40005B1")]
	public const int INT_UNSET = -32767;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x0")]
	public static Vector2 MAX_16BIT;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x8")]
	public static Vector2 MIN_16BIT;

	[Token(Token = "0x40005B4")]
	internal const int MAX_QUADS_PER_MESH = 16383;

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x2D61A90", Offset = "0x2D60090", VA = "0x182D61A90")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x2D61AC0", Offset = "0x2D600C0", VA = "0x182D61AC0")]
	public static int Mod(int a, int b)
	{
		return default(int);
	}
}
