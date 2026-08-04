// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.QueryOutputWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000035")]
internal class QueryOutputWriter : XmlRawWriter
{
	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x28")]
	private XmlRawWriter wrapped;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x30")]
	private bool inCDataSection;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<XmlQualifiedName, int> lookupCDataElems;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x40")]
	private BitStack bitsCData;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x48")]
	private XmlQualifiedName qnameCData;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x50")]
	private bool outputDocType;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x51")]
	private bool checkWellFormedDoc;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x52")]
	private bool hasDocElem;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x53")]
	private bool inAttr;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x58")]
	private string systemId;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x60")]
	private string publicId;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x68")]
	private int depth;

	[Token(Token = "0x17000045")]
	internal override IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x4793F00", Offset = "0x4793F00", VA = "0x4793F00", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4794320", Offset = "0x4794320", VA = "0x4794320", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4793BD0", Offset = "0x4793BD0", VA = "0x4793BD0")]
	public QueryOutputWriter(XmlRawWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4793F50", Offset = "0x4793F50", VA = "0x4793F50", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4793F80", Offset = "0x4793F80", VA = "0x4793F80", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4793FB0", Offset = "0x4793FB0", VA = "0x4793FB0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x4793FF0", Offset = "0x4793FF0", VA = "0x4793FF0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x47941C0", Offset = "0x47941C0", VA = "0x47941C0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4794210", Offset = "0x4794210", VA = "0x4794210", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x4794260", Offset = "0x4794260", VA = "0x4794260", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x4794290", Offset = "0x4794290", VA = "0x4794290", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x47942C0", Offset = "0x47942C0", VA = "0x47942C0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x47942F0", Offset = "0x47942F0", VA = "0x47942F0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4794350", Offset = "0x4794350", VA = "0x4794350", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4794380", Offset = "0x4794380", VA = "0x4794380", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x47943B0", Offset = "0x47943B0", VA = "0x47943B0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x47943E0", Offset = "0x47943E0", VA = "0x47943E0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4794410", Offset = "0x4794410", VA = "0x4794410", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4794440", Offset = "0x4794440", VA = "0x4794440", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4794520", Offset = "0x4794520", VA = "0x4794520", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x47945B0", Offset = "0x47945B0", VA = "0x47945B0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4794680", Offset = "0x4794680", VA = "0x4794680", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x47946B0", Offset = "0x47946B0", VA = "0x47946B0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x47946E0", Offset = "0x47946E0", VA = "0x47946E0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4794710", Offset = "0x4794710", VA = "0x4794710", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x47947E0", Offset = "0x47947E0", VA = "0x47947E0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x4794870", Offset = "0x4794870", VA = "0x4794870", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x4794910", Offset = "0x4794910", VA = "0x4794910", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x47944D0", Offset = "0x47944D0", VA = "0x47944D0")]
	private bool StartCDataSection()
	{
		return default(bool);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x47941B0", Offset = "0x47941B0", VA = "0x47941B0")]
	private void EndCDataSection()
	{
	}
}
