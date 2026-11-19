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
[Token(Token = "0x2000283")]
public abstract class EncoderFallback
{
	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x0")]
	private static EncoderFallback s_replacementFallback;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x8")]
	private static EncoderFallback s_exceptionFallback;

	[Token(Token = "0x17000229")]
	public static EncoderFallback ReplacementFallback
	{
		[Token(Token = "0x60015E2")]
		[Address(RVA = "0x53099A0", Offset = "0x53089A0", VA = "0x53099A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public static EncoderFallback ExceptionFallback
	{
		[Token(Token = "0x60015E3")]
		[Address(RVA = "0x5309AA0", Offset = "0x5308AA0", VA = "0x5309AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022B")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x60015E5")]
		get;
	}

	[Token(Token = "0x60015E4")]
	public abstract EncoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x53093B0", Offset = "0x53083B0", VA = "0x53093B0")]
	protected EncoderFallback()
	{
	}
}
