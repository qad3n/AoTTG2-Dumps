// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlChildNodes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47CB660", Offset = "0x47CB660", VA = "0x47CB660", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x47CB5D0", Offset = "0x47CB5D0", VA = "0x47CB5D0")]
	public XmlChildNodes(XmlNode container)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x47CB600", Offset = "0x47CB600", VA = "0x47CB600", Slot = "6")]
	public override XmlNode Item(int i)
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x47CB6C0", Offset = "0x47CB6C0", VA = "0x47CB6C0", Slot = "8")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
