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

[Token(Token = "0x20002ED")]
[ComVisible(true)]
public class HMACSHA512 : HMAC
{
	[Token(Token = "0x4000C7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool m_useLegacyBlockSize;

	[Token(Token = "0x170002AA")]
	private int BlockSize
	{
		[Token(Token = "0x600197A")]
		[Address(RVA = "0x533D040", Offset = "0x533C040", VA = "0x533D040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AB")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x600197B")]
		[Address(RVA = "0x533D050", Offset = "0x533C050", VA = "0x533D050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600197C")]
		[Address(RVA = "0x533D060", Offset = "0x533C060", VA = "0x533D060")]
		set
		{
		}
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x533CED0", Offset = "0x533BED0", VA = "0x533CED0")]
	public HMACSHA512()
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x533CF20", Offset = "0x533BF20", VA = "0x533CF20")]
	public HMACSHA512(byte[] key)
	{
	}
}
