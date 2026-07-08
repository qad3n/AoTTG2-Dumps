using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000180")]
internal sealed class DelegateData
{
	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x10")]
	public Type target_type;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x18")]
	public string method_name;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x20")]
	public bool curried_first_arg;

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x5024960", Offset = "0x5024960", VA = "0x5024960")]
	public DelegateData()
	{
	}
}
