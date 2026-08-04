// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Math.Prime.Generator.PrimeGeneratorBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000056")]
internal abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000033")]
	public virtual Mono.Math.Prime.ConfidenceFactor Confidence
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x3AF2840", Offset = "0x3AF2840", VA = "0x3AF2840", Slot = "4")]
		get
		{
			return default(Mono.Math.Prime.ConfidenceFactor);
		}
	}

	[Token(Token = "0x17000034")]
	public virtual Mono.Math.Prime.PrimalityTest PrimalityTest
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x3AF2850", Offset = "0x3AF2850", VA = "0x3AF2850", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x3AF28B0", Offset = "0x3AF28B0", VA = "0x3AF28B0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000207")]
	public abstract Mono.Math.BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3AF28C0", Offset = "0x3AF28C0", VA = "0x3AF28C0")]
	protected PrimeGeneratorBase()
	{
	}
}
