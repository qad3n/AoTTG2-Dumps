// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509Extension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public bool Critical
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000040")]
	public ASN1 Value
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x1929A70", Offset = "0x1928070", VA = "0x181929A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x19295D0", Offset = "0x1927BD0", VA = "0x1819295D0")]
	public X509Extension(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x19298F0", Offset = "0x1927EF0", VA = "0x1819298F0")]
	public X509Extension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	protected virtual void Decode()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Encode()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x1929160", Offset = "0x1927760", VA = "0x181929160", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x19293D0", Offset = "0x19279D0", VA = "0x1819293D0")]
	private void WriteLine(StringBuilder sb, int n, int pos)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x19292C0", Offset = "0x19278C0", VA = "0x1819292C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
