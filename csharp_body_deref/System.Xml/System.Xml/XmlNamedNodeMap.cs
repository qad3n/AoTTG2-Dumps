// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNamedNodeMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000AC")]
public class XmlNamedNodeMap : IEnumerable
{
	[Token(Token = "0x20000AD")]
	internal struct SmallXmlNodeList
	{
		[Token(Token = "0x20000AE")]
		private class SingleObjectEnumerator : IEnumerator
		{
			[Token(Token = "0x4000498")]
			[FieldOffset(Offset = "0x10")]
			private object loneValue;

			[Token(Token = "0x4000499")]
			[FieldOffset(Offset = "0x18")]
			private int position;

			[Token(Token = "0x17000272")]
			public object Current
			{
				[Token(Token = "0x6000964")]
				[Address(RVA = "0x60DECC0", Offset = "0x60DDCC0", VA = "0x60DECC0", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000963")]
			[Address(RVA = "0x60DEC80", Offset = "0x60DDC80", VA = "0x60DEC80")]
			public SingleObjectEnumerator(object value)
			{
			}

			[Token(Token = "0x6000965")]
			[Address(RVA = "0x60DED10", Offset = "0x60DDD10", VA = "0x60DED10", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000966")]
			[Address(RVA = "0x60DED30", Offset = "0x60DDD30", VA = "0x60DED30", Slot = "6")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x4000497")]
		[FieldOffset(Offset = "0x0")]
		private object field;

		[Token(Token = "0x17000270")]
		public int Count
		{
			[Token(Token = "0x600095D")]
			[Address(RVA = "0x60DE240", Offset = "0x60DD240", VA = "0x60DE240")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000271")]
		public object this[int index]
		{
			[Token(Token = "0x600095E")]
			[Address(RVA = "0x60DDED0", Offset = "0x60DCED0", VA = "0x60DDED0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600095F")]
		[Address(RVA = "0x60DE550", Offset = "0x60DD550", VA = "0x60DE550")]
		public void Add(object value)
		{
		}

		[Token(Token = "0x6000960")]
		[Address(RVA = "0x60DE880", Offset = "0x60DD880", VA = "0x60DE880")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6000961")]
		[Address(RVA = "0x60DEAF0", Offset = "0x60DDAF0", VA = "0x60DEAF0")]
		public void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6000962")]
		[Address(RVA = "0x60DE2C0", Offset = "0x60DD2C0", VA = "0x60DE2C0")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x10")]
	internal XmlNode parent;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x18")]
	internal SmallXmlNodeList nodes;

	[Token(Token = "0x1700026F")]
	public virtual int Count
	{
		[Token(Token = "0x6000954")]
		[Address(RVA = "0x60DE1D0", Offset = "0x60DD1D0", VA = "0x60DE1D0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x60D4F40", Offset = "0x60D3F40", VA = "0x60D4F40")]
	internal XmlNamedNodeMap(XmlNode parent)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x60DDD60", Offset = "0x60DCD60", VA = "0x60DDD60", Slot = "5")]
	public virtual XmlNode GetNamedItem(string name)
	{
		return null;
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x60DDFA0", Offset = "0x60DCFA0", VA = "0x60DDFA0", Slot = "6")]
	public virtual XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x60DE2B0", Offset = "0x60DD2B0", VA = "0x60DE2B0", Slot = "8")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x60DDDF0", Offset = "0x60DCDF0", VA = "0x60DDDF0")]
	internal int FindNodeOffset(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x60DE050", Offset = "0x60DD050", VA = "0x60DE050")]
	internal int FindNodeOffset(string localName, string namespaceURI)
	{
		return default(int);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x60DE3B0", Offset = "0x60DD3B0", VA = "0x60DE3B0", Slot = "9")]
	internal virtual XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x60DE680", Offset = "0x60DD680", VA = "0x60DE680", Slot = "10")]
	internal virtual XmlNode AddNodeForLoad(XmlNode node, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x60DE720", Offset = "0x60DD720", VA = "0x60DE720", Slot = "11")]
	internal virtual XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x60DE180", Offset = "0x60DD180", VA = "0x60DE180")]
	internal XmlNode ReplaceNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x60DE950", Offset = "0x60DD950", VA = "0x60DE950", Slot = "12")]
	internal virtual XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}
}
