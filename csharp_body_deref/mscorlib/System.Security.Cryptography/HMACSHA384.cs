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

[Token(Token = "0x2000313")]
[ComVisible(true)]
public class HMACSHA384 : HMAC
{
	[Token(Token = "0x4000D1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool m_useLegacyBlockSize;

	[Token(Token = "0x170002A9")]
	private int BlockSize
	{
		[Token(Token = "0x6001998")]
		[Address(RVA = "0x19A9030", Offset = "0x19A7630", VA = "0x1819A9030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AA")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x6001999")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600199A")]
		[Address(RVA = "0x19A9050", Offset = "0x19A7650", VA = "0x1819A9050")]
		set
		{
		}
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x19A8DD0", Offset = "0x19A73D0", VA = "0x1819A8DD0")]
	public HMACSHA384()
	{
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x19A8F20", Offset = "0x19A7520", VA = "0x1819A8F20")]
	public HMACSHA384(byte[] key)
	{
	}
}
