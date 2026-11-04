// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.PKCS1MaskGenerationMethod
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031C")]
[ComVisible(true)]
public class PKCS1MaskGenerationMethod : MaskGenerationMethod
{
	[Token(Token = "0x4000D34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string HashNameValue;

	[Token(Token = "0x170002BC")]
	public string HashName
	{
		[Token(Token = "0x60019DF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019E0")]
		[Address(RVA = "0x19ABFC0", Offset = "0x19AA5C0", VA = "0x1819ABFC0")]
		set
		{
		}
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x19ABF70", Offset = "0x19AA570", VA = "0x1819ABF70")]
	public PKCS1MaskGenerationMethod()
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x19ABEF0", Offset = "0x19AA4F0", VA = "0x1819ABEF0", Slot = "4")]
	public override byte[] GenerateMask(byte[] rgbSeed, int cbReturn)
	{
		return null;
	}
}
