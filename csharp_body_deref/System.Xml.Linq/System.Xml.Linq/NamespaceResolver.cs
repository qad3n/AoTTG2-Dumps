// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.NamespaceResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
	[Address(RVA = "0x25E48F0", Offset = "0x25E2EF0", VA = "0x1825E48F0")]
	public void PushScope()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x25E4860", Offset = "0x25E2E60", VA = "0x1825E4860")]
	public void PopScope()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x25E4680", Offset = "0x25E2C80", VA = "0x1825E4680")]
	public void Add(string prefix, XNamespace ns)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x25E4590", Offset = "0x25E2B90", VA = "0x1825E4590")]
	public void AddFirst(string prefix, XNamespace ns)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x25E4760", Offset = "0x25E2D60", VA = "0x1825E4760")]
	public string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}
}
