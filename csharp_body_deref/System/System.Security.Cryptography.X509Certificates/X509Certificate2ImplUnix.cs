// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using Internal.Cryptography.Pal;
using Microsoft.Win32.SafeHandles;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200013D")]
internal abstract class X509Certificate2ImplUnix : X509Certificate2Impl
{
	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x10")]
	private bool readCertData;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x18")]
	private CertificateData certData;

	[Token(Token = "0x1700015B")]
	public sealed override string KeyAlgorithm
	{
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x2885110", Offset = "0x2883710", VA = "0x182885110", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	public sealed override byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x28850F0", Offset = "0x28836F0", VA = "0x1828850F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	public sealed override byte[] PublicKeyValue
	{
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x28851F0", Offset = "0x28837F0", VA = "0x1828851F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	public sealed override byte[] SerialNumber
	{
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x2885230", Offset = "0x2883830", VA = "0x182885230", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public sealed override string SignatureAlgorithm
	{
		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x2885250", Offset = "0x2883850", VA = "0x182885250", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	public sealed override int Version
	{
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x28853A0", Offset = "0x28839A0", VA = "0x1828853A0", Slot = "28")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000161")]
	public sealed override X500DistinguishedName SubjectName
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x2885270", Offset = "0x2883870", VA = "0x182885270", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public sealed override X500DistinguishedName IssuerName
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x28850A0", Offset = "0x28836A0", VA = "0x1828850A0", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000163")]
	public sealed override string Subject
	{
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x2885290", Offset = "0x2883890", VA = "0x182885290", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public sealed override string Issuer
	{
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x28850C0", Offset = "0x28836C0", VA = "0x1828850C0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public sealed override byte[] RawData
	{
		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x2885210", Offset = "0x2883810", VA = "0x182885210", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public sealed override byte[] Thumbprint
	{
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x28852C0", Offset = "0x28838C0", VA = "0x1828852C0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000167")]
	public sealed override IEnumerable<X509Extension> Extensions
	{
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x2885080", Offset = "0x2883680", VA = "0x182885080", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000168")]
	public sealed override DateTime NotAfter
	{
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x2885130", Offset = "0x2883730", VA = "0x182885130", Slot = "10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000169")]
	public sealed override DateTime NotBefore
	{
		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x2885190", Offset = "0x2883790", VA = "0x182885190", Slot = "11")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x2884940", Offset = "0x2882F40", VA = "0x182884940")]
	private void EnsureCertData()
	{
	}

	[Token(Token = "0x600079C")]
	protected abstract byte[] GetRawCertData();

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x2885040", Offset = "0x2883640", VA = "0x182885040", Slot = "30")]
	public sealed override string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x28848C0", Offset = "0x2882EC0", VA = "0x1828848C0", Slot = "32")]
	public sealed override void AppendPrivateKeyInfo(StringBuilder sb)
	{
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x2884EC0", Offset = "0x28834C0", VA = "0x182884EC0", Slot = "20")]
	public sealed override byte[] Export(X509ContentType contentType, Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x2884A50", Offset = "0x2883050", VA = "0x182884A50")]
	private byte[] ExportPkcs12(Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x2884AB0", Offset = "0x28830B0", VA = "0x182884AB0")]
	private byte[] ExportPkcs12(string password)
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected X509Certificate2ImplUnix()
	{
	}
}
