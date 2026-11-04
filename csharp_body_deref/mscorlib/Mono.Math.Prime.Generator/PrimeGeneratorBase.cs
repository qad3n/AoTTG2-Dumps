// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Math.Prime.Generator.PrimeGeneratorBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000074")]
internal abstract class PrimeGeneratorBase
{
	[Token(Token = "0x17000033")]
	public virtual Mono.Math.Prime.ConfidenceFactor Confidence
	{
		[Token(Token = "0x600021C")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(Mono.Math.Prime.ConfidenceFactor);
		}
	}

	[Token(Token = "0x17000034")]
	public virtual Mono.Math.Prime.PrimalityTest PrimalityTest
	{
		[Token(Token = "0x600021D")]
		[Address(RVA = "0x1962710", Offset = "0x1960D10", VA = "0x181962710", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public virtual int TrialDivisionBounds
	{
		[Token(Token = "0x600021E")]
		[Address(RVA = "0x1939690", Offset = "0x1937C90", VA = "0x181939690", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600021F")]
	public abstract Mono.Math.BigInteger GenerateNewPrime(int bits);

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected PrimeGeneratorBase()
	{
	}
}
