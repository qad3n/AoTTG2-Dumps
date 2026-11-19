// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderReplacementFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000286")]
public sealed class EncoderReplacementFallback : EncoderFallback, ISerializable
{
	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x17000230")]
	public string DefaultString
	{
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x530AD00", Offset = "0x5309D00", VA = "0x530AD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001605")]
		[Address(RVA = "0x530ADE0", Offset = "0x5309DE0", VA = "0x530ADE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x5309A60", Offset = "0x5308A60", VA = "0x5309A60")]
	public EncoderReplacementFallback()
	{
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x530AB90", Offset = "0x5309B90", VA = "0x530AB90")]
	internal EncoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x530ACB0", Offset = "0x5309CB0", VA = "0x530ACB0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x530AA00", Offset = "0x5309A00", VA = "0x530AA00")]
	public EncoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x530AD10", Offset = "0x5309D10", VA = "0x530AD10", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x530AE00", Offset = "0x5309E00", VA = "0x530AE00", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x530AE60", Offset = "0x5309E60", VA = "0x530AE60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
