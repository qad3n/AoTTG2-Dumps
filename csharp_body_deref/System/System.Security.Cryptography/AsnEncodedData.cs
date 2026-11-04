// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsnEncodedData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000128")]
public class AsnEncodedData
{
	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x10")]
	internal Oid _oid;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] _raw;

	[Token(Token = "0x17000133")]
	public Oid Oid
	{
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x2879280", Offset = "0x2877880", VA = "0x182879280")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public byte[] RawData
	{
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x2879320", Offset = "0x2877920", VA = "0x182879320")]
		set
		{
		}
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AsnEncodedData()
	{
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x28790F0", Offset = "0x28776F0", VA = "0x1828790F0")]
	public AsnEncodedData(string oid, byte[] rawData)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x2879040", Offset = "0x2877640", VA = "0x182879040")]
	public AsnEncodedData(Oid oid, byte[] rawData)
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x2879170", Offset = "0x2877770", VA = "0x182879170")]
	public AsnEncodedData(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x2878170", Offset = "0x2876770", VA = "0x182878170", Slot = "4")]
	public virtual void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x2878520", Offset = "0x2876B20", VA = "0x182878520", Slot = "5")]
	public virtual string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x2878E70", Offset = "0x2877470", VA = "0x182878E70", Slot = "6")]
	internal virtual string ToString(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x28782B0", Offset = "0x28768B0", VA = "0x1828782B0")]
	internal string Default(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x2878020", Offset = "0x2876620", VA = "0x182878020")]
	internal string BasicConstraintsExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x28783D0", Offset = "0x28769D0", VA = "0x1828783D0")]
	internal string EnhancedKeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x2878560", Offset = "0x2876B60", VA = "0x182878560")]
	internal string KeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x2878D20", Offset = "0x2877320", VA = "0x182878D20")]
	internal string SubjectKeyIdentifierExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x2878A70", Offset = "0x2877070", VA = "0x182878A70")]
	internal string SubjectAltName(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x28786B0", Offset = "0x2876CB0", VA = "0x1828786B0")]
	internal string NetscapeCertType(bool multiLine)
	{
		return null;
	}
}
