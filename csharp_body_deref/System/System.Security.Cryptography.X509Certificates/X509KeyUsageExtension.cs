// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010E")]
public sealed class X509KeyUsageExtension : X509Extension
{
	[Token(Token = "0x400050C")]
	internal const string oid = "2.5.29.15";

	[Token(Token = "0x400050D")]
	internal const string friendlyName = "Key Usage";

	[Token(Token = "0x400050E")]
	internal const X509KeyUsageFlags all = X509KeyUsageFlags.EncipherOnly | X509KeyUsageFlags.CrlSign | X509KeyUsageFlags.KeyCertSign | X509KeyUsageFlags.KeyAgreement | X509KeyUsageFlags.DataEncipherment | X509KeyUsageFlags.KeyEncipherment | X509KeyUsageFlags.NonRepudiation | X509KeyUsageFlags.DigitalSignature | X509KeyUsageFlags.DecipherOnly;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x24")]
	private X509KeyUsageFlags _keyUsages;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x28")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x1700015D")]
	public X509KeyUsageFlags KeyUsages
	{
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x49435A0", Offset = "0x49435A0", VA = "0x49435A0")]
		get
		{
			return default(X509KeyUsageFlags);
		}
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4942FF0", Offset = "0x4942FF0", VA = "0x4942FF0")]
	public X509KeyUsageExtension()
	{
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4943080", Offset = "0x4943080", VA = "0x4943080")]
	public X509KeyUsageExtension(AsnEncodedData encodedKeyUsage, bool critical)
	{
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4943340", Offset = "0x4943340", VA = "0x4943340")]
	public X509KeyUsageExtension(X509KeyUsageFlags keyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4943600", Offset = "0x4943600", VA = "0x4943600", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4943410", Offset = "0x4943410", VA = "0x4943410")]
	internal X509KeyUsageFlags GetValidFlags(X509KeyUsageFlags flags)
	{
		return default(X509KeyUsageFlags);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4943150", Offset = "0x4943150", VA = "0x4943150")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4943420", Offset = "0x4943420", VA = "0x4943420")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x49437B0", Offset = "0x49437B0", VA = "0x49437B0", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
