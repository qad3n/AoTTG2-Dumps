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
	[Address(RVA = "0x3B61BE0", Offset = "0x3B61BE0", VA = "0x3B61BE0")]
	public ConfigHandler(bool onlyDelayedChannels)
	{
	}

	[Token(Token = "0x6001C5A")]
	[Address(RVA = "0x3B65FC0", Offset = "0x3B65FC0", VA = "0x3B65FC0")]
	private void ValidatePath(string element, params string[] paths)
	{
	}

	[Token(Token = "0x6001C5B")]
	[Address(RVA = "0x3B66090", Offset = "0x3B66090", VA = "0x3B66090")]
	private bool CheckPath(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C5C")]
	[Address(RVA = "0x3B66190", Offset = "0x3B66190", VA = "0x3B66190", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x6001C5D")]
	[Address(RVA = "0x3B661A0", Offset = "0x3B661A0", VA = "0x3B661A0", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6001C5E")]
	[Address(RVA = "0x3B661B0", Offset = "0x3B661B0", VA = "0x3B661B0", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x3B661C0", Offset = "0x3B661C0", VA = "0x3B661C0", Slot = "6")]
	public void OnStartElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x3B66390", Offset = "0x3B66390", VA = "0x3B66390")]
	public void ParseElement(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x3B69140", Offset = "0x3B69140", VA = "0x3B69140", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x3B67460", Offset = "0x3B67460", VA = "0x3B67460")]
	private void ReadCustomProviderData(string name, Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x3B67880", Offset = "0x3B67880", VA = "0x3B67880")]
	private void ReadLifetine(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x3B691E0", Offset = "0x3B691E0", VA = "0x3B691E0")]
	private TimeSpan ParseTime(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001C65")]
	[Address(RVA = "0x3B67EA0", Offset = "0x3B67EA0", VA = "0x3B67EA0")]
	private void ReadChannel(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
	}

	[Token(Token = "0x6001C66")]
	[Address(RVA = "0x3B68400", Offset = "0x3B68400", VA = "0x3B68400")]
	private System.Runtime.Remoting.ProviderData ReadProvider(string name, Mono.Xml.SmallXmlParser.IAttrList attrs, bool isTemplate)
	{
		return null;
	}

	[Token(Token = "0x6001C67")]
	[Address(RVA = "0x3B68B70", Offset = "0x3B68B70", VA = "0x3B68B70")]
	private void ReadClientActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x3B68CA0", Offset = "0x3B68CA0", VA = "0x3B68CA0")]
	private void ReadServiceActivated(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x3B688D0", Offset = "0x3B688D0", VA = "0x3B688D0")]
	private void ReadClientWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C6A")]
	[Address(RVA = "0x3B689B0", Offset = "0x3B689B0", VA = "0x3B689B0")]
	private void ReadServiceWellKnown(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C6B")]
	[Address(RVA = "0x3B68D50", Offset = "0x3B68D50", VA = "0x3B68D50")]
	private void ReadInteropXml(Mono.Xml.SmallXmlParser.IAttrList attrs, bool isElement)
	{
	}

	[Token(Token = "0x6001C6C")]
	[Address(RVA = "0x3B68EC0", Offset = "0x3B68EC0", VA = "0x3B68EC0")]
	private void ReadPreload(Mono.Xml.SmallXmlParser.IAttrList attrs)
	{
	}

	[Token(Token = "0x6001C6D")]
	[Address(RVA = "0x3B69780", Offset = "0x3B69780", VA = "0x3B69780")]
	private string GetNotNull(Mono.Xml.SmallXmlParser.IAttrList attrs, string name)
	{
		return null;
	}

	[Token(Token = "0x6001C6E")]
	[Address(RVA = "0x3B698C0", Offset = "0x3B698C0", VA = "0x3B698C0")]
	private string ExtractAssembly(ref string type)
	{
		return null;
	}

	[Token(Token = "0x6001C6F")]
	[Address(RVA = "0x3B6A450", Offset = "0x3B6A450", VA = "0x3B6A450", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x3B6A460", Offset = "0x3B6A460", VA = "0x3B6A460", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
