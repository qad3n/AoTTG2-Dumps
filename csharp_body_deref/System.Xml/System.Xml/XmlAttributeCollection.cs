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
		[Address(RVA = "0x47C2920", Offset = "0x47C2920", VA = "0x47C2920")]
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
		[Address(RVA = "0x47C9740", Offset = "0x47C9740", VA = "0x47C9740")]
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
		[Address(RVA = "0x47C9850", Offset = "0x47C9850", VA = "0x47C9850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x47CA3A0", Offset = "0x47CA3A0", VA = "0x47CA3A0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x47CA3B0", Offset = "0x47CA3B0", VA = "0x47CA3B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x47CA3C0", Offset = "0x47CA3C0", VA = "0x47CA3C0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x47C9730", Offset = "0x47C9730", VA = "0x47C9730")]
	internal XmlAttributeCollection(XmlNode parent)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x47C99A0", Offset = "0x47C99A0", VA = "0x47C99A0")]
	internal int FindNodeOffsetNS(XmlAttribute node)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x47C9B70", Offset = "0x47C9B70", VA = "0x47C9B70", Slot = "6")]
	public override XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x47C9DF0", Offset = "0x47C9DF0", VA = "0x47C9DF0")]
	public XmlAttribute Append(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x47CA120", Offset = "0x47CA120", VA = "0x47CA120")]
	public XmlAttribute Remove(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x47CA1A0", Offset = "0x47CA1A0", VA = "0x47CA1A0")]
	public XmlAttribute RemoveAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x47CA240", Offset = "0x47CA240", VA = "0x47CA240")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x47CA310", Offset = "0x47CA310", VA = "0x47CA310", Slot = "13")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x47CA3D0", Offset = "0x47CA3D0", VA = "0x47CA3D0", Slot = "9")]
	internal override XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x47CA570", Offset = "0x47CA570", VA = "0x47CA570", Slot = "12")]
	internal override XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x47CA600", Offset = "0x47CA600", VA = "0x47CA600", Slot = "11")]
	internal override XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x47C9F00", Offset = "0x47C9F00", VA = "0x47C9F00")]
	internal void Detach(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x47C9FB0", Offset = "0x47C9FB0", VA = "0x47C9FB0")]
	internal void InsertParentIntoElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x47CA790", Offset = "0x47CA790", VA = "0x47CA790")]
	internal void RemoveParentFromElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x47CA490", Offset = "0x47CA490", VA = "0x47CA490")]
	internal int RemoveDuplicateAttribute(XmlAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x47C8930", Offset = "0x47C8930", VA = "0x47C8930")]
	internal bool PrepareParentInElementIdAttrMap(string attrPrefix, string attrLocalName)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x47C8A10", Offset = "0x47C8A10", VA = "0x47C8A10")]
	internal void ResetParentInElementIdAttrMap(string oldVal, string newVal)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x47C9D60", Offset = "0x47C9D60", VA = "0x47C9D60")]
	internal XmlAttribute InternalAppendAttribute(XmlAttribute node)
	{
		return null;
	}
}
