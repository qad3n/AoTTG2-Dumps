using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000134")]
[System.MonoTODO]
public abstract class XmlSerializationReader : XmlSerializationGeneratedCode
{
	[Token(Token = "0x2000135")]
	private class WriteCallbackInfo
	{
		[Token(Token = "0x4000692")]
		[FieldOffset(Offset = "0x10")]
		public Type Type;

		[Token(Token = "0x4000693")]
		[FieldOffset(Offset = "0x18")]
		public string TypeName;

		[Token(Token = "0x4000694")]
		[FieldOffset(Offset = "0x20")]
		public string TypeNs;

		[Token(Token = "0x4000695")]
		[FieldOffset(Offset = "0x28")]
		public XmlSerializationReadCallback Callback;

		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x44E1C40", Offset = "0x44E1C40", VA = "0x44E1C40")]
		public WriteCallbackInfo()
		{
		}
	}

	[Token(Token = "0x2000136")]
	protected class CollectionFixup
	{
		[Token(Token = "0x4000696")]
		[FieldOffset(Offset = "0x10")]
		private XmlSerializationCollectionFixupCallback callback;

		[Token(Token = "0x4000697")]
		[FieldOffset(Offset = "0x18")]
		private object collection;

		[Token(Token = "0x4000698")]
		[FieldOffset(Offset = "0x20")]
		private object collectionItems;

		[Token(Token = "0x4000699")]
		[FieldOffset(Offset = "0x28")]
		private string id;

