using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x200004A")]
public class SequentialSearchPrimeGeneratorBase : PrimeGeneratorBase
{
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3ACB310", Offset = "0x3ACB310", VA = "0x3ACB310", Slot = "8")]
	protected virtual BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3ACB3F0", Offset = "0x3ACB3F0", VA = "0x3ACB3F0", Slot = "7")]
	public override BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3ACB410", Offset = "0x3ACB410", VA = "0x3ACB410", Slot = "9")]
	public virtual BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3ACB860", Offset = "0x3ACB860", VA = "0x3ACB860", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3AC9890", Offset = "0x3AC9890", VA = "0x3AC9890")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
