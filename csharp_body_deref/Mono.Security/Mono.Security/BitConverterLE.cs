using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000005")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3A9F930", Offset = "0x3A9F930", VA = "0x3A9F930")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3A9F9B0", Offset = "0x3A9F9B0", VA = "0x3A9F9B0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3A9EBA0", Offset = "0x3A9EBA0", VA = "0x3A9EBA0")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3A9FA50", Offset = "0x3A9FA50", VA = "0x3A9FA50")]
	internal static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3A9FA60", Offset = "0x3A9FA60", VA = "0x3A9FA60")]
	private unsafe static void UShortFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3A9FAA0", Offset = "0x3A9FAA0", VA = "0x3A9FAA0")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3A9FB00", Offset = "0x3A9FB00", VA = "0x3A9FB00")]
	internal static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3A9FB20", Offset = "0x3A9FB20", VA = "0x3A9FB20")]
	internal static ushort ToUInt16(byte[] value, int startIndex)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3A9FB70", Offset = "0x3A9FB70", VA = "0x3A9FB70")]
	internal static uint ToUInt32(byte[] value, int startIndex)
	{
		return default(uint);
	}
}
