// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.AttributePSVIInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000089")]
internal class AttributePSVIInfo
{
	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x10")]
	internal string localName;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x18")]
	internal string namespaceUri;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x20")]
	internal object typedAttributeValue;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x28")]
	internal XmlSchemaInfo attributeSchemaInfo;

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x2704140", Offset = "0x2702740", VA = "0x182704140")]
	internal AttributePSVIInfo()
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x27040C0", Offset = "0x27026C0", VA = "0x1827040C0")]
	internal void Reset()
	{
	}
}
