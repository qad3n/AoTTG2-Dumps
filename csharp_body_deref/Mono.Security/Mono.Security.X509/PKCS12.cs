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
			[Address(RVA = "0x3A401C0", Offset = "0x3A401C0", VA = "0x3A401C0")]
			set
			{
			}
		}

		[Token(Token = "0x1700001F")]
		public int IterationCount
		{
			[Token(Token = "0x6000064")]
			[Address(RVA = "0x3A401D0", Offset = "0x3A401D0", VA = "0x3A401D0")]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public byte[] Password
		{
			[Token(Token = "0x6000065")]
			[Address(RVA = "0x3A38750", Offset = "0x3A38750", VA = "0x3A38750")]
			set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public byte[] Salt
		{
			[Token(Token = "0x6000066")]
			[Address(RVA = "0x3A38820", Offset = "0x3A38820", VA = "0x3A38820")]
			set
			{
			}
		}

		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3A38740", Offset = "0x3A38740", VA = "0x3A38740")]
		public DeriveBytes()
		{
		}

		[Token(Token = "0x6000067")]
		[Address(RVA = "0x3A401E0", Offset = "0x3A401E0", VA = "0x3A401E0")]
		private void Adjust(byte[] a, int aOff, byte[] b)
		{
		}

		[Token(Token = "0x6000068")]
		[Address(RVA = "0x3A402E0", Offset = "0x3A402E0", VA = "0x3A402E0")]
		private byte[] Derive(byte[] diversifier, int n)
		{
			return null;
		}

		[Token(Token = "0x6000069")]
		[Address(RVA = "0x3A388E0", Offset = "0x3A388E0", VA = "0x3A388E0")]
		public byte[] DeriveKey(int size)
		{
			return null;
		}

		[Token(Token = "0x600006A")]
		[Address(RVA = "0x3A38940", Offset = "0x3A38940", VA = "0x3A38940")]
		public byte[] DeriveIV(int size)
		{
			return null;
		}

		[Token(Token = "0x600006B")]
		[Address(RVA = "0x3A3B170", Offset = "0x3A3B170", VA = "0x3A3B170")]
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
		[Address(RVA = "0x3A34F90", Offset = "0x3A34F90", VA = "0x3A34F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public int IterationCount
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3A36BC0", Offset = "0x3A36BC0", VA = "0x3A36BC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3A36BD0", Offset = "0x3A36BD0", VA = "0x3A36BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ArrayList Keys
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3A36BE0", Offset = "0x3A36BE0", VA = "0x3A36BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public X509CertificateCollection Certificates
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x3A379F0", Offset = "0x3A379F0", VA = "0x3A379F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	internal RandomNumberGenerator RNG
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x3A38130", Offset = "0x3A38130", VA = "0x3A38130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public static int MaximumPasswordLength
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x3A40110", Offset = "0x3A40110", VA = "0x3A40110")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3A34E10", Offset = "0x3A34E10", VA = "0x3A34E10")]
	public PKCS12()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3A34F10", Offset = "0x3A34F10", VA = "0x3A34F10")]
	public PKCS12(byte[] data)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3A35CD0", Offset = "0x3A35CD0", VA = "0x3A35CD0")]
	public PKCS12(byte[] data, string password)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3A351C0", Offset = "0x3A351C0", VA = "0x3A351C0")]
	private void Decode(byte[] data)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3A36B10", Offset = "0x3A36B10", VA = "0x3A36B10", Slot = "1")]
	~PKCS12()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3A35E80", Offset = "0x3A35E80", VA = "0x3A35E80")]
	private bool Compare(byte[] expected, byte[] actual)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3A38160", Offset = "0x3A38160", VA = "0x3A38160")]
	private SymmetricAlgorithm GetSymmetricAlgorithm(string algorithmOid, byte[] salt, int iterationCount)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3A37830", Offset = "0x3A37830", VA = "0x3A37830")]
	public byte[] Decrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3A36970", Offset = "0x3A36970", VA = "0x3A36970")]
	public byte[] Decrypt(PKCS7.EncryptedData ed)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3A389A0", Offset = "0x3A389A0", VA = "0x3A389A0")]
	public byte[] Encrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3A38C30", Offset = "0x3A38C30", VA = "0x3A38C30")]
	private DSAParameters GetExistingParameters(out bool found)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3A39930", Offset = "0x3A39930", VA = "0x3A39930")]
	private void AddPrivateKey(PKCS8.PrivateKeyInfo pki)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3A35ED0", Offset = "0x3A35ED0", VA = "0x3A35ED0")]
	private void ReadSafeBag(ASN1 safeBag)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3A39C10", Offset = "0x3A39C10", VA = "0x3A39C10")]
	private ASN1 CertificateSafeBag(X509Certificate x509, IDictionary attributes)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3A35D00", Offset = "0x3A35D00", VA = "0x3A35D00")]
	private byte[] MAC(byte[] password, byte[] salt, int iterations, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3A3B1D0", Offset = "0x3A3B1D0", VA = "0x3A3B1D0")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3A3EAF0", Offset = "0x3A3EAF0", VA = "0x3A3EAF0")]
	private PKCS7.ContentInfo EncryptedContentInfo(ASN1 safeBags, string algorithmOid)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3A3EAE0", Offset = "0x3A3EAE0", VA = "0x3A3EAE0")]
	public void AddCertificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3A3F330", Offset = "0x3A3F330", VA = "0x3A3F330")]
	public void AddCertificate(X509Certificate cert, IDictionary attributes)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3A3EAD0", Offset = "0x3A3EAD0", VA = "0x3A3EAD0")]
	public void RemoveCertificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3A3F770", Offset = "0x3A3F770", VA = "0x3A3F770")]
	public void RemoveCertificate(X509Certificate cert, IDictionary attrs)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3A3FFE0", Offset = "0x3A3FFE0", VA = "0x3A3FFE0", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
