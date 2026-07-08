using System.Collections;
using Il2CppDummyDll;
using Mono.Xml;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000346")]
internal class ConfigHandler : Mono.Xml.SmallXmlParser.IContentHandler
{
	[Token(Token = "0x4000E8F")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList typeEntries;

	[Token(Token = "0x4000E90")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList channelInstances;

	[Token(Token = "0x4000E91")]
	[FieldOffset(Offset = "0x20")]
	private System.Runtime.Remoting.ChannelData currentChannel;

	[Token(Token = "0x4000E92")]
	[FieldOffset(Offset = "0x28")]
	private Stack currentProviderData;

	[Token(Token = "0x4000E93")]
	[FieldOffset(Offset = "0x30")]
	private string currentClientUrl;

	[Token(Token = "0x4000E94")]
	[FieldOffset(Offset = "0x38")]
	private string appName;

	[Token(Token = "0x4000E95")]
	[FieldOffset(Offset = "0x40")]
	private string currentXmlPath;

	[Token(Token = "0x4000E96")]
	[FieldOffset(Offset = "0x48")]
	private bool onlyDelayedChannels;

	[Token(Token = "0x6001C59")]
	[Address(RVA = "0x4E7C0C0", Offset = "0x4E7C0C0", VA = "0x4E7C0C0")]
	public ConfigHandler(bool onlyDelayedChannels)
	{
	}

	[Token(Token = "0x6001C5A")]
	[Address(RVA = "0x4E804A0", Offset = "0x4E804A0", VA = "0x4E804A0")]
	private void ValidatePath(string element, params string[] paths)
	{
	}

	[Token(Token = "0x6001C5B")]
	[Address(RVA = "0x4E80570", Offset = "0x4E80570", VA = "0x4E80570")]
	private bool CheckPath(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C5C")]
	[Address(RVA = "0x4E80670", Offset = "0x4E80670", VA = "0x4E80670", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x6001C5D")]
	[Address(RVA = "0x4E80680", Offset = "0x4E80680", VA = "0x4E80680", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6001C5E")]
	[Address(RVA = "0x4E80690", Offset = "0x4E80690", VA = "0x4E80690", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x4E806A0", Offset = "0x4E806A0", VA = "0x4E806A0", Slot = "6")]
	public void OnStartElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x4E80870", Offset = "0x4E80870", VA = "0x4E80870")]
	public void ParseElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x4E83620", Offset = "0x4E83620", VA = "0x4E83620", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x4E81940", Offset = "0x4E81940", VA = "0x4E81940")]
	private void ReadCustomProviderData(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x4E81D60", Offset = "0x4E81D60", VA = "0x4E81D60")]
	private void ReadLifetine(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x4E836C0", Offset = "0x4E836C0", VA = "0x4E836C0")]
	private TimeSpan ParseTime(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001C65")]
	[Address(RVA = "0x4E82380", Offset = "0x4E82380", VA = "0x4E82380")]
	private void ReadChannel(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
	}

	[Token(Token = "0x6001C66")]
	[Address(RVA = "0x4E828E0", Offset = "0x4E828E0", VA = "0x4E828E0")]
	private System.Runtime.Remoting.ProviderData ReadProvider(string name, Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
		return null;
	}

	[Token(Token = "0x6001C67")]
	[Address(RVA = "0x4E83050", Offset = "0x4E83050", VA = "0x4E83050")]
	private void ReadClientActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x4E83180", Offset = "0x4E83180", VA = "0x4E83180")]
	private void ReadServiceActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x4E82DB0", Offset = "0x4E82DB0", VA = "0x4E82DB0")]
	private void ReadClientWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C6A")]
	[Address(RVA = "0x4E82E90", Offset = "0x4E82E90", VA = "0x4E82E90")]
	private void ReadServiceWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C6B")]
	[Address(RVA = "0x4E83230", Offset = "0x4E83230", VA = "0x4E83230")]
	private void ReadInteropXml(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isElement)
	{
	}

	[Token(Token = "0x6001C6C")]
	[Address(RVA = "0x4E833A0", Offset = "0x4E833A0", VA = "0x4E833A0")]
	private void ReadPreload(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C6D")]
	[Address(RVA = "0x4E83C60", Offset = "0x4E83C60", VA = "0x4E83C60")]
	private string GetNotNull(Mono.Xml.SmallXmlParser.IAttrList attrs, string name)
	{
		return null;
	}

	[Token(Token = "0x6001C6E")]
	[Address(RVA = "0x4E83DA0", Offset = "0x4E83DA0", VA = "0x4E83DA0")]
	private string ExtractAssembly(ref string type)
	{
		return null;
	}

	[Token(Token = "0x6001C6F")]
	[Address(RVA = "0x4E84930", Offset = "0x4E84930", VA = "0x4E84930", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x4E84940", Offset = "0x4E84940", VA = "0x4E84940", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
