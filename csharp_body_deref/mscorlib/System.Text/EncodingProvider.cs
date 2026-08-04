// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncodingProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000281")]
public abstract class EncodingProvider
{
	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x8")]
	private static EncodingProvider[] s_providers;

	[Token(Token = "0x60015DA")]
	public abstract Encoding GetEncoding(string name);

	[Token(Token = "0x60015DB")]
	public abstract Encoding GetEncoding(int codepage);

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x3B01520", Offset = "0x3B01520", VA = "0x3B01520", Slot = "6")]
	public virtual Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x3B01600", Offset = "0x3B01600", VA = "0x3B01600")]
	internal static Encoding GetEncodingFromProvider(int codepage)
	{
		return null;
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x3B016D0", Offset = "0x3B016D0", VA = "0x3B016D0")]
	internal static Encoding GetEncodingFromProvider(string encodingName)
	{
		return null;
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x3B017A0", Offset = "0x3B017A0", VA = "0x3B017A0")]
	internal static Encoding GetEncodingFromProvider(int codepage, EncoderFallback enc, DecoderFallback dec)
	{
		return null;
	}
}
