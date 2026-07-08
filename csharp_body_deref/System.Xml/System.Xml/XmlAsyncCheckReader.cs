using System.Reflection;
using System.Threading.Tasks;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000043")]
[DefaultMember("Item")]
internal class XmlAsyncCheckReader : XmlReader
{
	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x10")]
	private readonly XmlReader coreReader;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x18")]
	private Task lastTask;

	[Token(Token = "0x17000053")]
	internal XmlReader CoreReader
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x4458580", Offset = "0x4458580", VA = "0x4458580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x4458AF0", Offset = "0x4458AF0", VA = "0x4458AF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4458CB0", Offset = "0x4458CB0", VA = "0x4458CB0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000056")]
	public override string Name
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x4458CE0", Offset = "0x4458CE0", VA = "0x4458CE0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public override string LocalName
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x4458D10", Offset = "0x4458D10", VA = "0x4458D10", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4458D40", Offset = "0x4458D40", VA = "0x4458D40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public override string Prefix
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4458D70", Offset = "0x4458D70", VA = "0x4458D70", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override string Value
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4458DA0", Offset = "0x4458DA0", VA = "0x4458DA0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public override int Depth
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x4458DD0", Offset = "0x4458DD0", VA = "0x4458DD0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	public override string BaseURI
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4458E00", Offset = "0x4458E00", VA = "0x4458E00", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x4458E30", Offset = "0x4458E30", VA = "0x4458E30", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x4458E60", Offset = "0x4458E60", VA = "0x4458E60", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4458E90", Offset = "0x4458E90", VA = "0x4458E90", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000060")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x4458EC0", Offset = "0x4458EC0", VA = "0x4458EC0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000061")]
	public override string XmlLang
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4458EF0", Offset = "0x4458EF0", VA = "0x4458EF0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000062")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4458F20", Offset = "0x4458F20", VA = "0x4458F20", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	public override Type ValueType
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x4458F50", Offset = "0x4458F50", VA = "0x4458F50", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x4458F80", Offset = "0x4458F80", VA = "0x4458F80", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000065")]
	public override bool EOF
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x44591E0", Offset = "0x44591E0", VA = "0x44591E0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x4459240", Offset = "0x4459240", VA = "0x4459240", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000067")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x44592A0", Offset = "0x44592A0", VA = "0x44592A0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x4459310", Offset = "0x4459310", VA = "0x4459310", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000069")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x4459370", Offset = "0x4459370", VA = "0x4459370", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x4459550", Offset = "0x4459550", VA = "0x4459550", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x44595D0", Offset = "0x44595D0", VA = "0x44595D0", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x4459600", Offset = "0x4459600", VA = "0x4459600", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4458590", Offset = "0x4458590", VA = "0x4458590")]
	public static XmlAsyncCheckReader CreateAsyncCheckWrapper(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x44589C0", Offset = "0x44589C0", VA = "0x44589C0")]
	public XmlAsyncCheckReader(XmlReader reader)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4458A70", Offset = "0x4458A70", VA = "0x4458A70")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4458FB0", Offset = "0x4458FB0", VA = "0x4458FB0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4458FF0", Offset = "0x4458FF0", VA = "0x4458FF0", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4459030", Offset = "0x4459030", VA = "0x4459030", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4459070", Offset = "0x4459070", VA = "0x4459070", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x44590B0", Offset = "0x44590B0", VA = "0x44590B0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x44590F0", Offset = "0x44590F0", VA = "0x44590F0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4459120", Offset = "0x4459120", VA = "0x4459120", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4459150", Offset = "0x4459150", VA = "0x4459150", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4459180", Offset = "0x4459180", VA = "0x4459180", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x44591B0", Offset = "0x44591B0", VA = "0x44591B0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4459210", Offset = "0x4459210", VA = "0x4459210", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4459270", Offset = "0x4459270", VA = "0x4459270", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x44592D0", Offset = "0x44592D0", VA = "0x44592D0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4459340", Offset = "0x4459340", VA = "0x4459340", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x44593A0", Offset = "0x44593A0", VA = "0x44593A0", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x44593F0", Offset = "0x44593F0", VA = "0x44593F0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4459420", Offset = "0x4459420", VA = "0x4459420", Slot = "43")]
	public override XmlNodeType MoveToContent()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4459450", Offset = "0x4459450", VA = "0x4459450", Slot = "44")]
	public override void ReadStartElement()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4459480", Offset = "0x4459480", VA = "0x4459480", Slot = "45")]
	public override string ReadElementString()
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x44594B0", Offset = "0x44594B0", VA = "0x44594B0", Slot = "46")]
	public override void ReadEndElement()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x44594E0", Offset = "0x44594E0", VA = "0x44594E0", Slot = "47")]
	public override bool IsStartElement(string localname, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4459520", Offset = "0x4459520", VA = "0x4459520", Slot = "48")]
	public override string ReadInnerXml()
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4459580", Offset = "0x4459580", VA = "0x4459580", Slot = "50")]
	protected override void Dispose(bool disposing)
	{
	}
}
