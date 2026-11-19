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
		[Address(RVA = "0x563B350", Offset = "0x563A350", VA = "0x563B350")]
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
		[Address(RVA = "0x563B3D0", Offset = "0x563A3D0", VA = "0x563B3D0", Slot = "14")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700027C")]
	public string? Version
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x563B3E0", Offset = "0x563A3E0", VA = "0x563B3E0", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public string? Encoding
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x563B400", Offset = "0x563A400", VA = "0x563B400", Slot = "24")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x563B420", Offset = "0x563A420", VA = "0x563B420", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public string? Standalone
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x563B440", Offset = "0x563A440", VA = "0x563B440", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x563B460", Offset = "0x563A460", VA = "0x563B460", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x563B360", Offset = "0x563A360", VA = "0x563B360")]
	public XDeclarationWrapper(XDeclaration declaration)
	{
	}
}
