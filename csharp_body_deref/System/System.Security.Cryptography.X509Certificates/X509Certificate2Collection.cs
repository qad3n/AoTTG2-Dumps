// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000139")]
public class X509Certificate2Collection : X509CertificateCollection
{
	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x0")]
	private static string[] newline_split;

	[Token(Token = "0x1700014B")]
	public new X509Certificate2 this[int index]
	{
		[Token(Token = "0x600076F")]
		[Address(RVA = "0x2882F10", Offset = "0x2881510", VA = "0x182882F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x1924500", Offset = "0x1922B00", VA = "0x181924500")]
	public X509Certificate2Collection()
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x2882E70", Offset = "0x2881470", VA = "0x182882E70")]
	public X509Certificate2Collection(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x28819F0", Offset = "0x287FFF0", VA = "0x1828819F0")]
	public int Add(X509Certificate2 certificate)
	{
		return default(int);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x2881970", Offset = "0x287FF70", VA = "0x182881970")]
	[System.MonoTODO("Method isn't transactional (like documented)")]
	public void AddRange(X509Certificate2Collection certificates)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x2881A70", Offset = "0x2880070", VA = "0x182881A70")]
	public bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x2882CF0", Offset = "0x28812F0", VA = "0x182882CF0")]
	private string GetKeyIdentifier(X509Certificate2 x)
	{
		return null;
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x2881C90", Offset = "0x2880290", VA = "0x182881C90")]
	[System.MonoTODO("Does not support X509FindType.FindByTemplateName, FindByApplicationPolicy and FindByCertificatePolicy")]
	public X509Certificate2Collection Find(X509FindType findType, object findValue, bool validOnly)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x2882C50", Offset = "0x2881250", VA = "0x182882C50")]
	public new X509Certificate2Enumerator GetEnumerator()
	{
		return null;
	}
}
