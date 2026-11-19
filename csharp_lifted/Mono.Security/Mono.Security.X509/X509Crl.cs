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
			[Token(Token = "0x600007E")]
			[Address(RVA = "0x52BC6D0", Offset = "0x52BB6D0", VA = "0x52BC6D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000027")]
		public DateTime RevocationDate
		{
			[Token(Token = "0x600007F")]
			[Address(RVA = "0x52BCD40", Offset = "0x52BBD40", VA = "0x52BCD40")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000028")]
		public X509ExtensionCollection Extensions
		{
			[Token(Token = "0x6000080")]
			[Address(RVA = "0x52BCD50", Offset = "0x52BBD50", VA = "0x52BCD50")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x52BBF50", Offset = "0x52BAF50", VA = "0x52BBF50")]
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
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x52BC200", Offset = "0x52BB200", VA = "0x52BC200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public byte[] Hash
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x52BC210", Offset = "0x52BB210", VA = "0x52BC210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public string IssuerName
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x52BC3F0", Offset = "0x52BB3F0", VA = "0x52BC3F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public DateTime NextUpdate
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x52BC400", Offset = "0x52BB400", VA = "0x52BC400")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x52BB640", Offset = "0x52BA640", VA = "0x52BB640")]
	public X509Crl(byte[] crl)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x52BB740", Offset = "0x52BA740", VA = "0x52BB740")]
	private void Parse(byte[] crl)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x52BC410", Offset = "0x52BB410", VA = "0x52BC410")]
	private bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x52BC470", Offset = "0x52BB470", VA = "0x52BC470")]
	public X509CrlEntry GetCrlEntry(X509Certificate x509)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x52BC4F0", Offset = "0x52BB4F0", VA = "0x52BC4F0")]
	public X509CrlEntry GetCrlEntry(byte[] serialNumber)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x52BC750", Offset = "0x52BB750", VA = "0x52BC750")]
	internal bool VerifySignature(DSA dsa)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x52BCB10", Offset = "0x52BBB10", VA = "0x52BCB10")]
	internal bool VerifySignature(RSA rsa)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x52BCBE0", Offset = "0x52BBBE0", VA = "0x52BCBE0")]
	public bool VerifySignature(AsymmetricAlgorithm aa)
	{
		return default(bool);
	}
}
