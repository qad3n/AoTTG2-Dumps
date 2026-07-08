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
		[Address(RVA = "0x44D8200", Offset = "0x44D8200", VA = "0x44D8200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700037D")]
	internal bool HasWrapperElement
	{
		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x44D8220", Offset = "0x44D8220", VA = "0x44D8220")]
		get
		{
			return default(bool);
		}
	}
}
