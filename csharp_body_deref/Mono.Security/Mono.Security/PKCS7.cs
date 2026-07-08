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
			[Address(RVA = "0x3A331E0", Offset = "0x3A331E0", VA = "0x3A331E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000007")]
		public ASN1 Content
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x3A333A0", Offset = "0x3A333A0", VA = "0x3A333A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x3A333B0", Offset = "0x3A333B0", VA = "0x3A333B0")]
			set
			{
			}
		}

		[Token(Token = "0x17000008")]
		public string ContentType
		{
			[Token(Token = "0x600002A")]
			[Address(RVA = "0x3A333C0", Offset = "0x3A333C0", VA = "0x3A333C0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600002B")]
			[Address(RVA = "0x3A333D0", Offset = "0x3A333D0", VA = "0x3A333D0")]
			set
			{
			}
		}

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3A32ED0", Offset = "0x3A32ED0", VA = "0x3A32ED0")]
		public ContentInfo()
		{
		}

		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3A32F50", Offset = "0x3A32F50", VA = "0x3A32F50")]
		public ContentInfo(string oid)
		{
		}

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3A32FE0", Offset = "0x3A32FE0", VA = "0x3A32FE0")]
		public ContentInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3A33040", Offset = "0x3A33040", VA = "0x3A33040")]
		public ContentInfo(ASN1 asn1)
		{
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x3A331F0", Offset = "0x3A331F0", VA = "0x3A331F0")]
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
			[Address(RVA = "0x3A33860", Offset = "0x3A33860", VA = "0x3A33860")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		public byte[] EncryptedContent
		{
			[Token(Token = "0x6000030")]
			[Address(RVA = "0x3A33870", Offset = "0x3A33870", VA = "0x3A33870")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3A333E0", Offset = "0x3A333E0", VA = "0x3A333E0")]
		public EncryptedData()
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3A33400", Offset = "0x3A33400", VA = "0x3A33400")]
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
			[Address(RVA = "0x3A34A30", Offset = "0x3A34A30", VA = "0x3A34A30")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		public ContentInfo ContentInfo
		{
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x3A34A40", Offset = "0x3A34A40", VA = "0x3A34A40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000D")]
		public string HashName
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x3A349F0", Offset = "0x3A349F0", VA = "0x3A349F0")]
			set
			{
			}
		}

		[Token(Token = "0x1700000E")]
		public SignerInfo SignerInfo
		{
			[Token(Token = "0x6000035")]
			[Address(RVA = "0x3A34A50", Offset = "0x3A34A50", VA = "0x3A34A50")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3A338E0", Offset = "0x3A338E0", VA = "0x3A338E0")]
		public SignedData(ASN1 asn1)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3A34860", Offset = "0x3A34860", VA = "0x3A34860")]
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
			[Address(RVA = "0x3A34C70", Offset = "0x3A34C70", VA = "0x3A34C70")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000010")]
		public byte[] SerialNumber
		{
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x3A34C80", Offset = "0x3A34C80", VA = "0x3A34C80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000011")]
		public ArrayList AuthenticatedAttributes
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x3A34CF0", Offset = "0x3A34CF0", VA = "0x3A34CF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000012")]
		public string HashName
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x3A34D00", Offset = "0x3A34D00", VA = "0x3A34D00")]
			get
			{
				return null;
			}
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x3A34D10", Offset = "0x3A34D10", VA = "0x3A34D10")]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		public byte[] Signature
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x3A34D20", Offset = "0x3A34D20", VA = "0x3A34D20")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000014")]
		public ArrayList UnauthenticatedAttributes
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x3A34D90", Offset = "0x3A34D90", VA = "0x3A34D90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public byte Version
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x3A34DA0", Offset = "0x3A34DA0", VA = "0x3A34DA0")]
			get
			{
				return default(byte);
			}
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3A347D0", Offset = "0x3A347D0", VA = "0x3A347D0")]
		public SignerInfo()
		{
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3A34160", Offset = "0x3A34160", VA = "0x3A34160")]
		public SignerInfo(ASN1 asn1)
		{
		}
	}
}
