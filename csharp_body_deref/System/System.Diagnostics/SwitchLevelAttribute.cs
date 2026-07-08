using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C4")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class SwitchLevelAttribute : Attribute
{
	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x170000B6")]
	public Type SwitchLevelType
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x45FF5F0", Offset = "0x45FF5F0", VA = "0x45FF5F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x45FF5D0", Offset = "0x45FF5D0", VA = "0x45FF5D0")]
	public SwitchLevelAttribute(Type switchLevelType)
	{
	}
}
