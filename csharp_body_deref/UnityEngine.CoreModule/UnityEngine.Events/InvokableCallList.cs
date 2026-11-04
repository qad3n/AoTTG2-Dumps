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
	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<BaseInvokableCall> m_PersistentCalls;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<BaseInvokableCall> m_RuntimeCalls;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x20")]
	private List<BaseInvokableCall> m_ExecutingCalls;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x28")]
	private bool m_NeedsUpdate;

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x2F4A960", Offset = "0x2F48F60", VA = "0x182F4A960")]
	public void AddPersistentInvokableCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x2F4A8A0", Offset = "0x2F48EA0", VA = "0x182F4A8A0")]
	public void AddListener(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x2F4AC50", Offset = "0x2F49250", VA = "0x182F4AC50")]
	public void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x2F4AAE0", Offset = "0x2F490E0", VA = "0x182F4AAE0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x2F4AA20", Offset = "0x2F49020", VA = "0x182F4AA20")]
	public void ClearPersistent()
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x2F4ABA0", Offset = "0x2F491A0", VA = "0x182F4ABA0")]
	public List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x2F4AEA0", Offset = "0x2F494A0", VA = "0x182F4AEA0")]
	public InvokableCallList()
	{
	}
}
