// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DES
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000308")]
[ComVisible(true)]
public abstract class DES : SymmetricAlgorithm
{
	[Token(Token = "0x4000D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002A5")]
	public override byte[] Key
	{
		[Token(Token = "0x600194B")]
		[Address(RVA = "0x19A4AB0", Offset = "0x19A30B0", VA = "0x1819A4AB0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x600194C")]
		[Address(RVA = "0x19A4BA0", Offset = "0x19A31A0", VA = "0x1819A4BA0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x600194A")]
	[Address(RVA = "0x19A4A10", Offset = "0x19A3010", VA = "0x1819A4A10")]
	protected DES()
	{
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x19A4330", Offset = "0x19A2930", VA = "0x1819A4330")]
	public new static DES Create()
	{
		return null;
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x19A4290", Offset = "0x19A2890", VA = "0x1819A4290")]
	public new static DES Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x19A46B0", Offset = "0x19A2CB0", VA = "0x1819A46B0")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x19A44E0", Offset = "0x19A2AE0", VA = "0x1819A44E0")]
	public static bool IsSemiWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001951")]
	[Address(RVA = "0x19A44D0", Offset = "0x19A2AD0", VA = "0x1819A44D0")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001952")]
	[Address(RVA = "0x19A4800", Offset = "0x19A2E00", VA = "0x1819A4800")]
	private static ulong QuadWordFromBigEndian(byte[] block)
	{
		return default(ulong);
	}
}
