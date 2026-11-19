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
		[Address(RVA = "0x60CE7D0", Offset = "0x60CD7D0", VA = "0x60CE7D0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x60CE7F0", Offset = "0x60CD7F0", VA = "0x60CE7F0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public override string InnerText
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x60CE810", Offset = "0x60CD810", VA = "0x60CE810", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x60CE830", Offset = "0x60CD830", VA = "0x60CE830", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	public virtual string Data
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x60CE850", Offset = "0x60CD850", VA = "0x60CE850", Slot = "62")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x60CE880", Offset = "0x60CD880", VA = "0x60CE880", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x60CE5B0", Offset = "0x60CD5B0", VA = "0x60CE5B0")]
	protected internal XmlCharacterData(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x60CE940", Offset = "0x60CD940", VA = "0x60CE940")]
	internal bool CheckOnData(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x60CE970", Offset = "0x60CD970", VA = "0x60CE970")]
	internal bool DecideXPNodeTypeForTextNodes(XmlNode node, ref XPathNodeType xnt)
	{
		return default(bool);
	}
}
