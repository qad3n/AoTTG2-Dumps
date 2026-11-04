// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.ListMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000155")]
internal class ListMap : ObjectMap
{
	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x10")]
	private XmlTypeMapElementInfoList _itemInfo;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x18")]
	private string _choiceMember;

	[Token(Token = "0x170003D7")]
	public string ChoiceMember
	{
		[Token(Token = "0x6000EFE")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public XmlTypeMapElementInfoList ItemInfo
	{
		[Token(Token = "0x6000EFF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F00")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x277F3B0", Offset = "0x277D9B0", VA = "0x18277F3B0")]
	public XmlTypeMapElementInfo FindElement(object ob, int index, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x277F980", Offset = "0x277DF80", VA = "0x18277F980")]
	public XmlTypeMapElementInfo FindElement(string elementName, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x277FB60", Offset = "0x277E160", VA = "0x18277FB60")]
	public XmlTypeMapElementInfo FindTextElement()
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x277FD40", Offset = "0x277E340", VA = "0x18277FD40")]
	public void GetArrayType(int itemCount, out string localName, out string ns)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x277F230", Offset = "0x277D830", VA = "0x18277F230", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ListMap()
	{
	}
}
