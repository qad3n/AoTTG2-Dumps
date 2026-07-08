using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200012B")]
public class XmlReflectionImporter
{
	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x10")]
	private string initialDefaultNamespace;

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x18")]
	private XmlAttributeOverrides attributeOverrides;

	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList includedTypes;

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0x28")]
	private ReflectionHelper helper;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x30")]
	private int arrayChoiceCount;

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList relatedMaps;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x40")]
	private bool allowPrivateTypes;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string errSimple;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string errSimple2;

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x44D8240", Offset = "0x44D8240", VA = "0x44D8240")]
	public XmlReflectionImporter(XmlAttributeOverrides attributeOverrides, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x44D83D0", Offset = "0x44D83D0", VA = "0x44D83D0")]
	public XmlTypeMapping ImportTypeMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x44D8580", Offset = "0x44D8580", VA = "0x44D8580")]
	public XmlTypeMapping ImportTypeMapping(Type type, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x44D83E0", Offset = "0x44D83E0", VA = "0x44D83E0")]
	public XmlTypeMapping ImportTypeMapping(Type type, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x44D8590", Offset = "0x44D8590", VA = "0x44D8590")]
	private XmlTypeMapping ImportTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x44DB9D0", Offset = "0x44DB9D0", VA = "0x44DB9D0")]
	private XmlTypeMapping CreateTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultXmlType, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x44DBF00", Offset = "0x44DBF00", VA = "0x44DBF00")]
	private XmlTypeMapping ImportClassMapping(Type type, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x44D8A60", Offset = "0x44D8A60", VA = "0x44D8A60")]
	private XmlTypeMapping ImportClassMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x44DDFE0", Offset = "0x44DDFE0", VA = "0x44DDFE0")]
	private void RegisterDerivedMap(XmlTypeMapping map, XmlTypeMapping derivedMap)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x44DBF80", Offset = "0x44DBF80", VA = "0x44DBF80")]
	private string GetTypeNamespace(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x44DE210", Offset = "0x44DE210", VA = "0x44DE210")]
	private XmlTypeMapping ImportListMapping(Type type, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x44D9F20", Offset = "0x44D9F20", VA = "0x44D9F20")]
	private XmlTypeMapping ImportListMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x44DB080", Offset = "0x44DB080", VA = "0x44DB080")]
	private XmlTypeMapping ImportXmlNodeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x44DB220", Offset = "0x44DB220", VA = "0x44DB220")]
	private XmlTypeMapping ImportPrimitiveMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x44DB2D0", Offset = "0x44DB2D0", VA = "0x44DB2D0")]
	private XmlTypeMapping ImportEnumMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x44DB8D0", Offset = "0x44DB8D0", VA = "0x44DB8D0")]
	private XmlTypeMapping ImportXmlSerializableMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x44DE100", Offset = "0x44DE100", VA = "0x44DE100")]
	private void ImportIncludedTypes(Type type, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x44DC0A0", Offset = "0x44DC0A0", VA = "0x44DC0A0")]
	private List<XmlReflectionMember> GetReflectionMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x44DD480", Offset = "0x44DD480", VA = "0x44DD480")]
	private XmlTypeMapMember CreateMapMember(Type declaringType, XmlReflectionMember rmember, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x44DEB20", Offset = "0x44DEB20", VA = "0x44DEB20")]
	private XmlTypeMapElementInfoList ImportElementInfo(Type cls, string defaultName, string defaultNamespace, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x44DE300", Offset = "0x44DE300", VA = "0x44DE300")]
	private XmlTypeMapElementInfoList ImportAnyElementInfo(string defaultNamespace, XmlReflectionMember rmember, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x44E0240", Offset = "0x44E0240", VA = "0x44E0240")]
	private void ImportTextElementInfo(XmlTypeMapElementInfoList list, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x44DBE90", Offset = "0x44DBE90", VA = "0x44DBE90")]
	private bool CanBeNull(TypeData type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x44E05A0", Offset = "0x44E05A0", VA = "0x44E05A0")]
	public void IncludeType(Type type)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x44E0060", Offset = "0x44E0060", VA = "0x44E0060")]
	private object GetDefaultValue(TypeData typeData, object defaultValue)
	{
		return null;
	}
}
