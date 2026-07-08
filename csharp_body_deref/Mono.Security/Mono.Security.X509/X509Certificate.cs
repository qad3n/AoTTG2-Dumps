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
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x3A39170", Offset = "0x3A39170", VA = "0x3A39170")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x3A44D90", Offset = "0x3A44D90", VA = "0x3A44D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public X509ExtensionCollection Extensions
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x3A44DE0", Offset = "0x3A44DE0", VA = "0x3A44DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002B")]
	public byte[] Hash
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x3A44DF0", Offset = "0x3A44DF0", VA = "0x3A44DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public virtual string IssuerName
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x3A450E0", Offset = "0x3A450E0", VA = "0x3A450E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public virtual string KeyAlgorithm
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x3A450F0", Offset = "0x3A450F0", VA = "0x3A450F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public virtual byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x3A45100", Offset = "0x3A45100", VA = "0x3A45100", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x3A45170", Offset = "0x3A45170", VA = "0x3A45170", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public virtual byte[] PublicKey
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x3A45180", Offset = "0x3A45180", VA = "0x3A45180", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public virtual RSA RSA
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x3A451F0", Offset = "0x3A451F0", VA = "0x3A451F0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x3A455A0", Offset = "0x3A455A0", VA = "0x3A455A0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public virtual byte[] RawData
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x3A455F0", Offset = "0x3A455F0", VA = "0x3A455F0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public virtual byte[] SerialNumber
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x3A45660", Offset = "0x3A45660", VA = "0x3A45660", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	public virtual byte[] Signature
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x3A456E0", Offset = "0x3A456E0", VA = "0x3A456E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public virtual string SubjectName
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x3A45BF0", Offset = "0x3A45BF0", VA = "0x3A45BF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public virtual DateTime ValidFrom
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x3A45C00", Offset = "0x3A45C00", VA = "0x3A45C00", Slot = "16")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000036")]
	public virtual DateTime ValidUntil
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x3A45C10", Offset = "0x3A45C10", VA = "0x3A45C10", Slot = "17")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000037")]
	public int Version
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x3A45C20", Offset = "0x3A45C20", VA = "0x3A45C20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000038")]
	public bool IsCurrent
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x3A45C30", Offset = "0x3A45C30", VA = "0x3A45C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public bool IsSelfSigned
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x3A46070", Offset = "0x3A46070", VA = "0x3A46070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3A43A30", Offset = "0x3A43A30", VA = "0x3A43A30")]
	private void Parse(byte[] data)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3A33F60", Offset = "0x3A33F60", VA = "0x3A33F60")]
	public X509Certificate(byte[] data)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3A44D10", Offset = "0x3A44D10", VA = "0x3A44D10")]
	private byte[] GetUnsignedBigInteger(byte[] integer)
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3A45C80", Offset = "0x3A45C80", VA = "0x3A45C80")]
	public bool WasCurrent(DateTime instant)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3A45D40", Offset = "0x3A45D40", VA = "0x3A45D40")]
	internal bool VerifySignature(DSA dsa)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3A45E00", Offset = "0x3A45E00", VA = "0x3A45E00")]
	internal bool VerifySignature(RSA rsa)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3A45F10", Offset = "0x3A45F10", VA = "0x3A45F10")]
	public bool VerifySignature(AsymmetricAlgorithm aa)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3A461B0", Offset = "0x3A461B0", VA = "0x3A461B0", Slot = "18")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3A44C00", Offset = "0x3A44C00", VA = "0x3A44C00")]
	private static byte[] PEM(string type, byte[] data)
	{
		return null;
	}
}
