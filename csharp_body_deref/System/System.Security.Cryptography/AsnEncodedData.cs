using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E8")]
public class AsnEncodedData
{
	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x10")]
	internal Oid _oid;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] _raw;

	[Token(Token = "0x170000FA")]
	public Oid Oid
	{
		[Token(Token = "0x6000546")]
		[Address(RVA = "0x460A1B0", Offset = "0x460A1B0", VA = "0x460A1B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000547")]
		[Address(RVA = "0x4609FE0", Offset = "0x4609FE0", VA = "0x4609FE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public byte[] RawData
	{
		[Token(Token = "0x6000548")]
		[Address(RVA = "0x460A1C0", Offset = "0x460A1C0", VA = "0x460A1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000549")]
		[Address(RVA = "0x4609E30", Offset = "0x4609E30", VA = "0x4609E30")]
		set
		{
		}
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4609D40", Offset = "0x4609D40", VA = "0x4609D40")]
	protected AsnEncodedData()
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4609D50", Offset = "0x4609D50", VA = "0x4609D50")]
	public AsnEncodedData(string oid, byte[] rawData)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4609F20", Offset = "0x4609F20", VA = "0x4609F20")]
	public AsnEncodedData(Oid oid, byte[] rawData)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x460A060", Offset = "0x460A060", VA = "0x460A060")]
	public AsnEncodedData(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x460A1D0", Offset = "0x460A1D0", VA = "0x460A1D0", Slot = "4")]
	public virtual void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x460A330", Offset = "0x460A330", VA = "0x460A330", Slot = "5")]
	public virtual string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x460A4D0", Offset = "0x460A4D0", VA = "0x460A4D0", Slot = "6")]
	internal virtual string ToString(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x460A380", Offset = "0x460A380", VA = "0x460A380")]
	internal string Default(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x460A640", Offset = "0x460A640", VA = "0x460A640")]
	internal string BasicConstraintsExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x460A750", Offset = "0x460A750", VA = "0x460A750")]
	internal string EnhancedKeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x460A860", Offset = "0x460A860", VA = "0x460A860")]
	internal string KeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x460A970", Offset = "0x460A970", VA = "0x460A970")]
	internal string SubjectKeyIdentifierExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x460AA80", Offset = "0x460AA80", VA = "0x460AA80")]
	internal string SubjectAltName(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x460B170", Offset = "0x460B170", VA = "0x460B170")]
	internal string NetscapeCertType(bool multiLine)
	{
		return null;
	}
}
