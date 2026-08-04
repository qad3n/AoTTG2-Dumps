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

[Token(Token = "0x20001E9")]
internal class InvokableCallList
{
	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<BaseInvokableCall> m_PersistentCalls;

	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<BaseInvokableCall> m_RuntimeCalls;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x20")]
	private List<BaseInvokableCall> m_ExecutingCalls;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0x28")]
	private bool m_NeedsUpdate;

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x4E12760", Offset = "0x4E12760", VA = "0x4E12760")]
	public void AddPersistentInvokableCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x4E12800", Offset = "0x4E12800", VA = "0x4E12800")]
	public void AddListener(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x4E128A0", Offset = "0x4E128A0", VA = "0x4E128A0")]
	public void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x4E12BD0", Offset = "0x4E12BD0", VA = "0x4E12BD0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x4E12C80", Offset = "0x4E12C80", VA = "0x4E12C80")]
	public void ClearPersistent()
	{
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x4E12D30", Offset = "0x4E12D30", VA = "0x4E12D30")]
	public List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x4E12DE0", Offset = "0x4E12DE0", VA = "0x4E12DE0")]
	public InvokableCallList()
	{
	}
}
