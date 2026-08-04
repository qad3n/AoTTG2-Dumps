// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsnEncodedData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x492F2B0", Offset = "0x492F2B0", VA = "0x492F2B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000547")]
		[Address(RVA = "0x492F0E0", Offset = "0x492F0E0", VA = "0x492F0E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public byte[] RawData
	{
		[Token(Token = "0x6000548")]
		[Address(RVA = "0x492F2C0", Offset = "0x492F2C0", VA = "0x492F2C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000549")]
		[Address(RVA = "0x492EF30", Offset = "0x492EF30", VA = "0x492EF30")]
		set
		{
		}
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x492EE40", Offset = "0x492EE40", VA = "0x492EE40")]
	protected AsnEncodedData()
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x492EE50", Offset = "0x492EE50", VA = "0x492EE50")]
	public AsnEncodedData(string oid, byte[] rawData)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x492F020", Offset = "0x492F020", VA = "0x492F020")]
	public AsnEncodedData(Oid oid, byte[] rawData)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x492F160", Offset = "0x492F160", VA = "0x492F160")]
	public AsnEncodedData(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x492F2D0", Offset = "0x492F2D0", VA = "0x492F2D0", Slot = "4")]
	public virtual void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x492F430", Offset = "0x492F430", VA = "0x492F430", Slot = "5")]
	public virtual string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x492F5D0", Offset = "0x492F5D0", VA = "0x492F5D0", Slot = "6")]
	internal virtual string ToString(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x492F480", Offset = "0x492F480", VA = "0x492F480")]
	internal string Default(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x492F740", Offset = "0x492F740", VA = "0x492F740")]
	internal string BasicConstraintsExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x492F850", Offset = "0x492F850", VA = "0x492F850")]
	internal string EnhancedKeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x492F960", Offset = "0x492F960", VA = "0x492F960")]
	internal string KeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x492FA70", Offset = "0x492FA70", VA = "0x492FA70")]
	internal string SubjectKeyIdentifierExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x492FB80", Offset = "0x492FB80", VA = "0x492FB80")]
	internal string SubjectAltName(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4930270", Offset = "0x4930270", VA = "0x4930270")]
	internal string NetscapeCertType(bool multiLine)
	{
		return null;
	}
}
