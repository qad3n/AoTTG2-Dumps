// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000142")]
public class X509ChainElement
{
	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x10")]
	private X509Certificate2 certificate;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x20")]
	private string info;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatusFlags compressed_status_flags;

	[Token(Token = "0x17000172")]
	public X509Certificate2 Certificate
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000173")]
	public X509ChainStatus[] ChainElementStatus
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000174")]
	internal X509ChainStatusFlags StatusFlags
	{
		[Token(Token = "0x60007D8")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x2889530", Offset = "0x2887B30", VA = "0x182889530")]
	internal X509ChainElement(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x28885E0", Offset = "0x2886BE0", VA = "0x1828885E0")]
	private int Count(X509ChainStatusFlags flags)
	{
		return default(int);
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x2888610", Offset = "0x2886C10", VA = "0x182888610")]
	private void Set(X509ChainStatus[] status, ref int position, X509ChainStatusFlags flags, X509ChainStatusFlags mask)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x2888690", Offset = "0x2886C90", VA = "0x182888690")]
	internal void UncompressFlags()
	{
	}
}
