// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.PKCS7
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;
using Mono.Security.X509;

namespace Mono.Security;

[Token(Token = "0x2000006")]
public sealed class PKCS7
{
	[Token(Token = "0x2000007")]
	public class ContentInfo
	{
		[Token(Token = "0x4000004")]
		[FieldOffset(Offset = "0x10")]
		private string contentType;

		[Token(Token = "0x4000005")]
		[FieldOffset(Offset = "0x18")]
		private ASN1 content;

		[Token(Token = "0x17000006")]
		public ASN1 ASN1
		{
			[Token(Token = "0x6000027")]
			[Address(RVA = "0x52ADEE0", Offset = "0x52ACEE0", VA = "0x52ADEE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000007")]
		public ASN1 Content
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x52AE090", Offset = "0x52AD090", VA = "0x52AE090")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x52AE0A0", Offset = "0x52AD0A0", VA = "0x52AE0A0")]
			set
			{
			}
		}

		[Token(Token = "0x17000008")]
		public string ContentType
		{
			[Token(Token = "0x600002A")]
			[Address(RVA = "0x52AE0B0", Offset = "0x52AD0B0", VA = "0x52AE0B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600002B")]
			[Address(RVA = "0x52AE0C0", Offset = "0x52AD0C0", VA = "0x52AE0C0")]
			set
			{
			}
		}

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x52ADBD0", Offset = "0x52ACBD0", VA = "0x52ADBD0")]
		public ContentInfo()
		{
		}

		[Token(Token = "0x6000024")]
		[Address(RVA = "0x52ADC50", Offset = "0x52ACC50", VA = "0x52ADC50")]
		public ContentInfo(string oid)
		{
		}

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x52ADCE0", Offset = "0x52ACCE0", VA = "0x52ADCE0")]
		public ContentInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000026")]
		[Address(RVA = "0x52ADD40", Offset = "0x52ACD40", VA = "0x52ADD40")]
		public ContentInfo(ASN1 asn1)
		{
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x52ADEF0", Offset = "0x52ACEF0", VA = "0x52ADEF0")]
		internal ASN1 GetASN1()
		{
			return null;
		}
	}

	[Token(Token = "0x2000008")]
	public class EncryptedData
	{
		[Token(Token = "0x4000006")]
		[FieldOffset(Offset = "0x10")]
		private byte _version;

		[Token(Token = "0x4000007")]
		[FieldOffset(Offset = "0x18")]
		private ContentInfo _content;

		[Token(Token = "0x4000008")]
		[FieldOffset(Offset = "0x20")]
		private ContentInfo _encryptionAlgorithm;

		[Token(Token = "0x4000009")]
		[FieldOffset(Offset = "0x28")]
		private byte[] _encrypted;

		[Token(Token = "0x17000009")]
		public ContentInfo EncryptionAlgorithm
		{
			[Token(Token = "0x600002F")]
			[Address(RVA = "0x52AE520", Offset = "0x52AD520", VA = "0x52AE520")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		public byte[] EncryptedContent
		{
			[Token(Token = "0x6000030")]
			[Address(RVA = "0x52AE530", Offset = "0x52AD530", VA = "0x52AE530")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x52AE0D0", Offset = "0x52AD0D0", VA = "0x52AE0D0")]
		public EncryptedData()
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x52AE0F0", Offset = "0x52AD0F0", VA = "0x52AE0F0")]
		public EncryptedData(ASN1 asn1)
		{
		}
	}

	[Token(Token = "0x2000009")]
	public class SignedData
	{
		[Token(Token = "0x400000A")]
		[FieldOffset(Offset = "0x10")]
		private byte version;

		[Token(Token = "0x400000B")]
		[FieldOffset(Offset = "0x18")]
		private string hashAlgorithm;

		[Token(Token = "0x400000C")]
		[FieldOffset(Offset = "0x20")]
		private ContentInfo contentInfo;

		[Token(Token = "0x400000D")]
		[FieldOffset(Offset = "0x28")]
		private X509CertificateCollection certs;

		[Token(Token = "0x400000E")]
		[FieldOffset(Offset = "0x30")]
		private ArrayList crls;

		[Token(Token = "0x400000F")]
		[FieldOffset(Offset = "0x38")]
		private SignerInfo signerInfo;

		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x40")]
		private bool mda;

		[Token(Token = "0x1700000B")]
		public X509CertificateCollection Certificates
		{
			[Token(Token = "0x6000032")]
			[Address(RVA = "0x52AF660", Offset = "0x52AE660", VA = "0x52AF660")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		public ContentInfo ContentInfo
		{
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x52AF670", Offset = "0x52AE670", VA = "0x52AF670")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000D")]
		public string HashName
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x52AF620", Offset = "0x52AE620", VA = "0x52AF620")]
			set
			{
			}
		}

		[Token(Token = "0x1700000E")]
		public SignerInfo SignerInfo
		{
			[Token(Token = "0x6000035")]
			[Address(RVA = "0x52AF680", Offset = "0x52AE680", VA = "0x52AF680")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x52AE5A0", Offset = "0x52AD5A0", VA = "0x52AE5A0")]
		public SignedData(ASN1 asn1)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x52AF4A0", Offset = "0x52AE4A0", VA = "0x52AF4A0")]
		internal string OidToName(string oid)
		{
			return null;
		}
	}

	[Token(Token = "0x200000A")]
	public class SignerInfo
	{
		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x10")]
		private byte version;

		[Token(Token = "0x4000012")]
		[FieldOffset(Offset = "0x18")]
		private string hashAlgorithm;

		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x20")]
		private ArrayList authenticatedAttributes;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList unauthenticatedAttributes;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x30")]
		private byte[] signature;

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x38")]
		private string issuer;

		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x40")]
		private byte[] serial;

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x48")]
		private byte[] ski;

		[Token(Token = "0x1700000F")]
		public string IssuerName
		{
			[Token(Token = "0x6000039")]
			[Address(RVA = "0x52AF890", Offset = "0x52AE890", VA = "0x52AF890")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000010")]
		public byte[] SerialNumber
		{
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x52AF8A0", Offset = "0x52AE8A0", VA = "0x52AF8A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000011")]
		public ArrayList AuthenticatedAttributes
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x52AF910", Offset = "0x52AE910", VA = "0x52AF910")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000012")]
		public string HashName
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x52AF920", Offset = "0x52AE920", VA = "0x52AF920")]
			get
			{
				return null;
			}
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x52AF930", Offset = "0x52AE930", VA = "0x52AF930")]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		public byte[] Signature
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x52AF940", Offset = "0x52AE940", VA = "0x52AF940")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000014")]
		public ArrayList UnauthenticatedAttributes
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x52AF9B0", Offset = "0x52AE9B0", VA = "0x52AF9B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public byte Version
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x52AF9C0", Offset = "0x52AE9C0", VA = "0x52AF9C0")]
			get
			{
				return default(byte);
			}
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x52AF410", Offset = "0x52AE410", VA = "0x52AF410")]
		public SignerInfo()
		{
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x52AEDF0", Offset = "0x52ADDF0", VA = "0x52AEDF0")]
		public SignerInfo(ASN1 asn1)
		{
		}
	}
}
