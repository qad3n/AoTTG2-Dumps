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
[Token(Token = "0x2000229")]
internal class PersistentCall : ISerializationCallbackReceiver
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("instance")]
	[SerializeField]
	private Object m_Target;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_TargetAssemblyTypeName;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("methodName")]
	private string m_MethodName;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("mode")]
	[SerializeField]
	private PersistentListenerMode m_Mode;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[FormerlySerializedAs("arguments")]
	private ArgumentCache m_Arguments;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("m_Enabled")]
	[FormerlySerializedAs("enabled")]
	[SerializeField]
	private UnityEventCallState m_CallState;

	[Token(Token = "0x170002D0")]
	public Object target
	{
		[Token(Token = "0x600113A")]
		[Address(RVA = "0x69337C0", Offset = "0x69327C0", VA = "0x69337C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D1")]
	public string targetAssemblyTypeName
	{
		[Token(Token = "0x600113B")]
		[Address(RVA = "0x69337D0", Offset = "0x69327D0", VA = "0x69337D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D2")]
	public string methodName
	{
		[Token(Token = "0x600113C")]
		[Address(RVA = "0x6933880", Offset = "0x6932880", VA = "0x6933880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D3")]
	public PersistentListenerMode mode
	{
		[Token(Token = "0x600113D")]
		[Address(RVA = "0x6933890", Offset = "0x6932890", VA = "0x6933890")]
		get
		{
			return default(PersistentListenerMode);
		}
	}

	[Token(Token = "0x170002D4")]
	public ArgumentCache arguments
	{
		[Token(Token = "0x600113E")]
		[Address(RVA = "0x69338A0", Offset = "0x69328A0", VA = "0x69338A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x69338B0", Offset = "0x69328B0", VA = "0x69338B0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x69338F0", Offset = "0x69328F0", VA = "0x69338F0")]
	public BaseInvokableCall GetRuntimeCall(UnityEventBase theEvent)
	{
		return null;
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x6933DA0", Offset = "0x6932DA0", VA = "0x6933DA0")]
	private static BaseInvokableCall GetObjectCall(Object target, MethodInfo method, ArgumentCache arguments)
	{
		return null;
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x6934250", Offset = "0x6933250", VA = "0x6934250", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x6934280", Offset = "0x6933280", VA = "0x6934280", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x69342B0", Offset = "0x69332B0", VA = "0x69342B0")]
	public PersistentCall()
	{
	}
}
