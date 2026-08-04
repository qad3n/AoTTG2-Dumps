// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F6")]
[System.MonoTODO("Some X500DistinguishedNameFlags options aren't supported, like DoNotUsePlusSign, DoNotUseQuotes and ForceUTF8Encoding")]
public sealed class X500DistinguishedName : AsnEncodedData
{
	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x28")]
	private byte[] canonEncoding;

	[Token(Token = "0x17000100")]
	public string Name
	{
		[Token(Token = "0x600055E")]
		[Address(RVA = "0x4931C40", Offset = "0x4931C40", VA = "0x4931C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x49319E0", Offset = "0x49319E0", VA = "0x49319E0")]
	public X500DistinguishedName(byte[] encodedDistinguishedName)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x4931C50", Offset = "0x4931C50", VA = "0x4931C50")]
	public string Decode(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x4931E40", Offset = "0x4931E40", VA = "0x4931E40", Slot = "5")]
	public override string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x4931DE0", Offset = "0x4931DE0", VA = "0x4931DE0")]
	private static string GetSeparator(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x4931B60", Offset = "0x4931B60", VA = "0x4931B60")]
	private void DecodeRawData()
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x4931E90", Offset = "0x4931E90", VA = "0x4931E90")]
	private static string Canonize(string s)
	{
		return null;
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x49320D0", Offset = "0x49320D0", VA = "0x49320D0")]
	internal static bool AreEqual(X500DistinguishedName name1, X500DistinguishedName name2)
	{
		return default(bool);
	}
}
