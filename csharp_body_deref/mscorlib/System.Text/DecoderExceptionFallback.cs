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
[Token(Token = "0x200026D")]
public sealed class DecoderExceptionFallback : DecoderFallback
{
	[Token(Token = "0x17000215")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001541")]
		[Address(RVA = "0x3D51EE0", Offset = "0x3D51EE0", VA = "0x3D51EE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x3D51E80", Offset = "0x3D51E80", VA = "0x3D51E80")]
	public DecoderExceptionFallback()
	{
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x3D51E90", Offset = "0x3D51E90", VA = "0x3D51E90", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x3D51EF0", Offset = "0x3D51EF0", VA = "0x3D51EF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001543")]
	[Address(RVA = "0x3D51F30", Offset = "0x3D51F30", VA = "0x3D51F30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
