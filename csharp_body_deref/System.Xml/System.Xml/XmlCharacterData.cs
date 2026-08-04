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
		[Address(RVA = "0x47CB150", Offset = "0x47CB150", VA = "0x47CB150", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x47CB170", Offset = "0x47CB170", VA = "0x47CB170", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public override string InnerText
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x47CB190", Offset = "0x47CB190", VA = "0x47CB190", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x47CB1B0", Offset = "0x47CB1B0", VA = "0x47CB1B0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	public virtual string Data
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x47CB1D0", Offset = "0x47CB1D0", VA = "0x47CB1D0", Slot = "62")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x47CB200", Offset = "0x47CB200", VA = "0x47CB200", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x47CAF30", Offset = "0x47CAF30", VA = "0x47CAF30")]
	protected internal XmlCharacterData(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x47CB2C0", Offset = "0x47CB2C0", VA = "0x47CB2C0")]
	internal bool CheckOnData(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x47CB2F0", Offset = "0x47CB2F0", VA = "0x47CB2F0")]
	internal bool DecideXPNodeTypeForTextNodes(XmlNode node, ref XPathNodeType xnt)
	{
		return default(bool);
	}
}
