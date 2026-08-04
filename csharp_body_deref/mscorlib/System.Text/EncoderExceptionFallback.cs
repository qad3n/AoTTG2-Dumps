// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderExceptionFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3AFE720", Offset = "0x3AFE720", VA = "0x3AFE720", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x3AFE6C0", Offset = "0x3AFE6C0", VA = "0x3AFE6C0")]
	public EncoderExceptionFallback()
	{
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x3AFE6D0", Offset = "0x3AFE6D0", VA = "0x3AFE6D0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x3AFE730", Offset = "0x3AFE730", VA = "0x3AFE730", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x3AFE770", Offset = "0x3AFE770", VA = "0x3AFE770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
