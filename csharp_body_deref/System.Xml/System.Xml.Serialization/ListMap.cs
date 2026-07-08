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
		[Address(RVA = "0x44FF100", Offset = "0x44FF100", VA = "0x44FF100")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public XmlTypeMapElementInfoList ItemInfo
	{
		[Token(Token = "0x6000EFF")]
		[Address(RVA = "0x44FF110", Offset = "0x44FF110", VA = "0x44FF110")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F00")]
		[Address(RVA = "0x44FF120", Offset = "0x44FF120", VA = "0x44FF120")]
		set
		{
		}
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x44F7AD0", Offset = "0x44F7AD0", VA = "0x44F7AD0")]
	public XmlTypeMapElementInfo FindElement(object ob, int index, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x44FF130", Offset = "0x44FF130", VA = "0x44FF130")]
	public XmlTypeMapElementInfo FindElement(string elementName, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x44FF4F0", Offset = "0x44FF4F0", VA = "0x44FF4F0")]
	public XmlTypeMapElementInfo FindTextElement()
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x44F7860", Offset = "0x44F7860", VA = "0x44F7860")]
	public void GetArrayType(int itemCount, out string localName, out string ns)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x44FF8C0", Offset = "0x44FF8C0", VA = "0x44FF8C0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x44FFA20", Offset = "0x44FFA20", VA = "0x44FFA20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x44FFA30", Offset = "0x44FFA30", VA = "0x44FFA30")]
	public ListMap()
	{
	}
}
