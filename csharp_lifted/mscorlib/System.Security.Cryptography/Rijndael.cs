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

[Token(Token = "0x20002F9")]
[ComVisible(true)]
public abstract class Rijndael : SymmetricAlgorithm
{
	[Token(Token = "0x4000C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000C9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x53410A0", Offset = "0x53400A0", VA = "0x53410A0")]
	protected Rijndael()
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x5341140", Offset = "0x5340140", VA = "0x5341140")]
	public new static Rijndael Create()
	{
		return null;
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x5341300", Offset = "0x5340300", VA = "0x5341300")]
	public new static Rijndael Create(string algName)
	{
		return null;
	}
}
