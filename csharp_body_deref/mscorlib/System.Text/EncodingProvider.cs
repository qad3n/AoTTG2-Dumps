using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000281")]
public abstract class EncodingProvider
{
	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x8")]
	private static EncodingProvider[] s_providers;

	[Token(Token = "0x60015DA")]
	public abstract Encoding GetEncoding(string name);

	[Token(Token = "0x60015DB")]
	public abstract Encoding GetEncoding(int codepage);

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x4E1BA00", Offset = "0x4E1BA00", VA = "0x4E1BA00", Slot = "6")]
	public virtual Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x4E1BAE0", Offset = "0x4E1BAE0", VA = "0x4E1BAE0")]
	internal static Encoding GetEncodingFromProvider(int codepage)
	{
		return null;
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x4E1BBB0", Offset = "0x4E1BBB0", VA = "0x4E1BBB0")]
	internal static Encoding GetEncodingFromProvider(string encodingName)
	{
		return null;
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x4E1BC80", Offset = "0x4E1BC80", VA = "0x4E1BC80")]
	internal static Encoding GetEncodingFromProvider(int codepage, EncoderFallback enc, DecoderFallback dec)
	{
		return null;
	}
}
