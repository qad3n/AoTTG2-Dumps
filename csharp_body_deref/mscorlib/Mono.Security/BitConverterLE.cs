// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.BitConverterLE
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000041")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3ADD770", Offset = "0x3ADD770", VA = "0x3ADD770")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3ADD7F0", Offset = "0x3ADD7F0", VA = "0x3ADD7F0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3ADD890", Offset = "0x3ADD890", VA = "0x3ADD890")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3ADD8B0", Offset = "0x3ADD8B0", VA = "0x3ADD8B0")]
	internal static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3ADD8D0", Offset = "0x3ADD8D0", VA = "0x3ADD8D0")]
	internal static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3ADD8E0", Offset = "0x3ADD8E0", VA = "0x3ADD8E0")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3ADD940", Offset = "0x3ADD940", VA = "0x3ADD940")]
	private unsafe static void ULongFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3ADDA10", Offset = "0x3ADDA10", VA = "0x3ADDA10")]
	internal static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3ADDA30", Offset = "0x3ADDA30", VA = "0x3ADDA30")]
	internal static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}
}
