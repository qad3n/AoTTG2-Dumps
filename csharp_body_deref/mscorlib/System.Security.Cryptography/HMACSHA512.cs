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
		[Address(RVA = "0x3B33220", Offset = "0x3B33220", VA = "0x3B33220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AA")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x6001936")]
		[Address(RVA = "0x3B33230", Offset = "0x3B33230", VA = "0x3B33230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001937")]
		[Address(RVA = "0x3B33240", Offset = "0x3B33240", VA = "0x3B33240")]
		set
		{
		}
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x3B330B0", Offset = "0x3B330B0", VA = "0x3B330B0")]
	public HMACSHA512()
	{
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x3B33100", Offset = "0x3B33100", VA = "0x3B33100")]
	public HMACSHA512(byte[] key)
	{
	}
}
