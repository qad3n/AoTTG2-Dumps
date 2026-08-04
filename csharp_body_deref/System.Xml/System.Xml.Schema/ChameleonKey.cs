// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ChameleonKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000167")]
internal class ChameleonKey
{
	[Token(Token = "0x4000747")]
	[FieldOffset(Offset = "0x10")]
	internal string targetNS;

	[Token(Token = "0x4000748")]
	[FieldOffset(Offset = "0x18")]
	internal Uri chameleonLocation;

	[Token(Token = "0x4000749")]
	[FieldOffset(Offset = "0x20")]
	internal XmlSchema originalSchema;

	[Token(Token = "0x400074A")]
	[FieldOffset(Offset = "0x28")]
	private int hashCode;

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x4842D60", Offset = "0x4842D60", VA = "0x4842D60")]
	public ChameleonKey(string ns, XmlSchema originalSchema)
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4842DE0", Offset = "0x4842DE0", VA = "0x4842DE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4842E60", Offset = "0x4842E60", VA = "0x4842E60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
