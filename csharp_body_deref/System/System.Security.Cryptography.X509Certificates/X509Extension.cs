// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Extension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200014A")]
public class X509Extension : AsnEncodedData
{
	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x20")]
	private bool _critical;

	[Token(Token = "0x1700018F")]
	public bool Critical
	{
		[Token(Token = "0x6000835")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000836")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected X509Extension()
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x288FB20", Offset = "0x288E120", VA = "0x18288FB20")]
	public X509Extension(string oid, byte[] rawData, bool critical)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x288F830", Offset = "0x288DE30", VA = "0x18288F830", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x288FA20", Offset = "0x288E020", VA = "0x18288FA20")]
	internal string FormatUnkownData(byte[] data)
	{
		return null;
	}
}
