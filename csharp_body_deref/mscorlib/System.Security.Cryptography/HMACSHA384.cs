using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E4")]
[ComVisible(true)]
public class HMACSHA384 : HMAC
{
	[Token(Token = "0x4000D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool m_useLegacyBlockSize;

	[Token(Token = "0x170002A7")]
	private int BlockSize
	{
		[Token(Token = "0x6001930")]
		[Address(RVA = "0x4E4D550", Offset = "0x4E4D550", VA = "0x4E4D550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A8")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x6001931")]
		[Address(RVA = "0x4E4D560", Offset = "0x4E4D560", VA = "0x4E4D560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001932")]
		[Address(RVA = "0x4E4D570", Offset = "0x4E4D570", VA = "0x4E4D570")]
		set
		{
		}
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x4E4D3E0", Offset = "0x4E4D3E0", VA = "0x4E4D3E0")]
	public HMACSHA384()
	{
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x4E4D430", Offset = "0x4E4D430", VA = "0x4E4D430")]
	public HMACSHA384(byte[] key)
	{
	}
}
