using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200014B")]
internal class XmlTypeMapMemberElement : XmlTypeMapMember
{
	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x58")]
	private XmlTypeMapElementInfoList _elementInfo;

	[Token(Token = "0x40006E9")]
	[FieldOffset(Offset = "0x60")]
	private string _choiceMember;

	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x68")]
	private bool _isTextCollector;

	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x70")]
	private TypeData _choiceTypeData;

	[Token(Token = "0x170003B8")]
	public XmlTypeMapElementInfoList ElementInfo
	{
		[Token(Token = "0x6000EBE")]
		[Address(RVA = "0x44F4E20", Offset = "0x44F4E20", VA = "0x44F4E20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x44FB730", Offset = "0x44FB730", VA = "0x44FB730")]
		set
		{
		}
	}

	[Token(Token = "0x170003B9")]
	public string ChoiceMember
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x44FB740", Offset = "0x44FB740", VA = "0x44FB740")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x44FB750", Offset = "0x44FB750", VA = "0x44FB750")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public TypeData ChoiceTypeData
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x44FB760", Offset = "0x44FB760", VA = "0x44FB760")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x44FB770", Offset = "0x44FB770", VA = "0x44FB770")]
		set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	public bool IsXmlTextCollector
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x44FB790", Offset = "0x44FB790", VA = "0x44FB790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x44FB7A0", Offset = "0x44FB7A0", VA = "0x44FB7A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x44FB6C0", Offset = "0x44FB6C0", VA = "0x44FB6C0")]
	public XmlTypeMapMemberElement()
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x44F6500", Offset = "0x44F6500", VA = "0x44F6500")]
	public XmlTypeMapElementInfo FindElement(object ob, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x44FB780", Offset = "0x44FB780", VA = "0x44FB780")]
	public void SetChoice(object ob, object choice)
	{
	}
}
