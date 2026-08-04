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
		[Address(RVA = "0x47C8150", Offset = "0x47C8150", VA = "0x47C8150", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x47C8030", Offset = "0x47C8030", VA = "0x47C8030")]
	public XmlNodeListEnumerator(XPathNodeList list)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x47C80E0", Offset = "0x47C80E0", VA = "0x47C80E0", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x47C80F0", Offset = "0x47C80F0", VA = "0x47C80F0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}
}
