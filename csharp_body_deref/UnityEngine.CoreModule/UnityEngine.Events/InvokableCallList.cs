// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.InvokableCallList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x200022B")]
internal class InvokableCallList
{
	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<BaseInvokableCall> m_PersistentCalls;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<BaseInvokableCall> m_RuntimeCalls;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x20")]
	private List<BaseInvokableCall> m_ExecutingCalls;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x28")]
	private bool m_NeedsUpdate;

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x69345B0", Offset = "0x69335B0", VA = "0x69345B0")]
	public void AddPersistentInvokableCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x6934650", Offset = "0x6933650", VA = "0x6934650")]
	public void AddListener(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x69346F0", Offset = "0x69336F0", VA = "0x69346F0")]
	public void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x6934A00", Offset = "0x6933A00", VA = "0x6934A00")]
	public void Clear()
	{
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x6934AB0", Offset = "0x6933AB0", VA = "0x6934AB0")]
	public void ClearPersistent()
	{
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x6934B60", Offset = "0x6933B60", VA = "0x6934B60")]
	public List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x6934C10", Offset = "0x6933C10", VA = "0x6934C10")]
	public InvokableCallList()
	{
	}
}
