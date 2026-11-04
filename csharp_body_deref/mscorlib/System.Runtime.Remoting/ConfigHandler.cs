// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ConfigHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;
using Mono.Xml;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000375")]
internal class ConfigHandler : Mono.Xml.SmallXmlParser.IContentHandler
{
	[Token(Token = "0x4000E9C")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList typeEntries;

	[Token(Token = "0x4000E9D")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList channelInstances;

	[Token(Token = "0x4000E9E")]
	[FieldOffset(Offset = "0x20")]
	private System.Runtime.Remoting.ChannelData currentChannel;

	[Token(Token = "0x4000E9F")]
	[FieldOffset(Offset = "0x28")]
	private Stack currentProviderData;

	[Token(Token = "0x4000EA0")]
	[FieldOffset(Offset = "0x30")]
	private string currentClientUrl;

	[Token(Token = "0x4000EA1")]
	[FieldOffset(Offset = "0x38")]
	private string appName;

	[Token(Token = "0x4000EA2")]
	[FieldOffset(Offset = "0x40")]
	private string currentXmlPath;

	[Token(Token = "0x4000EA3")]
	[FieldOffset(Offset = "0x48")]
	private bool onlyDelayedChannels;

	[Token(Token = "0x6001CC8")]
	[Address(RVA = "0x19D9C30", Offset = "0x19D8230", VA = "0x1819D9C30")]
	public ConfigHandler(bool onlyDelayedChannels)
	{
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x19D9B40", Offset = "0x19D8140", VA = "0x1819D9B40")]
	private void ValidatePath(string element, params string[] paths)
	{
	}

	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x19D6340", Offset = "0x19D4940", VA = "0x1819D6340")]
	private bool CheckPath(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x6001CCC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x19D67D0", Offset = "0x19D4DD0", VA = "0x1819D67D0", Slot = "6")]
	public void OnStartElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CCF")]
	[Address(RVA = "0x19D6930", Offset = "0x19D4F30", VA = "0x1819D6930")]
	public void ParseElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CD0")]
	[Address(RVA = "0x19D6610", Offset = "0x19D4C10", VA = "0x1819D6610", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x19D87B0", Offset = "0x19D6DB0", VA = "0x1819D87B0")]
	private void ReadCustomProviderData(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x19D8D00", Offset = "0x19D7300", VA = "0x1819D8D00")]
	private void ReadLifetine(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CD3")]
	[Address(RVA = "0x19D7B30", Offset = "0x19D6130", VA = "0x1819D7B30")]
	private TimeSpan ParseTime(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001CD4")]
	[Address(RVA = "0x19D7EB0", Offset = "0x19D64B0", VA = "0x1819D7EB0")]
	private void ReadChannel(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
	}

	[Token(Token = "0x6001CD5")]
	[Address(RVA = "0x19D9290", Offset = "0x19D7890", VA = "0x1819D9290")]
	private System.Runtime.Remoting.ProviderData ReadProvider(string name, Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
		return null;
	}

	[Token(Token = "0x6001CD6")]
	[Address(RVA = "0x19D8440", Offset = "0x19D6A40", VA = "0x1819D8440")]
	private void ReadClientActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CD7")]
	[Address(RVA = "0x19D9770", Offset = "0x19D7D70", VA = "0x1819D9770")]
	private void ReadServiceActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CD8")]
	[Address(RVA = "0x19D86A0", Offset = "0x19D6CA0", VA = "0x1819D86A0")]
	private void ReadClientWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x19D9940", Offset = "0x19D7F40", VA = "0x1819D9940")]
	private void ReadServiceWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x19D8B70", Offset = "0x19D7170", VA = "0x1819D8B70")]
	private void ReadInteropXml(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isElement)
	{
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x19D9020", Offset = "0x19D7620", VA = "0x1819D9020")]
	private void ReadPreload(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x19D6530", Offset = "0x19D4B30", VA = "0x1819D6530")]
	private string GetNotNull(Mono.Xml.SmallXmlParser.IAttrList attrs, string name)
	{
		return null;
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x19D6450", Offset = "0x19D4A50", VA = "0x1819D6450")]
	private string ExtractAssembly(ref string type)
	{
		return null;
	}

	[Token(Token = "0x6001CDE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x6001CDF")]
	[Address(RVA = "0x19D66C0", Offset = "0x19D4CC0", VA = "0x1819D66C0", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
