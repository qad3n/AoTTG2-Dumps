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
[Token(Token = "0x200022C")]
[UnityEngine.Scripting.UsedByNativeCode]
public abstract class UnityEventBase : ISerializationCallbackReceiver
{
	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x10")]
	private InvokableCallList m_Calls;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x18")]
	[FormerlySerializedAs("m_PersistentListeners")]
	[SerializeField]
	private PersistentCallGroup m_PersistentCalls;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x20")]
	private bool m_CallsDirty;

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x6934CE0", Offset = "0x6933CE0", VA = "0x6934CE0")]
	protected UnityEventBase()
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x6934DE0", Offset = "0x6933DE0", VA = "0x6934DE0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x6934E20", Offset = "0x6933E20", VA = "0x6934E20", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001151")]
	protected abstract MethodInfo FindMethod_Impl(string name, Type targetObjType);

	[Token(Token = "0x6001152")]
	internal abstract BaseInvokableCall GetDelegate(object target, MethodInfo theFunction);

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x6933BD0", Offset = "0x6932BD0", VA = "0x6933BD0")]
	internal MethodInfo FindMethod(PersistentCall call)
	{
		return null;
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x6934E40", Offset = "0x6933E40", VA = "0x6934E40")]
	internal MethodInfo FindMethod(string name, Type listenerType, PersistentListenerMode mode, Type argumentType)
	{
		return null;
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x6934E00", Offset = "0x6933E00", VA = "0x6934E00")]
	private void DirtyPersistentCalls()
	{
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x6935300", Offset = "0x6934300", VA = "0x6935300")]
	private void RebuildPersistentCallsIfNeeded()
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x6935330", Offset = "0x6934330", VA = "0x6935330")]
	internal void AddCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x6935350", Offset = "0x6934350", VA = "0x6935350")]
	protected void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x6935370", Offset = "0x6934370", VA = "0x6935370")]
	public void RemoveAllListeners()
	{
	}

	[Token(Token = "0x600115A")]
	[Address(RVA = "0x6935390", Offset = "0x6934390", VA = "0x6935390")]
	internal List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x69353D0", Offset = "0x69343D0", VA = "0x69353D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x6935100", Offset = "0x6934100", VA = "0x6935100")]
	public static MethodInfo GetValidMethodInfo(Type objectType, string functionName, Type[] argumentTypes)
	{
		return null;
	}
}
