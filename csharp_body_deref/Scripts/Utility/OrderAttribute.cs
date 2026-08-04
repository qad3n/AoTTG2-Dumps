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

[Token(Token = "0x2000732")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
internal class OrderAttribute : Attribute
{
	[Token(Token = "0x4002293")]
	[FieldOffset(Offset = "0x10")]
	private readonly int order;

	[Token(Token = "0x17000DBA")]
	public int Order
	{
		[Token(Token = "0x60046B3")]
		[Address(RVA = "0x438EEB0", Offset = "0x438EEB0", VA = "0x438EEB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60046B4")]
	[Address(RVA = "0x438EEC0", Offset = "0x438EEC0", VA = "0x438EEC0")]
	public OrderAttribute(int order)
	{
	}
}
