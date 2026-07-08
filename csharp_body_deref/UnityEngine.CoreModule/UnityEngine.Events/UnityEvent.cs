using System;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001E9")]
public class UnityEvent : UnityEventBase
{
	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x28")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x4AEBDD0", Offset = "0x4AEBDD0", VA = "0x4AEBDD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x4AEBDF0", Offset = "0x4AEBDF0", VA = "0x4AEBDF0")]
	public void AddListener(UnityAction call)
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x4AEBEF0", Offset = "0x4AEBEF0", VA = "0x4AEBEF0")]
	public void RemoveListener(UnityAction call)
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x4AEBF30", Offset = "0x4AEBF30", VA = "0x4AEBF30", Slot = "6")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x4AEBF80", Offset = "0x4AEBF80", VA = "0x4AEBF80", Slot = "7")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x4AEBE20", Offset = "0x4AEBE20", VA = "0x4AEBE20")]
	private static BaseInvokableCall GetDelegate(UnityAction action)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x4AEBFD0", Offset = "0x4AEBFD0", VA = "0x4AEBFD0")]
	public void Invoke()
	{
	}
}
[Serializable]
[Token(Token = "0x20001EB")]
public class UnityEvent<T0> : UnityEventBase
{
	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D73")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D74")]
	public void AddListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x6000D75")]
	public void RemoveListener(UnityAction<T0> call)
	{
	}

	[Token(Token = "0x6000D76")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0> action)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	public void Invoke(T0 arg0)
	{
	}
}
[Serializable]
[Token(Token = "0x20001ED")]
public class UnityEvent<T0, T1> : UnityEventBase
{
	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D7C")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D7D")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D7E")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x20001EF")]
public class UnityEvent<T0, T1, T2> : UnityEventBase
{
	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D81")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D82")]
	public void AddListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6000D83")]
	public void RemoveListener(UnityAction<T0, T1, T2> call)
	{
	}

	[Token(Token = "0x6000D84")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D85")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}

	[Token(Token = "0x6000D86")]
	private static BaseInvokableCall GetDelegate(UnityAction<T0, T1, T2> action)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	public void Invoke(T0 arg0, T1 arg1, T2 arg2)
	{
	}
}
[Serializable]
[Token(Token = "0x20001F1")]
public class UnityEvent<T0, T1, T2, T3> : UnityEventBase
{
	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0x0")]
	private object[] m_InvokeArray;

	[Token(Token = "0x6000D8A")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public UnityEvent()
	{
	}

	[Token(Token = "0x6000D8B")]
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType)
	{
		return null;
	}

	[Token(Token = "0x6000D8C")]
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction)
	{
		return null;
	}
}
