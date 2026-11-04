// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XCommentWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CD")]
internal class XCommentWrapper : XObjectWrapper
{
	[Token(Token = "0x1700028B")]
	private XComment Text
	{
		[Token(Token = "0x6000F77")]
		[Address(RVA = "0x1CB0140", Offset = "0x1CAE740", VA = "0x181CB0140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	public override string? Value
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x1CB01B0", Offset = "0x1CAE7B0", VA = "0x181CB01B0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x1CB0230", Offset = "0x1CAE830", VA = "0x181CB0230", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700028D")]
	public override IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F7B")]
		[Address(RVA = "0x1CB0090", Offset = "0x1CAE690", VA = "0x181CB0090", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public XCommentWrapper(XComment text)
	{
	}
}
