// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.PKCS12
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Security.Cryptography;
using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace Mono.Security.X509;

[Token(Token = "0x200000C")]
public class PKCS12 : ICloneable
{
	[Token(Token = "0x200000D")]
	public class DeriveBytes
	{
		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x0")]
		private static byte[] keyDiversifier;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x8")]
		private static byte[] ivDiversifier;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x10")]
		private static byte[] macDiversifier;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x10")]
		private string _hashName;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x18")]
		private int _iterations;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x20")]
		private byte[] _password;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x28")]
		private byte[] _salt;

		[Token(Token = "0x1700001E")]
		public string HashName
		{
			[Token(Token = "0x6000063")]
			[Address(RVA = "0x3AACE80", Offset = "0x3AACE80", VA = "0x3AACE80")]
			set
			{
			}
		}

		[Token(Token = "0x1700001F")]
		public int IterationCount
		{
			[Token(Token = "0x6000064")]
			[Address(RVA = "0x3AACE90", Offset = "0x3AACE90", VA = "0x3AACE90")]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public byte[] Password
		{
			[Token(Token = "0x6000065")]
			[Address(RVA = "0x3AA5410", Offset = "0x3AA5410", VA = "0x3AA5410")]
			set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public byte[] Salt
		{
			[Token(Token = "0x6000066")]
			[Address(RVA = "0x3AA54E0", Offset = "0x3AA54E0", VA = "0x3AA54E0")]
			set
			{
			}
		}

		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3AA5400", Offset = "0x3AA5400", VA = "0x3AA5400")]
		public DeriveBytes()
		{
		}

		[Token(Token = "0x6000067")]
		[Address(RVA = "0x3AACEA0", Offset = "0x3AACEA0", VA = "0x3AACEA0")]
		private void Adjust(byte[] a, int aOff, byte[] b)
		{
		}

		[Token(Token = "0x6000068")]
		[Address(RVA = "0x3AACFA0", Offset = "0x3AACFA0", VA = "0x3AACFA0")]
		private byte[] Derive(byte[] diversifier, int n)
		{
			return null;
		}

		[Token(Token = "0x6000069")]
		[Address(RVA = "0x3AA55A0", Offset = "0x3AA55A0", VA = "0x3AA55A0")]
		public byte[] DeriveKey(int size)
		{
			return null;
		}

		[Token(Token = "0x600006A")]
		[Address(RVA = "0x3AA5600", Offset = "0x3AA5600", VA = "0x3AA5600")]
		public byte[] DeriveIV(int size)
		{
			return null;
		}

		[Token(Token = "0x600006B")]
		[Address(RVA = "0x3AA7E30", Offset = "0x3AA7E30", VA = "0x3AA7E30")]
		public byte[] DeriveMAC(int size)
		{
			return null;
		}
	}

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x10")]
	private byte[] _password;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList _keyBags;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _secretBags;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x28")]
	private X509CertificateCollection _certs;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x30")]
	private bool _keyBagsChanged;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x31")]
	private bool _secretBagsChanged;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x32")]
	private bool _certsChanged;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x34")]
	private int _iterations;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList _safeBags;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x40")]
	private RandomNumberGenerator _rng;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	private static int password_max_length;

	[Token(Token = "0x17000018")]
	public string Password
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3AA1C50", Offset = "0x3AA1C50", VA = "0x3AA1C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public int IterationCount
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3AA3880", Offset = "0x3AA3880", VA = "0x3AA3880")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3AA3890", Offset = "0x3AA3890", VA = "0x3AA3890")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ArrayList Keys
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3AA38A0", Offset = "0x3AA38A0", VA = "0x3AA38A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public X509CertificateCollection Certificates
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x3AA46B0", Offset = "0x3AA46B0", VA = "0x3AA46B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	internal RandomNumberGenerator RNG
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x3AA4DF0", Offset = "0x3AA4DF0", VA = "0x3AA4DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public static int MaximumPasswordLength
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x3AACDD0", Offset = "0x3AACDD0", VA = "0x3AACDD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3AA1AD0", Offset = "0x3AA1AD0", VA = "0x3AA1AD0")]
	public PKCS12()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3AA1BD0", Offset = "0x3AA1BD0", VA = "0x3AA1BD0")]
	public PKCS12(byte[] data)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3AA2990", Offset = "0x3AA2990", VA = "0x3AA2990")]
	public PKCS12(byte[] data, string password)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3AA1E80", Offset = "0x3AA1E80", VA = "0x3AA1E80")]
	private void Decode(byte[] data)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3AA37D0", Offset = "0x3AA37D0", VA = "0x3AA37D0", Slot = "1")]
	~PKCS12()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3AA2B40", Offset = "0x3AA2B40", VA = "0x3AA2B40")]
	private bool Compare(byte[] expected, byte[] actual)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3AA4E20", Offset = "0x3AA4E20", VA = "0x3AA4E20")]
	private SymmetricAlgorithm GetSymmetricAlgorithm(string algorithmOid, byte[] salt, int iterationCount)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3AA44F0", Offset = "0x3AA44F0", VA = "0x3AA44F0")]
	public byte[] Decrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3AA3630", Offset = "0x3AA3630", VA = "0x3AA3630")]
	public byte[] Decrypt(PKCS7.EncryptedData ed)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3AA5660", Offset = "0x3AA5660", VA = "0x3AA5660")]
	public byte[] Encrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3AA58F0", Offset = "0x3AA58F0", VA = "0x3AA58F0")]
	private DSAParameters GetExistingParameters(out bool found)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3AA65F0", Offset = "0x3AA65F0", VA = "0x3AA65F0")]
	private void AddPrivateKey(PKCS8.PrivateKeyInfo pki)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3AA2B90", Offset = "0x3AA2B90", VA = "0x3AA2B90")]
	private void ReadSafeBag(ASN1 safeBag)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3AA68D0", Offset = "0x3AA68D0", VA = "0x3AA68D0")]
	private ASN1 CertificateSafeBag(X509Certificate x509, IDictionary attributes)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3AA29C0", Offset = "0x3AA29C0", VA = "0x3AA29C0")]
	private byte[] MAC(byte[] password, byte[] salt, int iterations, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3AA7E90", Offset = "0x3AA7E90", VA = "0x3AA7E90")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3AAB7B0", Offset = "0x3AAB7B0", VA = "0x3AAB7B0")]
	private PKCS7.ContentInfo EncryptedContentInfo(ASN1 safeBags, string algorithmOid)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3AAB7A0", Offset = "0x3AAB7A0", VA = "0x3AAB7A0")]
	public void AddCertificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3AABFF0", Offset = "0x3AABFF0", VA = "0x3AABFF0")]
	public void AddCertificate(X509Certificate cert, IDictionary attributes)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3AAB790", Offset = "0x3AAB790", VA = "0x3AAB790")]
	public void RemoveCertificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3AAC430", Offset = "0x3AAC430", VA = "0x3AAC430")]
	public void RemoveCertificate(X509Certificate cert, IDictionary attrs)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3AACCA0", Offset = "0x3AACCA0", VA = "0x3AACCA0", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
