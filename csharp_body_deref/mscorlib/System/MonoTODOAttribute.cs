using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200014E")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true)]
internal class MonoTODOAttribute : Attribute
{
	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x10")]
	private string comment;

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x4FFFC50", Offset = "0x4FFFC50", VA = "0x4FFFC50")]
	public MonoTODOAttribute()
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x4FFFC70", Offset = "0x4FFFC70", VA = "0x4FFFC70")]
	public MonoTODOAttribute(string comment)
	{
	}
}
