using System;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006D6")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
internal class OrderAttribute : Attribute
{
	[Token(Token = "0x40020F8")]
	[FieldOffset(Offset = "0x10")]
	private readonly int order;

	[Token(Token = "0x17000D35")]
	public int Order
	{
		[Token(Token = "0x60043F4")]
		[Address(RVA = "0x4053D80", Offset = "0x4053D80", VA = "0x4053D80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60043F5")]
	[Address(RVA = "0x4053D90", Offset = "0x4053D90", VA = "0x4053D90")]
	public OrderAttribute(int order)
	{
	}
}
