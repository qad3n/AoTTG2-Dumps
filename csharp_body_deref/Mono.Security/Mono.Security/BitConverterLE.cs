using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000005")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x52AD960", Offset = "0x52AC960", VA = "0x52AD960")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x52AD9E0", Offset = "0x52AC9E0", VA = "0x52AD9E0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x52ACC50", Offset = "0x52ABC50", VA = "0x52ACC50")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x52ADA90", Offset = "0x52ACA90", VA = "0x52ADA90")]
	internal static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x52ADAA0", Offset = "0x52ACAA0", VA = "0x52ADAA0")]
	private unsafe static void UShortFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x52ADAE0", Offset = "0x52ACAE0", VA = "0x52ADAE0")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x52ADB40", Offset = "0x52ACB40", VA = "0x52ADB40")]
	internal static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x52ADB60", Offset = "0x52ACB60", VA = "0x52ADB60")]
	internal static ushort ToUInt16(byte[] value, int startIndex)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x52ADBB0", Offset = "0x52ACBB0", VA = "0x52ADBB0")]
	internal static uint ToUInt32(byte[] value, int startIndex)
	{
		return default(uint);
	}
}
