using System.ComponentModel;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200008B")]
internal class XMLSchema
{
	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x428FB00", Offset = "0x428FB00", VA = "0x428FB00")]
	internal static TypeConverter GetConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x428FB70", Offset = "0x428FB70", VA = "0x428FB70")]
	internal static void SetProperties(object instance, XmlAttributeCollection attrs)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x428FFC0", Offset = "0x428FFC0", VA = "0x428FFC0")]
	internal static bool FEqualIdentity(XmlNode node, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x4290030", Offset = "0x4290030", VA = "0x4290030")]
	internal static bool GetBooleanAttribute(XmlElement element, string attrName, string attrNS, bool defVal)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x4290160", Offset = "0x4290160", VA = "0x4290160")]
	internal static string GenUniqueColumnName(string proposedName, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x42902A0", Offset = "0x42902A0", VA = "0x42902A0")]
	public XMLSchema()
	{
	}
}
