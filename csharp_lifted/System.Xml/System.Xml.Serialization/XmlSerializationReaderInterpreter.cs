// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializationReaderInterpreter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000139")]
internal class XmlSerializationReaderInterpreter : XmlSerializationReader
{
	[Token(Token = "0x200013A")]
	private class FixupCallbackInfo
	{
		[Token(Token = "0x40006A4")]
		[FieldOffset(Offset = "0x10")]
		private XmlSerializationReaderInterpreter _sri;

		[Token(Token = "0x40006A5")]
		[FieldOffset(Offset = "0x18")]
		private ClassMap _map;

		[Token(Token = "0x40006A6")]
		[FieldOffset(Offset = "0x20")]
		private bool _isValueList;

		[Token(Token = "0x6000E09")]
		[Address(RVA = "0x6129EB0", Offset = "0x6128EB0", VA = "0x6129EB0")]
		public FixupCallbackInfo(XmlSerializationReaderInterpreter sri, ClassMap map, bool isValueList)
		{
		}

		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x612B090", Offset = "0x612A090", VA = "0x612B090")]
		public void FixupMembers(object fixup)
		{
		}
	}

	[Token(Token = "0x200013B")]
	private class ReaderCallbackInfo
	{
		[Token(Token = "0x40006A7")]
		[FieldOffset(Offset = "0x10")]
		private XmlSerializationReaderInterpreter _sri;

		[Token(Token = "0x40006A8")]
		[FieldOffset(Offset = "0x18")]
		private XmlTypeMapping _typeMap;

		[Token(Token = "0x6000E0B")]
		[Address(RVA = "0x6124E00", Offset = "0x6123E00", VA = "0x6124E00")]
		public ReaderCallbackInfo(XmlSerializationReaderInterpreter sri, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x612B0C0", Offset = "0x612A0C0", VA = "0x612B0C0")]
		internal object ReadObject()
		{
			return null;
		}
	}

	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0xD0")]
	private XmlMapping _typeMap;

	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0xD8")]
	private SerializationFormat _format;

	[Token(Token = "0x40006A2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly XmlQualifiedName AnyType;

	[Token(Token = "0x40006A3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object[] empty_array;

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x6124930", Offset = "0x6123930", VA = "0x6124930")]
	public XmlSerializationReaderInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x6124980", Offset = "0x6123980", VA = "0x6124980", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x6124E40", Offset = "0x6123E40", VA = "0x6124E40", Slot = "5")]
	protected override void InitIDs()
	{
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x6124E50", Offset = "0x6123E50", VA = "0x6124E50")]
	public object ReadRoot()
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x6125030", Offset = "0x6124030", VA = "0x6125030")]
	private object ReadEncodedObject(XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x6125190", Offset = "0x6124190", VA = "0x6125190", Slot = "6")]
	protected virtual object ReadMessage(XmlMembersMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x6124F40", Offset = "0x6123F40", VA = "0x6124F40")]
	private object ReadRoot(XmlTypeMapping rootMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x6128900", Offset = "0x6127900", VA = "0x6128900", Slot = "7")]
	protected virtual object ReadObject(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x61291A0", Offset = "0x61281A0", VA = "0x61291A0", Slot = "8")]
	protected virtual object ReadClassInstance(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x6129480", Offset = "0x6128480", VA = "0x6129480", Slot = "9")]
	protected virtual void ReadClassInstanceMembers(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x61258B0", Offset = "0x61248B0", VA = "0x61258B0")]
	private void ReadAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x6125E60", Offset = "0x6124E60", VA = "0x6125E60")]
	private void ReadMembers(ClassMap map, object ob, bool isValueList, bool readBySoapOrder)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x6129BF0", Offset = "0x6128BF0", VA = "0x6129BF0")]
	private void SetListMembersDefaults(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x612A1E0", Offset = "0x61291E0", VA = "0x612A1E0")]
	internal void FixupMembers(ClassMap map, object obfixup, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x612A610", Offset = "0x6129610", VA = "0x612A610", Slot = "10")]
	protected virtual void ProcessUnknownAttribute(object target)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x612A640", Offset = "0x6129640", VA = "0x612A640", Slot = "11")]
	protected virtual void ProcessUnknownElement(object target)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x6129DE0", Offset = "0x6128DE0", VA = "0x6129DE0")]
	private bool IsReadOnly(XmlTypeMapMember member, TypeData memType, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x6129620", Offset = "0x6128620", VA = "0x6129620")]
	private void SetMemberValue(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x6125810", Offset = "0x6124810", VA = "0x6125810")]
	private void SetMemberValueFromAttr(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x61297D0", Offset = "0x61287D0", VA = "0x61297D0")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x6129F90", Offset = "0x6128F90", VA = "0x6129F90")]
	private object ReadObjectElement(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x612A670", Offset = "0x6129670", VA = "0x612A670")]
	private object ReadPrimitiveValue(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x6129510", Offset = "0x6128510", VA = "0x6129510")]
	private object GetValueFromXmlString(string value, TypeData typeData, XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x6128A70", Offset = "0x6127A70", VA = "0x6128A70")]
	private object ReadListElement(XmlTypeMapping typeMap, bool isNullable, object list, bool canCreateInstance)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x612A7B0", Offset = "0x61297B0", VA = "0x612A7B0")]
	private object ReadListString(XmlTypeMapping typeMap, string values)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x6129890", Offset = "0x6128890", VA = "0x6129890")]
	private void AddListValue(TypeData listType, ref object list, int index, object value, bool canCreateInstance)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x6129470", Offset = "0x6128470", VA = "0x6129470")]
	private static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x61257B0", Offset = "0x61247B0", VA = "0x61257B0")]
	private object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x6129F00", Offset = "0x6128F00", VA = "0x6129F00")]
	private object CreateList(Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x6129E40", Offset = "0x6128E40", VA = "0x6129E40")]
	private object InitializeList(TypeData listType)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x612AB30", Offset = "0x6129B30", VA = "0x612AB30")]
	private void FillList(object list, object items)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x612AB40", Offset = "0x6129B40", VA = "0x612AB40")]
	private void CopyEnumerableList(object source, object dest)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x61288E0", Offset = "0x61278E0", VA = "0x61288E0")]
	private object ReadXmlNodeElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x612A140", Offset = "0x6129140", VA = "0x612A140")]
	private object ReadXmlNode(TypeData type, bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x6128EC0", Offset = "0x6127EC0", VA = "0x6128EC0")]
	private object ReadPrimitiveElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x6128F70", Offset = "0x6127F70", VA = "0x6128F70")]
	private object ReadEnumElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x612AA10", Offset = "0x6129A10", VA = "0x612AA10")]
	private object GetEnumValue(XmlTypeMapping typeMap, string val)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x6128FE0", Offset = "0x6127FE0", VA = "0x6128FE0")]
	private object ReadXmlSerializableElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}
}
