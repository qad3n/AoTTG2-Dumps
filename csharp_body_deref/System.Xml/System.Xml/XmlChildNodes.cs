using System.Collections;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009D")]
internal class XmlChildNodes : XmlNodeList
{
	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x10")]
	private XmlNode container;

	[Token(Token = "0x170001F2")]
	public override int Count
	{
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x448DF00", Offset = "0x448DF00", VA = "0x448DF00", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x448DE70", Offset = "0x448DE70", VA = "0x448DE70")]
	public XmlChildNodes(XmlNode container)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x448DEA0", Offset = "0x448DEA0", VA = "0x448DEA0", Slot = "6")]
	public override XmlNode Item(int i)
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x448DF60", Offset = "0x448DF60", VA = "0x448DF60", Slot = "8")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