		[Token(Token = "0x1700038B")]
		public XmlSerializationCollectionFixupCallback Callback
		{
			[Token(Token = "0x6000DD5")]
			[Address(RVA = "0x44E6640", Offset = "0x44E6640", VA = "0x44E6640")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038C")]
		public object Collection
		{
			[Token(Token = "0x6000DD6")]
			[Address(RVA = "0x44E6650", Offset = "0x44E6650", VA = "0x44E6650")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038D")]
		internal object Id
		{
			[Token(Token = "0x6000DD7")]
			[Address(RVA = "0x44E6660", Offset = "0x44E6660", VA = "0x44E6660")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038E")]
		public object CollectionItems
		{
			[Token(Token = "0x6000DD8")]
			[Address(RVA = "0x44E6670", Offset = "0x44E6670", VA = "0x44E6670")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000DD9")]
			[Address(RVA = "0x44E6680", Offset = "0x44E6680", VA = "0x44E6680")]
			internal set
			{
			}
		}

		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x44E65E0", Offset = "0x44E65E0", VA = "0x44E65E0")]
		internal CollectionFixup(object collection, XmlSerializationCollectionFixupCallback callback, string id)
		{
		}
	}

	[Token(Token = "0x2000137")]
	protected class Fixup
	{
		[Token(Token = "0x400069A")]
		[FieldOffset(Offset = "0x10")]
		private object source;

		[Token(Token = "0x400069B")]
		[FieldOffset(Offset = "0x18")]
		private string[] ids;

		[Token(Token = "0x400069C")]
		[FieldOffset(Offset = "0x20")]
		private XmlSerializationFixupCallback callback;

		[Token(Token = "0x1700038F")]
		public XmlSerializationFixupCallback Callback
		{
			[Token(Token = "0x6000DDB")]
			[Address(RVA = "0x44E6720", Offset = "0x44E6720", VA = "0x44E6720")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000390")]
		public string[] Ids
		{
			[Token(Token = "0x6000DDC")]
			[Address(RVA = "0x44E6730", Offset = "0x44E6730", VA = "0x44E6730")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000391")]
		public object Source
		{
			[Token(Token = "0x6000DDD")]
			[Address(RVA = "0x44E6740", Offset = "0x44E6740", VA = "0x44E6740")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x44E6690", Offset = "0x44E6690", VA = "0x44E6690")]
		public Fixup(object o, XmlSerializationFixupCallback callback, int count)
		{
		}
	}

	[Token(Token = "0x2000138")]
	private class CollectionItemFixup
	{
		[Token(Token = "0x400069D")]
		[FieldOffset(Offset = "0x10")]
		private Array list;

		[Token(Token = "0x400069E")]
		[FieldOffset(Offset = "0x18")]
		private int index;

		[Token(Token = "0x400069F")]
		[FieldOffset(Offset = "0x20")]
		private string id;

		[Token(Token = "0x17000392")]
		public Array Collection
		{
			[Token(Token = "0x6000DDF")]
			[Address(RVA = "0x44E6750", Offset = "0x44E6750", VA = "0x44E6750")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000393")]
		public int Index
		{
			[Token(Token = "0x6000DE0")]
			[Address(RVA = "0x44E6760", Offset = "0x44E6760", VA = "0x44E6760")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000394")]
		public string Id
		{
			[Token(Token = "0x6000DE1")]
			[Address(RVA = "0x44E6770", Offset = "0x44E6770", VA = "0x44E6770")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDE")]
		[Address(RVA = "0x44E4510", Offset = "0x44E4510", VA = "0x44E4510")]
		public CollectionItemFixup(Array list, int index, string id)
		{
		}
	}

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x10")]
	private XmlDocument document;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x18")]
	private XmlReader reader;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList fixups;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x28")]
	private Hashtable collFixups;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList collItemFixups;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable typesCallbacks;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList noIDTargets;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x48")]
	private Hashtable targets;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x50")]
	private Hashtable delayedListFixups;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x58")]
	private XmlSerializer eventSource;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x60")]
	private int delayedFixupId;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable referencedObjects;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x70")]
	private int readCount;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x74")]
	private int whileIterationCount;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x78")]
	private string w3SchemaNS;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x80")]
	private string w3InstanceNS;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x88")]
	private string w3InstanceNS2000;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x90")]
	private string w3InstanceNS1999;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x98")]
	private string soapNS;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0xA0")]
	private string wsdlNS;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0xA8")]
	private string nullX;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0xB0")]
	private string nil;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0xB8")]
	private string typeX;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0xC0")]
	private string arrayType;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0xC8")]
	private XmlQualifiedName arrayQName;

	[Token(Token = "0x17000389")]
	protected XmlDocument Document
	{
		[Token(Token = "0x6000DA4")]
		[Address(RVA = "0x44E1800", Offset = "0x44E1800", VA = "0x44E1800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038A")]
	protected XmlReader Reader
	{
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x44E1890", Offset = "0x44E1890", VA = "0x44E1890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x44E12D0", Offset = "0x44E12D0", VA = "0x44E12D0")]
	internal void Initialize(XmlReader reader, XmlSerializer eventSource)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x44E1750", Offset = "0x44E1750", VA = "0x44E1750")]
	private ArrayList EnsureArrayList(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x44E17A0", Offset = "0x44E17A0", VA = "0x44E17A0")]
	private Hashtable EnsureHashtable(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x44E17F0", Offset = "0x44E17F0", VA = "0x44E17F0")]
	protected XmlSerializationReader()
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x44E18A0", Offset = "0x44E18A0", VA = "0x44E18A0")]
	protected void AddFixup(CollectionFixup fixup)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x44E19C0", Offset = "0x44E19C0", VA = "0x44E19C0")]
	protected void AddFixup(Fixup fixup)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x44E1A50", Offset = "0x44E1A50", VA = "0x44E1A50")]
	private void AddFixup(CollectionItemFixup fixup)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x44E1AE0", Offset = "0x44E1AE0", VA = "0x44E1AE0")]
	protected void AddReadCallback(string name, string ns, Type type, XmlSerializationReadCallback read)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x44E1C50", Offset = "0x44E1C50", VA = "0x44E1C50")]
	protected void AddTarget(string id, object o)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x44E1DB0", Offset = "0x44E1DB0", VA = "0x44E1DB0")]
	private string CurrentTag()
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x44E1F10", Offset = "0x44E1F10", VA = "0x44E1F10")]
	protected Exception CreateReadOnlyCollectionException(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x44E1F80", Offset = "0x44E1F80", VA = "0x44E1F80")]
	protected Exception CreateUnknownConstantException(string value, Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x44E2000", Offset = "0x44E2000", VA = "0x44E2000")]
	protected Exception CreateUnknownNodeException()
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x44E2080", Offset = "0x44E2080", VA = "0x44E2080")]
	protected Exception CreateUnknownTypeException(XmlQualifiedName type)
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x44E2200", Offset = "0x44E2200", VA = "0x44E2200")]
	protected Array EnsureArrayIndex(Array a, int index, Type elementType)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x44E2270", Offset = "0x44E2270", VA = "0x44E2270")]
	protected bool GetNullAttr()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x44E2340", Offset = "0x44E2340", VA = "0x44E2340")]
	protected object GetTarget(string id)
	{
		return null;
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x44E2400", Offset = "0x44E2400", VA = "0x44E2400")]
	private bool TargetReady(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x44E2420", Offset = "0x44E2420", VA = "0x44E2420")]
	protected XmlQualifiedName GetXsiType()
	{
		return null;
	}

	[Token(Token = "0x6000DB5")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000DB6")]
	protected abstract void InitIDs();

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x44E2650", Offset = "0x44E2650", VA = "0x44E2650")]
	protected bool IsXmlnsAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x44E26C0", Offset = "0x44E26C0", VA = "0x44E26C0")]
	protected void ParseWsdlArrayType(XmlAttribute attr)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x44E2860", Offset = "0x44E2860", VA = "0x44E2860")]
	protected XmlQualifiedName ReadElementQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x44E2B60", Offset = "0x44E2B60", VA = "0x44E2B60")]
	protected void ReadEndElement()
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x44E2C00", Offset = "0x44E2C00", VA = "0x44E2C00")]
	protected bool ReadNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x44E2CF0", Offset = "0x44E2CF0", VA = "0x44E2CF0")]
	protected XmlQualifiedName ReadNullableQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x44E2D10", Offset = "0x44E2D10", VA = "0x44E2D10")]
	protected string ReadNullableString()
	{
		return null;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x44E2D50", Offset = "0x44E2D50", VA = "0x44E2D50")]
	protected object ReadReferencedElement()
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x44E3060", Offset = "0x44E3060", VA = "0x44E3060")]
	private WriteCallbackInfo GetCallbackInfo(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x44E2DB0", Offset = "0x44E2DB0", VA = "0x44E2DB0")]
	protected object ReadReferencedElement(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x44E3150", Offset = "0x44E3150", VA = "0x44E3150")]
	private bool ReadList(out object resultList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x44E4560", Offset = "0x44E4560", VA = "0x44E4560")]
	protected void ReadReferencedElements()
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x44E58A0", Offset = "0x44E58A0", VA = "0x44E58A0")]
	protected object ReadReferencingElement(out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x44E4500", Offset = "0x44E4500", VA = "0x44E4500")]
	protected object ReadReferencingElement(string name, string ns, out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x44E5900", Offset = "0x44E5900", VA = "0x44E5900")]
	protected object ReadReferencingElement(string name, string ns, bool elementCanBeType, out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x44E5C90", Offset = "0x44E5C90", VA = "0x44E5C90")]
	protected IXmlSerializable ReadSerializable(IXmlSerializable serializable)
	{
		return null;
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x44E5E40", Offset = "0x44E5E40", VA = "0x44E5E40")]
	protected object ReadTypedPrimitive(XmlQualifiedName type)
	{
		return null;
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x44E3840", Offset = "0x44E3840", VA = "0x44E3840")]
	private object ReadTypedPrimitive(XmlQualifiedName qname, bool reportUnknown)
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x44E60C0", Offset = "0x44E60C0", VA = "0x44E60C0")]
	protected XmlNode ReadXmlNode(bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x44E61A0", Offset = "0x44E61A0", VA = "0x44E61A0")]
	protected XmlDocument ReadXmlDocument(bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x44E62C0", Offset = "0x44E62C0", VA = "0x44E62C0")]
	protected Array ShrinkArray(Array a, int length, Type elementType, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x44E2930", Offset = "0x44E2930", VA = "0x44E2930")]
	protected XmlQualifiedName ToXmlQualifiedName(string value)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x44E6330", Offset = "0x44E6330", VA = "0x44E6330")]
	protected void UnknownAttribute(object o, XmlAttribute attr, string qnames)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x44E6470", Offset = "0x44E6470", VA = "0x44E6470")]
	protected void UnknownElement(object o, XmlElement elem, string qnames)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x44E2CC0", Offset = "0x44E2CC0", VA = "0x44E2CC0")]
	protected void UnknownNode(object o)
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x44E65B0", Offset = "0x44E65B0", VA = "0x44E65B0")]
	protected void UnknownNode(object o, string qnames)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x44E5E50", Offset = "0x44E5E50", VA = "0x44E5E50")]
	private void OnUnknownNode(XmlNode node, object o, string qnames)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x44E5810", Offset = "0x44E5810", VA = "0x44E5810")]
	protected void UnreferencedObject(string id, object o)
	{
	}
}
