// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000136")]
[System.MonoTODO("Some X500DistinguishedNameFlags options aren't supported, like DoNotUsePlusSign, DoNotUseQuotes and ForceUTF8Encoding")]
public sealed class X500DistinguishedName : AsnEncodedData
{
	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x28")]
	private byte[] canonEncoding;

	[Token(Token = "0x17000139")]
	public string Name
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x2880B10", Offset = "0x287F110", VA = "0x182880B10")]
	public X500DistinguishedName(byte[] encodedDistinguishedName)
	{
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x2880780", Offset = "0x287ED80", VA = "0x182880780")]
	public X500DistinguishedName(string distinguishedName)
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x2880790", Offset = "0x287ED90", VA = "0x182880790")]
	public X500DistinguishedName(string distinguishedName, X500DistinguishedNameFlags flag)
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x28804F0", Offset = "0x287EAF0", VA = "0x1828804F0")]
	public string Decode(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x28806A0", Offset = "0x287ECA0", VA = "0x1828806A0", Slot = "5")]
	public override string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x2880710", Offset = "0x287ED10", VA = "0x182880710")]
	private static string GetSeparator(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x2880410", Offset = "0x287EA10", VA = "0x182880410")]
	private void DecodeRawData()
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x2880240", Offset = "0x287E840", VA = "0x182880240")]
	private static string Canonize(string s)
	{
		return null;
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x2880040", Offset = "0x287E640", VA = "0x182880040")]
	internal static bool AreEqual(X500DistinguishedName name1, X500DistinguishedName name2)
	{
		return default(bool);
	}
}
