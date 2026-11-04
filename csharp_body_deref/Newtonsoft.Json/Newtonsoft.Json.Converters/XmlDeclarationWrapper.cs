// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XmlDeclarationWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C1")]
internal class XmlDeclarationWrapper : XmlNodeWrapper, IXmlDeclaration, IXmlNode
{
	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x28")]
	private readonly XmlDeclaration _declaration;

	[Token(Token = "0x17000257")]
	public string? Version
	{
		[Token(Token = "0x6000F16")]
		[Address(RVA = "0x1CB2C70", Offset = "0x1CB1270", VA = "0x181CB2C70", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000258")]
	public string? Encoding
	{
		[Token(Token = "0x6000F17")]
		[Address(RVA = "0x1CB2C30", Offset = "0x1CB1230", VA = "0x181CB2C30", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F18")]
		[Address(RVA = "0x1CB2C90", Offset = "0x1CB1290", VA = "0x181CB2C90", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	public string? Standalone
	{
		[Token(Token = "0x6000F19")]
		[Address(RVA = "0x1CB2C50", Offset = "0x1CB1250", VA = "0x181CB2C50", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F1A")]
		[Address(RVA = "0x1CB2CB0", Offset = "0x1CB12B0", VA = "0x181CB2CB0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x1CB2BE0", Offset = "0x1CB11E0", VA = "0x181CB2BE0")]
	public XmlDeclarationWrapper(XmlDeclaration declaration)
	{
	}
}
