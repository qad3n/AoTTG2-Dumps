// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200014E")]
public sealed class X509KeyUsageExtension : X509Extension
{
	[Token(Token = "0x40005DE")]
	internal const string oid = "2.5.29.15";

	[Token(Token = "0x40005DF")]
	internal const string friendlyName = "Key Usage";

	[Token(Token = "0x40005E0")]
	internal const X509KeyUsageFlags all = X509KeyUsageFlags.EncipherOnly | X509KeyUsageFlags.CrlSign | X509KeyUsageFlags.KeyCertSign | X509KeyUsageFlags.KeyAgreement | X509KeyUsageFlags.DataEncipherment | X509KeyUsageFlags.KeyEncipherment | X509KeyUsageFlags.NonRepudiation | X509KeyUsageFlags.DigitalSignature | X509KeyUsageFlags.DecipherOnly;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x28")]
	private X509KeyUsageFlags _keyUsages;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x2C")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x17000196")]
	public X509KeyUsageFlags KeyUsages
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x2890A80", Offset = "0x288F080", VA = "0x182890A80")]
		get
		{
			return default(X509KeyUsageFlags);
		}
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x28909D0", Offset = "0x288EFD0", VA = "0x1828909D0")]
	public X509KeyUsageExtension()
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x28907F0", Offset = "0x288EDF0", VA = "0x1828907F0")]
	public X509KeyUsageExtension(AsnEncodedData encodedKeyUsage, bool critical)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x28908E0", Offset = "0x288EEE0", VA = "0x1828908E0")]
	public X509KeyUsageExtension(X509KeyUsageFlags keyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x288FDF0", Offset = "0x288E3F0", VA = "0x18288FDF0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x28902E0", Offset = "0x288E8E0", VA = "0x1828902E0")]
	internal X509KeyUsageFlags GetValidFlags(X509KeyUsageFlags flags)
	{
		return default(X509KeyUsageFlags);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x2890020", Offset = "0x288E620", VA = "0x182890020")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x2890170", Offset = "0x288E770", VA = "0x182890170")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x28902F0", Offset = "0x288E8F0", VA = "0x1828902F0", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
