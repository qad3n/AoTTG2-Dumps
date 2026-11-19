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

[Token(Token = "0x200017C")]
[AttributeUsage(AttributeTargets.Class)]
[UnityEngine.Scripting.UsedByNativeCode]
public class DefaultExecutionOrder : Attribute
{
	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x10")]
	private int m_Order;

	[Token(Token = "0x17000224")]
	public int order
	{
		[Token(Token = "0x6000CD7")]
		[Address(RVA = "0x6911130", Offset = "0x6910130", VA = "0x6911130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x69114A0", Offset = "0x69104A0", VA = "0x69114A0")]
	public DefaultExecutionOrder(int order)
	{
	}
}
