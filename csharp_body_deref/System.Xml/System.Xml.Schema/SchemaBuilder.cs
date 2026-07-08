using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001E8")]
internal abstract class SchemaBuilder
{
	[Token(Token = "0x60012F2")]
	internal abstract bool ProcessElement(string prefix, string name, string ns);

	[Token(Token = "0x60012F3")]
	internal abstract void ProcessAttribute(string prefix, string name, string ns, string value);

	[Token(Token = "0x60012F4")]
	internal abstract bool IsContentParsed();

	[Token(Token = "0x60012F5")]
	internal abstract void ProcessMarkup(XmlNode[] markup);

	[Token(Token = "0x60012F6")]
	internal abstract void ProcessCData(string value);

	[Token(Token = "0x60012F7")]
	internal abstract void StartChildren();

	[Token(Token = "0x60012F8")]
	internal abstract void EndChildren();

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x438BB20", Offset = "0x438BB20", VA = "0x438BB20")]
	protected SchemaBuilder()
	{
	}
}
