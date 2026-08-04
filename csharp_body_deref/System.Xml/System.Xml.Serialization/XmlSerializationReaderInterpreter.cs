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
		[Address(RVA = "0x4829B50", Offset = "0x4829B50", VA = "0x4829B50")]
		public FixupCallbackInfo(XmlSerializationReaderInterpreter sri, ClassMap map, bool isValueList)
		{
		}

		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x482B050", Offset = "0x482B050", VA = "0x482B050")]
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
		[Address(RVA = "0x4824440", Offset = "0x4824440", VA = "0x4824440")]
		public ReaderCallbackInfo(XmlSerializationReaderInterpreter sri, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x482B080", Offset = "0x482B080", VA = "0x482B080")]
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
	[Address(RVA = "0x4823EE0", Offset = "0x4823EE0", VA = "0x4823EE0")]
	public XmlSerializationReaderInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x4823F30", Offset = "0x4823F30", VA = "0x4823F30", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x4824480", Offset = "0x4824480", VA = "0x4824480", Slot = "5")]
	protected override void InitIDs()
	{
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x4824490", Offset = "0x4824490", VA = "0x4824490")]
	public object ReadRoot()
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x4824670", Offset = "0x4824670", VA = "0x4824670")]
	private object ReadEncodedObject(XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x48247D0", Offset = "0x48247D0", VA = "0x48247D0", Slot = "6")]
	protected virtual object ReadMessage(XmlMembersMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4824580", Offset = "0x4824580", VA = "0x4824580")]
	private object ReadRoot(XmlTypeMapping rootMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x48283C0", Offset = "0x48283C0", VA = "0x48283C0", Slot = "7")]
	protected virtual object ReadObject(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x4828D20", Offset = "0x4828D20", VA = "0x4828D20", Slot = "8")]
	protected virtual object ReadClassInstance(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x4829000", Offset = "0x4829000", VA = "0x4829000", Slot = "9")]
	protected virtual void ReadClassInstanceMembers(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x4824EC0", Offset = "0x4824EC0", VA = "0x4824EC0")]
	private void ReadAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4825480", Offset = "0x4825480", VA = "0x4825480")]
	private void ReadMembers(ClassMap map, object ob, bool isValueList, bool readBySoapOrder)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4829760", Offset = "0x4829760", VA = "0x4829760")]
	private void SetListMembersDefaults(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x4829E80", Offset = "0x4829E80", VA = "0x4829E80")]
	internal void FixupMembers(ClassMap map, object obfixup, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x482A460", Offset = "0x482A460", VA = "0x482A460", Slot = "10")]
	protected virtual void ProcessUnknownAttribute(object target)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x482A490", Offset = "0x482A490", VA = "0x482A490", Slot = "11")]
	protected virtual void ProcessUnknownElement(object target)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4829A80", Offset = "0x4829A80", VA = "0x4829A80")]
	private bool IsReadOnly(XmlTypeMapMember member, TypeData memType, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x48291A0", Offset = "0x48291A0", VA = "0x48291A0")]
	private void SetMemberValue(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x4824E20", Offset = "0x4824E20", VA = "0x4824E20")]
	private void SetMemberValueFromAttr(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4829350", Offset = "0x4829350", VA = "0x4829350")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x4829C30", Offset = "0x4829C30", VA = "0x4829C30")]
	private object ReadObjectElement(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x482A4C0", Offset = "0x482A4C0", VA = "0x482A4C0")]
	private object ReadPrimitiveValue(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x4829090", Offset = "0x4829090", VA = "0x4829090")]
	private object GetValueFromXmlString(string value, TypeData typeData, XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x4828520", Offset = "0x4828520", VA = "0x4828520")]
	private object ReadListElement(XmlTypeMapping typeMap, bool isNullable, object list, bool canCreateInstance)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x482A610", Offset = "0x482A610", VA = "0x482A610")]
	private object ReadListString(XmlTypeMapping typeMap, string values)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x4829400", Offset = "0x4829400", VA = "0x4829400")]
	private void AddListValue(TypeData listType, ref object list, int index, object value, bool canCreateInstance)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x4828FF0", Offset = "0x4828FF0", VA = "0x4828FF0")]
	private static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x4824DC0", Offset = "0x4824DC0", VA = "0x4824DC0")]
	private object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x4829BA0", Offset = "0x4829BA0", VA = "0x4829BA0")]
	private object CreateList(Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x4829AE0", Offset = "0x4829AE0", VA = "0x4829AE0")]
	private object InitializeList(TypeData listType)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x482A970", Offset = "0x482A970", VA = "0x482A970")]
	private void FillList(object list, object items)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x482A980", Offset = "0x482A980", VA = "0x482A980")]
	private void CopyEnumerableList(object source, object dest)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x48283A0", Offset = "0x48283A0", VA = "0x48283A0")]
	private object ReadXmlNodeElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x4829DE0", Offset = "0x4829DE0", VA = "0x4829DE0")]
	private object ReadXmlNode(TypeData type, bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x4828A40", Offset = "0x4828A40", VA = "0x4828A40")]
	private object ReadPrimitiveElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x4828AF0", Offset = "0x4828AF0", VA = "0x4828AF0")]
	private object ReadEnumElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x482A860", Offset = "0x482A860", VA = "0x482A860")]
	private object GetEnumValue(XmlTypeMapping typeMap, string val)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x4828B60", Offset = "0x4828B60", VA = "0x4828B60")]
	private object ReadXmlSerializableElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}
}
