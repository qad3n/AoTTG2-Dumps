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
[Token(Token = "0x20002A6")]
internal class InternalEncoderBestFitFallback : EncoderFallback
{
	[Token(Token = "0x4000B8A")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000B8B")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x17000225")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015F0")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal InternalEncoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x197BD70", Offset = "0x197A370", VA = "0x18197BD70", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x197BDD0", Offset = "0x197A3D0", VA = "0x18197BDD0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
