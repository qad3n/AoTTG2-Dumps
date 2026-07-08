using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A3")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface, AllowMultiple = true, Inherited = false)]
internal sealed class TypeDependencyAttribute : Attribute
{
	[Token(Token = "0x4001339")]
	[FieldOffset(Offset = "0x10")]
	private string typeName;

	[Token(Token = "0x60022FF")]
	[Address(RVA = "0x4EDE590", Offset = "0x4EDE590", VA = "0x4EDE590")]
	public TypeDependencyAttribute(string typeName)
	{
	}
}
