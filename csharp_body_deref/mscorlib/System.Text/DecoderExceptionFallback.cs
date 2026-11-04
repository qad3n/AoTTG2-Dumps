// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderExceptionFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200029D")]
public sealed class DecoderExceptionFallback : DecoderFallback
{
	[Token(Token = "0x17000217")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DecoderExceptionFallback()
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x1BADDF0", Offset = "0x1BAC3F0", VA = "0x181BADDF0", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x1BADE40", Offset = "0x1BAC440", VA = "0x181BADE40", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x1BADE90", Offset = "0x1BAC490", VA = "0x181BADE90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
