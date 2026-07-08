using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000056")]
internal abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000033")]
	public virtual Mono.Math.Prime.ConfidenceFactor Confidence
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4E0CD20", Offset = "0x4E0CD20", VA = "0x4E0CD20", Slot = "4")]
		get
		{
			return default(Mono.Math.Prime.ConfidenceFactor);
		}
	}

	[Token(Token = "0x17000034")]
	public virtual Mono.Math.Prime.PrimalityTest PrimalityTest
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4E0CD30", Offset = "0x4E0CD30", VA = "0x4E0CD30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x4E0CD90", Offset = "0x4E0CD90", VA = "0x4E0CD90", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000207")]
	public abstract Mono.Math.BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4E0CDA0", Offset = "0x4E0CDA0", VA = "0x4E0CDA0")]
	protected PrimeGeneratorBase()
	{
	}
}
