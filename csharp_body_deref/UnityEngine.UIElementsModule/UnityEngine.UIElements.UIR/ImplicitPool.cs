// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.ImplicitPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A2")]
internal class ImplicitPool<T> where T : class
{
	[Token(Token = "0x4000E47")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_StartCapacity;

	[Token(Token = "0x4000E48")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_MaxCapacity;

	[Token(Token = "0x4000E49")]
	[FieldOffset(Offset = "0x0")]
	private Func<T> m_CreateAction;

	[Token(Token = "0x4000E4A")]
	[FieldOffset(Offset = "0x0")]
	private Action<T> m_ResetAction;

	[Token(Token = "0x4000E4B")]
	[FieldOffset(Offset = "0x0")]
	private List<T> m_List;

	[Token(Token = "0x4000E4C")]
	[FieldOffset(Offset = "0x0")]
	private int m_UsedCount;

	[Token(Token = "0x6001CD6")]
	public ImplicitPool(Func<T> createAction, Action<T> resetAction, int startCapacity, int maxCapacity)
	{
	}

	[Token(Token = "0x6001CD7")]
	public T Get()
	{
		return null;
	}

	[Token(Token = "0x6001CD8")]
	public void ReturnAll()
	{
	}
}
