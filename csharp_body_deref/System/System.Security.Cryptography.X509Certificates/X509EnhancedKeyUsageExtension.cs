// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000149")]
public sealed class X509EnhancedKeyUsageExtension : X509Extension
{
	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x28")]
	private OidCollection _enhKeyUsage;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x30")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x288E9B0", Offset = "0x288CFB0", VA = "0x18288E9B0")]
	public X509EnhancedKeyUsageExtension()
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x288EA60", Offset = "0x288D060", VA = "0x18288EA60")]
	public X509EnhancedKeyUsageExtension(AsnEncodedData encodedEnhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x288EB50", Offset = "0x288D150", VA = "0x18288EB50")]
	public X509EnhancedKeyUsageExtension(OidCollection enhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x288E0D0", Offset = "0x288C6D0", VA = "0x18288E0D0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x288E300", Offset = "0x288C900", VA = "0x18288E300")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x288E4E0", Offset = "0x288CAE0", VA = "0x18288E4E0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x288E680", Offset = "0x288CC80", VA = "0x18288E680", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
