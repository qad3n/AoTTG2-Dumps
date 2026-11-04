using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x200005C")]
public abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000089")]
	public virtual ConfidenceFactor Confidence
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(ConfidenceFactor);
		}
	}

	[Token(Token = "0x1700008A")]
	public virtual PrimalityTest PrimalityTest
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x1939560", Offset = "0x1937B60", VA = "0x181939560", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x1939690", Offset = "0x1937C90", VA = "0x181939690", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600022B")]
	public abstract BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected PrimeGeneratorBase()
	{
	}
}
