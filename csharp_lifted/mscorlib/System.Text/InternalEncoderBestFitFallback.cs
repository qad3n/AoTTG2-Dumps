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
[Token(Token = "0x200027E")]
internal class InternalEncoderBestFitFallback : EncoderFallback
{
	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x17000224")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015C7")]
		[Address(RVA = "0x55551D0", Offset = "0x55541D0", VA = "0x55551D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x5554F90", Offset = "0x5553F90", VA = "0x5554F90")]
	internal InternalEncoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x5554FC0", Offset = "0x5553FC0", VA = "0x5554FC0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x55551E0", Offset = "0x55541E0", VA = "0x55551E0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x5555280", Offset = "0x5554280", VA = "0x5555280", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
