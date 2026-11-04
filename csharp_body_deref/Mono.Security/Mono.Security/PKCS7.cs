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
			[Address(RVA = "0x19166D0", Offset = "0x1914CD0", VA = "0x1819166D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000007")]
		public ASN1 Content
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			set
			{
			}
		}

		[Token(Token = "0x17000008")]
		public string ContentType
		{
			[Token(Token = "0x600002A")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600002B")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x19163A0", Offset = "0x19149A0", VA = "0x1819163A0")]
		public ContentInfo()
		{
		}

		[Token(Token = "0x6000024")]
		[Address(RVA = "0x1916490", Offset = "0x1914A90", VA = "0x181916490")]
		public ContentInfo(string oid)
		{
		}

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x1916420", Offset = "0x1914A20", VA = "0x181916420")]
		public ContentInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000026")]
		[Address(RVA = "0x19164D0", Offset = "0x1914AD0", VA = "0x1819164D0")]
		public ContentInfo(ASN1 asn1)
		{
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x19161B0", Offset = "0x19147B0", VA = "0x1819161B0")]
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
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		public byte[] EncryptedContent
		{
			[Token(Token = "0x6000030")]
			[Address(RVA = "0x1917640", Offset = "0x1915C40", VA = "0x181917640")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x1917200", Offset = "0x1915800", VA = "0x181917200")]
		public EncryptedData()
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x1917220", Offset = "0x1915820", VA = "0x181917220")]
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
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		public ContentInfo ContentInfo
		{
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000D")]
		public string HashName
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x1920B30", Offset = "0x191F130", VA = "0x181920B30")]
			set
			{
			}
		}

		[Token(Token = "0x1700000E")]
		public SignerInfo SignerInfo
		{
			[Token(Token = "0x6000035")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x19202A0", Offset = "0x191E8A0", VA = "0x1819202A0")]
		public SignedData(ASN1 asn1)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1920110", Offset = "0x191E710", VA = "0x181920110")]
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
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000010")]
		public byte[] SerialNumber
		{
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x19210C0", Offset = "0x191F6C0", VA = "0x1819210C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000011")]
		public ArrayList AuthenticatedAttributes
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000012")]
		public string HashName
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x600003D")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		public byte[] Signature
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x1921140", Offset = "0x191F740", VA = "0x181921140")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000014")]
		public ArrayList UnauthenticatedAttributes
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public byte Version
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
			get
			{
				return default(byte);
			}
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x1920B80", Offset = "0x191F180", VA = "0x181920B80")]
		public SignerInfo()
		{
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x1920C20", Offset = "0x191F220", VA = "0x181920C20")]
		public SignerInfo(ASN1 asn1)
		{
		}
	}
}
