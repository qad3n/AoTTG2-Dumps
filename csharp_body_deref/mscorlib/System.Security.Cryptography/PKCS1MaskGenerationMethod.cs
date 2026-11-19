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

[Token(Token = "0x20002F5")]
[ComVisible(true)]
public class PKCS1MaskGenerationMethod : MaskGenerationMethod
{
	[Token(Token = "0x4000C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string HashNameValue;

	[Token(Token = "0x170002BB")]
	public string HashName
	{
		[Token(Token = "0x60019BC")]
		[Address(RVA = "0x533F980", Offset = "0x533E980", VA = "0x533F980")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019BD")]
		[Address(RVA = "0x533F990", Offset = "0x533E990", VA = "0x533F990")]
		set
		{
		}
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x533F930", Offset = "0x533E930", VA = "0x533F930")]
	public PKCS1MaskGenerationMethod()
	{
	}

	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x533FA00", Offset = "0x533EA00", VA = "0x533FA00", Slot = "4")]
	public override byte[] GenerateMask(byte[] rgbSeed, int cbReturn)
	{
		return null;
	}
}
