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
[Token(Token = "0x200022E")]
public class UnityEvent : UnityEventBase
{
	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x28")]
	private object[] m_InvokeArray;

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x6935510", Offset = "0x6934510", VA = "0x6935510")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x6935530", Offset = "0x6934530", VA = "0x6935530")]
	public void AddListener(UnityAction call)
	{
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x6935630", Offset = "0x6934630", VA = "0x6935630")]
	public void RemoveListener(UnityAction call)
	{
	}

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x6935670", Offset = "0x6934670", VA = "0x6935670", Slot = "6")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x69356C0", Offset = "0x69346C0", VA = "0x69356C0", Slot = "7")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x6935560", Offset = "0x6934560", VA = "0x6935560")]
	private static BaseInvokableCall GetDelegate(UnityAction action)
	{
		return null;
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x6935710", Offset = "0x6934710", VA = "0x6935710")]
	public void Invoke()
	{
	}
}
[Serializable]
[Token(Token = "0x2000230")]
public class UnityEvent<T0> : UnityEventBase
{
	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6001168")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001169")]
	public void AddListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x600116A")]
	public void RemoveListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x600116B")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x600116C")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x600116D")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0> action)
	{
		return null;
	}

	[Token(Token = "0x600116E")]
	public void Invoke(T0 arg0)
	{
	}
}
[Serializable]
[Token(Token = "0x2000232")]
public class UnityEvent<T0, T1> : UnityEventBase
{
	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6001171")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001172")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6001173")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000234")]
public class UnityEvent<T0, T1, T2> : UnityEventBase
{
	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6001176")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001177")]
	public void AddListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6001178")]
	public void RemoveListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6001179")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x600117A")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x600117B")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0, T1, T2> action)
	{
		return null;
	}

	[Token(Token = "0x600117C")]
	public void Invoke(T0 arg0, T1 arg1, T2 arg2)
	{
	}
}
[Serializable]
[Token(Token = "0x2000236")]
public class UnityEvent<T0, T1, T2, T3> : UnityEventBase
{
	[Token(Token = "0x4000734")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x600117F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001180")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6001181")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
