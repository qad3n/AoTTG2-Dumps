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
		[Address(RVA = "0x44EC3F0", Offset = "0x44EC3F0", VA = "0x44EC3F0")]
		public FixupCallbackInfo(XmlSerializationReaderInterpreter sri, ClassMap map, bool isValueList)
		{
		}

		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x44ED8F0", Offset = "0x44ED8F0", VA = "0x44ED8F0")]
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
		[Address(RVA = "0x44E6CE0", Offset = "0x44E6CE0", VA = "0x44E6CE0")]
		public ReaderCallbackInfo(XmlSerializationReaderInterpreter sri, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x44ED920", Offset = "0x44ED920", VA = "0x44ED920")]
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
	[Address(RVA = "0x44E6780", Offset = "0x44E6780", VA = "0x44E6780")]
	public XmlSerializationReaderInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x44E67D0", Offset = "0x44E67D0", VA = "0x44E67D0", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x44E6D20", Offset = "0x44E6D20", VA = "0x44E6D20", Slot = "5")]
	protected override void InitIDs()
	{
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x44E6D30", Offset = "0x44E6D30", VA = "0x44E6D30")]
	public object ReadRoot()
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x44E6F10", Offset = "0x44E6F10", VA = "0x44E6F10")]
	private object ReadEncodedObject(XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x44E7070", Offset = "0x44E7070", VA = "0x44E7070", Slot = "6")]
	protected virtual object ReadMessage(XmlMembersMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x44E6E20", Offset = "0x44E6E20", VA = "0x44E6E20")]
	private object ReadRoot(XmlTypeMapping rootMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x44EAC60", Offset = "0x44EAC60", VA = "0x44EAC60", Slot = "7")]
	protected virtual object ReadObject(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x44EB5C0", Offset = "0x44EB5C0", VA = "0x44EB5C0", Slot = "8")]
	protected virtual object ReadClassInstance(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x44EB8A0", Offset = "0x44EB8A0", VA = "0x44EB8A0", Slot = "9")]
	protected virtual void ReadClassInstanceMembers(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x44E7760", Offset = "0x44E7760", VA = "0x44E7760")]
	private void ReadAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x44E7D20", Offset = "0x44E7D20", VA = "0x44E7D20")]
	private void ReadMembers(ClassMap map, object ob, bool isValueList, bool readBySoapOrder)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x44EC000", Offset = "0x44EC000", VA = "0x44EC000")]
	private void SetListMembersDefaults(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x44EC720", Offset = "0x44EC720", VA = "0x44EC720")]
	internal void FixupMembers(ClassMap map, object obfixup, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x44ECD00", Offset = "0x44ECD00", VA = "0x44ECD00", Slot = "10")]
	protected virtual void ProcessUnknownAttribute(object target)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x44ECD30", Offset = "0x44ECD30", VA = "0x44ECD30", Slot = "11")]
	protected virtual void ProcessUnknownElement(object target)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x44EC320", Offset = "0x44EC320", VA = "0x44EC320")]
	private bool IsReadOnly(XmlTypeMapMember member, TypeData memType, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x44EBA40", Offset = "0x44EBA40", VA = "0x44EBA40")]
	private void SetMemberValue(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x44E76C0", Offset = "0x44E76C0", VA = "0x44E76C0")]
	private void SetMemberValueFromAttr(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x44EBBF0", Offset = "0x44EBBF0", VA = "0x44EBBF0")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x44EC4D0", Offset = "0x44EC4D0", VA = "0x44EC4D0")]
	private object ReadObjectElement(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x44ECD60", Offset = "0x44ECD60", VA = "0x44ECD60")]
	private object ReadPrimitiveValue(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x44EB930", Offset = "0x44EB930", VA = "0x44EB930")]
	private object GetValueFromXmlString(string value, TypeData typeData, XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x44EADC0", Offset = "0x44EADC0", VA = "0x44EADC0")]
	private object ReadListElement(XmlTypeMapping typeMap, bool isNullable, object list, bool canCreateInstance)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x44ECEB0", Offset = "0x44ECEB0", VA = "0x44ECEB0")]
	private object ReadListString(XmlTypeMapping typeMap, string values)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x44EBCA0", Offset = "0x44EBCA0", VA = "0x44EBCA0")]
	private void AddListValue(TypeData listType, ref object list, int index, object value, bool canCreateInstance)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x44EB890", Offset = "0x44EB890", VA = "0x44EB890")]
	private static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x44E7660", Offset = "0x44E7660", VA = "0x44E7660")]
	private object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x44EC440", Offset = "0x44EC440", VA = "0x44EC440")]
	private object CreateList(Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x44EC380", Offset = "0x44EC380", VA = "0x44EC380")]
	private object InitializeList(TypeData listType)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x44ED210", Offset = "0x44ED210", VA = "0x44ED210")]
	private void FillList(object list, object items)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x44ED220", Offset = "0x44ED220", VA = "0x44ED220")]
	private void CopyEnumerableList(object source, object dest)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x44EAC40", Offset = "0x44EAC40", VA = "0x44EAC40")]
	private object ReadXmlNodeElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x44EC680", Offset = "0x44EC680", VA = "0x44EC680")]
	private object ReadXmlNode(TypeData type, bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x44EB2E0", Offset = "0x44EB2E0", VA = "0x44EB2E0")]
	private object ReadPrimitiveElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x44EB390", Offset = "0x44EB390", VA = "0x44EB390")]
	private object ReadEnumElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x44ED100", Offset = "0x44ED100", VA = "0x44ED100")]
	private object GetEnumValue(XmlTypeMapping typeMap, string val)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x44EB400", Offset = "0x44EB400", VA = "0x44EB400")]
	private object ReadXmlSerializableElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}
}
