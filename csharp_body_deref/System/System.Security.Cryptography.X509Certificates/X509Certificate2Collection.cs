using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F9")]
public class X509Certificate2Collection : X509CertificateCollection
{
	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x0")]
	private static string[] newline_split;

	[Token(Token = "0x17000112")]
	public new X509Certificate2 this[int index]
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x46106D0", Offset = "0x46106D0", VA = "0x46106D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4610620", Offset = "0x4610620", VA = "0x4610620")]
	public X509Certificate2Collection()
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4610640", Offset = "0x4610640", VA = "0x4610640")]
	public X509Certificate2Collection(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x46107E0", Offset = "0x46107E0", VA = "0x46107E0")]
	public int Add(X509Certificate2 certificate)
	{
		return default(int);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4610660", Offset = "0x4610660", VA = "0x4610660")]
	[System.MonoTODO("Method isn't transactional (like documented)")]
	public void AddRange(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4610850", Offset = "0x4610850", VA = "0x4610850")]
	public bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4610C50", Offset = "0x4610C50", VA = "0x4610C50")]
	private string GetKeyIdentifier(X509Certificate2 x)
	{
		return null;
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4610D10", Offset = "0x4610D10", VA = "0x4610D10")]
	[System.MonoTODO("Does not support X509FindType.FindByTemplateName, FindByApplicationPolicy and FindByCertificatePolicy")]
	public X509Certificate2Collection Find(X509FindType findType, object findValue, bool validOnly)
	{
		return null;
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4612150", Offset = "0x4612150", VA = "0x4612150")]
	public new X509Certificate2Enumerator GetEnumerator()
	{
		return null;
	}
}
