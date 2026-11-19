// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAsyncCheckReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x609B260", Offset = "0x609A260", VA = "0x609B260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x609B7D0", Offset = "0x609A7D0", VA = "0x609B7D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x609B990", Offset = "0x609A990", VA = "0x609B990", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000056")]
	public override string Name
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x609B9C0", Offset = "0x609A9C0", VA = "0x609B9C0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public override string LocalName
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x609B9F0", Offset = "0x609A9F0", VA = "0x609B9F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x609BA20", Offset = "0x609AA20", VA = "0x609BA20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public override string Prefix
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x609BA50", Offset = "0x609AA50", VA = "0x609BA50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override string Value
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x609BA80", Offset = "0x609AA80", VA = "0x609BA80", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public override int Depth
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x609BAB0", Offset = "0x609AAB0", VA = "0x609BAB0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	public override string BaseURI
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x609BAE0", Offset = "0x609AAE0", VA = "0x609BAE0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x609BB10", Offset = "0x609AB10", VA = "0x609BB10", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x609BB40", Offset = "0x609AB40", VA = "0x609BB40", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x609BB70", Offset = "0x609AB70", VA = "0x609BB70", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000060")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x609BBA0", Offset = "0x609ABA0", VA = "0x609BBA0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000061")]
	public override string XmlLang
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x609BBD0", Offset = "0x609ABD0", VA = "0x609BBD0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000062")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x609BC00", Offset = "0x609AC00", VA = "0x609BC00", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	public override Type ValueType
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x609BC30", Offset = "0x609AC30", VA = "0x609BC30", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x609BC60", Offset = "0x609AC60", VA = "0x609BC60", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000065")]
	public override bool EOF
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x609BEC0", Offset = "0x609AEC0", VA = "0x609BEC0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x609BF20", Offset = "0x609AF20", VA = "0x609BF20", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000067")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x609BF80", Offset = "0x609AF80", VA = "0x609BF80", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x609BFF0", Offset = "0x609AFF0", VA = "0x609BFF0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000069")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x609C050", Offset = "0x609B050", VA = "0x609C050", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x609C230", Offset = "0x609B230", VA = "0x609C230", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x609C2B0", Offset = "0x609B2B0", VA = "0x609C2B0", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x609C2E0", Offset = "0x609B2E0", VA = "0x609C2E0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x609B270", Offset = "0x609A270", VA = "0x609B270")]
	public static XmlAsyncCheckReader CreateAsyncCheckWrapper(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x609B6A0", Offset = "0x609A6A0", VA = "0x609B6A0")]
	public XmlAsyncCheckReader(XmlReader reader)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x609B750", Offset = "0x609A750", VA = "0x609B750")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x609BC90", Offset = "0x609AC90", VA = "0x609BC90", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x609BCD0", Offset = "0x609ACD0", VA = "0x609BCD0", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x609BD10", Offset = "0x609AD10", VA = "0x609BD10", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x609BD50", Offset = "0x609AD50", VA = "0x609BD50", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x609BD90", Offset = "0x609AD90", VA = "0x609BD90", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x609BDD0", Offset = "0x609ADD0", VA = "0x609BDD0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x609BE00", Offset = "0x609AE00", VA = "0x609BE00", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x609BE30", Offset = "0x609AE30", VA = "0x609BE30", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x609BE60", Offset = "0x609AE60", VA = "0x609BE60", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x609BE90", Offset = "0x609AE90", VA = "0x609BE90", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x609BEF0", Offset = "0x609AEF0", VA = "0x609BEF0", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x609BF50", Offset = "0x609AF50", VA = "0x609BF50", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x609BFB0", Offset = "0x609AFB0", VA = "0x609BFB0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x609C020", Offset = "0x609B020", VA = "0x609C020", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x609C080", Offset = "0x609B080", VA = "0x609C080", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x609C0D0", Offset = "0x609B0D0", VA = "0x609C0D0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x609C100", Offset = "0x609B100", VA = "0x609C100", Slot = "43")]
	public override XmlNodeType MoveToContent()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x609C130", Offset = "0x609B130", VA = "0x609C130", Slot = "44")]
	public override void ReadStartElement()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x609C160", Offset = "0x609B160", VA = "0x609C160", Slot = "45")]
	public override string ReadElementString()
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x609C190", Offset = "0x609B190", VA = "0x609C190", Slot = "46")]
	public override void ReadEndElement()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x609C1C0", Offset = "0x609B1C0", VA = "0x609C1C0", Slot = "47")]
	public override bool IsStartElement(string localname, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x609C200", Offset = "0x609B200", VA = "0x609C200", Slot = "48")]
	public override string ReadInnerXml()
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x609C260", Offset = "0x609B260", VA = "0x609C260", Slot = "50")]
	protected override void Dispose(bool disposing)
	{
	}
}
