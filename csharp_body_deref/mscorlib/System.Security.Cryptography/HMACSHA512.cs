// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HMACSHA512
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000314")]
[ComVisible(true)]
public class HMACSHA512 : HMAC
{
	[Token(Token = "0x4000D1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool m_useLegacyBlockSize;

	[Token(Token = "0x170002AB")]
	private int BlockSize
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x19A9030", Offset = "0x19A7630", VA = "0x1819A9030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AC")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x600199E")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600199F")]
		[Address(RVA = "0x19A9050", Offset = "0x19A7650", VA = "0x1819A9050")]
		set
		{
		}
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x19A9180", Offset = "0x19A7780", VA = "0x1819A9180")]
	public HMACSHA512()
	{
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x19A9070", Offset = "0x19A7670", VA = "0x1819A9070")]
	public HMACSHA512(byte[] key)
	{
	}
}
