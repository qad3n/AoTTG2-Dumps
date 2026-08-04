// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializationWriterInterpreter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200013F")]
internal class XmlSerializationWriterInterpreter : XmlSerializationWriter
{
	[Token(Token = "0x2000140")]
	private class CallbackInfo
	{
		[Token(Token = "0x40006B7")]
		[FieldOffset(Offset = "0x10")]
		private XmlSerializationWriterInterpreter _swi;

		[Token(Token = "0x40006B8")]
		[FieldOffset(Offset = "0x18")]
		private XmlTypeMapping _typeMap;

		[Token(Token = "0x6000E5B")]
		[Address(RVA = "0x482F3A0", Offset = "0x482F3A0", VA = "0x482F3A0")]
		public CallbackInfo(XmlSerializationWriterInterpreter swi, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x48365E0", Offset = "0x48365E0", VA = "0x48365E0")]
		internal void WriteObject(object ob)
		{
		}

		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x4836630", Offset = "0x4836630", VA = "0x4836630")]
		internal void WriteEnum(object ob)
		{
		}
	}

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0x48")]
	private XmlMapping _typeMap;

	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x50")]
	private SerializationFormat _format;

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x482EE90", Offset = "0x482EE90", VA = "0x482EE90")]
	public XmlSerializationWriterInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x482EED0", Offset = "0x482EED0", VA = "0x482EED0", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x482F3E0", Offset = "0x482F3E0", VA = "0x482F3E0")]
	public void WriteRoot(object ob)
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x482F5E0", Offset = "0x482F5E0", VA = "0x482F5E0", Slot = "5")]
	protected virtual void WriteObject(XmlTypeMapping typeMap, object ob, string element, string namesp, bool isNullable, bool needType, bool writeWrappingElem)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x48303B0", Offset = "0x48303B0", VA = "0x48303B0", Slot = "6")]
	protected virtual void WriteMessage(XmlMembersMapping membersMap, object[] parameters)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x48305F0", Offset = "0x48305F0", VA = "0x48305F0", Slot = "7")]
	protected virtual void WriteObjectElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x4830830", Offset = "0x4830830", VA = "0x4830830", Slot = "8")]
	protected virtual void WriteObjectElementAttributes(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x4831170", Offset = "0x4831170", VA = "0x4831170", Slot = "9")]
	protected virtual void WriteObjectElementElements(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x48305B0", Offset = "0x48305B0", VA = "0x48305B0")]
	private void WriteMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x48308C0", Offset = "0x48308C0", VA = "0x48308C0")]
	private void WriteAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x4831200", Offset = "0x4831200", VA = "0x4831200")]
	private void WriteElementMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x4831DA0", Offset = "0x4831DA0", VA = "0x4831DA0")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x4831B70", Offset = "0x4831B70", VA = "0x4831B70")]
	private bool MemberHasValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x4832600", Offset = "0x4832600", VA = "0x4832600")]
	private void WriteMemberElement(XmlTypeMapElementInfo elem, object memberValue)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x482FF00", Offset = "0x482FF00", VA = "0x482FF00")]
	internal static object ImplicitConvert(object obj, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x4834780", Offset = "0x4834780", VA = "0x4834780")]
	private void WritePrimitiveValueLiteral(object memberValue, string name, string ns, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x4834A60", Offset = "0x4834A60", VA = "0x4834A60")]
	private void WritePrimitiveValueEncoded(object memberValue, string name, string ns, XmlQualifiedName xsiType, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x4834CD0", Offset = "0x4834CD0", VA = "0x4834CD0", Slot = "10")]
	protected virtual void WriteListElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x4832B70", Offset = "0x4832B70", VA = "0x4832B70")]
	private void WriteListContent(object container, TypeData listType, ListMap map, object ob, StringBuilder targetString)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x4834EB0", Offset = "0x4834EB0", VA = "0x4834EB0")]
	private int GetListCount(TypeData listType, object ob)
	{
		return default(int);
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x4833570", Offset = "0x4833570", VA = "0x4833570")]
	private void WriteAnyElementContent(XmlTypeMapMemberAnyElement member, object memberValue)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x4836130", Offset = "0x4836130", VA = "0x4836130", Slot = "11")]
	protected virtual void WritePrimitiveElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x4836170", Offset = "0x4836170", VA = "0x4836170", Slot = "12")]
	protected virtual void WriteEnumElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x4832330", Offset = "0x4832330", VA = "0x4832330")]
	private string GetStringValue(XmlTypeMapping typeMap, TypeData type, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x48361A0", Offset = "0x48361A0", VA = "0x48361A0")]
	private string GetEnumXmlValue(XmlTypeMapping typeMap, object ob)
	{
		return null;
	}
}
