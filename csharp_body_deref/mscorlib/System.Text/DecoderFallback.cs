using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000270")]
public abstract class DecoderFallback
{
	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x0")]
	private static DecoderFallback s_replacementFallback;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x8")]
	private static DecoderFallback s_exceptionFallback;

	[Token(Token = "0x17000217")]
	public static DecoderFallback ReplacementFallback
	{
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x5068B00", Offset = "0x5068B00", VA = "0x5068B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	public static DecoderFallback ExceptionFallback
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x506C6E0", Offset = "0x506C6E0", VA = "0x506C6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x600154F")]
		get;
	}

	[Token(Token = "0x600154E")]
	public abstract DecoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x506BD90", Offset = "0x506BD90", VA = "0x506BD90")]
	protected DecoderFallback()
	{
	}
}
