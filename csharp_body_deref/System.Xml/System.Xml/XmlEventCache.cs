// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlEventCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Xsl.Runtime;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200004C")]
internal sealed class XmlEventCache : XmlRawWriter
{
	[Token(Token = "0x200004D")]
	private enum XmlEventType
	{
		[Token(Token = "0x4000188")]
		Unknown,
		[Token(Token = "0x4000189")]
		DocType,
		[Token(Token = "0x400018A")]
		StartElem,
		[Token(Token = "0x400018B")]
		StartAttr,
		[Token(Token = "0x400018C")]
		EndAttr,
		[Token(Token = "0x400018D")]
		CData,
		[Token(Token = "0x400018E")]
		Comment,
		[Token(Token = "0x400018F")]
		PI,
		[Token(Token = "0x4000190")]
		Whitespace,
		[Token(Token = "0x4000191")]
		String,
		[Token(Token = "0x4000192")]
		Raw,
		[Token(Token = "0x4000193")]
		EntRef,
		[Token(Token = "0x4000194")]
		CharEnt,
		[Token(Token = "0x4000195")]
		SurrCharEnt,
		[Token(Token = "0x4000196")]
		Base64,
		[Token(Token = "0x4000197")]
		BinHex,
		[Token(Token = "0x4000198")]
		XmlDecl1,
		[Token(Token = "0x4000199")]
		XmlDecl2,
		[Token(Token = "0x400019A")]
		StartContent,
		[Token(Token = "0x400019B")]
		EndElem,
		[Token(Token = "0x400019C")]
		FullEndElem,
		[Token(Token = "0x400019D")]
		Nmsp,
		[Token(Token = "0x400019E")]
		EndBase64,
		[Token(Token = "0x400019F")]
		Close,
		[Token(Token = "0x40001A0")]
		Flush,
		[Token(Token = "0x40001A1")]
		Dispose
	}

	[Token(Token = "0x200004E")]
	private struct XmlEvent
	{
		[Token(Token = "0x40001A2")]
		[FieldOffset(Offset = "0x0")]
		private XmlEventType eventType;

		[Token(Token = "0x40001A3")]
		[FieldOffset(Offset = "0x8")]
		private string s1;

		[Token(Token = "0x40001A4")]
		[FieldOffset(Offset = "0x10")]
		private string s2;

		[Token(Token = "0x40001A5")]
		[FieldOffset(Offset = "0x18")]
		private string s3;

		[Token(Token = "0x40001A6")]
		[FieldOffset(Offset = "0x20")]
		private object o;

		[Token(Token = "0x1700007A")]
		public XmlEventType EventType
		{
			[Token(Token = "0x60002FC")]
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
			get
			{
				return default(XmlEventType);
			}
		}

