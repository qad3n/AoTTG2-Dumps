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
				[Address(RVA = "0x2729400", Offset = "0x2727A00", VA = "0x182729400", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000963")]
			[Address(RVA = "0x18A2510", Offset = "0x18A0B10", VA = "0x1818A2510")]
			public SingleObjectEnumerator(object value)
			{
			}

			[Token(Token = "0x6000965")]
			[Address(RVA = "0x27293E0", Offset = "0x27279E0", VA = "0x1827293E0", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000966")]
			[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "6")]
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
			[Address(RVA = "0x27299D0", Offset = "0x2727FD0", VA = "0x1827299D0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000271")]
		public object this[int index]
		{
			[Token(Token = "0x600095E")]
			[Address(RVA = "0x2729A50", Offset = "0x2728050", VA = "0x182729A50")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600095F")]
		[Address(RVA = "0x2729460", Offset = "0x2727A60", VA = "0x182729460")]
		public void Add(object value)
		{
		}

		[Token(Token = "0x6000960")]
		[Address(RVA = "0x27298A0", Offset = "0x2727EA0", VA = "0x1827298A0")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6000961")]
		[Address(RVA = "0x27296A0", Offset = "0x2727CA0", VA = "0x1827296A0")]
		public void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6000962")]
		[Address(RVA = "0x27295A0", Offset = "0x2727BA0", VA = "0x1827295A0")]
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
		[Address(RVA = "0x27330B0", Offset = "0x27316B0", VA = "0x1827330B0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal XmlNamedNodeMap(XmlNode parent)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x2732A10", Offset = "0x2731010", VA = "0x182732A10", Slot = "5")]
	public virtual XmlNode GetNamedItem(string name)
	{
		return null;
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x2732ED0", Offset = "0x27314D0", VA = "0x182732ED0", Slot = "6")]
	public virtual XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x2732A00", Offset = "0x2731000", VA = "0x182732A00", Slot = "8")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x27327E0", Offset = "0x2730DE0", VA = "0x1827327E0")]
	internal int FindNodeOffset(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x27328D0", Offset = "0x2730ED0", VA = "0x1827328D0")]
	internal int FindNodeOffset(string localName, string namespaceURI)
	{
		return default(int);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x2732650", Offset = "0x2730C50", VA = "0x182732650", Slot = "9")]
	internal virtual XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x27325A0", Offset = "0x2730BA0", VA = "0x1827325A0", Slot = "10")]
	internal virtual XmlNode AddNodeForLoad(XmlNode node, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x2732D10", Offset = "0x2731310", VA = "0x182732D10", Slot = "11")]
	internal virtual XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x2732E80", Offset = "0x2731480", VA = "0x182732E80")]
	internal XmlNode ReplaceNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x2732B70", Offset = "0x2731170", VA = "0x182732B70", Slot = "12")]
	internal virtual XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}
}
