// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializationReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038C")]
		public object Collection
		{
			[Token(Token = "0x6000DD6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038D")]
		internal object Id
		{
			[Token(Token = "0x6000DD7")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038E")]
		public object CollectionItems
		{
			[Token(Token = "0x6000DD8")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000DD9")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
			internal set
			{
			}
		}

		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x2759B00", Offset = "0x2758100", VA = "0x182759B00")]
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
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000390")]
		public string[] Ids
		{
			[Token(Token = "0x6000DDC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000391")]
		public object Source
		{
			[Token(Token = "0x6000DDD")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x2759BA0", Offset = "0x27581A0", VA = "0x182759BA0")]
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000393")]
		public int Index
		{
			[Token(Token = "0x6000DE0")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000394")]
		public string Id
		{
			[Token(Token = "0x6000DE1")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDE")]
		[Address(RVA = "0x1BC8210", Offset = "0x1BC6810", VA = "0x181BC8210")]
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
		[Address(RVA = "0x27715D0", Offset = "0x276FBD0", VA = "0x1827715D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038A")]
	protected XmlReader Reader
	{
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x276D700", Offset = "0x276BD00", VA = "0x18276D700")]
	internal void Initialize(XmlReader reader, XmlSerializer eventSource)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x276D1A0", Offset = "0x276B7A0", VA = "0x18276D1A0")]
	private ArrayList EnsureArrayList(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x276D1F0", Offset = "0x276B7F0", VA = "0x18276D1F0")]
	private Hashtable EnsureHashtable(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlSerializationReader()
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x276C770", Offset = "0x276AD70", VA = "0x18276C770")]
	protected void AddFixup(CollectionFixup fixup)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x276C930", Offset = "0x276AF30", VA = "0x18276C930")]
	protected void AddFixup(Fixup fixup)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x276C890", Offset = "0x276AE90", VA = "0x18276C890")]
	private void AddFixup(CollectionItemFixup fixup)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x276C9D0", Offset = "0x276AFD0", VA = "0x18276C9D0")]
	protected void AddReadCallback(string name, string ns, Type type, XmlSerializationReadCallback read)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x276CB20", Offset = "0x276B120", VA = "0x18276CB20")]
	protected void AddTarget(string id, object o)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x276CF50", Offset = "0x276B550", VA = "0x18276CF50")]
	private string CurrentTag()
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x276CC50", Offset = "0x276B250", VA = "0x18276CC50")]
	protected Exception CreateReadOnlyCollectionException(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x276CCD0", Offset = "0x276B2D0", VA = "0x18276CCD0")]
	protected Exception CreateUnknownConstantException(string value, Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x276CD50", Offset = "0x276B350", VA = "0x18276CD50")]
	protected Exception CreateUnknownNodeException()
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x276CDD0", Offset = "0x276B3D0", VA = "0x18276CDD0")]
	protected Exception CreateUnknownTypeException(XmlQualifiedName type)
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x276D100", Offset = "0x276B700", VA = "0x18276D100")]
	protected Array EnsureArrayIndex(Array a, int index, Type elementType)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x276D340", Offset = "0x276B940", VA = "0x18276D340")]
	protected bool GetNullAttr()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x276D420", Offset = "0x276BA20", VA = "0x18276D420")]
	protected object GetTarget(string id)
	{
		return null;
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x2770F10", Offset = "0x276F510", VA = "0x182770F10")]
	private bool TargetReady(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x276D4F0", Offset = "0x276BAF0", VA = "0x18276D4F0")]
	protected XmlQualifiedName GetXsiType()
	{
		return null;
	}

	[Token(Token = "0x6000DB5")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000DB6")]
	protected abstract void InitIDs();

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x276DB50", Offset = "0x276C150", VA = "0x18276DB50")]
	protected bool IsXmlnsAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x276E1A0", Offset = "0x276C7A0", VA = "0x18276E1A0")]
	protected void ParseWsdlArrayType(XmlAttribute attr)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x276E340", Offset = "0x276C940", VA = "0x18276E340")]
	protected XmlQualifiedName ReadElementQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x276E420", Offset = "0x276CA20", VA = "0x18276E420")]
	protected void ReadEndElement()
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x276EA00", Offset = "0x276D000", VA = "0x18276EA00")]
	protected bool ReadNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x276EBE0", Offset = "0x276D1E0", VA = "0x18276EBE0")]
	protected XmlQualifiedName ReadNullableQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x276EC10", Offset = "0x276D210", VA = "0x18276EC10")]
	protected string ReadNullableString()
	{
		return null;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x276EF50", Offset = "0x276D550", VA = "0x18276EF50")]
	protected object ReadReferencedElement()
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x276D240", Offset = "0x276B840", VA = "0x18276D240")]
	private WriteCallbackInfo GetCallbackInfo(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x276EC60", Offset = "0x276D260", VA = "0x18276EC60")]
	protected object ReadReferencedElement(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x276E4D0", Offset = "0x276CAD0", VA = "0x18276E4D0")]
	private bool ReadList(out object resultList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x276EFC0", Offset = "0x276D5C0", VA = "0x18276EFC0")]
	protected void ReadReferencedElements()
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x276FE20", Offset = "0x276E420", VA = "0x18276FE20")]
	protected object ReadReferencingElement(out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x276FE00", Offset = "0x276E400", VA = "0x18276FE00")]
	protected object ReadReferencingElement(string name, string ns, out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x276FEA0", Offset = "0x276E4A0", VA = "0x18276FEA0")]
	protected object ReadReferencingElement(string name, string ns, bool elementCanBeType, out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x2770230", Offset = "0x276E830", VA = "0x182770230")]
	protected IXmlSerializable ReadSerializable(IXmlSerializable serializable)
	{
		return null;
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x2770CA0", Offset = "0x276F2A0", VA = "0x182770CA0")]
	protected object ReadTypedPrimitive(XmlQualifiedName type)
	{
		return null;
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x2770420", Offset = "0x276EA20", VA = "0x182770420")]
	private object ReadTypedPrimitive(XmlQualifiedName qname, bool reportUnknown)
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x2770DE0", Offset = "0x276F3E0", VA = "0x182770DE0")]
	protected XmlNode ReadXmlNode(bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x2770CB0", Offset = "0x276F2B0", VA = "0x182770CB0")]
	protected XmlDocument ReadXmlDocument(bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x2770E50", Offset = "0x276F450", VA = "0x182770E50")]
	protected Array ShrinkArray(Array a, int length, Type elementType, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x2770F30", Offset = "0x276F530", VA = "0x182770F30")]
	protected XmlQualifiedName ToXmlQualifiedName(string value)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x2771170", Offset = "0x276F770", VA = "0x182771170")]
	protected void UnknownAttribute(object o, XmlAttribute attr, string qnames)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x2771320", Offset = "0x276F920", VA = "0x182771320")]
	protected void UnknownElement(object o, XmlElement elem, string qnames)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x2767550", Offset = "0x2765B50", VA = "0x182767550")]
	protected void UnknownNode(object o)
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x27714D0", Offset = "0x276FAD0", VA = "0x1827714D0")]
	protected void UnknownNode(object o, string qnames)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x276DBD0", Offset = "0x276C1D0", VA = "0x18276DBD0")]
	private void OnUnknownNode(XmlNode node, object o, string qnames)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x2771540", Offset = "0x276FB40", VA = "0x182771540")]
	protected void UnreferencedObject(string id, object o)
	{
	}
}