		[Token(Token = "0x1700007B")]
		public string String1
		{
			[Token(Token = "0x60002FD")]
			[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public string String2
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public string String3
		{
			[Token(Token = "0x60002FF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007E")]
		public object Object
		{
			[Token(Token = "0x6000300")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		public void InitEvent(XmlEventType eventType)
		{
		}

		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x1028B90", Offset = "0x1027190", VA = "0x181028B90")]
		public void InitEvent(XmlEventType eventType, string s1)
		{
		}

		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x26EC7F0", Offset = "0x26EADF0", VA = "0x1826EC7F0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2)
		{
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x26EC8B0", Offset = "0x26EAEB0", VA = "0x1826EC8B0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x26EC850", Offset = "0x26EAE50", VA = "0x1826EC850")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x26EC830", Offset = "0x26EAE30", VA = "0x1826EC830")]
		public void InitEvent(XmlEventType eventType, object o)
		{
		}
	}

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x28")]
	private List<XmlEvent[]> pages;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x30")]
	private XmlEvent[] pageCurr;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x38")]
	private int pageSize;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x3C")]
	private bool hasRootNode;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x40")]
	private StringConcat singleText;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x78")]
	private string baseUri;

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x26EC7A0", Offset = "0x26EADA0", VA = "0x1826EC7A0")]
	public XmlEventCache(string baseUri, bool hasRootNode)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x26EB170", Offset = "0x26E9770", VA = "0x1826EB170")]
	public void EndEvents()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x26EB1C0", Offset = "0x26E97C0", VA = "0x1826EB1C0")]
	public void EventsToWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x26EC140", Offset = "0x26EA740", VA = "0x1826EC140", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x26EC4C0", Offset = "0x26EAAC0", VA = "0x1826EC4C0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x26EC490", Offset = "0x26EAA90", VA = "0x1826EC490", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x26EC1F0", Offset = "0x26EA7F0", VA = "0x1826EC1F0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x26EC000", Offset = "0x26EA600", VA = "0x1826EC000", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x26EC0E0", Offset = "0x26EA6E0", VA = "0x1826EC0E0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x26EC3B0", Offset = "0x26EA9B0", VA = "0x1826EC3B0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x26EC640", Offset = "0x26EAC40", VA = "0x1826EC640", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x26EC4F0", Offset = "0x26EAAF0", VA = "0x1826EC4F0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x26E53D0", Offset = "0x26E39D0", VA = "0x1826E53D0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x26E5630", Offset = "0x26E3C30", VA = "0x1826E5630", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x26EC430", Offset = "0x26EAA30", VA = "0x1826EC430", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x26EC2A0", Offset = "0x26EA8A0", VA = "0x1826EC2A0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x26EC060", Offset = "0x26EA660", VA = "0x1826EC060", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x26EC570", Offset = "0x26EAB70", VA = "0x1826EC570", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x26EBE40", Offset = "0x26EA440", VA = "0x1826EBE40", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x26EBF20", Offset = "0x26EA520", VA = "0x1826EBF20", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x26EB080", Offset = "0x26E9680", VA = "0x1826EB080", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x26EBB70", Offset = "0x26EA170", VA = "0x1826EBB70", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x26EC620", Offset = "0x26EAC20", VA = "0x1826EC620", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x26EB0C0", Offset = "0x26E96C0", VA = "0x1826EB0C0", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x26EC6A0", Offset = "0x26EACA0", VA = "0x1826EC6A0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x26EC740", Offset = "0x26EAD40", VA = "0x1826EC740", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x26EBD40", Offset = "0x26EA340", VA = "0x1826EBD40", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x26EC270", Offset = "0x26EA870", VA = "0x1826EC270", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x26EC300", Offset = "0x26EA900", VA = "0x1826EC300", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x26EC330", Offset = "0x26EA930", VA = "0x1826EC330", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x26EC230", Offset = "0x26EA830", VA = "0x1826EC230", Slot = "46")]
	internal override void WriteEndBase64()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x26EAE20", Offset = "0x26E9420", VA = "0x1826EAE20")]
	private void AddEvent(XmlEventType eventType)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x26EAF90", Offset = "0x26E9590", VA = "0x1826EAF90")]
	private void AddEvent(XmlEventType eventType, string s1)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x26EB000", Offset = "0x26E9600", VA = "0x1826EB000")]
	private void AddEvent(XmlEventType eventType, string s1, string s2)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x26EAD90", Offset = "0x26E9390", VA = "0x1826EAD90")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x26EAEE0", Offset = "0x26E94E0", VA = "0x1826EAEE0")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x26EAE70", Offset = "0x26E9470", VA = "0x1826EAE70")]
	private void AddEvent(XmlEventType eventType, object o)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x26EBBB0", Offset = "0x26EA1B0", VA = "0x1826EBBB0")]
	private int NewEvent()
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x26EBD80", Offset = "0x26EA380", VA = "0x1826EBD80")]
	private static byte[] ToBytes(byte[] buffer, int index, int count)
	{
		return null;
	}
}
