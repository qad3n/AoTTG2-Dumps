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
	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x10")]
	private InvokableCallList m_Calls;

	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("m_PersistentListeners")]
	private PersistentCallGroup m_PersistentCalls;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x20")]
	private bool m_CallsDirty;

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x2F5E200", Offset = "0x2F5C800", VA = "0x182F5E200")]
	protected UnityEventBase()
	{
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x2F5E1F0", Offset = "0x2F5C7F0", VA = "0x182F5E1F0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x2F5E1F0", Offset = "0x2F5C7F0", VA = "0x182F5E1F0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x600113D")]
	protected abstract MethodInfo FindMethod_Impl(string name, Type targetObjType);

	[Token(Token = "0x600113E")]
	internal abstract BaseInvokableCall GetDelegate(object target, MethodInfo theFunction);

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x2F5D840", Offset = "0x2F5BE40", VA = "0x182F5D840")]
	internal MethodInfo FindMethod(PersistentCall call)
	{
		return null;
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x2F5DA10", Offset = "0x2F5C010", VA = "0x182F5DA10")]
	internal MethodInfo FindMethod(string name, Type listenerType, PersistentListenerMode mode, Type argumentType)
	{
		return null;
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x2F5D760", Offset = "0x2F5BD60", VA = "0x182F5D760")]
	private void DirtyPersistentCalls()
	{
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x2F5E040", Offset = "0x2F5C640", VA = "0x182F5E040")]
	private void RebuildPersistentCallsIfNeeded()
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x2F5D6A0", Offset = "0x2F5BCA0", VA = "0x182F5D6A0")]
	internal void AddCall(BaseInvokableCall call)
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x2F5E150", Offset = "0x2F5C750", VA = "0x182F5E150")]
	protected void RemoveListener(object targetObj, MethodInfo method)
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x2F5E080", Offset = "0x2F5C680", VA = "0x182F5E080")]
	public void RemoveAllListeners()
	{
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x2F5DF60", Offset = "0x2F5C560", VA = "0x182F5DF60")]
	internal List<BaseInvokableCall> PrepareInvoke()
	{
		return null;
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x2F5E170", Offset = "0x2F5C770", VA = "0x182F5E170", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x2F5DD80", Offset = "0x2F5C380", VA = "0x182F5DD80")]
	public static MethodInfo GetValidMethodInfo(Type objectType, string functionName, Type[] argumentTypes)
	{
		return null;
	}
}
