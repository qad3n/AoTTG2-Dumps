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

[Token(Token = "0x20002ED")]
[ComVisible(true)]
public class PKCS1MaskGenerationMethod : MaskGenerationMethod
{
	[Token(Token = "0x4000D27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string HashNameValue;

	[Token(Token = "0x170002BA")]
	public string HashName
	{
		[Token(Token = "0x6001977")]
		[Address(RVA = "0x3B35D00", Offset = "0x3B35D00", VA = "0x3B35D00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001978")]
		[Address(RVA = "0x3B35D10", Offset = "0x3B35D10", VA = "0x3B35D10")]
		set
		{
		}
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x3B35CB0", Offset = "0x3B35CB0", VA = "0x3B35CB0")]
	public PKCS1MaskGenerationMethod()
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x3B35D80", Offset = "0x3B35D80", VA = "0x3B35D80", Slot = "4")]
	public override byte[] GenerateMask(byte[] rgbSeed, int cbReturn)
	{
		return null;
	}
}
