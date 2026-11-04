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

[Token(Token = "0x200017B")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Class)]
public class DefaultExecutionOrder : Attribute
{
	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x10")]
	private int m_Order;

	[Token(Token = "0x1700021F")]
	public int order
	{
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public DefaultExecutionOrder(int order)
	{
	}
}
