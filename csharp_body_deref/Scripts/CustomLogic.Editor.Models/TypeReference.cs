using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x200047A")]
internal class TypeReference
{
	[Token(Token = "0x40013A6")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40013A7")]
	[FieldOffset(Offset = "0x18")]
	public TypeReference[] Arguments;

	[Token(Token = "0x6002FF5")]
	[Address(RVA = "0x3E7AB40", Offset = "0x3E7AB40", VA = "0x3E7AB40")]
	public TypeReference(string name)
	{
	}

	[Token(Token = "0x6002FF6")]
	[Address(RVA = "0x3E7AC30", Offset = "0x3E7AC30", VA = "0x3E7AC30")]
	public TypeReference(string name, TypeReference[] arguments)
	{
	}
}
