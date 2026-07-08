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
		[Address(RVA = "0x4E501E0", Offset = "0x4E501E0", VA = "0x4E501E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001978")]
		[Address(RVA = "0x4E501F0", Offset = "0x4E501F0", VA = "0x4E501F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x4E50190", Offset = "0x4E50190", VA = "0x4E50190")]
	public PKCS1MaskGenerationMethod()
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x4E50260", Offset = "0x4E50260", VA = "0x4E50260", Slot = "4")]
	public override byte[] GenerateMask(byte[] rgbSeed, int cbReturn)
	{
		return null;
	}
}
