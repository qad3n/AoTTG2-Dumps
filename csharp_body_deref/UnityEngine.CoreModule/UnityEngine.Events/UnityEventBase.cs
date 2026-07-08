using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Scripting;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001E7")]
[UnityEngine.Scripting.UsedByNativeCode]
public abstract class UnityEventBase : ISerializationCallbackReceiver
{
	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0x10")]
	private InvokableCallList m_Calls;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("m_PersistentListeners")]
	private PersistentCallGroup m_PersistentCalls;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0x20")]
	private bool m_CallsDirty;

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x4AEB580", Offset = "0x4AEB580", VA = "0x4AEB580")]
	protected UnityEventBase()
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x4AEB680", Offset = "0x4AEB680", VA = "0x4AEB680", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x4AEB6C0", Offset = "0x4AEB6C0", VA = "0x4AEB6C0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000D5C")]
	protected abstract MethodInfo FindMethod_Impl(string name, Type targetObjType);

	[Token(Token = "0x6000D5D")]
	internal abstract BaseInvokableCall GetDelegate(object target, MethodInfo theFunction);

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x4AEA410", Offset = "0x4AEA410", VA = "0x4AEA410")]
	internal MethodInfo FindMethod(PersistentCall call)
	{
		return null;
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x4AEB6E0", Offset = "0x4AEB6E0", VA = "0x4AEB6E0")]
	internal MethodInfo FindMethod(string name, Type listenerType, PersistentListenerMode mode, Type argumentType)
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x4AEB6A0", Offset = "0x4AEB6A0", VA = "0x4AEB6A0")]
	private void DirtyPersistentCalls()
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x4AEBBC0", Offset = "0x4AEBBC0", VA = "0x4AEBBC0")]
	private void RebuildPersistentCallsIfNeeded()
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x4AEBBF0", Offset = "0x4AEBBF0", VA = "0x4AEBBF0")]
	internal void AddCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x4AEBC10", Offset = "0x4AEBC10", VA = "0x4AEBC10")]
	protected void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x4AEBC30", Offset = "0x4AEBC30", VA = "0x4AEBC30")]
	public void RemoveAllListeners()
	{
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x4AEBC50", Offset = "0x4AEBC50", VA = "0x4AEBC50")]
	internal List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x4AEBC90", Offset = "0x4AEBC90", VA = "0x4AEBC90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x4AEB9C0", Offset = "0x4AEB9C0", VA = "0x4AEB9C0")]
	public static MethodInfo GetValidMethodInfo(Type objectType, string functionName, Type[] argumentTypes)
	{
		return null;
	}
}
