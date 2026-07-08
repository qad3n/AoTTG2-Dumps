using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200026B")]
internal sealed class InternalDecoderBestFitFallback : DecoderFallback
{
	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x4000B2B")]
	[FieldOffset(Offset = "0x20")]
	internal char _cReplacement;

	[Token(Token = "0x17000212")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001534")]
		[Address(RVA = "0x506BFF0", Offset = "0x506BFF0", VA = "0x506BFF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x506BD50", Offset = "0x506BD50", VA = "0x506BD50")]
	internal InternalDecoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x506BDA0", Offset = "0x506BDA0", VA = "0x506BDA0", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x506C000", Offset = "0x506C000", VA = "0x506C000", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x506C0A0", Offset = "0x506C0A0", VA = "0x506C0A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
