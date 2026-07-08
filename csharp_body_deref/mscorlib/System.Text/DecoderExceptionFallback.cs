using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200026D")]
public sealed class DecoderExceptionFallback : DecoderFallback
{
	[Token(Token = "0x17000215")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001541")]
		[Address(RVA = "0x506C3C0", Offset = "0x506C3C0", VA = "0x506C3C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x506C360", Offset = "0x506C360", VA = "0x506C360")]
	public DecoderExceptionFallback()
	{
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x506C370", Offset = "0x506C370", VA = "0x506C370", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x506C3D0", Offset = "0x506C3D0", VA = "0x506C3D0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001543")]
	[Address(RVA = "0x506C410", Offset = "0x506C410", VA = "0x506C410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
