// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalDecoderBestFitFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000273")]
internal sealed class InternalDecoderBestFitFallback : DecoderFallback
{
	[Token(Token = "0x4000AD0")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000AD1")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x4000AD2")]
	[FieldOffset(Offset = "0x20")]
	internal char _cReplacement;

	[Token(Token = "0x17000213")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x5552970", Offset = "0x5551970", VA = "0x5552970", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x5552710", Offset = "0x5551710", VA = "0x5552710")]
	internal InternalDecoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x5552760", Offset = "0x5551760", VA = "0x5552760", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x5552980", Offset = "0x5551980", VA = "0x5552980", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x5552A10", Offset = "0x5551A10", VA = "0x5552A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
