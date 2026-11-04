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
		[Address(RVA = "0x1A1E5E0", Offset = "0x1A1CBE0", VA = "0x181A1E5E0")]
		public FixupCallbackInfo(XmlSerializationReaderInterpreter sri, ClassMap map, bool isValueList)
		{
		}

		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x2759B60", Offset = "0x2758160", VA = "0x182759B60")]
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
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public ReaderCallbackInfo(XmlSerializationReaderInterpreter sri, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x2759C30", Offset = "0x2758230", VA = "0x182759C30")]
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
	[Address(RVA = "0x276C720", Offset = "0x276AD20", VA = "0x18276C720")]
	public XmlSerializationReaderInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x2767150", Offset = "0x2765750", VA = "0x182767150", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected override void InitIDs()
	{
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x276BA20", Offset = "0x276A020", VA = "0x18276BA20")]
	public object ReadRoot()
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x2767E50", Offset = "0x2766450", VA = "0x182767E50")]
	private object ReadEncodedObject(XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x276AC70", Offset = "0x2769270", VA = "0x18276AC70", Slot = "6")]
	protected virtual object ReadMessage(XmlMembersMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x276B910", Offset = "0x2769F10", VA = "0x18276B910")]
	private object ReadRoot(XmlTypeMapping rootMap)
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x276B490", Offset = "0x2769A90", VA = "0x18276B490", Slot = "7")]
	protected virtual object ReadObject(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x2767B60", Offset = "0x2766160", VA = "0x182767B60", Slot = "8")]
	protected virtual object ReadClassInstance(XmlTypeMapping typeMap, bool isNullable, bool checkType)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x2767AB0", Offset = "0x27660B0", VA = "0x182767AB0", Slot = "9")]
	protected virtual void ReadClassInstanceMembers(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x27675C0", Offset = "0x2765BC0", VA = "0x1827675C0")]
	private void ReadAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x2768760", Offset = "0x2766D60", VA = "0x182768760")]
	private void ReadMembers(ClassMap map, object ob, bool isValueList, bool readBySoapOrder)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x276C200", Offset = "0x276A800", VA = "0x18276C200")]
	private void SetListMembersDefaults(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x2766AD0", Offset = "0x27650D0", VA = "0x182766AD0")]
	internal void FixupMembers(ClassMap map, object obfixup, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x2767550", Offset = "0x2765B50", VA = "0x182767550", Slot = "10")]
	protected virtual void ProcessUnknownAttribute(object target)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x2767550", Offset = "0x2765B50", VA = "0x182767550", Slot = "11")]
	protected virtual void ProcessUnknownElement(object target)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x27674D0", Offset = "0x2765AD0", VA = "0x1827674D0")]
	private bool IsReadOnly(XmlTypeMapMember member, TypeData memType, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x276C480", Offset = "0x276AA80", VA = "0x18276C480")]
	private void SetMemberValue(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x276C3B0", Offset = "0x276A9B0", VA = "0x18276C3B0")]
	private void SetMemberValueFromAttr(XmlTypeMapMember member, object ob, object value, bool isValueList)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x2766F60", Offset = "0x2765560", VA = "0x182766F60")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x276B1B0", Offset = "0x27697B0", VA = "0x18276B1B0")]
	private object ReadObjectElement(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x276B7A0", Offset = "0x2769DA0", VA = "0x18276B7A0")]
	private object ReadPrimitiveValue(XmlTypeMapElementInfo elem)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x2767030", Offset = "0x2765630", VA = "0x182767030")]
	private object GetValueFromXmlString(string value, TypeData typeData, XmlTypeMapping typeMap)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x2768020", Offset = "0x2766620", VA = "0x182768020")]
	private object ReadListElement(XmlTypeMapping typeMap, bool isNullable, object list, bool canCreateInstance)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x2768500", Offset = "0x2766B00", VA = "0x182768500")]
	private object ReadListString(XmlTypeMapping typeMap, string values)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x2766310", Offset = "0x2764910", VA = "0x182766310")]
	private void AddListValue(TypeData listType, ref object list, int index, object value, bool canCreateInstance)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x27669B0", Offset = "0x2764FB0", VA = "0x1827669B0")]
	private static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x27669C0", Offset = "0x2764FC0", VA = "0x1827669C0")]
	private object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x2766A20", Offset = "0x2765020", VA = "0x182766A20")]
	private object CreateList(Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x2767450", Offset = "0x2765A50", VA = "0x182767450")]
	private object InitializeList(TypeData listType)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x2766AB0", Offset = "0x27650B0", VA = "0x182766AB0")]
	private void FillList(object list, object items)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x2766680", Offset = "0x2764C80", VA = "0x182766680")]
	private void CopyEnumerableList(object source, object dest)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x276BDF0", Offset = "0x276A3F0", VA = "0x18276BDF0")]
	private object ReadXmlNodeElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x276BE20", Offset = "0x276A420", VA = "0x18276BE20")]
	private object ReadXmlNode(TypeData type, bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x276B6D0", Offset = "0x2769CD0", VA = "0x18276B6D0")]
	private object ReadPrimitiveElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x2767FA0", Offset = "0x27665A0", VA = "0x182767FA0")]
	private object ReadEnumElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x2766DE0", Offset = "0x27653E0", VA = "0x182766DE0")]
	private object GetEnumValue(XmlTypeMapping typeMap, string val)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x276C010", Offset = "0x276A610", VA = "0x18276C010")]
	private object ReadXmlSerializableElement(XmlTypeMapping typeMap, bool isNullable)
	{
		return null;
	}
}
