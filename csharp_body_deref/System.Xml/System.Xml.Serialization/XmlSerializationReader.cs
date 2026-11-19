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
		[Address(RVA = "0x6120440", Offset = "0x611F440", VA = "0x6120440")]
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
			[Address(RVA = "0x61247F0", Offset = "0x61237F0", VA = "0x61247F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038C")]
		public object Collection
		{
			[Token(Token = "0x6000DD6")]
			[Address(RVA = "0x6124800", Offset = "0x6123800", VA = "0x6124800")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038D")]
		internal object Id
		{
			[Token(Token = "0x6000DD7")]
			[Address(RVA = "0x6124810", Offset = "0x6123810", VA = "0x6124810")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038E")]
		public object CollectionItems
		{
			[Token(Token = "0x6000DD8")]
			[Address(RVA = "0x6124820", Offset = "0x6123820", VA = "0x6124820")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000DD9")]
			[Address(RVA = "0x6124830", Offset = "0x6123830", VA = "0x6124830")]
			internal set
			{
			}
		}

		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x6124790", Offset = "0x6123790", VA = "0x6124790")]
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
			[Address(RVA = "0x61248D0", Offset = "0x61238D0", VA = "0x61248D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000390")]
		public string[] Ids
		{
			[Token(Token = "0x6000DDC")]
			[Address(RVA = "0x61248E0", Offset = "0x61238E0", VA = "0x61248E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000391")]
		public object Source
		{
			[Token(Token = "0x6000DDD")]
			[Address(RVA = "0x61248F0", Offset = "0x61238F0", VA = "0x61248F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x6124840", Offset = "0x6123840", VA = "0x6124840")]
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
			[Address(RVA = "0x6124900", Offset = "0x6123900", VA = "0x6124900")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000393")]
		public int Index
		{
			[Token(Token = "0x6000DE0")]
			[Address(RVA = "0x6124910", Offset = "0x6123910", VA = "0x6124910")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000394")]
		public string Id
		{
			[Token(Token = "0x6000DE1")]
			[Address(RVA = "0x6124920", Offset = "0x6123920", VA = "0x6124920")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDE")]
		[Address(RVA = "0x61229B0", Offset = "0x61219B0", VA = "0x61229B0")]
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
		[Address(RVA = "0x6120000", Offset = "0x611F000", VA = "0x6120000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038A")]
	protected XmlReader Reader
	{
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x6120090", Offset = "0x611F090", VA = "0x6120090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x611FAD0", Offset = "0x611EAD0", VA = "0x611FAD0")]
	internal void Initialize(XmlReader reader, XmlSerializer eventSource)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x611FF50", Offset = "0x611EF50", VA = "0x611FF50")]
	private ArrayList EnsureArrayList(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x611FFA0", Offset = "0x611EFA0", VA = "0x611FFA0")]
	private Hashtable EnsureHashtable(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x611FFF0", Offset = "0x611EFF0", VA = "0x611FFF0")]
	protected XmlSerializationReader()
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x61200A0", Offset = "0x611F0A0", VA = "0x61200A0")]
	protected void AddFixup(CollectionFixup fixup)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x61201C0", Offset = "0x611F1C0", VA = "0x61201C0")]
	protected void AddFixup(Fixup fixup)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x6120250", Offset = "0x611F250", VA = "0x6120250")]
	private void AddFixup(CollectionItemFixup fixup)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x61202E0", Offset = "0x611F2E0", VA = "0x61202E0")]
	protected void AddReadCallback(string name, string ns, Type type, XmlSerializationReadCallback read)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x6120450", Offset = "0x611F450", VA = "0x6120450")]
	protected void AddTarget(string id, object o)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x61205B0", Offset = "0x611F5B0", VA = "0x61205B0")]
	private string CurrentTag()
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x6120700", Offset = "0x611F700", VA = "0x6120700")]
	protected Exception CreateReadOnlyCollectionException(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x6120770", Offset = "0x611F770", VA = "0x6120770")]
	protected Exception CreateUnknownConstantException(string value, Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x61207F0", Offset = "0x611F7F0", VA = "0x61207F0")]
	protected Exception CreateUnknownNodeException()
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x6120870", Offset = "0x611F870", VA = "0x6120870")]
	protected Exception CreateUnknownTypeException(XmlQualifiedName type)
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x61209F0", Offset = "0x611F9F0", VA = "0x61209F0")]
	protected Array EnsureArrayIndex(Array a, int index, Type elementType)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x6120A60", Offset = "0x611FA60", VA = "0x6120A60")]
	protected bool GetNullAttr()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x6120B30", Offset = "0x611FB30", VA = "0x6120B30")]
	protected object GetTarget(string id)
	{
		return null;
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x6120BF0", Offset = "0x611FBF0", VA = "0x6120BF0")]
	private bool TargetReady(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x6120C10", Offset = "0x611FC10", VA = "0x6120C10")]
	protected XmlQualifiedName GetXsiType()
	{
		return null;
	}

	[Token(Token = "0x6000DB5")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000DB6")]
	protected abstract void InitIDs();

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x6120E10", Offset = "0x611FE10", VA = "0x6120E10")]
	protected bool IsXmlnsAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x6120E80", Offset = "0x611FE80", VA = "0x6120E80")]
	protected void ParseWsdlArrayType(XmlAttribute attr)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x6121020", Offset = "0x6120020", VA = "0x6121020")]
	protected XmlQualifiedName ReadElementQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x6121330", Offset = "0x6120330", VA = "0x6121330")]
	protected void ReadEndElement()
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x61213F0", Offset = "0x61203F0", VA = "0x61213F0")]
	protected bool ReadNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x61214F0", Offset = "0x61204F0", VA = "0x61214F0")]
	protected XmlQualifiedName ReadNullableQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x6121510", Offset = "0x6120510", VA = "0x6121510")]
	protected string ReadNullableString()
	{
		return null;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x6121550", Offset = "0x6120550", VA = "0x6121550")]
	protected object ReadReferencedElement()
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x6121870", Offset = "0x6120870", VA = "0x6121870")]
	private WriteCallbackInfo GetCallbackInfo(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x61215B0", Offset = "0x61205B0", VA = "0x61215B0")]
	protected object ReadReferencedElement(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x6121960", Offset = "0x6120960", VA = "0x6121960")]
	private bool ReadList(out object resultList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x6122A00", Offset = "0x6121A00", VA = "0x6122A00")]
	protected void ReadReferencedElements()
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x6123A40", Offset = "0x6122A40", VA = "0x6123A40")]
	protected object ReadReferencingElement(out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x61229A0", Offset = "0x61219A0", VA = "0x61229A0")]
	protected object ReadReferencingElement(string name, string ns, out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x6123AA0", Offset = "0x6122AA0", VA = "0x6123AA0")]
	protected object ReadReferencingElement(string name, string ns, bool elementCanBeType, out string fixupReference)
	{
		return null;
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x6123E30", Offset = "0x6122E30", VA = "0x6123E30")]
	protected IXmlSerializable ReadSerializable(IXmlSerializable serializable)
	{
		return null;
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x6123FE0", Offset = "0x6122FE0", VA = "0x6123FE0")]
	protected object ReadTypedPrimitive(XmlQualifiedName type)
	{
		return null;
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x6121F20", Offset = "0x6120F20", VA = "0x6121F20")]
	private object ReadTypedPrimitive(XmlQualifiedName qname, bool reportUnknown)
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x6124260", Offset = "0x6123260", VA = "0x6124260")]
	protected XmlNode ReadXmlNode(bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x6124340", Offset = "0x6123340", VA = "0x6124340")]
	protected XmlDocument ReadXmlDocument(bool wrapped)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x6124450", Offset = "0x6123450", VA = "0x6124450")]
	protected Array ShrinkArray(Array a, int length, Type elementType, bool isNullable)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x6121100", Offset = "0x6120100", VA = "0x6121100")]
	protected XmlQualifiedName ToXmlQualifiedName(string value)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x61244C0", Offset = "0x61234C0", VA = "0x61244C0")]
	protected void UnknownAttribute(object o, XmlAttribute attr, string qnames)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x6124610", Offset = "0x6123610", VA = "0x6124610")]
	protected void UnknownElement(object o, XmlElement elem, string qnames)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x61214C0", Offset = "0x61204C0", VA = "0x61214C0")]
	protected void UnknownNode(object o)
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x6124760", Offset = "0x6123760", VA = "0x6124760")]
	protected void UnknownNode(object o, string qnames)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x6123FF0", Offset = "0x6122FF0", VA = "0x6123FF0")]
	private void OnUnknownNode(XmlNode node, object o, string qnames)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x61239B0", Offset = "0x61229B0", VA = "0x61239B0")]
	protected void UnreferencedObject(string id, object o)
	{
	}
}
