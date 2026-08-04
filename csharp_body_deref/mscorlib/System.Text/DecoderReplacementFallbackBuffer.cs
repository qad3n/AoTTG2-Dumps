// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderReplacementFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000274")]
public sealed class DecoderReplacementFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x20")]
	private string _strDefault;

	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x28")]
	private int _fallbackCount;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x2C")]
	private int _fallbackIndex;

	[Token(Token = "0x1700021F")]
	public override int Remaining
	{
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x3D53810", Offset = "0x3D53810", VA = "0x3D53810", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x3D53690", Offset = "0x3D53690", VA = "0x3D53690")]
	public DecoderReplacementFallbackBuffer(DecoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x3D53790", Offset = "0x3D53790", VA = "0x3D53790", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x3D537D0", Offset = "0x3D537D0", VA = "0x3D537D0", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x3D53820", Offset = "0x3D53820", VA = "0x3D53820", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x3D53840", Offset = "0x3D53840", VA = "0x3D53840", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}
}
