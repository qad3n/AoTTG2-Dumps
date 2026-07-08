using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000102")]
public class X509ChainElement
{
	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x10")]
	private X509Certificate2 certificate;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x20")]
	private string info;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatusFlags compressed_status_flags;

	[Token(Token = "0x17000139")]
	public X509Certificate2 Certificate
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x4616050", Offset = "0x4616050", VA = "0x4616050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public X509ChainStatus[] ChainElementStatus
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x4616060", Offset = "0x4616060", VA = "0x4616060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	internal X509ChainStatusFlags StatusFlags
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x4616070", Offset = "0x4616070", VA = "0x4616070")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x4616080", Offset = "0x4616080", VA = "0x4616080")]
		set
		{
		}
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4616000", Offset = "0x4616000", VA = "0x4616000")]
	internal X509ChainElement(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4616090", Offset = "0x4616090", VA = "0x4616090")]
	private int Count(X509ChainStatusFlags flags)
	{
		return default(int);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4616220", Offset = "0x4616220", VA = "0x4616220")]
	private void Set(X509ChainStatus[] status, ref int position, X509ChainStatusFlags flags, X509ChainStatusFlags mask)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4616400", Offset = "0x4616400", VA = "0x4616400")]
	internal void UncompressFlags()
	{
	}
}
