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
		[Address(RVA = "0x3AFFFC0", Offset = "0x3AFFFC0", VA = "0x3AFFFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x3B000A0", Offset = "0x3B000A0", VA = "0x3B000A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x3AFED60", Offset = "0x3AFED60", VA = "0x3AFED60")]
	public EncoderReplacementFallback()
	{
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x3AFFE50", Offset = "0x3AFFE50", VA = "0x3AFFE50")]
	internal EncoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x3AFFF70", Offset = "0x3AFFF70", VA = "0x3AFFF70", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x3AFFCB0", Offset = "0x3AFFCB0", VA = "0x3AFFCB0")]
	public EncoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x3AFFFD0", Offset = "0x3AFFFD0", VA = "0x3AFFFD0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x3B000C0", Offset = "0x3B000C0", VA = "0x3B000C0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x3B00130", Offset = "0x3B00130", VA = "0x3B00130", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
