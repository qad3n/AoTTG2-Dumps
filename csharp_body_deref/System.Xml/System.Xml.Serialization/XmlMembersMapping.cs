// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlMembersMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000129")]
[DefaultMember("Item")]
public class XmlMembersMapping : XmlMapping
{
	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasWrapperElement;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x50")]
	private XmlMemberMapping[] _mapping;

	[Token(Token = "0x1700037C")]
	public int Count
	{
		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x4815960", Offset = "0x4815960", VA = "0x4815960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700037D")]
	internal bool HasWrapperElement
	{
		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x4815980", Offset = "0x4815980", VA = "0x4815980")]
		get
		{
			return default(bool);
		}
	}
}
