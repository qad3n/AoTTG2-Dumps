// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HMACSHA384
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002EC")]
[ComVisible(true)]
public class HMACSHA384 : HMAC
{
	[Token(Token = "0x4000C7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool m_useLegacyBlockSize;

	[Token(Token = "0x170002A8")]
	private int BlockSize
	{
		[Token(Token = "0x6001975")]
		[Address(RVA = "0x533CE90", Offset = "0x533BE90", VA = "0x533CE90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A9")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x6001976")]
		[Address(RVA = "0x533CEA0", Offset = "0x533BEA0", VA = "0x533CEA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001977")]
		[Address(RVA = "0x533CEB0", Offset = "0x533BEB0", VA = "0x533CEB0")]
		set
		{
		}
	}

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x533CD20", Offset = "0x533BD20", VA = "0x533CD20")]
	public HMACSHA384()
	{
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x533CD70", Offset = "0x533BD70", VA = "0x533CD70")]
	public HMACSHA384(byte[] key)
	{
	}
}
