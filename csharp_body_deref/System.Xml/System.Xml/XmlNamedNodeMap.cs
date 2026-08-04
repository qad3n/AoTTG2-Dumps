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
				[Address(RVA = "0x47DBF80", Offset = "0x47DBF80", VA = "0x47DBF80", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000963")]
			[Address(RVA = "0x47DBF40", Offset = "0x47DBF40", VA = "0x47DBF40")]
			public SingleObjectEnumerator(object value)
			{
			}

			[Token(Token = "0x6000965")]
			[Address(RVA = "0x47DBFD0", Offset = "0x47DBFD0", VA = "0x47DBFD0", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000966")]
			[Address(RVA = "0x47DBFF0", Offset = "0x47DBFF0", VA = "0x47DBFF0", Slot = "6")]
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
			[Address(RVA = "0x47DB520", Offset = "0x47DB520", VA = "0x47DB520")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000271")]
		public object this[int index]
		{
			[Token(Token = "0x600095E")]
			[Address(RVA = "0x47DB190", Offset = "0x47DB190", VA = "0x47DB190")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600095F")]
		[Address(RVA = "0x47DB830", Offset = "0x47DB830", VA = "0x47DB830")]
		public void Add(object value)
		{
		}

		[Token(Token = "0x6000960")]
		[Address(RVA = "0x47DBB60", Offset = "0x47DBB60", VA = "0x47DBB60")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6000961")]
		[Address(RVA = "0x47DBDB0", Offset = "0x47DBDB0", VA = "0x47DBDB0")]
		public void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6000962")]
		[Address(RVA = "0x47DB5C0", Offset = "0x47DB5C0", VA = "0x47DB5C0")]
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
		[Address(RVA = "0x47DB490", Offset = "0x47DB490", VA = "0x47DB490", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x47D1BD0", Offset = "0x47D1BD0", VA = "0x47D1BD0")]
	internal XmlNamedNodeMap(XmlNode parent)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x47DB020", Offset = "0x47DB020", VA = "0x47DB020", Slot = "5")]
	public virtual XmlNode GetNamedItem(string name)
	{
		return null;
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x47DB260", Offset = "0x47DB260", VA = "0x47DB260", Slot = "6")]
	public virtual XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x47DB5B0", Offset = "0x47DB5B0", VA = "0x47DB5B0", Slot = "8")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x47DB0B0", Offset = "0x47DB0B0", VA = "0x47DB0B0")]
	internal int FindNodeOffset(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x47DB310", Offset = "0x47DB310", VA = "0x47DB310")]
	internal int FindNodeOffset(string localName, string namespaceURI)
	{
		return default(int);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x47DB6B0", Offset = "0x47DB6B0", VA = "0x47DB6B0", Slot = "9")]
	internal virtual XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x47DB960", Offset = "0x47DB960", VA = "0x47DB960", Slot = "10")]
	internal virtual XmlNode AddNodeForLoad(XmlNode node, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x47DBA00", Offset = "0x47DBA00", VA = "0x47DBA00", Slot = "11")]
	internal virtual XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x47DB440", Offset = "0x47DB440", VA = "0x47DB440")]
	internal XmlNode ReplaceNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x47DBC30", Offset = "0x47DBC30", VA = "0x47DBC30", Slot = "12")]
	internal virtual XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}
}
