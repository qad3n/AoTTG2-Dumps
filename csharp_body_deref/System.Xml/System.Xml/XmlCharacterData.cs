// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlCharacterData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009B")]
public abstract class XmlCharacterData : XmlLinkedNode
{
	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x20")]
	private string data;

	[Token(Token = "0x170001ED")]
	public override string Value
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x270E920", Offset = "0x270CF20", VA = "0x18270E920", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x270EA20", Offset = "0x270D020", VA = "0x18270EA20", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public override string InnerText
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x1B78A70", Offset = "0x1B77070", VA = "0x181B78A70", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x270EA00", Offset = "0x270D000", VA = "0x18270EA00", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	public virtual string Data
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x270E900", Offset = "0x270CF00", VA = "0x18270E900", Slot = "62")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x270E940", Offset = "0x270CF40", VA = "0x18270E940", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x270E6A0", Offset = "0x270CCA0", VA = "0x18270E6A0")]
	protected internal XmlCharacterData(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x270E7F0", Offset = "0x270CDF0", VA = "0x18270E7F0")]
	internal bool CheckOnData(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x270E830", Offset = "0x270CE30", VA = "0x18270E830")]
	internal bool DecideXPNodeTypeForTextNodes(XmlNode node, ref XPathNodeType xnt)
	{
		return default(bool);
	}
}
