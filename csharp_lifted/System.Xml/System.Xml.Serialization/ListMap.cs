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
		[Address(RVA = "0x613B880", Offset = "0x613A880", VA = "0x613B880")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public XmlTypeMapElementInfoList ItemInfo
	{
		[Token(Token = "0x6000EFF")]
		[Address(RVA = "0x613B890", Offset = "0x613A890", VA = "0x613B890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F00")]
		[Address(RVA = "0x613B8A0", Offset = "0x613A8A0", VA = "0x613B8A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x6134AF0", Offset = "0x6133AF0", VA = "0x6134AF0")]
	public XmlTypeMapElementInfo FindElement(object ob, int index, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x613B8B0", Offset = "0x613A8B0", VA = "0x613B8B0")]
	public XmlTypeMapElementInfo FindElement(string elementName, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x613BBE0", Offset = "0x613ABE0", VA = "0x613BBE0")]
	public XmlTypeMapElementInfo FindTextElement()
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x6134880", Offset = "0x6133880", VA = "0x6134880")]
	public void GetArrayType(int itemCount, out string localName, out string ns)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x613BF00", Offset = "0x613AF00", VA = "0x613BF00", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x613C060", Offset = "0x613B060", VA = "0x613C060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x613C070", Offset = "0x613B070", VA = "0x613C070")]
	public ListMap()
	{
	}
}
