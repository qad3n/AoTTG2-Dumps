// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.LudiqScriptableObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000196")]
public abstract class LudiqScriptableObject : ScriptableObject, ISerializationCallbackReceiver
{
	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[DoNotSerialize]
	protected SerializationData _data;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private Action m_OnDestroyActions;

	[Token(Token = "0x14000012")]
	internal event Action OnDestroyActions
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x6847340", Offset = "0x6846340", VA = "0x6847340")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x68473D0", Offset = "0x68463D0", VA = "0x68473D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x6847460", Offset = "0x6846460", VA = "0x6847460", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x6847770", Offset = "0x6846770", VA = "0x6847770", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x6847AB0", Offset = "0x6846AB0", VA = "0x6847AB0", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x6847AC0", Offset = "0x6846AC0", VA = "0x6847AC0", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x6847AD0", Offset = "0x6846AD0", VA = "0x6847AD0", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x6842450", Offset = "0x6841450", VA = "0x6842450", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x6847AE0", Offset = "0x6846AE0", VA = "0x6847AE0", Slot = "10")]
	protected virtual void OnPostDeserializeInEditor()
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x6847AF0", Offset = "0x6846AF0", VA = "0x6847AF0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x6842EB0", Offset = "0x6841EB0", VA = "0x6842EB0", Slot = "11")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x6847B10", Offset = "0x6846B10", VA = "0x6847B10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x6842FE0", Offset = "0x6841FE0", VA = "0x6842FE0")]
	protected LudiqScriptableObject()
	{
	}
}
