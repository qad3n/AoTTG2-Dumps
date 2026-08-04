// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000109")]
public sealed class X509EnhancedKeyUsageExtension : X509Extension
{
	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x28")]
	private OidCollection _enhKeyUsage;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x30")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4935660", Offset = "0x4935660", VA = "0x4935660")]
	public X509EnhancedKeyUsageExtension()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x4930760", Offset = "0x4930760", VA = "0x4930760")]
	public X509EnhancedKeyUsageExtension(AsnEncodedData encodedEnhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4941580", Offset = "0x4941580", VA = "0x4941580")]
	public X509EnhancedKeyUsageExtension(OidCollection enhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x4941AB0", Offset = "0x4941AB0", VA = "0x4941AB0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4941200", Offset = "0x4941200", VA = "0x4941200")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4941870", Offset = "0x4941870", VA = "0x4941870")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4941C80", Offset = "0x4941C80", VA = "0x4941C80", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
