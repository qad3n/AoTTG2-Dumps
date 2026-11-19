// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathAxisIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C7")]
internal abstract class XPathAxisIterator : XPathNodeIterator
{
	[Token(Token = "0x4000EA8")]
	[FieldOffset(Offset = "0x18")]
	internal XPathNavigator nav;

	[Token(Token = "0x4000EA9")]
	[FieldOffset(Offset = "0x20")]
	internal XPathNodeType type;

	[Token(Token = "0x4000EAA")]
	[FieldOffset(Offset = "0x28")]
	internal string name;

	[Token(Token = "0x4000EAB")]
	[FieldOffset(Offset = "0x30")]
	internal string uri;

	[Token(Token = "0x4000EAC")]
	[FieldOffset(Offset = "0x38")]
	internal int position;

	[Token(Token = "0x4000EAD")]
	[FieldOffset(Offset = "0x3C")]
	internal bool matchSelf;

	[Token(Token = "0x4000EAE")]
	[FieldOffset(Offset = "0x3D")]
	internal bool first;

	[Token(Token = "0x17000734")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C0B")]
		[Address(RVA = "0x608F6F0", Offset = "0x608E6F0", VA = "0x608F6F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000735")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C0C")]
		[Address(RVA = "0x608F700", Offset = "0x608E700", VA = "0x608F700", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000736")]
	protected virtual bool Matches
	{
		[Token(Token = "0x6001C0D")]
		[Address(RVA = "0x608F710", Offset = "0x608E710", VA = "0x608F710", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C07")]
	[Address(RVA = "0x608F4F0", Offset = "0x608E4F0", VA = "0x608F4F0")]
	public XPathAxisIterator(XPathNavigator nav, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C08")]
	[Address(RVA = "0x608F530", Offset = "0x608E530", VA = "0x608F530")]
	public XPathAxisIterator(XPathNavigator nav, XPathNodeType type, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x608F580", Offset = "0x608E580", VA = "0x608F580")]
	public XPathAxisIterator(XPathNavigator nav, string name, string namespaceURI, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x608F660", Offset = "0x608E660", VA = "0x608F660")]
	public XPathAxisIterator(XPathAxisIterator it)
	{
	}
}
