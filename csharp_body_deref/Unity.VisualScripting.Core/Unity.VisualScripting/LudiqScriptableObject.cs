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
	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[DoNotSerialize]
	protected SerializationData _data;

	[Token(Token = "0x14000012")]
	internal event Action OnDestroyActions
	{
		[Token(Token = "0x6000FC1")]
		[Address(RVA = "0x4D5CC10", Offset = "0x4D5CC10", VA = "0x4D5CC10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x4D5CCA0", Offset = "0x4D5CCA0", VA = "0x4D5CCA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x4D5CD30", Offset = "0x4D5CD30", VA = "0x4D5CD30", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x4D5D050", Offset = "0x4D5D050", VA = "0x4D5D050", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x4D5D370", Offset = "0x4D5D370", VA = "0x4D5D370", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x4D5D380", Offset = "0x4D5D380", VA = "0x4D5D380", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x4D5D390", Offset = "0x4D5D390", VA = "0x4D5D390", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x4D57890", Offset = "0x4D57890", VA = "0x4D57890", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x4D5D3A0", Offset = "0x4D5D3A0", VA = "0x4D5D3A0", Slot = "10")]
	protected virtual void OnPostDeserializeInEditor()
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x4D5D3B0", Offset = "0x4D5D3B0", VA = "0x4D5D3B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x4D58360", Offset = "0x4D58360", VA = "0x4D58360", Slot = "11")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x4D5D3D0", Offset = "0x4D5D3D0", VA = "0x4D5D3D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x4D58410", Offset = "0x4D58410", VA = "0x4D58410")]
	protected LudiqScriptableObject()
	{
	}
}
