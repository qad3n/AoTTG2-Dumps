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
	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("instance")]
	[SerializeField]
	private Object m_Target;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_TargetAssemblyTypeName;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("methodName")]
	[SerializeField]
	private string m_MethodName;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[FormerlySerializedAs("mode")]
	private PersistentListenerMode m_Mode;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[FormerlySerializedAs("arguments")]
	private ArgumentCache m_Arguments;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("m_Enabled")]
	[SerializeField]
	[FormerlySerializedAs("enabled")]
	private UnityEventCallState m_CallState;

	[Token(Token = "0x170002CB")]
	public Object target
	{
		[Token(Token = "0x6001126")]
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CC")]
	public string targetAssemblyTypeName
	{
		[Token(Token = "0x6001127")]
		[Address(RVA = "0x2F4C6A0", Offset = "0x2F4ACA0", VA = "0x182F4C6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CD")]
	public string methodName
	{
		[Token(Token = "0x6001128")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CE")]
	public PersistentListenerMode mode
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0xE282E0", Offset = "0xE268E0", VA = "0x180E282E0")]
		get
		{
			return default(PersistentListenerMode);
		}
	}

	[Token(Token = "0x170002CF")]
	public ArgumentCache arguments
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x2F4C5E0", Offset = "0x2F4ABE0", VA = "0x182F4C5E0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x2F4C2D0", Offset = "0x2F4A8D0", VA = "0x182F4C2D0")]
	public BaseInvokableCall GetRuntimeCall(UnityEventBase theEvent)
	{
		return null;
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x2F4BDC0", Offset = "0x2F4A3C0", VA = "0x182F4BDC0")]
	private static BaseInvokableCall GetObjectCall(Object target, MethodInfo method, ArgumentCache arguments)
	{
		return null;
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x2F2DDA0", Offset = "0x2F2C3A0", VA = "0x182F2DDA0", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x2F2DDA0", Offset = "0x2F2C3A0", VA = "0x182F2DDA0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x2F4C620", Offset = "0x2F4AC20", VA = "0x182F4C620")]
	public PersistentCall()
	{
	}
}
