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
				[Address(RVA = "0x449E820", Offset = "0x449E820", VA = "0x449E820", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000963")]
			[Address(RVA = "0x449E7E0", Offset = "0x449E7E0", VA = "0x449E7E0")]
			public SingleObjectEnumerator(object value)
			{
			}

			[Token(Token = "0x6000965")]
			[Address(RVA = "0x449E870", Offset = "0x449E870", VA = "0x449E870", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000966")]
			[Address(RVA = "0x449E890", Offset = "0x449E890", VA = "0x449E890", Slot = "6")]
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
			[Address(RVA = "0x449DDC0", Offset = "0x449DDC0", VA = "0x449DDC0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000271")]
		public object this[int index]
		{
			[Token(Token = "0x600095E")]
			[Address(RVA = "0x449DA30", Offset = "0x449DA30", VA = "0x449DA30")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600095F")]
		[Address(RVA = "0x449E0D0", Offset = "0x449E0D0", VA = "0x449E0D0")]
		public void Add(object value)
		{
		}

		[Token(Token = "0x6000960")]
		[Address(RVA = "0x449E400", Offset = "0x449E400", VA = "0x449E400")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6000961")]
		[Address(RVA = "0x449E650", Offset = "0x449E650", VA = "0x449E650")]
		public void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6000962")]
		[Address(RVA = "0x449DE60", Offset = "0x449DE60", VA = "0x449DE60")]
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
		[Address(RVA = "0x449DD30", Offset = "0x449DD30", VA = "0x449DD30", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x4494470", Offset = "0x4494470", VA = "0x4494470")]
	internal XmlNamedNodeMap(XmlNode parent)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x449D8C0", Offset = "0x449D8C0", VA = "0x449D8C0", Slot = "5")]
	public virtual XmlNode GetNamedItem(string name)
	{
		return null;
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x449DB00", Offset = "0x449DB00", VA = "0x449DB00", Slot = "6")]
	public virtual XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x449DE50", Offset = "0x449DE50", VA = "0x449DE50", Slot = "8")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x449D950", Offset = "0x449D950", VA = "0x449D950")]
	internal int FindNodeOffset(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x449DBB0", Offset = "0x449DBB0", VA = "0x449DBB0")]
	internal int FindNodeOffset(string localName, string namespaceURI)
	{
		return default(int);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x449DF50", Offset = "0x449DF50", VA = "0x449DF50", Slot = "9")]
	internal virtual XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x449E200", Offset = "0x449E200", VA = "0x449E200", Slot = "10")]
	internal virtual XmlNode AddNodeForLoad(XmlNode node, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x449E2A0", Offset = "0x449E2A0", VA = "0x449E2A0", Slot = "11")]
	internal virtual XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x449DCE0", Offset = "0x449DCE0", VA = "0x449DCE0")]
	internal XmlNode ReplaceNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x449E4D0", Offset = "0x449E4D0", VA = "0x449E4D0", Slot = "12")]
	internal virtual XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}
}
