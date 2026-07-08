using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000273")]
public sealed class DecoderReplacementFallback : DecoderFallback, ISerializable
{
	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x1700021D")]
	public string DefaultString
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x506DAF0", Offset = "0x506DAF0", VA = "0x506DAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021E")]
	public override int MaxCharCount
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x506DBB0", Offset = "0x506DBB0", VA = "0x506DBB0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x506C6A0", Offset = "0x506C6A0", VA = "0x506C6A0")]
	public DecoderReplacementFallback()
	{
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x506D980", Offset = "0x506D980", VA = "0x506D980")]
	internal DecoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x506DAA0", Offset = "0x506DAA0", VA = "0x506DAA0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600156B")]
	[Address(RVA = "0x506D7E0", Offset = "0x506D7E0", VA = "0x506D7E0")]
	public DecoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x506DB00", Offset = "0x506DB00", VA = "0x506DB00", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x600156F")]
	[Address(RVA = "0x506DBD0", Offset = "0x506DBD0", VA = "0x506DBD0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x506DC40", Offset = "0x506DC40", VA = "0x506DC40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
