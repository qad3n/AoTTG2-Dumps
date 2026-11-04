// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XDeclarationWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
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
		[Address(RVA = "0x1CB0BF0", Offset = "0x1CAF1F0", VA = "0x181CB0BF0", Slot = "14")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700027C")]
	public string? Version
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x1CB0C20", Offset = "0x1CAF220", VA = "0x181CB0C20", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public string? Encoding
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x1CB0BD0", Offset = "0x1CAF1D0", VA = "0x181CB0BD0", Slot = "24")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x1CB0C40", Offset = "0x1CAF240", VA = "0x181CB0C40", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public string? Standalone
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x1CB0C00", Offset = "0x1CAF200", VA = "0x181CB0C00", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x1CB0C70", Offset = "0x1CAF270", VA = "0x181CB0C70", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x1CB0B80", Offset = "0x1CAF180", VA = "0x181CB0B80")]
	public XDeclarationWrapper(XDeclaration declaration)
	{
	}
}
