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
[Token(Token = "0x200027B")]
public abstract class EncoderFallback
{
	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x0")]
	private static EncoderFallback s_replacementFallback;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x8")]
	private static EncoderFallback s_exceptionFallback;

	[Token(Token = "0x17000228")]
	public static EncoderFallback ReplacementFallback
	{
		[Token(Token = "0x600159F")]
		[Address(RVA = "0x3AFECA0", Offset = "0x3AFECA0", VA = "0x3AFECA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000229")]
	public static EncoderFallback ExceptionFallback
	{
		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x3AFEDA0", Offset = "0x3AFEDA0", VA = "0x3AFEDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x60015A2")]
		get;
	}

	[Token(Token = "0x60015A1")]
	public abstract EncoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x3AFDFB0", Offset = "0x3AFDFB0", VA = "0x3AFDFB0")]
	protected EncoderFallback()
	{
	}
}
