// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FA")]
public class X509Certificate2Collection : X509CertificateCollection
{
	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x0")]
	private static string[] newline_split;

	[Token(Token = "0x1700011C")]
	public new X509Certificate2 this[int index]
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x6210CA0", Offset = "0x620FCA0", VA = "0x6210CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x6210BE0", Offset = "0x620FBE0", VA = "0x6210BE0")]
	public X509Certificate2Collection()
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x6210C00", Offset = "0x620FC00", VA = "0x6210C00")]
	public X509Certificate2Collection(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x6210DB0", Offset = "0x620FDB0", VA = "0x6210DB0")]
	public int Add(X509Certificate2 certificate)
	{
		return default(int);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x6210C30", Offset = "0x620FC30", VA = "0x6210C30")]
	[System.MonoTODO("Method isn't transactional (like documented)")]
	public void AddRange(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x6210E20", Offset = "0x620FE20", VA = "0x6210E20")]
	public bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x6211180", Offset = "0x6210180", VA = "0x6211180")]
	private string GetKeyIdentifier(X509Certificate2 x)
	{
		return null;
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x6211240", Offset = "0x6210240", VA = "0x6211240")]
	[System.MonoTODO("Does not support X509FindType.FindByTemplateName, FindByApplicationPolicy and FindByCertificatePolicy")]
	public X509Certificate2Collection Find(X509FindType findType, object findValue, bool validOnly)
	{
		return null;
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x6212420", Offset = "0x6211420", VA = "0x6212420")]
	public new X509Certificate2Enumerator GetEnumerator()
	{
		return null;
	}
}
