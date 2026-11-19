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
	[Address(RVA = "0x5FFDE90", Offset = "0x5FFCE90", VA = "0x5FFDE90")]
	public SchemaNamespaceManager(XmlSchemaObject node)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x5FFDEC0", Offset = "0x5FFCEC0", VA = "0x5FFDEC0", Slot = "16")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x5FFDFE0", Offset = "0x5FFCFE0", VA = "0x5FFDFE0", Slot = "17")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
