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
	[Address(RVA = "0x48159A0", Offset = "0x48159A0", VA = "0x48159A0")]
	public XmlReflectionImporter(XmlAttributeOverrides attributeOverrides, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x4815B30", Offset = "0x4815B30", VA = "0x4815B30")]
	public XmlTypeMapping ImportTypeMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x4815CE0", Offset = "0x4815CE0", VA = "0x4815CE0")]
	public XmlTypeMapping ImportTypeMapping(Type type, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x4815B40", Offset = "0x4815B40", VA = "0x4815B40")]
	public XmlTypeMapping ImportTypeMapping(Type type, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x4815CF0", Offset = "0x4815CF0", VA = "0x4815CF0")]
	private XmlTypeMapping ImportTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x4819130", Offset = "0x4819130", VA = "0x4819130")]
	private XmlTypeMapping CreateTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultXmlType, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x4819660", Offset = "0x4819660", VA = "0x4819660")]
	private XmlTypeMapping ImportClassMapping(Type type, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x48161C0", Offset = "0x48161C0", VA = "0x48161C0")]
	private XmlTypeMapping ImportClassMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, bool isBaseType = false)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x481B740", Offset = "0x481B740", VA = "0x481B740")]
	private void RegisterDerivedMap(XmlTypeMapping map, XmlTypeMapping derivedMap)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x48196E0", Offset = "0x48196E0", VA = "0x48196E0")]
	private string GetTypeNamespace(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x481B970", Offset = "0x481B970", VA = "0x481B970")]
	private XmlTypeMapping ImportListMapping(Type type, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x4817680", Offset = "0x4817680", VA = "0x4817680")]
	private XmlTypeMapping ImportListMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x48187E0", Offset = "0x48187E0", VA = "0x48187E0")]
	private XmlTypeMapping ImportXmlNodeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x4818980", Offset = "0x4818980", VA = "0x4818980")]
	private XmlTypeMapping ImportPrimitiveMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x4818A30", Offset = "0x4818A30", VA = "0x4818A30")]
	private XmlTypeMapping ImportEnumMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x4819030", Offset = "0x4819030", VA = "0x4819030")]
	private XmlTypeMapping ImportXmlSerializableMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x481B860", Offset = "0x481B860", VA = "0x481B860")]
	private void ImportIncludedTypes(Type type, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x4819800", Offset = "0x4819800", VA = "0x4819800")]
	private List<XmlReflectionMember> GetReflectionMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x481ABE0", Offset = "0x481ABE0", VA = "0x481ABE0")]
	private XmlTypeMapMember CreateMapMember(Type declaringType, XmlReflectionMember rmember, string defaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x481C280", Offset = "0x481C280", VA = "0x481C280")]
	private XmlTypeMapElementInfoList ImportElementInfo(Type cls, string defaultName, string defaultNamespace, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x481BA60", Offset = "0x481BA60", VA = "0x481BA60")]
	private XmlTypeMapElementInfoList ImportAnyElementInfo(string defaultNamespace, XmlReflectionMember rmember, XmlTypeMapMemberElement member, XmlAttributes atts)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x481D9A0", Offset = "0x481D9A0", VA = "0x481D9A0")]
	private void ImportTextElementInfo(XmlTypeMapElementInfoList list, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x48195F0", Offset = "0x48195F0", VA = "0x48195F0")]
	private bool CanBeNull(TypeData type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x481DD00", Offset = "0x481DD00", VA = "0x481DD00")]
	public void IncludeType(Type type)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x481D7C0", Offset = "0x481D7C0", VA = "0x481D7C0")]
	private object GetDefaultValue(TypeData typeData, object defaultValue)
	{
		return null;
	}
}
