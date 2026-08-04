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
		[Address(RVA = "0x3B33070", Offset = "0x3B33070", VA = "0x3B33070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A8")]
	public bool ProduceLegacyHmacValues
	{
		[Token(Token = "0x6001931")]
		[Address(RVA = "0x3B33080", Offset = "0x3B33080", VA = "0x3B33080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001932")]
		[Address(RVA = "0x3B33090", Offset = "0x3B33090", VA = "0x3B33090")]
		set
		{
		}
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x3B32F00", Offset = "0x3B32F00", VA = "0x3B32F00")]
	public HMACSHA384()
	{
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x3B32F50", Offset = "0x3B32F50", VA = "0x3B32F50")]
	public HMACSHA384(byte[] key)
	{
	}
}
