using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000049")]
public abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000086")]
	public virtual ConfidenceFactor Confidence
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x3A5E5C0", Offset = "0x3A5E5C0", VA = "0x3A5E5C0", Slot = "4")]
		get
		{
			return default(ConfidenceFactor);
		}
	}

	[Token(Token = "0x17000087")]
	public virtual PrimalityTest PrimalityTest
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x3A5E5D0", Offset = "0x3A5E5D0", VA = "0x3A5E5D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x3A5E630", Offset = "0x3A5E630", VA = "0x3A5E630", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001FC")]
	public abstract BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3A5E640", Offset = "0x3A5E640", VA = "0x3A5E640")]
	protected PrimeGeneratorBase()
	{
	}
}
