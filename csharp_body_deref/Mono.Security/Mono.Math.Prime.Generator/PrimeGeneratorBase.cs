using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000049")]
public abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000086")]
	public virtual ConfidenceFactor Confidence
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x3ACB280", Offset = "0x3ACB280", VA = "0x3ACB280", Slot = "4")]
		get
		{
			return default(ConfidenceFactor);
		}
	}

	[Token(Token = "0x17000087")]
	public virtual PrimalityTest PrimalityTest
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x3ACB290", Offset = "0x3ACB290", VA = "0x3ACB290", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x3ACB2F0", Offset = "0x3ACB2F0", VA = "0x3ACB2F0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001FC")]
	public abstract BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3ACB300", Offset = "0x3ACB300", VA = "0x3ACB300")]
	protected PrimeGeneratorBase()
	{
	}
}
