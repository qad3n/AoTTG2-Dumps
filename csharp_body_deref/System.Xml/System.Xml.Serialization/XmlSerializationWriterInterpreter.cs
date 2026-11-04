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
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public CallbackInfo(XmlSerializationWriterInterpreter swi, XmlTypeMapping typeMap)
		{
		}

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x277A140", Offset = "0x2778740", VA = "0x18277A140")]
		internal void WriteObject(object ob)
		{
		}

		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x277A0E0", Offset = "0x27786E0", VA = "0x18277A0E0")]
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
	[Address(RVA = "0x278B6B0", Offset = "0x2789CB0", VA = "0x18278B6B0")]
	public XmlSerializationWriterInterpreter(XmlMapping typeMap)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x2787D30", Offset = "0x2786330", VA = "0x182787D30", Slot = "4")]
	protected override void InitCallbacks()
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x278B420", Offset = "0x2789A20", VA = "0x18278B420")]
	public void WriteRoot(object ob)
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x278A740", Offset = "0x2788D40", VA = "0x18278A740", Slot = "5")]
	protected virtual void WriteObject(XmlTypeMapping typeMap, object ob, string element, string namesp, bool isNullable, bool needType, bool writeWrappingElem)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x278A2A0", Offset = "0x27888A0", VA = "0x18278A2A0", Slot = "6")]
	protected virtual void WriteMessage(XmlMembersMapping membersMap, object[] parameters)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x278A600", Offset = "0x2788C00", VA = "0x18278A600", Slot = "7")]
	protected virtual void WriteObjectElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x278A4A0", Offset = "0x2788AA0", VA = "0x18278A4A0", Slot = "8")]
	protected virtual void WriteObjectElementAttributes(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x278A550", Offset = "0x2788B50", VA = "0x18278A550", Slot = "9")]
	protected virtual void WriteObjectElementElements(XmlTypeMapping typeMap, object ob)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x278A250", Offset = "0x2788850", VA = "0x18278A250")]
	private void WriteMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x2788750", Offset = "0x2786D50", VA = "0x182788750")]
	private void WriteAttributeMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x2788C30", Offset = "0x2787230", VA = "0x182788C30")]
	private void WriteElementMembers(ClassMap map, object ob, bool isValueList)
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x2787600", Offset = "0x2785C00", VA = "0x182787600")]
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return null;
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x2788050", Offset = "0x2786650", VA = "0x182788050")]
	private bool MemberHasValue(XmlTypeMapMember member, object ob, bool isValueList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x2789C80", Offset = "0x2788280", VA = "0x182789C80")]
	private void WriteMemberElement(XmlTypeMapElementInfo elem, object memberValue)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x27879C0", Offset = "0x2785FC0", VA = "0x1827879C0")]
	internal static object ImplicitConvert(object obj, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x278B1D0", Offset = "0x27897D0", VA = "0x18278B1D0")]
	private void WritePrimitiveValueLiteral(object memberValue, string name, string ns, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x278AF50", Offset = "0x2789550", VA = "0x18278AF50")]
	private void WritePrimitiveValueEncoded(object memberValue, string name, string ns, XmlQualifiedName xsiType, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable)
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x2789970", Offset = "0x2787F70", VA = "0x182789970", Slot = "10")]
	protected virtual void WriteListElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x2789290", Offset = "0x2787890", VA = "0x182789290")]
	private void WriteListContent(object container, TypeData listType, ListMap map, object ob, StringBuilder targetString)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x27874E0", Offset = "0x2785AE0", VA = "0x1827874E0")]
	private int GetListCount(TypeData listType, object ob)
	{
		return default(int);
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x2788290", Offset = "0x2786890", VA = "0x182788290")]
	private void WriteAnyElementContent(XmlTypeMapMemberAnyElement member, object memberValue)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x278AF00", Offset = "0x2789500", VA = "0x18278AF00", Slot = "11")]
	protected virtual void WritePrimitiveElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x27891C0", Offset = "0x27877C0", VA = "0x1827891C0", Slot = "12")]
	protected virtual void WriteEnumElement(XmlTypeMapping typeMap, object ob, string element, string namesp)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x27876D0", Offset = "0x2785CD0", VA = "0x1827876D0")]
	private string GetStringValue(XmlTypeMapping typeMap, TypeData type, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x2787430", Offset = "0x2785A30", VA = "0x182787430")]
	private string GetEnumXmlValue(XmlTypeMapping typeMap, object ob)
	{
		return null;
	}
}
