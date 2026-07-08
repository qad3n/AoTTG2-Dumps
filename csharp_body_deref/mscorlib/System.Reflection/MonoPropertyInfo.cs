using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x200051B")]
internal struct MonoPropertyInfo
{
	[Token(Token = "0x400154D")]
	[FieldOffset(Offset = "0x0")]
	public Type parent;

	[Token(Token = "0x400154E")]
	[FieldOffset(Offset = "0x8")]
	public Type declaring_type;

	[Token(Token = "0x400154F")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x4001550")]
	[FieldOffset(Offset = "0x18")]
	public MethodInfo get_method;

	[Token(Token = "0x4001551")]
	[FieldOffset(Offset = "0x20")]
	public MethodInfo set_method;

	[Token(Token = "0x4001552")]
	[FieldOffset(Offset = "0x28")]
	public PropertyAttributes attrs;
}
