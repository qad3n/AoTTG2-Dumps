// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNodeListEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x2714C80", Offset = "0x2713280", VA = "0x182714C80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x2714C40", Offset = "0x2713240", VA = "0x182714C40")]
	public XmlNodeListEnumerator(XPathNodeList list)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x2714BD0", Offset = "0x27131D0", VA = "0x182714BD0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}
}
