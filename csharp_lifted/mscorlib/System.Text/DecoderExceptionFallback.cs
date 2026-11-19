// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderExceptionFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000275")]
public sealed class DecoderExceptionFallback : DecoderFallback
{
	[Token(Token = "0x17000216")]
	public override int MaxCharCount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x5552D40", Offset = "0x5551D40", VA = "0x5552D40", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x5552CE0", Offset = "0x5551CE0", VA = "0x5552CE0")]
	public DecoderExceptionFallback()
	{
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x5552CF0", Offset = "0x5551CF0", VA = "0x5552CF0", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x5552D50", Offset = "0x5551D50", VA = "0x5552D50", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x5552D90", Offset = "0x5551D90", VA = "0x5552D90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
