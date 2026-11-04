// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002AB")]
public abstract class EncoderFallback
{
	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x0")]
	private static EncoderFallback s_replacementFallback;

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x8")]
	private static EncoderFallback s_exceptionFallback;

	[Token(Token = "0x1700022A")]
	public static EncoderFallback ReplacementFallback
	{
		[Token(Token = "0x600160B")]
		[Address(RVA = "0x1977B70", Offset = "0x1976170", VA = "0x181977B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022B")]
	public static EncoderFallback ExceptionFallback
	{
		[Token(Token = "0x600160C")]
		[Address(RVA = "0x1977AD0", Offset = "0x19760D0", VA = "0x181977AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x600160E")]
		get;
	}

	[Token(Token = "0x600160D")]
	public abstract EncoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x600160F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected EncoderFallback()
	{
	}
}
