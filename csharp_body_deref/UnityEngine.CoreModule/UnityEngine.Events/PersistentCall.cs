// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.PersistentCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001E7")]
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

	[Token(Token = "0x1700024A")]
	public Object target
	{
		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x4E11930", Offset = "0x4E11930", VA = "0x4E11930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024B")]
	public string targetAssemblyTypeName
	{
		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x4E11940", Offset = "0x4E11940", VA = "0x4E11940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024C")]
	public string methodName
	{
		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x4E119F0", Offset = "0x4E119F0", VA = "0x4E119F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	public PersistentListenerMode mode
	{
		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x4E11A00", Offset = "0x4E11A00", VA = "0x4E11A00")]
		get
		{
			return default(PersistentListenerMode);
		}
	}

	[Token(Token = "0x1700024E")]
	public ArgumentCache arguments
	{
		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x4E11A10", Offset = "0x4E11A10", VA = "0x4E11A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x4E11A20", Offset = "0x4E11A20", VA = "0x4E11A20")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x4E11A60", Offset = "0x4E11A60", VA = "0x4E11A60")]
	public BaseInvokableCall GetRuntimeCall(UnityEventBase theEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x4E11F10", Offset = "0x4E11F10", VA = "0x4E11F10")]
	private static BaseInvokableCall GetObjectCall(Object target, MethodInfo method, ArgumentCache arguments)
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x4E123C0", Offset = "0x4E123C0", VA = "0x4E123C0", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x4E123E0", Offset = "0x4E123E0", VA = "0x4E123E0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x4E12400", Offset = "0x4E12400", VA = "0x4E12400")]
	public PersistentCall()
	{
	}
}
