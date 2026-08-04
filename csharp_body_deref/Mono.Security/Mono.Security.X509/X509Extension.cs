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
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x3AB5010", Offset = "0x3AB5010", VA = "0x3AB5010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public bool Critical
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x3AB5020", Offset = "0x3AB5020", VA = "0x3AB5020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000040")]
	public ASN1 Value
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x3AB4FC0", Offset = "0x3AB4FC0", VA = "0x3AB4FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3AB49B0", Offset = "0x3AB49B0", VA = "0x3AB49B0")]
	public X509Extension(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3AB4E70", Offset = "0x3AB4E70", VA = "0x3AB4E70")]
	public X509Extension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3AB4FF0", Offset = "0x3AB4FF0", VA = "0x3AB4FF0", Slot = "4")]
	protected virtual void Decode()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3AB5000", Offset = "0x3AB5000", VA = "0x3AB5000", Slot = "5")]
	protected virtual void Encode()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3AB5030", Offset = "0x3AB5030", VA = "0x3AB5030", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3AB5180", Offset = "0x3AB5180", VA = "0x3AB5180", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3AB51B0", Offset = "0x3AB51B0", VA = "0x3AB51B0")]
	private void WriteLine(StringBuilder sb, int n, int pos)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3AB5850", Offset = "0x3AB5850", VA = "0x3AB5850", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
