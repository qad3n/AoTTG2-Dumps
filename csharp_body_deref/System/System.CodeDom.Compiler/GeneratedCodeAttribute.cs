using Il2CppDummyDll;

namespace System.CodeDom.Compiler;

[Token(Token = "0x20000BF")]
[AttributeUsage(AttributeTargets.All, Inherited = false, AllowMultiple = false)]
public sealed class GeneratedCodeAttribute : Attribute
{
	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x10")]
	private readonly string tool;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x18")]
	private readonly string version;

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x45FDBC0", Offset = "0x45FDBC0", VA = "0x45FDBC0")]
	public GeneratedCodeAttribute(string tool, string version)
	{
	}
}
