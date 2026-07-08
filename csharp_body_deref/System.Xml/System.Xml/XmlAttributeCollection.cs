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
		[Address(RVA = "0x44851C0", Offset = "0x44851C0", VA = "0x44851C0")]
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
		[Address(RVA = "0x448BFE0", Offset = "0x448BFE0", VA = "0x448BFE0")]
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
		[Address(RVA = "0x448C0F0", Offset = "0x448C0F0", VA = "0x448C0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x448CC40", Offset = "0x448CC40", VA = "0x448CC40", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x448CC50", Offset = "0x448CC50", VA = "0x448CC50", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x448CC60", Offset = "0x448CC60", VA = "0x448CC60", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x448BFD0", Offset = "0x448BFD0", VA = "0x448BFD0")]
	internal XmlAttributeCollection(XmlNode parent)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x448C240", Offset = "0x448C240", VA = "0x448C240")]
	internal int FindNodeOffsetNS(XmlAttribute node)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x448C410", Offset = "0x448C410", VA = "0x448C410", Slot = "6")]
	public override XmlNode SetNamedItem(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x448C690", Offset = "0x448C690", VA = "0x448C690")]
	public XmlAttribute Append(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x448C9C0", Offset = "0x448C9C0", VA = "0x448C9C0")]
	public XmlAttribute Remove(XmlAttribute node)
	{
		return null;
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x448CA40", Offset = "0x448CA40", VA = "0x448CA40")]
	public XmlAttribute RemoveAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x448CAE0", Offset = "0x448CAE0", VA = "0x448CAE0")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x448CBB0", Offset = "0x448CBB0", VA = "0x448CBB0", Slot = "13")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x448CC70", Offset = "0x448CC70", VA = "0x448CC70", Slot = "9")]
	internal override XmlNode AddNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x448CE10", Offset = "0x448CE10", VA = "0x448CE10", Slot = "12")]
	internal override XmlNode InsertNodeAt(int i, XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x448CEA0", Offset = "0x448CEA0", VA = "0x448CEA0", Slot = "11")]
	internal override XmlNode RemoveNodeAt(int i)
	{
		return null;
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x448C7A0", Offset = "0x448C7A0", VA = "0x448C7A0")]
	internal void Detach(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x448C850", Offset = "0x448C850", VA = "0x448C850")]
	internal void InsertParentIntoElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x448D030", Offset = "0x448D030", VA = "0x448D030")]
	internal void RemoveParentFromElementIdAttrMap(XmlAttribute attr)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x448CD30", Offset = "0x448CD30", VA = "0x448CD30")]
	internal int RemoveDuplicateAttribute(XmlAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x448B1D0", Offset = "0x448B1D0", VA = "0x448B1D0")]
	internal bool PrepareParentInElementIdAttrMap(string attrPrefix, string attrLocalName)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x448B2B0", Offset = "0x448B2B0", VA = "0x448B2B0")]
	internal void ResetParentInElementIdAttrMap(string oldVal, string newVal)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x448C600", Offset = "0x448C600", VA = "0x448C600")]
	internal XmlAttribute InternalAppendAttribute(XmlAttribute node)
	{
		return null;
	}
}
