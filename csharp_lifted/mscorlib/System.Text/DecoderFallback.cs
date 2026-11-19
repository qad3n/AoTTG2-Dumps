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
[Token(Token = "0x2000278")]
public abstract class DecoderFallback
{
	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x0")]
	private static DecoderFallback s_replacementFallback;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x8")]
	private static DecoderFallback s_exceptionFallback;

	[Token(Token = "0x17000218")]
	public static DecoderFallback ReplacementFallback
	{
		[Token(Token = "0x600158F")]
		[Address(RVA = "0x554F300", Offset = "0x554E300", VA = "0x554F300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public static DecoderFallback ExceptionFallback
	{
		[Token(Token = "0x6001590")]
		[Address(RVA = "0x5553060", Offset = "0x5552060", VA = "0x5553060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public abstract int MaxCharCount
	{
		[Token(Token = "0x6001592")]
		get;
	}

	[Token(Token = "0x6001591")]
	public abstract DecoderFallbackBuffer CreateFallbackBuffer();

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x5552750", Offset = "0x5551750", VA = "0x5552750")]
	protected DecoderFallback()
	{
	}
}
