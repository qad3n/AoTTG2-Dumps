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
		[Address(RVA = "0x6132020", Offset = "0x6131020", VA = "0x6132020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x6138330", Offset = "0x6137330", VA = "0x6138330")]
		set
		{
		}
	}

	[Token(Token = "0x170003B9")]
	public string ChoiceMember
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x6138340", Offset = "0x6137340", VA = "0x6138340")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x6138350", Offset = "0x6137350", VA = "0x6138350")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public TypeData ChoiceTypeData
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x6138360", Offset = "0x6137360", VA = "0x6138360")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x6138370", Offset = "0x6137370", VA = "0x6138370")]
		set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	public bool IsXmlTextCollector
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x6138390", Offset = "0x6137390", VA = "0x6138390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x61383A0", Offset = "0x61373A0", VA = "0x61383A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x61382C0", Offset = "0x61372C0", VA = "0x61382C0")]
	public XmlTypeMapMemberElement()
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x6133620", Offset = "0x6132620", VA = "0x6133620")]
	public XmlTypeMapElementInfo FindElement(object ob, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x6138380", Offset = "0x6137380", VA = "0x6138380")]
	public void SetChoice(object ob, object choice)
	{
	}
}
