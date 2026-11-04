// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncodingProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002B1")]
public abstract class EncodingProvider
{
	[Token(Token = "0x4000BA7")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000BA8")]
	[FieldOffset(Offset = "0x8")]
	private static EncodingProvider[] s_providers;

	[Token(Token = "0x6001646")]
	public abstract Encoding GetEncoding(string name);

	[Token(Token = "0x6001647")]
	public abstract Encoding GetEncoding(int codepage);

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x197B500", Offset = "0x1979B00", VA = "0x18197B500", Slot = "6")]
	public virtual Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x6001649")]
	[Address(RVA = "0x197B300", Offset = "0x1979900", VA = "0x18197B300")]
	internal static Encoding GetEncodingFromProvider(int codepage)
	{
		return null;
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x197B400", Offset = "0x1979A00", VA = "0x18197B400")]
	internal static Encoding GetEncodingFromProvider(string encodingName)
	{
		return null;
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x197B200", Offset = "0x1979800", VA = "0x18197B200")]
	internal static Encoding GetEncodingFromProvider(int codepage, EncoderFallback enc, DecoderFallback dec)
	{
		return null;
	}
}
