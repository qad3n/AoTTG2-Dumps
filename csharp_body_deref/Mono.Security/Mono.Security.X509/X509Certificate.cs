// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509Certificate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.Serialization;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x2000011")]
public class X509Certificate : ISerializable
{
	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x10")]
	private ASN1 decoder;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x18")]
	private byte[] m_encodedcert;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x20")]
	private DateTime m_from;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x28")]
	private DateTime m_until;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x30")]
	private ASN1 issuer;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x38")]
	private string m_issuername;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x40")]
	private string m_keyalgo;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x48")]
	private byte[] m_keyalgoparams;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x50")]
	private ASN1 subject;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x58")]
	private string m_subject;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x60")]
	private byte[] m_publickey;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x68")]
	private byte[] signature;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x70")]
	private string m_signaturealgo;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x78")]
	private byte[] m_signaturealgoparams;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x80")]
	private byte[] certhash;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x88")]
	private RSA _rsa;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x90")]
	private DSA _dsa;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x98")]
	private int version;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0xA0")]
	private byte[] serialnumber;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0xA8")]
	private byte[] issuerUniqueID;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0xB0")]
	private byte[] subjectUniqueID;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0xB8")]
	private X509ExtensionCollection extensions;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x0")]
	private static string encoding_error;

	[Token(Token = "0x17000029")]
	public DSA DSA
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x1925AE0", Offset = "0x19240E0", VA = "0x181925AE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x1926AC0", Offset = "0x19250C0", VA = "0x181926AC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public X509ExtensionCollection Extensions
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002B")]
	public byte[] Hash
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x1925E80", Offset = "0x1924480", VA = "0x181925E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public virtual string IssuerName
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public virtual string KeyAlgorithm
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public virtual byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x1926250", Offset = "0x1924850", VA = "0x181926250", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public virtual byte[] PublicKey
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x19262D0", Offset = "0x19248D0", VA = "0x1819262D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public virtual RSA RSA
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x1926350", Offset = "0x1924950", VA = "0x181926350", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x1926B10", Offset = "0x1925110", VA = "0x181926B10", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public virtual byte[] RawData
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x1926580", Offset = "0x1924B80", VA = "0x181926580", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public virtual byte[] SerialNumber
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x1926600", Offset = "0x1924C00", VA = "0x181926600", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	public virtual byte[] Signature
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x1926690", Offset = "0x1924C90", VA = "0x181926690", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public virtual string SubjectName
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public virtual DateTime ValidFrom
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "16")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000036")]
	public virtual DateTime ValidUntil
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "17")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000037")]
	public int Version
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000038")]
	public bool IsCurrent
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x19260C0", Offset = "0x19246C0", VA = "0x1819260C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public bool IsSelfSigned
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x19261C0", Offset = "0x19247C0", VA = "0x1819261C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x1924A20", Offset = "0x1923020", VA = "0x181924A20")]
	private void Parse(byte[] data)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x19258B0", Offset = "0x1923EB0", VA = "0x1819258B0")]
	public X509Certificate(byte[] data)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x1924860", Offset = "0x1922E60", VA = "0x181924860")]
	private byte[] GetUnsignedBigInteger(byte[] integer)
	{
		return null;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x1925780", Offset = "0x1923D80", VA = "0x181925780")]
	public bool WasCurrent(DateTime instant)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x19256B0", Offset = "0x1923CB0", VA = "0x1819256B0")]
	internal bool VerifySignature(DSA dsa)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x1925590", Offset = "0x1923B90", VA = "0x181925590")]
	internal bool VerifySignature(RSA rsa)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x19253A0", Offset = "0x19239A0", VA = "0x1819253A0")]
	public bool VerifySignature(AsymmetricAlgorithm aa)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x1924800", Offset = "0x1922E00", VA = "0x181924800", Slot = "18")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x1924900", Offset = "0x1922F00", VA = "0x181924900")]
	private static byte[] PEM(string type, byte[] data)
	{
		return null;
	}
}
