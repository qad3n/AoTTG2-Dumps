// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalEncoderBestFitFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000276")]
internal class InternalEncoderBestFitFallback : EncoderFallback
{
	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x17000223")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x3AFE210", Offset = "0x3AFE210", VA = "0x3AFE210", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x3AFDF80", Offset = "0x3AFDF80", VA = "0x3AFDF80")]
	internal InternalEncoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x3AFDFC0", Offset = "0x3AFDFC0", VA = "0x3AFDFC0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x3AFE220", Offset = "0x3AFE220", VA = "0x3AFE220", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x3AFE2D0", Offset = "0x3AFE2D0", VA = "0x3AFE2D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
