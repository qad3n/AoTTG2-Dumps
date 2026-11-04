// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002A0")]
public abstract class DecoderFallback
{
	[Token(Token = "0x4000B7C")]
	[FieldOffset(Offset = "0x0")]
	private static DecoderFallback s_replacementFallback;

	[Token(Token = "0x4000B7D")]
	[FieldOffset(Offset = "0x8")]
	private static DecoderFallback s_exceptionFallback;

	[Token(Token = "0x17000219")]
	public static DecoderFallback ReplacementFallback
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x1BAE650", Offset = "0x1BACC50", VA = "0x181BAE650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public static DecoderFallback ExceptionFallback
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x1BAE5B0", Offset = "0x1BACBB0", VA = "0x181BAE5B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x60015BB")]
		get;
	}

	[Token(Token = "0x60015BA")]
	public abstract DecoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected DecoderFallback()
	{
	}
}
