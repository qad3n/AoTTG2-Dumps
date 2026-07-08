using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200027E")]
public sealed class EncoderReplacementFallback : EncoderFallback, ISerializable
{
	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x1700022F")]
	public string DefaultString
	{
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x4E1A4A0", Offset = "0x4E1A4A0", VA = "0x4E1A4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x4E1A580", Offset = "0x4E1A580", VA = "0x4E1A580", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x4E19240", Offset = "0x4E19240", VA = "0x4E19240")]
	public EncoderReplacementFallback()
	{
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x4E1A330", Offset = "0x4E1A330", VA = "0x4E1A330")]
	internal EncoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x4E1A450", Offset = "0x4E1A450", VA = "0x4E1A450", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x4E1A190", Offset = "0x4E1A190", VA = "0x4E1A190")]
	public EncoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x4E1A4B0", Offset = "0x4E1A4B0", VA = "0x4E1A4B0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x4E1A5A0", Offset = "0x4E1A5A0", VA = "0x4E1A5A0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x4E1A610", Offset = "0x4E1A610", VA = "0x4E1A610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
