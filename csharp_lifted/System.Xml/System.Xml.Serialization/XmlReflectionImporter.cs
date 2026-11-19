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
	[Address(RVA = "0x6117AA0", Offset = "0x6116AA0", VA = "0x6117AA0")]
	public XmlReflectionImporter(XmlAttributeOverrides attributeOverrides, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x6117C30", Offset = "0x6116C30", VA = "0x6117C30")]
	public XmlTypeMapping ImportTypeMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x6117DE0", Offset = "0x6116DE0", VA = "0x6117DE0")]
	public XmlTypeMapping ImportTypeMapping(Type type, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x6117C40", Offset = "0x6116C40", VA = "0x6117C40")]
	public XmlTypeMapping ImportTypeMapping(Type type, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x6117DF0", Offset = "0x6116DF0", VA = "0x6117DF0")]
	private XmlTypeMapping ImportTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x611AD60", Offset = "0x6119D60", VA = "0x611AD60")]
	private XmlTypeMapping CreateTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultXmlType, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x611B250", Offset = "0x611A250", VA = "0x611B250")]
	private XmlTypeMapping ImportClassMapping(Type type, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x6118200", Offset = "0x6117200", VA = "0x6118200")]
	private XmlTypeMapping ImportClassMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x611CF70", Offset = "0x611BF70", VA = "0x611CF70")]
	private void RegisterDerivedMap(XmlTypeMapping map, XmlTypeMapping derivedMap)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x611B2D0", Offset = "0x611A2D0", VA = "0x611B2D0")]
	private string GetTypeNamespace(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x611D1A0", Offset = "0x611C1A0", VA = "0x611D1A0")]
	private XmlTypeMapping ImportListMapping(Type type, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x6119530", Offset = "0x6118530", VA = "0x6119530")]
	private XmlTypeMapping ImportListMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x611A410", Offset = "0x6119410", VA = "0x611A410")]
	private XmlTypeMapping ImportXmlNodeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x611A5B0", Offset = "0x61195B0", VA = "0x611A5B0")]
	private XmlTypeMapping ImportPrimitiveMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x611A660", Offset = "0x6119660", VA = "0x611A660")]
	private XmlTypeMapping ImportEnumMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x611AC60", Offset = "0x6119C60", VA = "0x611AC60")]
	private XmlTypeMapping ImportXmlSerializableMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x611D090", Offset = "0x611C090", VA = "0x611D090")]
	private void ImportIncludedTypes(Type type, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x611B3F0", Offset = "0x611A3F0", VA = "0x611B3F0")]
	private List<XmlReflectionMember> GetReflectionMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x611C4A0", Offset = "0x611B4A0", VA = "0x611C4A0")]
	private XmlTypeMapMember CreateMapMember(Type declaringType, XmlReflectionMember rmember, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x611D8D0", Offset = "0x611C8D0", VA = "0x611D8D0")]
	private XmlTypeMapElementInfoList ImportElementInfo(Type cls, string defaultName, string defaultNamespace, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x611D290", Offset = "0x611C290", VA = "0x611D290")]
	private XmlTypeMapElementInfoList ImportAnyElementInfo(string defaultNamespace, XmlReflectionMember rmember, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x611EAF0", Offset = "0x611DAF0", VA = "0x611EAF0")]
	private void ImportTextElementInfo(XmlTypeMapElementInfoList list, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x611B1E0", Offset = "0x611A1E0", VA = "0x611B1E0")]
	private bool CanBeNull(TypeData type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x611EE50", Offset = "0x611DE50", VA = "0x611EE50")]
	public void IncludeType(Type type)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x611E920", Offset = "0x611D920", VA = "0x611E920")]
	private object GetDefaultValue(TypeData typeData, object defaultValue)
	{
		return null;
	}
}
