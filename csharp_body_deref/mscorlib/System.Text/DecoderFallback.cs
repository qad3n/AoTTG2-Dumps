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
[Token(Token = "0x2000270")]
public abstract class DecoderFallback
{
	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x0")]
	private static DecoderFallback s_replacementFallback;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x8")]
	private static DecoderFallback s_exceptionFallback;

	[Token(Token = "0x17000217")]
	public static DecoderFallback ReplacementFallback
	{
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x3D4E620", Offset = "0x3D4E620", VA = "0x3D4E620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	public static DecoderFallback ExceptionFallback
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x3D52200", Offset = "0x3D52200", VA = "0x3D52200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x600154F")]
		get;
	}

	[Token(Token = "0x600154E")]
	public abstract DecoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x3D518B0", Offset = "0x3D518B0", VA = "0x3D518B0")]
	protected DecoderFallback()
	{
	}
}
