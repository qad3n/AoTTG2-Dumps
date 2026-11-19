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
		[Address(RVA = "0x563CF00", Offset = "0x563BF00", VA = "0x563CF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	public override string? Value
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x563CF90", Offset = "0x563BF90", VA = "0x563CF90", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x563D000", Offset = "0x563C000", VA = "0x563D000", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700028D")]
	public override IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F7B")]
		[Address(RVA = "0x563D0A0", Offset = "0x563C0A0", VA = "0x563D0A0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x563CF60", Offset = "0x563BF60", VA = "0x563CF60")]
	public XCommentWrapper(XComment text)
	{
	}
}
