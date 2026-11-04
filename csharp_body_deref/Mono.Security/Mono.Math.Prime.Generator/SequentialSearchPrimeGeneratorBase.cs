using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x200005D")]
public class SequentialSearchPrimeGeneratorBase : PrimeGeneratorBase
{
	[Token(Token = "0x600022D")]
	[Address(RVA = "0x193D720", Offset = "0x193BD20", VA = "0x18193D720", Slot = "8")]
	protected virtual BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700", Slot = "7")]
	public override BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x193D350", Offset = "0x193B950", VA = "0x18193D350", Slot = "9")]
	public virtual BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
