using System.Text;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x2000016")]
public class X509Extension
{
	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x10")]
	protected string extnOid;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x18")]
	protected bool extnCritical;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x20")]
	protected ASN1 extnValue;

	[Token(Token = "0x1700003E")]
	public string Oid
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x3A48350", Offset = "0x3A48350", VA = "0x3A48350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public bool Critical
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x3A48360", Offset = "0x3A48360", VA = "0x3A48360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000040")]
	public ASN1 Value
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x3A48300", Offset = "0x3A48300", VA = "0x3A48300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3A47CF0", Offset = "0x3A47CF0", VA = "0x3A47CF0")]
	public X509Extension(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3A481B0", Offset = "0x3A481B0", VA = "0x3A481B0")]
	public X509Extension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3A48330", Offset = "0x3A48330", VA = "0x3A48330", Slot = "4")]
	protected virtual void Decode()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3A48340", Offset = "0x3A48340", VA = "0x3A48340", Slot = "5")]
	protected virtual void Encode()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3A48370", Offset = "0x3A48370", VA = "0x3A48370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3A484C0", Offset = "0x3A484C0", VA = "0x3A484C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3A484F0", Offset = "0x3A484F0", VA = "0x3A484F0")]
	private void WriteLine(StringBuilder sb, int n, int pos)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3A48B90", Offset = "0x3A48B90", VA = "0x3A48B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
