using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.Events;

[Token(Token = "0x20001E6")]
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

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x4AEAE30", Offset = "0x4AEAE30", VA = "0x4AEAE30")]
	public void AddPersistentInvokableCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x4AEAED0", Offset = "0x4AEAED0", VA = "0x4AEAED0")]
	public void AddListener(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x4AEAF70", Offset = "0x4AEAF70", VA = "0x4AEAF70")]
	public void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x4AEB2A0", Offset = "0x4AEB2A0", VA = "0x4AEB2A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x4AEB350", Offset = "0x4AEB350", VA = "0x4AEB350")]
	public void ClearPersistent()
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x4AEB400", Offset = "0x4AEB400", VA = "0x4AEB400")]
	public List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x4AEB4B0", Offset = "0x4AEB4B0", VA = "0x4AEB4B0")]
	public InvokableCallList()
	{
	}
}
