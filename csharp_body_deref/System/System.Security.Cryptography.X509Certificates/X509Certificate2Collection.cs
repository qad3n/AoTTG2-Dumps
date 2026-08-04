// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49357D0", Offset = "0x49357D0", VA = "0x49357D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4935720", Offset = "0x4935720", VA = "0x4935720")]
	public X509Certificate2Collection()
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4935740", Offset = "0x4935740", VA = "0x4935740")]
	public X509Certificate2Collection(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x49358E0", Offset = "0x49358E0", VA = "0x49358E0")]
	public int Add(X509Certificate2 certificate)
	{
		return default(int);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4935760", Offset = "0x4935760", VA = "0x4935760")]
	[System.MonoTODO("Method isn't transactional (like documented)")]
	public void AddRange(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4935950", Offset = "0x4935950", VA = "0x4935950")]
	public bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4935D50", Offset = "0x4935D50", VA = "0x4935D50")]
	private string GetKeyIdentifier(X509Certificate2 x)
	{
		return null;
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4935E10", Offset = "0x4935E10", VA = "0x4935E10")]
	[System.MonoTODO("Does not support X509FindType.FindByTemplateName, FindByApplicationPolicy and FindByCertificatePolicy")]
	public X509Certificate2Collection Find(X509FindType findType, object findValue, bool validOnly)
	{
		return null;
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4937250", Offset = "0x4937250", VA = "0x4937250")]
	public new X509Certificate2Enumerator GetEnumerator()
	{
		return null;
	}
}
