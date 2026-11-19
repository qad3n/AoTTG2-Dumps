using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x200004A")]
public class SequentialSearchPrimeGeneratorBase : PrimeGeneratorBase
{
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x52D67F0", Offset = "0x52D57F0", VA = "0x52D67F0", Slot = "8")]
	protected virtual BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x52D68D0", Offset = "0x52D58D0", VA = "0x52D68D0", Slot = "7")]
	public override BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x52D68F0", Offset = "0x52D58F0", VA = "0x52D68F0", Slot = "9")]
	public virtual BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x52D6E00", Offset = "0x52D5E00", VA = "0x52D6E00", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x52D4C90", Offset = "0x52D3C90", VA = "0x52D4C90")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
