using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000276")]
internal class InternalEncoderBestFitFallback : EncoderFallback
{
	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x17000223")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x4E186F0", Offset = "0x4E186F0", VA = "0x4E186F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x4E18460", Offset = "0x4E18460", VA = "0x4E18460")]
	internal InternalEncoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x4E184A0", Offset = "0x4E184A0", VA = "0x4E184A0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x4E18700", Offset = "0x4E18700", VA = "0x4E18700", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x4E187B0", Offset = "0x4E187B0", VA = "0x4E187B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
