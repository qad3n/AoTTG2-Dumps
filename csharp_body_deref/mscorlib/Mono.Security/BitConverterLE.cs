using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000041")]
internal sealed class BitConverterLE
{
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4DF7C50", Offset = "0x4DF7C50", VA = "0x4DF7C50")]
	private unsafe static byte[] GetUIntBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4DF7CD0", Offset = "0x4DF7CD0", VA = "0x4DF7CD0")]
	private unsafe static byte[] GetULongBytes(byte* bytes)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4DF7D70", Offset = "0x4DF7D70", VA = "0x4DF7D70")]
	internal static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4DF7D90", Offset = "0x4DF7D90", VA = "0x4DF7D90")]
	internal static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4DF7DB0", Offset = "0x4DF7DB0", VA = "0x4DF7DB0")]
	internal static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4DF7DC0", Offset = "0x4DF7DC0", VA = "0x4DF7DC0")]
	private unsafe static void UIntFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4DF7E20", Offset = "0x4DF7E20", VA = "0x4DF7E20")]
	private unsafe static void ULongFromBytes(byte* dst, byte[] src, int startIndex)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4DF7EF0", Offset = "0x4DF7EF0", VA = "0x4DF7EF0")]
	internal static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4DF7F10", Offset = "0x4DF7F10", VA = "0x4DF7F10")]
	internal static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}
}
