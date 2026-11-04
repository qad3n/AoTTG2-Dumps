// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaNamespaceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F4")]
internal class SchemaNamespaceManager : XmlNamespaceManager
{
	[Token(Token = "0x4000A4D")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObject node;

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x2655500", Offset = "0x2653B00", VA = "0x182655500")]
	public SchemaNamespaceManager(XmlSchemaObject node)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x2655130", Offset = "0x2653730", VA = "0x182655130", Slot = "16")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x2655280", Offset = "0x2653880", VA = "0x182655280", Slot = "17")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
