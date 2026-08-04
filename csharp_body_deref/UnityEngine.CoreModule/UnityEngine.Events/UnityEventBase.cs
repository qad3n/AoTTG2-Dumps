// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.UnityEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Scripting;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001EA")]
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

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x4E12EB0", Offset = "0x4E12EB0", VA = "0x4E12EB0")]
	protected UnityEventBase()
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x4E12FB0", Offset = "0x4E12FB0", VA = "0x4E12FB0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x4E12FF0", Offset = "0x4E12FF0", VA = "0x4E12FF0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000D5E")]
	protected abstract MethodInfo FindMethod_Impl(string name, Type targetObjType);

	[Token(Token = "0x6000D5F")]
	internal abstract BaseInvokableCall GetDelegate(object target, MethodInfo theFunction);

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x4E11D40", Offset = "0x4E11D40", VA = "0x4E11D40")]
	internal MethodInfo FindMethod(PersistentCall call)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x4E13010", Offset = "0x4E13010", VA = "0x4E13010")]
	internal MethodInfo FindMethod(string name, Type listenerType, PersistentListenerMode mode, Type argumentType)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x4E12FD0", Offset = "0x4E12FD0", VA = "0x4E12FD0")]
	private void DirtyPersistentCalls()
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x4E134F0", Offset = "0x4E134F0", VA = "0x4E134F0")]
	private void RebuildPersistentCallsIfNeeded()
	{
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x4E13520", Offset = "0x4E13520", VA = "0x4E13520")]
	internal void AddCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x4E13540", Offset = "0x4E13540", VA = "0x4E13540")]
	protected void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x4E13560", Offset = "0x4E13560", VA = "0x4E13560")]
	public void RemoveAllListeners()
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x4E13580", Offset = "0x4E13580", VA = "0x4E13580")]
	internal List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x4E135C0", Offset = "0x4E135C0", VA = "0x4E135C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x4E132F0", Offset = "0x4E132F0", VA = "0x4E132F0")]
	public static MethodInfo GetValidMethodInfo(Type objectType, string functionName, Type[] argumentTypes)
	{
		return null;
	}
}
