using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000057")]
internal class SequentialSearchPrimeGeneratorBase : Mono.Math.Prime.Generator.PrimeGeneratorBase
{
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4E0CDB0", Offset = "0x4E0CDB0", VA = "0x4E0CDB0", Slot = "8")]
	protected virtual Mono.Math.BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4E0CE90", Offset = "0x4E0CE90", VA = "0x4E0CE90", Slot = "7")]
	public override Mono.Math.BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4E0CEB0", Offset = "0x4E0CEB0", VA = "0x4E0CEB0", Slot = "9")]
	public virtual Mono.Math.BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4E0D300", Offset = "0x4E0D300", VA = "0x4E0D300", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(Mono.Math.BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4E0B0B0", Offset = "0x4E0B0B0", VA = "0x4E0B0B0")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
