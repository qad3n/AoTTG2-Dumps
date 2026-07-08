using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x200004A")]
public class SequentialSearchPrimeGeneratorBase : PrimeGeneratorBase
{
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3A5E650", Offset = "0x3A5E650", VA = "0x3A5E650", Slot = "8")]
	protected virtual BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3A5E730", Offset = "0x3A5E730", VA = "0x3A5E730", Slot = "7")]
	public override BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3A5E750", Offset = "0x3A5E750", VA = "0x3A5E750", Slot = "9")]
	public virtual BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3A5EBA0", Offset = "0x3A5EBA0", VA = "0x3A5EBA0", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3A5CBD0", Offset = "0x3A5CBD0", VA = "0x3A5CBD0")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
