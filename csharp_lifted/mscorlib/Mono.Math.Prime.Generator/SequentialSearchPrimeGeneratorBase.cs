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
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x52FD590", Offset = "0x52FC590", VA = "0x52FD590", Slot = "8")]
	protected virtual Mono.Math.BigInteger GenerateSearchBase(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x52FD670", Offset = "0x52FC670", VA = "0x52FD670", Slot = "7")]
	public override Mono.Math.BigInteger GenerateNewPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x52FD690", Offset = "0x52FC690", VA = "0x52FD690", Slot = "9")]
	public virtual Mono.Math.BigInteger GenerateNewPrime(int bits, object context)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x52FDBA0", Offset = "0x52FCBA0", VA = "0x52FDBA0", Slot = "10")]
	protected virtual bool IsPrimeAcceptable(Mono.Math.BigInteger bi, object context)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x52FB710", Offset = "0x52FA710", VA = "0x52FB710")]
	public SequentialSearchPrimeGeneratorBase()
	{
	}
}
