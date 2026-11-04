// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.BitConverterLE
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x200005F")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x6000126")]
	[Address(RVA = "0x19414E0", Offset = "0x193FAE0", VA = "0x1819414E0")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x1941570", Offset = "0x193FB70", VA = "0x181941570")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x19412F0", Offset = "0x193F8F0", VA = "0x1819412F0")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x1941380", Offset = "0x193F980", VA = "0x181941380")]
	internal static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x1941410", Offset = "0x193FA10", VA = "0x181941410")]
	internal static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x1913B60", Offset = "0x1912160", VA = "0x181913B60")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x1941710", Offset = "0x193FD10", VA = "0x181941710")]
	private unsafe static void ULongFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x1941690", Offset = "0x193FC90", VA = "0x181941690")]
	internal static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x1941630", Offset = "0x193FC30", VA = "0x181941630")]
	internal static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}
}
