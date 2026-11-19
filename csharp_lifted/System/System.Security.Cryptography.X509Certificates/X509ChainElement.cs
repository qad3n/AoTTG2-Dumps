// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000103")]
public class X509ChainElement
{
	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x10")]
	private X509Certificate2 certificate;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x20")]
	private string info;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatusFlags compressed_status_flags;

	[Token(Token = "0x17000143")]
	public X509Certificate2 Certificate
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x6216000", Offset = "0x6215000", VA = "0x6216000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public X509ChainStatus[] ChainElementStatus
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x6216010", Offset = "0x6215010", VA = "0x6216010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	internal X509ChainStatusFlags StatusFlags
	{
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x6216020", Offset = "0x6215020", VA = "0x6216020")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x6216030", Offset = "0x6215030", VA = "0x6216030")]
		set
		{
		}
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x6215FB0", Offset = "0x6214FB0", VA = "0x6215FB0")]
	internal X509ChainElement(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x6216040", Offset = "0x6215040", VA = "0x6216040")]
	private int Count(X509ChainStatusFlags flags)
	{
		return default(int);
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x6216120", Offset = "0x6215120", VA = "0x6216120")]
	private void Set(X509ChainStatus[] status, ref int position, X509ChainStatusFlags flags, X509ChainStatusFlags mask)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x6216300", Offset = "0x6215300", VA = "0x6216300")]
	internal void UncompressFlags()
	{
	}
}
