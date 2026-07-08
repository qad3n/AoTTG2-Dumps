using System.Runtime.CompilerServices;
using System.Xml;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C9")]
internal class XDeclarationWrapper : XObjectWrapper, IXmlDeclaration, IXmlNode
{
	[Token(Token = "0x1700027A")]
	internal XDeclaration Declaration
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x3B53F90", Offset = "0x3B53F90", VA = "0x3B53F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x3B54010", Offset = "0x3B54010", VA = "0x3B54010", Slot = "14")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700027C")]
	public string? Version
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x3B54020", Offset = "0x3B54020", VA = "0x3B54020", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public string? Encoding
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x3B54040", Offset = "0x3B54040", VA = "0x3B54040", Slot = "24")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x3B54060", Offset = "0x3B54060", VA = "0x3B54060", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public string? Standalone
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x3B54080", Offset = "0x3B54080", VA = "0x3B54080", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x3B540A0", Offset = "0x3B540A0", VA = "0x3B540A0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x3B53FA0", Offset = "0x3B53FA0", VA = "0x3B53FA0")]
	public XDeclarationWrapper(XDeclaration declaration)
	{
	}
}
