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
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x52E8740", Offset = "0x52E7740", VA = "0x52E8740")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x52E87C0", Offset = "0x52E77C0", VA = "0x52E87C0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x52E8870", Offset = "0x52E7870", VA = "0x52E8870")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x52E8890", Offset = "0x52E7890", VA = "0x52E8890")]
	internal static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x52E88B0", Offset = "0x52E78B0", VA = "0x52E88B0")]
	internal static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x52E88C0", Offset = "0x52E78C0", VA = "0x52E88C0")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x52E8920", Offset = "0x52E7920", VA = "0x52E8920")]
	private unsafe static void ULongFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x52E8A00", Offset = "0x52E7A00", VA = "0x52E8A00")]
	internal static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x52E8A20", Offset = "0x52E7A20", VA = "0x52E8A20")]
	internal static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}
}
