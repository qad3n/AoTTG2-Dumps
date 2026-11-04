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
[Token(Token = "0x20002A8")]
public sealed class EncoderExceptionFallback : EncoderFallback
{
	[Token(Token = "0x17000228")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015FE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EncoderExceptionFallback()
	{
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x19774A0", Offset = "0x1975AA0", VA = "0x1819774A0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x19774F0", Offset = "0x1975AF0", VA = "0x1819774F0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x1977540", Offset = "0x1975B40", VA = "0x181977540", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
