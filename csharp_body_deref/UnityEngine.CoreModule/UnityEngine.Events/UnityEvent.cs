// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.UnityEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001EC")]
public class UnityEvent : UnityEventBase
{
	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x28")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x4E13700", Offset = "0x4E13700", VA = "0x4E13700")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x4E13720", Offset = "0x4E13720", VA = "0x4E13720")]
	public void AddListener(UnityAction call)
	{
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x4E13820", Offset = "0x4E13820", VA = "0x4E13820")]
	public void RemoveListener(UnityAction call)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x4E13860", Offset = "0x4E13860", VA = "0x4E13860", Slot = "6")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x4E138B0", Offset = "0x4E138B0", VA = "0x4E138B0", Slot = "7")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x4E13750", Offset = "0x4E13750", VA = "0x4E13750")]
	private static BaseInvokableCall GetDelegate(UnityAction action)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x4E13900", Offset = "0x4E13900", VA = "0x4E13900")]
	public void Invoke()
	{
	}
}
[Serializable]
[Token(Token = "0x20001EE")]
public class UnityEvent<T0> : UnityEventBase
{
	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D75")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D76")]
	public void AddListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x6000D77")]
	public void RemoveListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x6000D78")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0> action)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	public void Invoke(T0 arg0)
	{
	}
}
[Serializable]
[Token(Token = "0x20001F0")]
public class UnityEvent<T0, T1> : UnityEventBase
{
	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D7E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D7F")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x20001F2")]
public class UnityEvent<T0, T1, T2> : UnityEventBase
{
	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D83")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D84")]
	public void AddListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6000D85")]
	public void RemoveListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6000D86")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0, T1, T2> action)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	public void Invoke(T0 arg0, T1 arg1, T2 arg2)
	{
	}
}
[Serializable]
[Token(Token = "0x20001F4")]
public class UnityEvent<T0, T1, T2, T3> : UnityEventBase
{
	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D8C")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D8D")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D8E")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
