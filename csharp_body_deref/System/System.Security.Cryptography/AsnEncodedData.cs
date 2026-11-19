// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsnEncodedData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E9")]
public class AsnEncodedData
{
	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x10")]
	internal Oid _oid;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] _raw;

	[Token(Token = "0x17000104")]
	public Oid Oid
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x620ADB0", Offset = "0x6209DB0", VA = "0x620ADB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x620ABE0", Offset = "0x6209BE0", VA = "0x620ABE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public byte[] RawData
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x620ADC0", Offset = "0x6209DC0", VA = "0x620ADC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x620AA30", Offset = "0x6209A30", VA = "0x620AA30")]
		set
		{
		}
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x620A940", Offset = "0x6209940", VA = "0x620A940")]
	protected AsnEncodedData()
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x620A950", Offset = "0x6209950", VA = "0x620A950")]
	public AsnEncodedData(string oid, byte[] rawData)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x620AB20", Offset = "0x6209B20", VA = "0x620AB20")]
	public AsnEncodedData(Oid oid, byte[] rawData)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x620AC60", Offset = "0x6209C60", VA = "0x620AC60")]
	public AsnEncodedData(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x620ADD0", Offset = "0x6209DD0", VA = "0x620ADD0", Slot = "4")]
	public virtual void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x620AF30", Offset = "0x6209F30", VA = "0x620AF30", Slot = "5")]
	public virtual string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x620B0C0", Offset = "0x620A0C0", VA = "0x620B0C0", Slot = "6")]
	internal virtual string ToString(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x620AF80", Offset = "0x6209F80", VA = "0x620AF80")]
	internal string Default(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x620B230", Offset = "0x620A230", VA = "0x620B230")]
	internal string BasicConstraintsExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x620B330", Offset = "0x620A330", VA = "0x620B330")]
	internal string EnhancedKeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x620B430", Offset = "0x620A430", VA = "0x620B430")]
	internal string KeyUsageExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x620B530", Offset = "0x620A530", VA = "0x620B530")]
	internal string SubjectKeyIdentifierExtension(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x620B630", Offset = "0x620A630", VA = "0x620B630")]
	internal string SubjectAltName(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x620B9B0", Offset = "0x620A9B0", VA = "0x620B9B0")]
	internal string NetscapeCertType(bool multiLine)
	{
		return null;
	}
}
