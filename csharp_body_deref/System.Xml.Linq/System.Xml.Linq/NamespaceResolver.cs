using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000017")]
internal struct NamespaceResolver
{
	[Token(Token = "0x2000018")]
	private class NamespaceDeclaration
	{
		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0x10")]
		public string prefix;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0x18")]
		public XNamespace ns;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x20")]
		public int scope;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x28")]
		public NamespaceDeclaration prev;

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x4344470", Offset = "0x4344470", VA = "0x4344470")]
		public NamespaceDeclaration()
		{
		}
	}

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x0")]
	private int _scope;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x8")]
	private NamespaceDeclaration _declaration;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x10")]
	private NamespaceDeclaration _rover;

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x43442D0", Offset = "0x43442D0", VA = "0x43442D0")]
	public void PushScope()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x43443D0", Offset = "0x43443D0", VA = "0x43443D0")]
	public void PopScope()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x43442E0", Offset = "0x43442E0", VA = "0x43442E0")]
	public void Add(string prefix, XNamespace ns)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4344110", Offset = "0x4344110", VA = "0x4344110")]
	public void AddFirst(string prefix, XNamespace ns)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4343FA0", Offset = "0x4343FA0", VA = "0x4343FA0")]
	public string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}
}
