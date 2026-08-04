// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNodeReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B5")]
public class XmlNodeReader : XmlReader, IXmlNamespaceResolver
{
	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x10")]
	private XmlNodeReaderNavigator readerNav;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x18")]
	private XmlNodeType nodeType;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x1C")]
	private int curDepth;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x20")]
	private ReadState readState;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x24")]
	private bool fEOF;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x25")]
	private bool bResolveEntity;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x26")]
	private bool bStartFromDocument;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x27")]
	private bool bInReadBinary;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x28")]
	private ReadContentAsBinaryHelper readBinaryHelper;

	[Token(Token = "0x170002A4")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x47E2C90", Offset = "0x47E2C90", VA = "0x47E2C90", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002A5")]
	public override string Name
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x47E2CA0", Offset = "0x47E2CA0", VA = "0x47E2CA0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string LocalName
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x47E2CE0", Offset = "0x47E2CE0", VA = "0x47E2CE0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x47E2D70", Offset = "0x47E2D70", VA = "0x47E2D70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A8")]
	public override string Prefix
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x47E2DC0", Offset = "0x47E2DC0", VA = "0x47E2DC0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A9")]
	public override string Value
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x47E2E10", Offset = "0x47E2E10", VA = "0x47E2E10", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AA")]
	public override int Depth
	{
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x47E2E50", Offset = "0x47E2E50", VA = "0x47E2E50", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AB")]
	public override string BaseURI
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x47E2E60", Offset = "0x47E2E60", VA = "0x47E2E60", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AC")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x47E2E90", Offset = "0x47E2E90", VA = "0x47E2E90", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AD")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x47E2EA0", Offset = "0x47E2EA0", VA = "0x47E2EA0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AE")]
	public override bool IsDefault
	{
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x47E2F40", Offset = "0x47E2F40", VA = "0x47E2F40", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AF")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x47E2F60", Offset = "0x47E2F60", VA = "0x47E2F60", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170002B0")]
	public override string XmlLang
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x47E2FA0", Offset = "0x47E2FA0", VA = "0x47E2FA0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x47E2FF0", Offset = "0x47E2FF0", VA = "0x47E2FF0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	public override int AttributeCount
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x47E3030", Offset = "0x47E3030", VA = "0x47E3030", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool EOF
	{
		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x47E4060", Offset = "0x47E4060", VA = "0x47E4060", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x47E4090", Offset = "0x47E4090", VA = "0x47E4090", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x47E4150", Offset = "0x47E4150", VA = "0x47E4150", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x47E4170", Offset = "0x47E4170", VA = "0x47E4170", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B7")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x47E4310", Offset = "0x47E4310", VA = "0x47E4310", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x47E2B90", Offset = "0x47E2B90", VA = "0x47E2B90")]
	public XmlNodeReader(XmlNode node)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x47E2C80", Offset = "0x47E2C80", VA = "0x47E2C80")]
	internal bool IsInReadingStates()
	{
		return default(bool);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x47E3060", Offset = "0x47E3060", VA = "0x47E3060", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x47E3080", Offset = "0x47E3080", VA = "0x47E3080", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x47E30C0", Offset = "0x47E30C0", VA = "0x47E30C0", Slot = "24")]
	public override string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x47E3130", Offset = "0x47E3130", VA = "0x47E3130", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x47E3250", Offset = "0x47E3250", VA = "0x47E3250", Slot = "26")]
	public override void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x47E3470", Offset = "0x47E3470", VA = "0x47E3470", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x47E3560", Offset = "0x47E3560", VA = "0x47E3560", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x47E3680", Offset = "0x47E3680", VA = "0x47E3680", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x47E3800", Offset = "0x47E3800", VA = "0x47E3800", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x47E3810", Offset = "0x47E3810", VA = "0x47E3810")]
	private bool Read(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x47E39A0", Offset = "0x47E39A0", VA = "0x47E39A0")]
	private bool ReadNextNode(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x47E3F30", Offset = "0x47E3F30", VA = "0x47E3F30")]
	private void SetEndOfFile()
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x47E3F50", Offset = "0x47E3F50", VA = "0x47E3F50")]
	private bool ReadAtZeroLevel(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x47E3DA0", Offset = "0x47E3DA0", VA = "0x47E3DA0")]
	private bool ReadForward(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x47E3D80", Offset = "0x47E3D80", VA = "0x47E3D80")]
	private void ReSetReadingMarks()
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x47E4080", Offset = "0x47E4080", VA = "0x47E4080", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x47E40A0", Offset = "0x47E40A0", VA = "0x47E40A0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x47E40B0", Offset = "0x47E40B0", VA = "0x47E40B0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x47E4190", Offset = "0x47E4190", VA = "0x47E4190", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x47E41C0", Offset = "0x47E41C0", VA = "0x47E41C0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x47E4230", Offset = "0x47E4230", VA = "0x47E4230", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x47E3230", Offset = "0x47E3230", VA = "0x47E3230")]
	private void FinishReadBinary()
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x47E4270", Offset = "0x47E4270", VA = "0x47E4270", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x47E4290", Offset = "0x47E4290", VA = "0x47E4290", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x47E42B0", Offset = "0x47E42B0", VA = "0x47E42B0", Slot = "54")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}
}
