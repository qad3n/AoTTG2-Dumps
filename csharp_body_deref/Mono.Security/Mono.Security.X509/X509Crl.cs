// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509Crl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Reflection;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x200000F")]
[DefaultMember("Item")]
public class X509Crl
{
	[Token(Token = "0x2000010")]
	public class X509CrlEntry
	{
		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x10")]
		private byte[] sn;

		[Token(Token = "0x4000048")]
		[FieldOffset(Offset = "0x18")]
		private DateTime revocationDate;

		[Token(Token = "0x4000049")]
		[FieldOffset(Offset = "0x20")]
		private X509ExtensionCollection extensions;

		[Token(Token = "0x17000026")]
		public byte[] SerialNumber
		{
			[Token(Token = "0x600008A")]
			[Address(RVA = "0x1927900", Offset = "0x1925F00", VA = "0x181927900")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000027")]
		public DateTime RevocationDate
		{
			[Token(Token = "0x600008B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000028")]
		public X509ExtensionCollection Extensions
		{
			[Token(Token = "0x600008C")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000089")]
		[Address(RVA = "0x19277F0", Offset = "0x1925DF0", VA = "0x1819277F0")]
		internal X509CrlEntry(ASN1 entry)
		{
		}
	}

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x10")]
	private string issuer;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x18")]
	private byte version;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x20")]
	private DateTime thisUpdate;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x28")]
	private DateTime nextUpdate;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList entries;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x38")]
	private string signatureOID;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x40")]
	private byte[] signature;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x48")]
	private X509ExtensionCollection extensions;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x50")]
	private byte[] encoded;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x58")]
	private byte[] hash_value;

	[Token(Token = "0x17000022")]
	public X509ExtensionCollection Extensions
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public byte[] Hash
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x1928B40", Offset = "0x1927140", VA = "0x181928B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public string IssuerName
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public DateTime NextUpdate
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x1928A20", Offset = "0x1927020", VA = "0x181928A20")]
	public X509Crl(byte[] crl)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x1927C10", Offset = "0x1926210", VA = "0x181927C10")]
	private void Parse(byte[] crl)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x19241E0", Offset = "0x19227E0", VA = "0x1819241E0")]
	private bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1927980", Offset = "0x1925F80", VA = "0x181927980")]
	public X509CrlEntry GetCrlEntry(X509Certificate x509)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1927A00", Offset = "0x1926000", VA = "0x181927A00")]
	public X509CrlEntry GetCrlEntry(byte[] serialNumber)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x1928730", Offset = "0x1926D30", VA = "0x181928730")]
	internal bool VerifySignature(DSA dsa)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x1928650", Offset = "0x1926C50", VA = "0x181928650")]
	internal bool VerifySignature(RSA rsa)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x19283A0", Offset = "0x19269A0", VA = "0x1819283A0")]
	public bool VerifySignature(AsymmetricAlgorithm aa)
	{
		return default(bool);
	}
}
