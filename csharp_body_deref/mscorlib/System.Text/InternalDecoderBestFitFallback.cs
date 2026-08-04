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
[Token(Token = "0x200026B")]
internal sealed class InternalDecoderBestFitFallback : DecoderFallback
{
	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x4000B2B")]
	[FieldOffset(Offset = "0x20")]
	internal char _cReplacement;

	[Token(Token = "0x17000212")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001534")]
		[Address(RVA = "0x3D51B10", Offset = "0x3D51B10", VA = "0x3D51B10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x3D51870", Offset = "0x3D51870", VA = "0x3D51870")]
	internal InternalDecoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x3D518C0", Offset = "0x3D518C0", VA = "0x3D518C0", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x3D51B20", Offset = "0x3D51B20", VA = "0x3D51B20", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x3D51BC0", Offset = "0x3D51BC0", VA = "0x3D51BC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
