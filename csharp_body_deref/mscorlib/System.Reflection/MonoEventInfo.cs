using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000512")]
internal struct MonoEventInfo
{
	[Token(Token = "0x400152B")]
	[FieldOffset(Offset = "0x0")]
	public Type declaring_type;

	[Token(Token = "0x400152C")]
	[FieldOffset(Offset = "0x8")]
	public Type reflected_type;

	[Token(Token = "0x400152D")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x400152E")]
	[FieldOffset(Offset = "0x18")]
	public MethodInfo add_method;

	[Token(Token = "0x400152F")]
	[FieldOffset(Offset = "0x20")]
	public MethodInfo remove_method;

	[Token(Token = "0x4001530")]
	[FieldOffset(Offset = "0x28")]
	public MethodInfo raise_method;

	[Token(Token = "0x4001531")]
	[FieldOffset(Offset = "0x30")]
	public EventAttributes attrs;

	[Token(Token = "0x4001532")]
	[FieldOffset(Offset = "0x38")]
	public MethodInfo[] other_methods;
}
