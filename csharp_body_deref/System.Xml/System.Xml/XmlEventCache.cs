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
			[Address(RVA = "0x4461970", Offset = "0x4461970", VA = "0x4461970")]
			get
			{
				return default(XmlEventType);
			}
		}

		[Token(Token = "0x1700007B")]
		public string String1
		{
			[Token(Token = "0x60002FD")]
			[Address(RVA = "0x4461980", Offset = "0x4461980", VA = "0x4461980")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public string String2
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x4461990", Offset = "0x4461990", VA = "0x4461990")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public string String3
		{
			[Token(Token = "0x60002FF")]
			[Address(RVA = "0x44619A0", Offset = "0x44619A0", VA = "0x44619A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007E")]
		public object Object
		{
			[Token(Token = "0x6000300")]
			[Address(RVA = "0x44619B0", Offset = "0x44619B0", VA = "0x44619B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x4461960", Offset = "0x4461960", VA = "0x4461960")]
		public void InitEvent(XmlEventType eventType)
		{
		}

		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x4461820", Offset = "0x4461820", VA = "0x4461820")]
		public void InitEvent(XmlEventType eventType, string s1)
		{
		}

		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x4461840", Offset = "0x4461840", VA = "0x4461840")]
		public void InitEvent(XmlEventType eventType, string s1, string s2)
		{
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x4461880", Offset = "0x4461880", VA = "0x4461880")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x44618D0", Offset = "0x44618D0", VA = "0x44618D0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x4461940", Offset = "0x4461940", VA = "0x4461940")]
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
	[Address(RVA = "0x445A9A0", Offset = "0x445A9A0", VA = "0x445A9A0")]
	public XmlEventCache(string baseUri, bool hasRootNode)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x445B5E0", Offset = "0x445B5E0", VA = "0x445B5E0")]
	public void EndEvents()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x445B620", Offset = "0x445B620", VA = "0x445B620")]
	public void EventsToWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4460640", Offset = "0x4460640", VA = "0x4460640", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4460720", Offset = "0x4460720", VA = "0x4460720", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4460860", Offset = "0x4460860", VA = "0x4460860", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4460900", Offset = "0x4460900", VA = "0x4460900", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4460940", Offset = "0x4460940", VA = "0x4460940", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x44609F0", Offset = "0x44609F0", VA = "0x44609F0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4460A50", Offset = "0x4460A50", VA = "0x4460A50", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4460B50", Offset = "0x4460B50", VA = "0x4460B50", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4460BB0", Offset = "0x4460BB0", VA = "0x4460BB0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4460C30", Offset = "0x4460C30", VA = "0x4460C30", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4460C60", Offset = "0x4460C60", VA = "0x4460C60", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4460C90", Offset = "0x4460C90", VA = "0x4460C90", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4460CF0", Offset = "0x4460CF0", VA = "0x4460CF0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4460D50", Offset = "0x4460D50", VA = "0x4460D50", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4460E20", Offset = "0x4460E20", VA = "0x4460E20", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4460ED0", Offset = "0x4460ED0", VA = "0x4460ED0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x4461050", Offset = "0x4461050", VA = "0x4461050", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x4461140", Offset = "0x4461140", VA = "0x4461140", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4461180", Offset = "0x4461180", VA = "0x4461180", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x44611C0", Offset = "0x44611C0", VA = "0x44611C0", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x44611E0", Offset = "0x44611E0", VA = "0x44611E0", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x44612B0", Offset = "0x44612B0", VA = "0x44612B0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4461340", Offset = "0x4461340", VA = "0x4461340", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x44613A0", Offset = "0x44613A0", VA = "0x44613A0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x44613E0", Offset = "0x44613E0", VA = "0x44613E0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4461480", Offset = "0x4461480", VA = "0x4461480", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4461520", Offset = "0x4461520", VA = "0x4461520", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x44615A0", Offset = "0x44615A0", VA = "0x44615A0", Slot = "46")]
	internal override void WriteEndBase64()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4460600", Offset = "0x4460600", VA = "0x4460600")]
	private void AddEvent(XmlEventType eventType)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x44609A0", Offset = "0x44609A0", VA = "0x44609A0")]
	private void AddEvent(XmlEventType eventType, string s1)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4460AD0", Offset = "0x4460AD0", VA = "0x4460AD0")]
	private void AddEvent(XmlEventType eventType, string s1, string s2)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x44607C0", Offset = "0x44607C0", VA = "0x44607C0")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4460660", Offset = "0x4460660", VA = "0x4460660")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4460DD0", Offset = "0x4460DD0", VA = "0x4460DD0")]
	private void AddEvent(XmlEventType eventType, object o)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x44615E0", Offset = "0x44615E0", VA = "0x44615E0")]
	private int NewEvent()
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4460FC0", Offset = "0x4460FC0", VA = "0x4460FC0")]
	private static byte[] ToBytes(byte[] buffer, int index, int count)
	{
		return null;
	}
}
