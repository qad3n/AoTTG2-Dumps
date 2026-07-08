using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000015")]
internal struct NamespaceCache
{
	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	private XNamespace _ns;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x8")]
	private string _namespaceName;

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4340D40", Offset = "0x4340D40", VA = "0x4340D40")]
	public XNamespace Get(string namespaceName)
	{
		return null;
	}
}
