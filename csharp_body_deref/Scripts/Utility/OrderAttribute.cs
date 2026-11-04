// ==================== AoTTG2 cross-reference ====================
// Type: Utility.OrderAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/OrderAttribute.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/OrderAttribute.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008A9")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
internal class OrderAttribute : Attribute
{
	[Token(Token = "0x4002B14")]
	[FieldOffset(Offset = "0x10")]
	private readonly int order;

	[Token(Token = "0x17000F10")]
	public int Order
	{
		[Token(Token = "0x60052B8")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60052B9")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public OrderAttribute(int order)
	{
	}
}
