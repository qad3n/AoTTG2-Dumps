using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E5")]
[ComVisible(true)]
public class HMACSHA512 : HMAC
{
	[Token(Token = "0x4000D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool m_useLegacyBlockSize;

	[Token(Token = "0x170002A9")]
	private int BlockSize
	{
		[Token(Token = "0x6001935")]
		[Address(RVA = "0x4E4D700", Offset = "0x4E4D700", VA = "0x4E4D700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AA")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x6001936")]
		[Address(RVA = "0x4E4D710", Offset = "0x4E4D710", VA = "0x4E4D710")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001937")]
		[Address(RVA = "0x4E4D720", Offset = "0x4E4D720", VA = "0x4E4D720")]
		set
		{
		}
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x4E4D590", Offset = "0x4E4D590", VA = "0x4E4D590")]
	public HMACSHA512()
	{
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x4E4D5E0", Offset = "0x4E4D5E0", VA = "0x4E4D5E0")]
	public HMACSHA512(byte[] key)
	{
	}
}
