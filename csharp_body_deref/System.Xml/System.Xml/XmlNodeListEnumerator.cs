using System.Collections;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000097")]
internal class XmlNodeListEnumerator : IEnumerator
{
	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x10")]
	private XPathNodeList list;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x18")]
	private int index;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x1C")]
	private bool valid;

	[Token(Token = "0x170001C8")]
	public object Current
	{
		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x448A9F0", Offset = "0x448A9F0", VA = "0x448A9F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x448A8D0", Offset = "0x448A8D0", VA = "0x448A8D0")]
	public XmlNodeListEnumerator(XPathNodeList list)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x448A980", Offset = "0x448A980", VA = "0x448A980", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x448A990", Offset = "0x448A990", VA = "0x448A990", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}
}
