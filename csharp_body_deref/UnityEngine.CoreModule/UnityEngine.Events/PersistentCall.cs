using System;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001E4")]
internal class PersistentCall : ISerializationCallbackReceiver
{
	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("instance")]
	private Object m_Target;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_TargetAssemblyTypeName;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("methodName")]
	[SerializeField]
	private string m_MethodName;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[FormerlySerializedAs("mode")]
	private PersistentListenerMode m_Mode;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[FormerlySerializedAs("arguments")]
	private ArgumentCache m_Arguments;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("m_Enabled")]
	[SerializeField]
	[FormerlySerializedAs("enabled")]
	private UnityEventCallState m_CallState;

	[Token(Token = "0x17000249")]
	public Object target
	{
		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x4AEA000", Offset = "0x4AEA000", VA = "0x4AEA000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024A")]
	public string targetAssemblyTypeName
	{
		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x4AEA010", Offset = "0x4AEA010", VA = "0x4AEA010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024B")]
	public string methodName
	{
		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x4AEA0C0", Offset = "0x4AEA0C0", VA = "0x4AEA0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024C")]
	public PersistentListenerMode mode
	{
		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x4AEA0D0", Offset = "0x4AEA0D0", VA = "0x4AEA0D0")]
		get
		{
			return default(PersistentListenerMode);
		}
	}

	[Token(Token = "0x1700024D")]
	public ArgumentCache arguments
	{
		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x4AEA0E0", Offset = "0x4AEA0E0", VA = "0x4AEA0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x4AEA0F0", Offset = "0x4AEA0F0", VA = "0x4AEA0F0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x4AEA130", Offset = "0x4AEA130", VA = "0x4AEA130")]
	public BaseInvokableCall GetRuntimeCall(UnityEventBase theEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x4AEA5E0", Offset = "0x4AEA5E0", VA = "0x4AEA5E0")]
	private static BaseInvokableCall GetObjectCall(Object target, MethodInfo method, ArgumentCache arguments)
	{
		return null;
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x4AEAA90", Offset = "0x4AEAA90", VA = "0x4AEAA90", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x4AEAAB0", Offset = "0x4AEAAB0", VA = "0x4AEAAB0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x4AEAAD0", Offset = "0x4AEAAD0", VA = "0x4AEAAD0")]
	public PersistentCall()
	{
	}
}
