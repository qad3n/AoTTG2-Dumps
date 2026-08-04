// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.DefaultExecutionOrder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000149")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Class)]
public class DefaultExecutionOrder : Attribute
{
	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x10")]
	private int m_Order;

	[Token(Token = "0x170001B6")]
	public int order
	{
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x4DF3B40", Offset = "0x4DF3B40", VA = "0x4DF3B40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x4DF3EB0", Offset = "0x4DF3EB0", VA = "0x4DF3EB0")]
	public DefaultExecutionOrder(int order)
	{
	}
}
