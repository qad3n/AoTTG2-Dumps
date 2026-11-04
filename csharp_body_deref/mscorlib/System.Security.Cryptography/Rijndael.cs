// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Rijndael
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000320")]
[ComVisible(true)]
public abstract class Rijndael : SymmetricAlgorithm
{
	[Token(Token = "0x4000D3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x6001A02")]
	[Address(RVA = "0x19B63E0", Offset = "0x19B49E0", VA = "0x1819B63E0")]
	protected Rijndael()
	{
	}

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x19B6040", Offset = "0x19B4640", VA = "0x1819B6040")]
	public new static Rijndael Create()
	{
		return null;
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x19B61D0", Offset = "0x19B47D0", VA = "0x1819B61D0")]
	public new static Rijndael Create(string algName)
	{
		return null;
	}
}
