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
		[Address(RVA = "0x2E2F480", Offset = "0x2E2DA80", VA = "0x182E2F480")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x2E2F520", Offset = "0x2E2DB20", VA = "0x182E2F520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x2E2F2C0", Offset = "0x2E2D8C0", VA = "0x182E2F2C0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x2E2F0D0", Offset = "0x2E2D6D0", VA = "0x182E2F0D0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected virtual void OnPostDeserializeInEditor()
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x2E2F0B0", Offset = "0x2E2D6B0", VA = "0x182E2F0B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x2E2DB50", Offset = "0x2E2C150", VA = "0x182E2DB50", Slot = "11")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x2E2ECF0", Offset = "0x2E2D2F0", VA = "0x182E2ECF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected LudiqScriptableObject()
	{
	}
}
