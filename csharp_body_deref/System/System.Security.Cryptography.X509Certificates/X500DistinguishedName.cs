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
		[Address(RVA = "0x460CB40", Offset = "0x460CB40", VA = "0x460CB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x460C8E0", Offset = "0x460C8E0", VA = "0x460C8E0")]
	public X500DistinguishedName(byte[] encodedDistinguishedName)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x460CB50", Offset = "0x460CB50", VA = "0x460CB50")]
	public string Decode(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x460CD40", Offset = "0x460CD40", VA = "0x460CD40", Slot = "5")]
	public override string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x460CCE0", Offset = "0x460CCE0", VA = "0x460CCE0")]
	private static string GetSeparator(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x460CA60", Offset = "0x460CA60", VA = "0x460CA60")]
	private void DecodeRawData()
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x460CD90", Offset = "0x460CD90", VA = "0x460CD90")]
	private static string Canonize(string s)
	{
		return null;
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x460CFD0", Offset = "0x460CFD0", VA = "0x460CFD0")]
	internal static bool AreEqual(X500DistinguishedName name1, X500DistinguishedName name2)
	{
		return default(bool);
	}
}
