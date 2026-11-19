// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncodingProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000289")]
public abstract class EncodingProvider
{
	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x8")]
	private static EncodingProvider[] s_providers;

	[Token(Token = "0x600161D")]
	public abstract Encoding GetEncoding(string name);

	[Token(Token = "0x600161E")]
	public abstract Encoding GetEncoding(int codepage);

	[Token(Token = "0x600161F")]
	[Address(RVA = "0x530C340", Offset = "0x530B340", VA = "0x530C340", Slot = "6")]
	public virtual Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x6001620")]
	[Address(RVA = "0x530C420", Offset = "0x530B420", VA = "0x530C420")]
	internal static Encoding GetEncodingFromProvider(int codepage)
	{
		return null;
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x530C510", Offset = "0x530B510", VA = "0x530C510")]
	internal static Encoding GetEncodingFromProvider(string encodingName)
	{
		return null;
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x530C600", Offset = "0x530B600", VA = "0x530C600")]
	internal static Encoding GetEncodingFromProvider(int codepage, EncoderFallback enc, DecoderFallback dec)
	{
		return null;
	}
}
