using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000278")]
public sealed class EncoderExceptionFallback : EncoderFallback
{
	[Token(Token = "0x17000226")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001592")]
		[Address(RVA = "0x4E18C00", Offset = "0x4E18C00", VA = "0x4E18C00", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x4E18BA0", Offset = "0x4E18BA0", VA = "0x4E18BA0")]
	public EncoderExceptionFallback()
	{
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x4E18BB0", Offset = "0x4E18BB0", VA = "0x4E18BB0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x4E18C10", Offset = "0x4E18C10", VA = "0x4E18C10", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x4E18C50", Offset = "0x4E18C50", VA = "0x4E18C50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
