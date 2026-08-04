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
		[Address(RVA = "0x483C860", Offset = "0x483C860", VA = "0x483C860")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public XmlTypeMapElementInfoList ItemInfo
	{
		[Token(Token = "0x6000EFF")]
		[Address(RVA = "0x483C870", Offset = "0x483C870", VA = "0x483C870")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F00")]
		[Address(RVA = "0x483C880", Offset = "0x483C880", VA = "0x483C880")]
		set
		{
		}
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x4835230", Offset = "0x4835230", VA = "0x4835230")]
	public XmlTypeMapElementInfo FindElement(object ob, int index, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x483C890", Offset = "0x483C890", VA = "0x483C890")]
	public XmlTypeMapElementInfo FindElement(string elementName, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x483CC50", Offset = "0x483CC50", VA = "0x483CC50")]
	public XmlTypeMapElementInfo FindTextElement()
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x4834FC0", Offset = "0x4834FC0", VA = "0x4834FC0")]
	public void GetArrayType(int itemCount, out string localName, out string ns)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x483D020", Offset = "0x483D020", VA = "0x483D020", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x483D180", Offset = "0x483D180", VA = "0x483D180", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x483D190", Offset = "0x483D190", VA = "0x483D190")]
	public ListMap()
	{
	}
}
