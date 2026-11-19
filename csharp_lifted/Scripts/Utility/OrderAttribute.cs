// ==================== AoTTG2 cross-reference ====================
// Type: Utility.OrderAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/OrderAttribute.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/OrderAttribute.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000914")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
internal class OrderAttribute : Attribute
{
	[Token(Token = "0x4002DCB")]
	[FieldOffset(Offset = "0x10")]
	private readonly int order;

	[Token(Token = "0x17000EF3")]
	public int Order
	{
		[Token(Token = "0x600560F")]
		[Address(RVA = "0x5CE3380", Offset = "0x5CE2380", VA = "0x5CE3380")]
		get
		{
			// Lifted from source/cpp/Utility/OrderAttribute.c (Utility.OrderAttribute$$get_Order): clean
			return this.order;
		}
	}

	[Token(Token = "0x6005610")]
	[Address(RVA = "0x5CE3390", Offset = "0x5CE2390", VA = "0x5CE3390")]
	public OrderAttribute(int order)
	{
		// Lifted from source/cpp/Utility/OrderAttribute.c (Utility.OrderAttribute$$.ctor): clean
		base();
		this.order = order;
		return;
	}
}
