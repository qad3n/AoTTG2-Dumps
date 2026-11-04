// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNodeList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B2")]
public abstract class XmlNodeList : IEnumerable, IDisposable
{
	[Token(Token = "0x17000291")]
	public abstract int Count
	{
		[Token(Token = "0x60009B3")]
		get;
	}

	[IndexerName("ItemOf")]
	[Token(Token = "0x17000292")]
	public virtual XmlNode this[int i]
	{
		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x19C4B60", Offset = "0x19C3160", VA = "0x1819C4B60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B2")]
	public abstract XmlNode Item(int index);

	[Token(Token = "0x60009B4")]
	public abstract IEnumerator GetEnumerator();

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220", Slot = "5")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected virtual void PrivateDisposeNodeList()
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlNodeList()
	{
	}
}
