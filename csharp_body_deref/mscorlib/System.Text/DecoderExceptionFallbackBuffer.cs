// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderExceptionFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200026E")]
public sealed class DecoderExceptionFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x17000216")]
	public override int Remaining
	{
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x3D52120", Offset = "0x3D52120", VA = "0x3D52120", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x3D51F40", Offset = "0x3D51F40", VA = "0x3D51F40", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001545")]
	[Address(RVA = "0x3D52110", Offset = "0x3D52110", VA = "0x3D52110", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001547")]
	[Address(RVA = "0x3D51F50", Offset = "0x3D51F50", VA = "0x3D51F50")]
	private void Throw(byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x3D51ED0", Offset = "0x3D51ED0", VA = "0x3D51ED0")]
	public DecoderExceptionFallbackBuffer()
	{
	}
}
