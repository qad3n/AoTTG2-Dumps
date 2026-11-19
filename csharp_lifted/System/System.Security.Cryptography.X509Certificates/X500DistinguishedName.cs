// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F7")]
[System.MonoTODO("Some X500DistinguishedNameFlags options aren't supported, like DoNotUsePlusSign, DoNotUseQuotes and ForceUTF8Encoding")]
public sealed class X500DistinguishedName : AsnEncodedData
{
	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x28")]
	private byte[] canonEncoding;

	[Token(Token = "0x1700010A")]
	public string Name
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x620D0A0", Offset = "0x620C0A0", VA = "0x620D0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x620CE30", Offset = "0x620BE30", VA = "0x620CE30")]
	public X500DistinguishedName(byte[] encodedDistinguishedName)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x620D0B0", Offset = "0x620C0B0", VA = "0x620D0B0")]
	public string Decode(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x620D2A0", Offset = "0x620C2A0", VA = "0x620D2A0", Slot = "5")]
	public override string Format(bool multiLine)
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x620D240", Offset = "0x620C240", VA = "0x620D240")]
	private static string GetSeparator(X500DistinguishedNameFlags flag)
	{
		return null;
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x620CFB0", Offset = "0x620BFB0", VA = "0x620CFB0")]
	private void DecodeRawData()
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x620D2F0", Offset = "0x620C2F0", VA = "0x620D2F0")]
	private static string Canonize(string s)
	{
		return null;
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x620D530", Offset = "0x620C530", VA = "0x620D530")]
	internal static bool AreEqual(X500DistinguishedName name1, X500DistinguishedName name2)
	{
		return default(bool);
	}
}
