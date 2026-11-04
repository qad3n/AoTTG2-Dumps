// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000075")]
internal class SequentialSearchPrimeGeneratorBase : Mono.Math.Prime.Generator.PrimeGeneratorBase
{
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x1968350", Offset = "0x1966950", VA = "0x181968350", Slot = "8")]
	protected virtual Mono.Math.BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700", Slot = "7")]
	public override Mono.Math.BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x1967FA0", Offset = "0x19665A0", VA = "0x181967FA0", Slot = "9")]
	public virtual Mono.Math.BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(Mono.Math.BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
