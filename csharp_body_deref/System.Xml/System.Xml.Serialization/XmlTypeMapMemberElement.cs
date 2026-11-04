// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlTypeMapMemberElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x278DD10", Offset = "0x278C310", VA = "0x18278DD10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x170003B9")]
	public string ChoiceMember
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public TypeData ChoiceTypeData
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	public bool IsXmlTextCollector
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		set
		{
		}
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x278D190", Offset = "0x278B790", VA = "0x18278D190")]
	public XmlTypeMapMemberElement()
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x278D660", Offset = "0x278BC60", VA = "0x18278D660")]
	public XmlTypeMapElementInfo FindElement(object ob, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x278DB50", Offset = "0x278C150", VA = "0x18278DB50")]
	public void SetChoice(object ob, object choice)
	{
	}
}
