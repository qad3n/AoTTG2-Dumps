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
[Token(Token = "0x20002AE")]
public sealed class EncoderReplacementFallback : EncoderFallback, ISerializable
{
	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x17000231")]
	public string DefaultString
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000232")]
	public override int MaxCharCount
	{
		[Token(Token = "0x600162E")]
		[Address(RVA = "0x1976F50", Offset = "0x1975550", VA = "0x181976F50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x1978F90", Offset = "0x1977590", VA = "0x181978F90")]
	public EncoderReplacementFallback()
	{
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x1978FD0", Offset = "0x19775D0", VA = "0x181978FD0")]
	internal EncoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x1978F30", Offset = "0x1977530", VA = "0x181978F30", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x1979090", Offset = "0x1977690", VA = "0x181979090")]
	public EncoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x1978E30", Offset = "0x1977430", VA = "0x181978E30", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x1978EC0", Offset = "0x19774C0", VA = "0x181978EC0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
