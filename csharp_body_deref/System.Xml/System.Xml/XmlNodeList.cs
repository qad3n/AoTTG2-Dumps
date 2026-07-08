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
		[Address(RVA = "0x44A1BC0", Offset = "0x44A1BC0", VA = "0x44A1BC0", Slot = "9")]
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
	[Address(RVA = "0x44A1BE0", Offset = "0x44A1BE0", VA = "0x44A1BE0", Slot = "5")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x44A1C00", Offset = "0x44A1C00", VA = "0x44A1C00", Slot = "10")]
	protected virtual void PrivateDisposeNodeList()
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x44A1C10", Offset = "0x44A1C10", VA = "0x44A1C10")]
	protected XmlNodeList()
	{
	}
}
