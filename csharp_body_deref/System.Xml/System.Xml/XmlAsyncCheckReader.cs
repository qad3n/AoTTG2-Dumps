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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x26E4200", Offset = "0x26E2800", VA = "0x1826E4200", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x26E40C0", Offset = "0x26E26C0", VA = "0x1826E40C0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000056")]
	public override string Name
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x26E4000", Offset = "0x26E2600", VA = "0x1826E4000", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public override string LocalName
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x26E3F80", Offset = "0x26E2580", VA = "0x1826E3F80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x26E4080", Offset = "0x26E2680", VA = "0x1826E4080", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public override string Prefix
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x26E4100", Offset = "0x26E2700", VA = "0x1826E4100", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override string Value
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x26E4340", Offset = "0x26E2940", VA = "0x1826E4340", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public override int Depth
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x26E3E00", Offset = "0x26E2400", VA = "0x1826E3E00", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	public override string BaseURI
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x26E3D40", Offset = "0x26E2340", VA = "0x1826E3D40", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x26E3F40", Offset = "0x26E2540", VA = "0x1826E3F40", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x26E3F00", Offset = "0x26E2500", VA = "0x1826E3F00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x26E4140", Offset = "0x26E2740", VA = "0x1826E4140", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000060")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x26E43C0", Offset = "0x26E29C0", VA = "0x1826E43C0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000061")]
	public override string XmlLang
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x26E4380", Offset = "0x26E2980", VA = "0x1826E4380", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000062")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x26E41C0", Offset = "0x26E27C0", VA = "0x1826E41C0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	public override Type ValueType
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x26E4300", Offset = "0x26E2900", VA = "0x1826E4300", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x26E3D00", Offset = "0x26E2300", VA = "0x1826E3D00", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000065")]
	public override bool EOF
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x26E3E80", Offset = "0x26E2480", VA = "0x1826E3E80", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x26E4180", Offset = "0x26E2780", VA = "0x1826E4180", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000067")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x26E3FC0", Offset = "0x26E25C0", VA = "0x1826E3FC0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x26E3DC0", Offset = "0x26E23C0", VA = "0x1826E3DC0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000069")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x26E3D80", Offset = "0x26E2380", VA = "0x1826E3D80", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x26E3EC0", Offset = "0x26E24C0", VA = "0x1826E3EC0", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x26E4040", Offset = "0x26E2640", VA = "0x1826E4040", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x26E3E40", Offset = "0x26E2440", VA = "0x1826E3E40", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x26E3370", Offset = "0x26E1970", VA = "0x1826E3370")]
	public static XmlAsyncCheckReader CreateAsyncCheckWrapper(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x26E3C50", Offset = "0x26E2250", VA = "0x1826E3C50")]
	public XmlAsyncCheckReader(XmlReader reader)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x26E32A0", Offset = "0x26E18A0", VA = "0x1826E32A0")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x26E36B0", Offset = "0x26E1CB0", VA = "0x1826E36B0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x26E3700", Offset = "0x26E1D00", VA = "0x1826E3700", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x26E3660", Offset = "0x26E1C60", VA = "0x1826E3660", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x26E3860", Offset = "0x26E1E60", VA = "0x1826E3860", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x26E3810", Offset = "0x26E1E10", VA = "0x1826E3810", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x26E3930", Offset = "0x26E1F30", VA = "0x1826E3930", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x26E3970", Offset = "0x26E1F70", VA = "0x1826E3970", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x26E38F0", Offset = "0x26E1EF0", VA = "0x1826E38F0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x26E39B0", Offset = "0x26E1FB0", VA = "0x1826E39B0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x26E3B90", Offset = "0x26E2190", VA = "0x1826E3B90", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x26E3330", Offset = "0x26E1930", VA = "0x1826E3330", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x26E3C10", Offset = "0x26E2210", VA = "0x1826E3C10", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x26E37C0", Offset = "0x26E1DC0", VA = "0x1826E37C0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x26E3BD0", Offset = "0x26E21D0", VA = "0x1826E3BD0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x26E3B30", Offset = "0x26E2130", VA = "0x1826E3B30", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x26E3AF0", Offset = "0x26E20F0", VA = "0x1826E3AF0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x26E38B0", Offset = "0x26E1EB0", VA = "0x1826E38B0", Slot = "43")]
	public override XmlNodeType MoveToContent()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x26E3AB0", Offset = "0x26E20B0", VA = "0x1826E3AB0", Slot = "44")]
	public override void ReadStartElement()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x26E39F0", Offset = "0x26E1FF0", VA = "0x1826E39F0", Slot = "45")]
	public override string ReadElementString()
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x26E3A30", Offset = "0x26E2030", VA = "0x1826E3A30", Slot = "46")]
	public override void ReadEndElement()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x26E3760", Offset = "0x26E1D60", VA = "0x1826E3760", Slot = "47")]
	public override bool IsStartElement(string localname, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x26E3A70", Offset = "0x26E2070", VA = "0x1826E3A70", Slot = "48")]
	public override string ReadInnerXml()
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x26E3620", Offset = "0x26E1C20", VA = "0x1826E3620", Slot = "50")]
	protected override void Dispose(bool disposing)
	{
	}
}
