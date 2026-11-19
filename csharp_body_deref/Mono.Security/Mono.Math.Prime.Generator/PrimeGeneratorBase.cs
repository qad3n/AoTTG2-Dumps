using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000049")]
public abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000086")]
	public virtual ConfidenceFactor Confidence
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x52D6760", Offset = "0x52D5760", VA = "0x52D6760", Slot = "4")]
		get
		{
			return default(ConfidenceFactor);
		}
	}

	[Token(Token = "0x17000087")]
	public virtual PrimalityTest PrimalityTest
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x52D6770", Offset = "0x52D5770", VA = "0x52D6770", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x52D67D0", Offset = "0x52D57D0", VA = "0x52D67D0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001FC")]
	public abstract BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x52D67E0", Offset = "0x52D57E0", VA = "0x52D67E0")]
	protected PrimeGeneratorBase()
	{
	}
}
