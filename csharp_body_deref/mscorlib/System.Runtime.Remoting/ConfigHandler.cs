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

[Token(Token = "0x200034E")]
internal class ConfigHandler : Mono.Xml.SmallXmlParser.IContentHandler
{
	[Token(Token = "0x4000DFC")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList typeEntries;

	[Token(Token = "0x4000DFD")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList channelInstances;

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x20")]
	private System.Runtime.Remoting.ChannelData currentChannel;

	[Token(Token = "0x4000DFF")]
	[FieldOffset(Offset = "0x28")]
	private Stack currentProviderData;

	[Token(Token = "0x4000E00")]
	[FieldOffset(Offset = "0x30")]
	private string currentClientUrl;

	[Token(Token = "0x4000E01")]
	[FieldOffset(Offset = "0x38")]
	private string appName;

	[Token(Token = "0x4000E02")]
	[FieldOffset(Offset = "0x40")]
	private string currentXmlPath;

	[Token(Token = "0x4000E03")]
	[FieldOffset(Offset = "0x48")]
	private bool onlyDelayedChannels;

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x536B2E0", Offset = "0x536A2E0", VA = "0x536B2E0")]
	public ConfigHandler(bool onlyDelayedChannels)
	{
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x536EF00", Offset = "0x536DF00", VA = "0x536EF00")]
	private void ValidatePath(string element, params string[] paths)
	{
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x536EFE0", Offset = "0x536DFE0", VA = "0x536EFE0")]
	private bool CheckPath(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x536F0E0", Offset = "0x536E0E0", VA = "0x536F0E0", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x536F0F0", Offset = "0x536E0F0", VA = "0x536F0F0", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6001CA3")]
	[Address(RVA = "0x536F100", Offset = "0x536E100", VA = "0x536F100", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x536F110", Offset = "0x536E110", VA = "0x536F110", Slot = "6")]
	public void OnStartElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CA5")]
	[Address(RVA = "0x536F2C0", Offset = "0x536E2C0", VA = "0x536F2C0")]
	public void ParseElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CA6")]
	[Address(RVA = "0x5371F20", Offset = "0x5370F20", VA = "0x5371F20", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x5370180", Offset = "0x536F180", VA = "0x5370180")]
	private void ReadCustomProviderData(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x5370620", Offset = "0x536F620", VA = "0x5370620")]
	private void ReadLifetine(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CA9")]
	[Address(RVA = "0x5371FC0", Offset = "0x5370FC0", VA = "0x5371FC0")]
	private TimeSpan ParseTime(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x5370C50", Offset = "0x536FC50", VA = "0x5370C50")]
	private void ReadChannel(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
	}

	[Token(Token = "0x6001CAB")]
	[Address(RVA = "0x53711C0", Offset = "0x53701C0", VA = "0x53711C0")]
	private System.Runtime.Remoting.ProviderData ReadProvider(string name, Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
		return null;
	}

	[Token(Token = "0x6001CAC")]
	[Address(RVA = "0x5371930", Offset = "0x5370930", VA = "0x5371930")]
	private void ReadClientActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CAD")]
	[Address(RVA = "0x5371A60", Offset = "0x5370A60", VA = "0x5371A60")]
	private void ReadServiceActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CAE")]
	[Address(RVA = "0x5371690", Offset = "0x5370690", VA = "0x5371690")]
	private void ReadClientWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CAF")]
	[Address(RVA = "0x5371770", Offset = "0x5370770", VA = "0x5371770")]
	private void ReadServiceWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CB0")]
	[Address(RVA = "0x5371B10", Offset = "0x5370B10", VA = "0x5371B10")]
	private void ReadInteropXml(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isElement)
	{
	}

	[Token(Token = "0x6001CB1")]
	[Address(RVA = "0x5371CA0", Offset = "0x5370CA0", VA = "0x5371CA0")]
	private void ReadPreload(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001CB2")]
	[Address(RVA = "0x5372560", Offset = "0x5371560", VA = "0x5372560")]
	private string GetNotNull(Mono.Xml.SmallXmlParser.IAttrList attrs, string name)
	{
		return null;
	}

	[Token(Token = "0x6001CB3")]
	[Address(RVA = "0x53726A0", Offset = "0x53716A0", VA = "0x53726A0")]
	private string ExtractAssembly(ref string type)
	{
		return null;
	}

	[Token(Token = "0x6001CB4")]
	[Address(RVA = "0x5373180", Offset = "0x5372180", VA = "0x5373180", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x6001CB5")]
	[Address(RVA = "0x5373190", Offset = "0x5372190", VA = "0x5373190", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
