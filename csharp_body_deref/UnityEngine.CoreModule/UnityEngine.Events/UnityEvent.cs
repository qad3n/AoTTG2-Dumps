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
	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x28")]
	private object[] m_InvokeArray;

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x2F5EAA0", Offset = "0x2F5D0A0", VA = "0x182F5EAA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x2F5E5A0", Offset = "0x2F5CBA0", VA = "0x182F5E5A0")]
	public void AddListener(UnityAction call)
	{
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x2F5EA50", Offset = "0x2F5D050", VA = "0x182F5EA50")]
	public void RemoveListener(UnityAction call)
	{
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x2F5E6B0", Offset = "0x2F5CCB0", VA = "0x182F5E6B0", Slot = "6")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x2F5E710", Offset = "0x2F5CD10", VA = "0x182F5E710", Slot = "7")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x2F5E780", Offset = "0x2F5CD80", VA = "0x182F5E780")]
	private static BaseInvokableCall GetDelegate(UnityAction action)
	{
		return null;
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x2F5E7E0", Offset = "0x2F5CDE0", VA = "0x182F5E7E0")]
	public void Invoke()
	{
	}
}
[Serializable]
[Token(Token = "0x2000230")]
public class UnityEvent<T0> : UnityEventBase
{
	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6001154")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001155")]
	public void AddListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x6001156")]
	public void RemoveListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x6001157")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6001158")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6001159")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0> action)
	{
		return null;
	}

	[Token(Token = "0x600115A")]
	public void Invoke(T0 arg0)
	{
	}
}
[Serializable]
[Token(Token = "0x2000232")]
public class UnityEvent<T0, T1> : UnityEventBase
{
	[Token(Token = "0x4000734")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x600115D")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x600115E")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x600115F")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000234")]
public class UnityEvent<T0, T1, T2> : UnityEventBase
{
	[Token(Token = "0x4000735")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6001162")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6001163")]
	public void AddListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6001164")]
	public void RemoveListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6001165")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6001166")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6001167")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0, T1, T2> action)
	{
		return null;
	}

	[Token(Token = "0x6001168")]
	public void Invoke(T0 arg0, T1 arg1, T2 arg2)
	{
	}
}
[Serializable]
[Token(Token = "0x2000236")]
public class UnityEvent<T0, T1, T2, T3> : UnityEventBase
{
	[Token(Token = "0x4000736")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x600116B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x600116C")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x600116D")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
