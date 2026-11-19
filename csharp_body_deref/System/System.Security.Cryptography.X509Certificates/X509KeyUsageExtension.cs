// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010F")]
public sealed class X509KeyUsageExtension : X509Extension
{
	[Token(Token = "0x400050F")]
	internal const string oid = "2.5.29.15";

	[Token(Token = "0x4000510")]
	internal const string friendlyName = "Key Usage";

	[Token(Token = "0x4000511")]
	internal const X509KeyUsageFlags all = X509KeyUsageFlags.EncipherOnly | X509KeyUsageFlags.CrlSign | X509KeyUsageFlags.KeyCertSign | X509KeyUsageFlags.KeyAgreement | X509KeyUsageFlags.DataEncipherment | X509KeyUsageFlags.KeyEncipherment | X509KeyUsageFlags.NonRepudiation | X509KeyUsageFlags.DigitalSignature | X509KeyUsageFlags.DecipherOnly;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x24")]
	private X509KeyUsageFlags _keyUsages;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x28")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x17000167")]
	public X509KeyUsageFlags KeyUsages
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x621DD30", Offset = "0x621CD30", VA = "0x621DD30")]
		get
		{
			return default(X509KeyUsageFlags);
		}
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x621D7D0", Offset = "0x621C7D0", VA = "0x621D7D0")]
	public X509KeyUsageExtension()
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x621D860", Offset = "0x621C860", VA = "0x621D860")]
	public X509KeyUsageExtension(AsnEncodedData encodedKeyUsage, bool critical)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x621DAE0", Offset = "0x621CAE0", VA = "0x621DAE0")]
	public X509KeyUsageExtension(X509KeyUsageFlags keyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x621DD90", Offset = "0x621CD90", VA = "0x621DD90", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x621DBB0", Offset = "0x621CBB0", VA = "0x621DBB0")]
	internal X509KeyUsageFlags GetValidFlags(X509KeyUsageFlags flags)
	{
		return default(X509KeyUsageFlags);
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x621D930", Offset = "0x621C930", VA = "0x621D930")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x621DBC0", Offset = "0x621CBC0", VA = "0x621DBC0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x621DF40", Offset = "0x621CF40", VA = "0x621DF40", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
