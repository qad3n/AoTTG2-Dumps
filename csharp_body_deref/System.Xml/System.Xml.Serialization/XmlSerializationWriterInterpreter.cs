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
		[Address(RVA = "0x44F1C40", Offset = "0x44F1C40", VA = "0x44F1C40")]
		public CallbackInfo(XmlSerializationWriterInterpreter swi, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x44F8E80", Offset = "0x44F8E80", VA = "0x44F8E80")]
		internal void WriteObject(object ob)
		{
		}

		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x44F8ED0", Offset = "0x44F8ED0", VA = "0x44F8ED0")]
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
	[Address(RVA = "0x44F1730", Offset = "0x44F1730", VA = "0x44F1730")]
	public XmlSerializationWriterInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x44F1770", Offset = "0x44F1770", VA = "0x44F1770", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x44F1C80", Offset = "0x44F1C80", VA = "0x44F1C80")]
	public void WriteRoot(object ob)
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x44F1E80", Offset = "0x44F1E80", VA = "0x44F1E80", Slot = "5")]
	protected virtual void WriteObject(XmlTypeMapping typeMap, object ob, string element, string namesp, bool isNullable, bool needType, bool writeWrappingElem)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x44F2C50", Offset = "0x44F2C50", VA = "0x44F2C50", Slot = "6")]
	protected virtual void WriteMessage(XmlMembersMapping membersMap, object[] parameters)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x44F2E90", Offset = "0x44F2E90", VA = "0x44F2E90", Slot = "7")]
	protected virtual void WriteObjectElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x44F30D0", Offset = "0x44F30D0", VA = "0x44F30D0", Slot = "8")]
	protected virtual void WriteObjectElementAttributes(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x44F3A10", Offset = "0x44F3A10", VA = "0x44F3A10", Slot = "9")]
	protected virtual void WriteObjectElementElements(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x44F2E50", Offset = "0x44F2E50", VA = "0x44F2E50")]
	private void WriteMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x44F3160", Offset = "0x44F3160", VA = "0x44F3160")]
	private void WriteAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x44F3AA0", Offset = "0x44F3AA0", VA = "0x44F3AA0")]
	private void WriteElementMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x44F4640", Offset = "0x44F4640", VA = "0x44F4640")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x44F4410", Offset = "0x44F4410", VA = "0x44F4410")]
	private bool MemberHasValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x44F4EA0", Offset = "0x44F4EA0", VA = "0x44F4EA0")]
	private void WriteMemberElement(XmlTypeMapElementInfo elem, object memberValue)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x44F27A0", Offset = "0x44F27A0", VA = "0x44F27A0")]
	internal static object ImplicitConvert(object obj, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x44F7020", Offset = "0x44F7020", VA = "0x44F7020")]
	private void WritePrimitiveValueLiteral(object memberValue, string name, string ns, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x44F7300", Offset = "0x44F7300", VA = "0x44F7300")]
	private void WritePrimitiveValueEncoded(object memberValue, string name, string ns, XmlQualifiedName xsiType, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x44F7570", Offset = "0x44F7570", VA = "0x44F7570", Slot = "10")]
	protected virtual void WriteListElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x44F5410", Offset = "0x44F5410", VA = "0x44F5410")]
	private void WriteListContent(object container, TypeData listType, ListMap map, object ob, StringBuilder targetString)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x44F7750", Offset = "0x44F7750", VA = "0x44F7750")]
	private int GetListCount(TypeData listType, object ob)
	{
		return default(int);
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x44F5E10", Offset = "0x44F5E10", VA = "0x44F5E10")]
	private void WriteAnyElementContent(XmlTypeMapMemberAnyElement member, object memberValue)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x44F89D0", Offset = "0x44F89D0", VA = "0x44F89D0", Slot = "11")]
	protected virtual void WritePrimitiveElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x44F8A10", Offset = "0x44F8A10", VA = "0x44F8A10", Slot = "12")]
	protected virtual void WriteEnumElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x44F4BD0", Offset = "0x44F4BD0", VA = "0x44F4BD0")]
	private string GetStringValue(XmlTypeMapping typeMap, TypeData type, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x44F8A40", Offset = "0x44F8A40", VA = "0x44F8A40")]
	private string GetEnumXmlValue(XmlTypeMapping typeMap, object ob)
	{
		return null;
	}
}
