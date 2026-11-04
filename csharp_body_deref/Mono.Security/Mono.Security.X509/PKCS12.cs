// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.PKCS12
// Update status: CHANGED in this game update
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
			[Token(Token = "0x6000066")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x1700001F")]
		public int IterationCount
		{
			[Token(Token = "0x6000067")]
			[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public byte[] Password
		{
			[Token(Token = "0x6000068")]
			[Address(RVA = "0x1916F30", Offset = "0x1915530", VA = "0x181916F30")]
			set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public byte[] Salt
		{
			[Token(Token = "0x6000069")]
			[Address(RVA = "0x1917010", Offset = "0x1915610", VA = "0x181917010")]
			set
			{
			}
		}

		[Token(Token = "0x6000065")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DeriveBytes()
		{
		}

		[Token(Token = "0x600006A")]
		[Address(RVA = "0x1916740", Offset = "0x1914D40", VA = "0x181916740")]
		private void Adjust(byte[] a, int aOff, byte[] b)
		{
		}

		[Token(Token = "0x600006B")]
		[Address(RVA = "0x1916950", Offset = "0x1914F50", VA = "0x181916950")]
		private byte[] Derive(byte[] diversifier, int n)
		{
			return null;
		}

		[Token(Token = "0x600006C")]
		[Address(RVA = "0x1916870", Offset = "0x1914E70", VA = "0x181916870")]
		public byte[] DeriveKey(int size)
		{
			return null;
		}

		[Token(Token = "0x600006D")]
		[Address(RVA = "0x1916800", Offset = "0x1914E00", VA = "0x181916800")]
		public byte[] DeriveIV(int size)
		{
			return null;
		}

		[Token(Token = "0x600006E")]
		[Address(RVA = "0x19168E0", Offset = "0x1914EE0", VA = "0x1819168E0")]
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
		[Address(RVA = "0x191FEF0", Offset = "0x191E4F0", VA = "0x18191FEF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public int IterationCount
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ArrayList Keys
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x191F880", Offset = "0x191DE80", VA = "0x18191F880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public X509CertificateCollection Certificates
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x191F4A0", Offset = "0x191DAA0", VA = "0x18191F4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	internal RandomNumberGenerator RNG
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x191FEB0", Offset = "0x191E4B0", VA = "0x18191FEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public static int MaximumPasswordLength
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x191FE60", Offset = "0x191E460", VA = "0x18191FE60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x191F3A0", Offset = "0x191D9A0", VA = "0x18191F3A0")]
	public PKCS12()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x191F310", Offset = "0x191D910", VA = "0x18191F310")]
	public PKCS12(byte[] data)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x191F2C0", Offset = "0x191D8C0", VA = "0x18191F2C0")]
	public PKCS12(byte[] data, string password)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x1918FB0", Offset = "0x19175B0", VA = "0x181918FB0")]
	private void Decode(byte[] data)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x191A5F0", Offset = "0x1918BF0", VA = "0x18191A5F0", Slot = "1")]
	~PKCS12()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1918F40", Offset = "0x1917540", VA = "0x181918F40")]
	private bool Compare(byte[] expected, byte[] actual)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x191CF60", Offset = "0x191B560", VA = "0x18191CF60")]
	private SymmetricAlgorithm GetSymmetricAlgorithm(string algorithmOid, byte[] salt, int iterationCount)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x1919A90", Offset = "0x1918090", VA = "0x181919A90")]
	public byte[] Decrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x1919950", Offset = "0x1917F50", VA = "0x181919950")]
	public byte[] Decrypt(PKCS7.EncryptedData ed)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x1919BD0", Offset = "0x19181D0", VA = "0x181919BD0")]
	public byte[] Encrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x191CCA0", Offset = "0x191B2A0", VA = "0x18191CCA0")]
	private DSAParameters GetExistingParameters(out bool found)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x1918000", Offset = "0x1916600", VA = "0x181918000")]
	private void AddPrivateKey(PKCS8.PrivateKeyInfo pki)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x191E350", Offset = "0x191C950", VA = "0x18191E350")]
	private void ReadSafeBag(ASN1 safeBag)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x191D730", Offset = "0x191BD30", VA = "0x18191D730")]
	private ASN1 Pkcs8ShroudedKeyBagSafeBag(AsymmetricAlgorithm aa, IDictionary attributes)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x19182A0", Offset = "0x19168A0", VA = "0x1819182A0")]
	private ASN1 CertificateSafeBag(X509Certificate x509, IDictionary attributes)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x191D590", Offset = "0x191BB90", VA = "0x18191D590")]
	private byte[] MAC(byte[] password, byte[] salt, int iterations, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x191A680", Offset = "0x1918C80", VA = "0x18191A680")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1919D30", Offset = "0x1918330", VA = "0x181919D30")]
	private PKCS7.ContentInfo EncryptedContentInfo(ASN1 safeBags, string algorithmOid)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x19178F0", Offset = "0x1915EF0", VA = "0x1819178F0")]
	public void AddCertificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x1917900", Offset = "0x1915F00", VA = "0x181917900")]
	public void AddCertificate(X509Certificate cert, IDictionary attributes)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x191F270", Offset = "0x191D870", VA = "0x18191F270")]
	public void RemoveCertificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x191EC50", Offset = "0x191D250", VA = "0x18191EC50")]
	public void RemoveCertificate(X509Certificate cert, IDictionary attrs)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x1918E80", Offset = "0x1917480", VA = "0x181918E80")]
	private bool CompareAsymmetricAlgorithm(AsymmetricAlgorithm a1, AsymmetricAlgorithm a2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x1917C10", Offset = "0x1916210", VA = "0x181917C10")]
	public void AddPkcs8ShroudedKeyBag(AsymmetricAlgorithm aa, IDictionary attributes)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x1918D30", Offset = "0x1917330", VA = "0x181918D30", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
