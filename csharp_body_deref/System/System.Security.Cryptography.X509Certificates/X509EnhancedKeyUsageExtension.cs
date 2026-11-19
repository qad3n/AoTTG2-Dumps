// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010A")]
public sealed class X509EnhancedKeyUsageExtension : X509Extension
{
	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x28")]
	private OidCollection _enhKeyUsage;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x30")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x6210B20", Offset = "0x620FB20", VA = "0x6210B20")]
	public X509EnhancedKeyUsageExtension()
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x620BE30", Offset = "0x620AE30", VA = "0x620BE30")]
	public X509EnhancedKeyUsageExtension(AsnEncodedData encodedEnhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x621BEE0", Offset = "0x621AEE0", VA = "0x621BEE0")]
	public X509EnhancedKeyUsageExtension(OidCollection enhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x621C3F0", Offset = "0x621B3F0", VA = "0x621C3F0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x621BB40", Offset = "0x621AB40", VA = "0x621BB40")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x621C1B0", Offset = "0x621B1B0", VA = "0x621C1B0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x621C5C0", Offset = "0x621B5C0", VA = "0x621C5C0", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
