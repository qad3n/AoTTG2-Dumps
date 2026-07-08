using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000005")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3A32C70", Offset = "0x3A32C70", VA = "0x3A32C70")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3A32CF0", Offset = "0x3A32CF0", VA = "0x3A32CF0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3A31EE0", Offset = "0x3A31EE0", VA = "0x3A31EE0")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3A32D90", Offset = "0x3A32D90", VA = "0x3A32D90")]
	internal static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3A32DA0", Offset = "0x3A32DA0", VA = "0x3A32DA0")]
	private unsafe static void UShortFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3A32DE0", Offset = "0x3A32DE0", VA = "0x3A32DE0")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3A32E40", Offset = "0x3A32E40", VA = "0x3A32E40")]
	internal static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3A32E60", Offset = "0x3A32E60", VA = "0x3A32E60")]
	internal static ushort ToUInt16(byte[] value, int startIndex)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3A32EB0", Offset = "0x3A32EB0", VA = "0x3A32EB0")]
	internal static uint ToUInt32(byte[] value, int startIndex)
	{
		return default(uint);
	}
}
