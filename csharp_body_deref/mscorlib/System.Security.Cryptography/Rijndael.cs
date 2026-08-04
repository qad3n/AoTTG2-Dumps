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

[Token(Token = "0x20002F1")]
[ComVisible(true)]
public abstract class Rijndael : SymmetricAlgorithm
{
	[Token(Token = "0x4000D2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x3B374B0", Offset = "0x3B374B0", VA = "0x3B374B0")]
	protected Rijndael()
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x3B37550", Offset = "0x3B37550", VA = "0x3B37550")]
	public new static Rijndael Create()
	{
		return null;
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x3B37710", Offset = "0x3B37710", VA = "0x3B37710")]
	public new static Rijndael Create(string algName)
	{
		return null;
	}
}
