// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderExceptionFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000280")]
public sealed class EncoderExceptionFallback : EncoderFallback
{
	[Token(Token = "0x17000227")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x5309410", Offset = "0x5308410", VA = "0x5309410", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x53093A0", Offset = "0x53083A0", VA = "0x53093A0")]
	public EncoderExceptionFallback()
	{
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x53093C0", Offset = "0x53083C0", VA = "0x53093C0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x5309420", Offset = "0x5308420", VA = "0x5309420", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x5309460", Offset = "0x5308460", VA = "0x5309460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
