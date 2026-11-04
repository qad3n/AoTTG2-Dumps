// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XMLSchema
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000095")]
internal class XMLSchema
{
	[Token(Token = "0x600080E")]
	[Address(RVA = "0x252F530", Offset = "0x252DB30", VA = "0x18252F530")]
	internal static TypeConverter GetConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x252F580", Offset = "0x252DB80", VA = "0x18252F580")]
	internal static void SetProperties(object instance, XmlAttributeCollection attrs)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x252F240", Offset = "0x252D840", VA = "0x18252F240")]
	internal static bool FEqualIdentity(XmlNode node, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x252F400", Offset = "0x252DA00", VA = "0x18252F400")]
	internal static bool GetBooleanAttribute(XmlElement element, string attrName, string attrNS, bool defVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x252F2D0", Offset = "0x252D8D0", VA = "0x18252F2D0")]
	internal static string GenUniqueColumnName(string proposedName, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XMLSchema()
	{
	}
}
