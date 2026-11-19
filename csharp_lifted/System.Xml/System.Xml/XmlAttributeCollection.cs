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
		[Address(RVA = "0x60C6430", Offset = "0x60C5430", VA = "0x60C6430")]
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
		[Address(RVA = "0x60CCDE0", Offset = "0x60CBDE0", VA = "0x60CCDE0")]
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
		[Address(RVA = "0x60CCEE0", Offset = "0x60CBEE0", VA = "0x60CCEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x60CDA10", Offset = "0x60CCA10", VA = "0x60CDA10", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x60CDA20", Offset = "0x60CCA20", VA = "0x60CDA20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x60CDA30", Offset = "0x60CCA30", VA = "0x60CDA30", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x60CCDD0", Offset = "0x60CBDD0", VA = "0x60CCDD0")]
	internal XmlAttributeCollection(XmlNode parent)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x60CD030", Offset = "0x60CC030", VA = "0x60CD030")]
	internal int FindNodeOffsetNS(XmlAttribute node)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x60CD1F0", Offset = "0x60CC1F0", VA = "0x60CD1F0", Slot = "6")]
	public override XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x60CD470", Offset = "0x60CC470", VA = "0x60CD470")]
	public XmlAttribute Append(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x60CD790", Offset = "0x60CC790", VA = "0x60CD790")]
	public XmlAttribute Remove(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x60CD810", Offset = "0x60CC810", VA = "0x60CD810")]
	public XmlAttribute RemoveAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x60CD8B0", Offset = "0x60CC8B0", VA = "0x60CD8B0")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x60CD980", Offset = "0x60CC980", VA = "0x60CD980", Slot = "13")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x60CDA40", Offset = "0x60CCA40", VA = "0x60CDA40", Slot = "9")]
	internal override XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x60CDBE0", Offset = "0x60CCBE0", VA = "0x60CDBE0", Slot = "12")]
	internal override XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x60CDC70", Offset = "0x60CCC70", VA = "0x60CDC70", Slot = "11")]
	internal override XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x60CD580", Offset = "0x60CC580", VA = "0x60CD580")]
	internal void Detach(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x60CD630", Offset = "0x60CC630", VA = "0x60CD630")]
	internal void InsertParentIntoElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x60CDE00", Offset = "0x60CCE00", VA = "0x60CDE00")]
	internal void RemoveParentFromElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x60CDB00", Offset = "0x60CCB00", VA = "0x60CDB00")]
	internal int RemoveDuplicateAttribute(XmlAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x60CC020", Offset = "0x60CB020", VA = "0x60CC020")]
	internal bool PrepareParentInElementIdAttrMap(string attrPrefix, string attrLocalName)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x60CC0F0", Offset = "0x60CB0F0", VA = "0x60CC0F0")]
	internal void ResetParentInElementIdAttrMap(string oldVal, string newVal)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x60CD3E0", Offset = "0x60CC3E0", VA = "0x60CD3E0")]
	internal XmlAttribute InternalAppendAttribute(XmlAttribute node)
	{
		return null;
	}
}
