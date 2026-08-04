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
		[Address(RVA = "0x47DF320", Offset = "0x47DF320", VA = "0x47DF320", Slot = "9")]
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
	[Address(RVA = "0x47DF340", Offset = "0x47DF340", VA = "0x47DF340", Slot = "5")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x47DF360", Offset = "0x47DF360", VA = "0x47DF360", Slot = "10")]
	protected virtual void PrivateDisposeNodeList()
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x47DF370", Offset = "0x47DF370", VA = "0x47DF370")]
	protected XmlNodeList()
	{
	}
}
