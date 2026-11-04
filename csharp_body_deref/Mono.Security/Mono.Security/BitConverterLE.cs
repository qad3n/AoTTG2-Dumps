using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000005")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x1913950", Offset = "0x1911F50", VA = "0x181913950")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x19139E0", Offset = "0x1911FE0", VA = "0x1819139E0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x19138C0", Offset = "0x1911EC0", VA = "0x1819138C0")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x19137F0", Offset = "0x1911DF0", VA = "0x1819137F0")]
	internal static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x1913BD0", Offset = "0x19121D0", VA = "0x181913BD0")]
	private unsafe static void UShortFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x1913B60", Offset = "0x1912160", VA = "0x181913B60")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x1913AA0", Offset = "0x19120A0", VA = "0x181913AA0")]
	internal static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x1913B10", Offset = "0x1912110", VA = "0x181913B10")]
	internal static ushort ToUInt16(byte[] value, int startIndex)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x1913AA0", Offset = "0x19120A0", VA = "0x181913AA0")]
	internal static uint ToUInt32(byte[] value, int startIndex)
	{
		return default(uint);
	}
}
