// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlReflectionImporter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x2765FE0", Offset = "0x27645E0", VA = "0x182765FE0")]
	public XmlReflectionImporter(XmlAttributeOverrides attributeOverrides, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x2765350", Offset = "0x2763950", VA = "0x182765350")]
	public XmlTypeMapping ImportTypeMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x2765370", Offset = "0x2763970", VA = "0x182765370")]
	public XmlTypeMapping ImportTypeMapping(Type type, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x2765390", Offset = "0x2763990", VA = "0x182765390")]
	public XmlTypeMapping ImportTypeMapping(Type type, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x2764F20", Offset = "0x2763520", VA = "0x182764F20")]
	private XmlTypeMapping ImportTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x275F9B0", Offset = "0x275DFB0", VA = "0x18275F9B0")]
	private XmlTypeMapping CreateTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultXmlType, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x27612C0", Offset = "0x275F8C0", VA = "0x1827612C0")]
	private XmlTypeMapping ImportClassMapping(Type type, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x2761350", Offset = "0x275F950", VA = "0x182761350")]
	private XmlTypeMapping ImportClassMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x2765E30", Offset = "0x2764430", VA = "0x182765E30")]
	private void RegisterDerivedMap(XmlTypeMapping map, XmlTypeMapping derivedMap)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x2760C70", Offset = "0x275F270", VA = "0x182760C70")]
	private string GetTypeNamespace(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x2763C00", Offset = "0x2762200", VA = "0x182763C00")]
	private XmlTypeMapping ImportListMapping(Type type, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x2763C80", Offset = "0x2762280", VA = "0x182763C80")]
	private XmlTypeMapping ImportListMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x2765550", Offset = "0x2763B50", VA = "0x182765550")]
	private XmlTypeMapping ImportXmlNodeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x27649F0", Offset = "0x2762FF0", VA = "0x1827649F0")]
	private XmlTypeMapping ImportPrimitiveMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x2763470", Offset = "0x2761A70", VA = "0x182763470")]
	private XmlTypeMapping ImportEnumMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x27657F0", Offset = "0x2763DF0", VA = "0x1827657F0")]
	private XmlTypeMapping ImportXmlSerializableMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x2763AF0", Offset = "0x27620F0", VA = "0x182763AF0")]
	private void ImportIncludedTypes(Type type, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x2760010", Offset = "0x275E610", VA = "0x182760010")]
	private List<XmlReflectionMember> GetReflectionMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x275EC50", Offset = "0x275D250", VA = "0x18275EC50")]
	private XmlTypeMapMember CreateMapMember(Type declaringType, XmlReflectionMember rmember, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x27624D0", Offset = "0x2760AD0", VA = "0x1827624D0")]
	private XmlTypeMapElementInfoList ImportElementInfo(Type cls, string defaultName, string defaultNamespace, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x2760DA0", Offset = "0x275F3A0", VA = "0x182760DA0")]
	private XmlTypeMapElementInfoList ImportAnyElementInfo(string defaultNamespace, XmlReflectionMember rmember, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x2764BA0", Offset = "0x27631A0", VA = "0x182764BA0")]
	private void ImportTextElementInfo(XmlTypeMapElementInfoList list, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x275EC10", Offset = "0x275D210", VA = "0x18275EC10")]
	private bool CanBeNull(TypeData type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x2765A00", Offset = "0x2764000", VA = "0x182765A00")]
	public void IncludeType(Type type)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x275FE50", Offset = "0x275E450", VA = "0x18275FE50")]
	private object GetDefaultValue(TypeData typeData, object defaultValue)
	{
		return null;
	}
}
