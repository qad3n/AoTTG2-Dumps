// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Extension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010A")]
public class X509Extension : AsnEncodedData
{
	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x20")]
	private bool _critical;

	[Token(Token = "0x17000156")]
	public bool Critical
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x49420A0", Offset = "0x49420A0", VA = "0x49420A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x49420B0", Offset = "0x49420B0", VA = "0x49420B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4942070", Offset = "0x4942070", VA = "0x4942070")]
	protected X509Extension()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4942080", Offset = "0x4942080", VA = "0x4942080")]
	public X509Extension(string oid, byte[] rawData, bool critical)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x49420C0", Offset = "0x49420C0", VA = "0x49420C0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x49421C0", Offset = "0x49421C0", VA = "0x49421C0")]
	internal string FormatUnkownData(byte[] data)
	{
		return null;
	}
}
