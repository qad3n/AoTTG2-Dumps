// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Math.Prime.Generator;

[Token(Token = "0x2000057")]
internal class SequentialSearchPrimeGeneratorBase : Mono.Math.Prime.Generator.PrimeGeneratorBase
{
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3AF28D0", Offset = "0x3AF28D0", VA = "0x3AF28D0", Slot = "8")]
	protected virtual Mono.Math.BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3AF29B0", Offset = "0x3AF29B0", VA = "0x3AF29B0", Slot = "7")]
	public override Mono.Math.BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3AF29D0", Offset = "0x3AF29D0", VA = "0x3AF29D0", Slot = "9")]
	public virtual Mono.Math.BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3AF2E20", Offset = "0x3AF2E20", VA = "0x3AF2E20", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(Mono.Math.BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3AF0BD0", Offset = "0x3AF0BD0", VA = "0x3AF0BD0")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
