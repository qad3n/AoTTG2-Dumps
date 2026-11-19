// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Extension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010B")]
public class X509Extension : AsnEncodedData
{
	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x20")]
	private bool _critical;

	[Token(Token = "0x17000160")]
	public bool Critical
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x621C940", Offset = "0x621B940", VA = "0x621C940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x621C950", Offset = "0x621B950", VA = "0x621C950")]
		set
		{
		}
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x621C910", Offset = "0x621B910", VA = "0x621C910")]
	protected X509Extension()
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x621C920", Offset = "0x621B920", VA = "0x621C920")]
	public X509Extension(string oid, byte[] rawData, bool critical)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x621C960", Offset = "0x621B960", VA = "0x621C960", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x621CA60", Offset = "0x621BA60", VA = "0x621CA60")]
	internal string FormatUnkownData(byte[] data)
	{
		return null;
	}
}
