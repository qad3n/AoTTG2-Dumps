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
		[Address(RVA = "0x612F1F0", Offset = "0x612E1F0", VA = "0x612F1F0")]
		public CallbackInfo(XmlSerializationWriterInterpreter swi, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x6135C40", Offset = "0x6134C40", VA = "0x6135C40")]
		internal void WriteObject(object ob)
		{
		}

		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x6135C90", Offset = "0x6134C90", VA = "0x6135C90")]
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
	[Address(RVA = "0x612ED60", Offset = "0x612DD60", VA = "0x612ED60")]
	public XmlSerializationWriterInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x612EDA0", Offset = "0x612DDA0", VA = "0x612EDA0", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x612F230", Offset = "0x612E230", VA = "0x612F230")]
	public void WriteRoot(object ob)
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x612F430", Offset = "0x612E430", VA = "0x612F430", Slot = "5")]
	protected virtual void WriteObject(XmlTypeMapping typeMap, object ob, string element, string namesp, bool isNullable, bool needType, bool writeWrappingElem)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x6130010", Offset = "0x612F010", VA = "0x6130010", Slot = "6")]
	protected virtual void WriteMessage(XmlMembersMapping membersMap, object[] parameters)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x6130250", Offset = "0x612F250", VA = "0x6130250", Slot = "7")]
	protected virtual void WriteObjectElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x6130470", Offset = "0x612F470", VA = "0x6130470", Slot = "8")]
	protected virtual void WriteObjectElementAttributes(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x6130CB0", Offset = "0x612FCB0", VA = "0x6130CB0", Slot = "9")]
	protected virtual void WriteObjectElementElements(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x6130210", Offset = "0x612F210", VA = "0x6130210")]
	private void WriteMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x6130500", Offset = "0x612F500", VA = "0x6130500")]
	private void WriteAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x6130D40", Offset = "0x612FD40", VA = "0x6130D40")]
	private void WriteElementMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x61318D0", Offset = "0x61308D0", VA = "0x61318D0")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x6131690", Offset = "0x6130690", VA = "0x6131690")]
	private bool MemberHasValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x61320A0", Offset = "0x61310A0", VA = "0x61320A0")]
	private void WriteMemberElement(XmlTypeMapElementInfo elem, object memberValue)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x612FB60", Offset = "0x612EB60", VA = "0x612FB60")]
	internal static object ImplicitConvert(object obj, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x6133FE0", Offset = "0x6132FE0", VA = "0x6133FE0")]
	private void WritePrimitiveValueLiteral(object memberValue, string name, string ns, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x61342E0", Offset = "0x61332E0", VA = "0x61342E0")]
	private void WritePrimitiveValueEncoded(object memberValue, string name, string ns, XmlQualifiedName xsiType, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x6134590", Offset = "0x6133590", VA = "0x6134590", Slot = "10")]
	protected virtual void WriteListElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x6132640", Offset = "0x6131640", VA = "0x6132640")]
	private void WriteListContent(object container, TypeData listType, ListMap map, object ob, StringBuilder targetString)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x6134770", Offset = "0x6133770", VA = "0x6134770")]
	private int GetListCount(TypeData listType, object ob)
	{
		return default(int);
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x6132FE0", Offset = "0x6131FE0", VA = "0x6132FE0")]
	private void WriteAnyElementContent(XmlTypeMapMemberAnyElement member, object memberValue)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x61357A0", Offset = "0x61347A0", VA = "0x61357A0", Slot = "11")]
	protected virtual void WritePrimitiveElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x61357E0", Offset = "0x61347E0", VA = "0x61357E0", Slot = "12")]
	protected virtual void WriteEnumElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x6131DD0", Offset = "0x6130DD0", VA = "0x6131DD0")]
	private string GetStringValue(XmlTypeMapping typeMap, TypeData type, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x6135810", Offset = "0x6134810", VA = "0x6135810")]
	private string GetEnumXmlValue(XmlTypeMapping typeMap, object ob)
	{
		return null;
	}
}
