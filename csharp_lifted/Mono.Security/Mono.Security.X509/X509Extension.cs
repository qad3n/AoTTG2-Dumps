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
		[Address(RVA = "0x52C0D00", Offset = "0x52BFD00", VA = "0x52C0D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public bool Critical
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x52C0D10", Offset = "0x52BFD10", VA = "0x52C0D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000040")]
	public ASN1 Value
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x52C0CB0", Offset = "0x52BFCB0", VA = "0x52C0CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x52C06F0", Offset = "0x52BF6F0", VA = "0x52C06F0")]
	public X509Extension(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x52C0B60", Offset = "0x52BFB60", VA = "0x52C0B60")]
	public X509Extension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x52C0CE0", Offset = "0x52BFCE0", VA = "0x52C0CE0", Slot = "4")]
	protected virtual void Decode()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x52C0CF0", Offset = "0x52BFCF0", VA = "0x52C0CF0", Slot = "5")]
	protected virtual void Encode()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x52C0D20", Offset = "0x52BFD20", VA = "0x52C0D20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x52C0E50", Offset = "0x52BFE50", VA = "0x52C0E50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x52C0E80", Offset = "0x52BFE80", VA = "0x52C0E80")]
	private void WriteLine(StringBuilder sb, int n, int pos)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x52C1500", Offset = "0x52C0500", VA = "0x52C1500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
