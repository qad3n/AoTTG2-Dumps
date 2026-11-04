// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAttributeCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000099")]
public sealed class XmlAttributeCollection : XmlNamedNodeMap, ICollection, IEnumerable
{
	[IndexerName("ItemOf")]
	[Token(Token = "0x170001E0")]
	public XmlAttribute this[int i]
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x270D3C0", Offset = "0x270B9C0", VA = "0x18270D3C0")]
		get
		{
			return null;
		}
	}

	[IndexerName("ItemOf")]
	[Token(Token = "0x170001E1")]
	public XmlAttribute this[string name]
	{
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x270D4B0", Offset = "0x270BAB0", VA = "0x18270D4B0")]
		get
		{
			return null;
		}
	}

	[IndexerName("ItemOf")]
	[Token(Token = "0x170001E2")]
	public XmlAttribute this[string localName, string namespaceURI]
	{
		[Token(Token = "0x60007EB")]
		[Address(RVA = "0x270D260", Offset = "0x270B860", VA = "0x18270D260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x270D240", Offset = "0x270B840", VA = "0x18270D240", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x270D250", Offset = "0x270B850", VA = "0x18270D250")]
	internal XmlAttributeCollection(XmlNode parent)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x270C300", Offset = "0x270A900", VA = "0x18270C300")]
	internal int FindNodeOffsetNS(XmlAttribute node)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x270CFC0", Offset = "0x270B5C0", VA = "0x18270CFC0", Slot = "6")]
	public override XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x270C060", Offset = "0x270A660", VA = "0x18270C060")]
	public XmlAttribute Append(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x270CE60", Offset = "0x270B460", VA = "0x18270CE60")]
	public XmlAttribute Remove(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x270C950", Offset = "0x270AF50", VA = "0x18270C950")]
	public XmlAttribute RemoveAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x270C890", Offset = "0x270AE90", VA = "0x18270C890")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x270D1D0", Offset = "0x270B7D0", VA = "0x18270D1D0", Slot = "13")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x270BE80", Offset = "0x270A480", VA = "0x18270BE80", Slot = "9")]
	internal override XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x270C490", Offset = "0x270AA90", VA = "0x18270C490", Slot = "12")]
	internal override XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x270CB00", Offset = "0x270B100", VA = "0x18270CB00", Slot = "11")]
	internal override XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x270C230", Offset = "0x270A830", VA = "0x18270C230")]
	internal void Detach(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x270C530", Offset = "0x270AB30", VA = "0x18270C530")]
	internal void InsertParentIntoElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x270CCD0", Offset = "0x270B2D0", VA = "0x18270CCD0")]
	internal void RemoveParentFromElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x270CA00", Offset = "0x270B000", VA = "0x18270CA00")]
	internal int RemoveDuplicateAttribute(XmlAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x270C780", Offset = "0x270AD80", VA = "0x18270C780")]
	internal bool PrepareParentInElementIdAttrMap(string attrPrefix, string attrLocalName)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x270CEE0", Offset = "0x270B4E0", VA = "0x18270CEE0")]
	internal void ResetParentInElementIdAttrMap(string oldVal, string newVal)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x270C6C0", Offset = "0x270ACC0", VA = "0x18270C6C0")]
	internal XmlAttribute InternalAppendAttribute(XmlAttribute node)
	{
		return null;
	}
}
