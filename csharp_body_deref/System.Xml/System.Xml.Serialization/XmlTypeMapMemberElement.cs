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
		[Address(RVA = "0x4832580", Offset = "0x4832580", VA = "0x4832580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x4838E90", Offset = "0x4838E90", VA = "0x4838E90")]
		set
		{
		}
	}

	[Token(Token = "0x170003B9")]
	public string ChoiceMember
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x4838EA0", Offset = "0x4838EA0", VA = "0x4838EA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x4838EB0", Offset = "0x4838EB0", VA = "0x4838EB0")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public TypeData ChoiceTypeData
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x4838EC0", Offset = "0x4838EC0", VA = "0x4838EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x4838ED0", Offset = "0x4838ED0", VA = "0x4838ED0")]
		set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	public bool IsXmlTextCollector
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x4838EF0", Offset = "0x4838EF0", VA = "0x4838EF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x4838F00", Offset = "0x4838F00", VA = "0x4838F00")]
		set
		{
		}
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x4838E20", Offset = "0x4838E20", VA = "0x4838E20")]
	public XmlTypeMapMemberElement()
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x4833C60", Offset = "0x4833C60", VA = "0x4833C60")]
	public XmlTypeMapElementInfo FindElement(object ob, object memberValue)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x4838EE0", Offset = "0x4838EE0", VA = "0x4838EE0")]
	public void SetChoice(object ob, object choice)
	{
	}
}
