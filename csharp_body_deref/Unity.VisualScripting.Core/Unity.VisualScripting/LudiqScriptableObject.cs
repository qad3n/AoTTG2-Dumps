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
		[Address(RVA = "0x4A38040", Offset = "0x4A38040", VA = "0x4A38040")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x4A380D0", Offset = "0x4A380D0", VA = "0x4A380D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x4A38160", Offset = "0x4A38160", VA = "0x4A38160", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x4A38480", Offset = "0x4A38480", VA = "0x4A38480", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x4A387A0", Offset = "0x4A387A0", VA = "0x4A387A0", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x4A387B0", Offset = "0x4A387B0", VA = "0x4A387B0", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x4A387C0", Offset = "0x4A387C0", VA = "0x4A387C0", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x4A32CC0", Offset = "0x4A32CC0", VA = "0x4A32CC0", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x4A387D0", Offset = "0x4A387D0", VA = "0x4A387D0", Slot = "10")]
	protected virtual void OnPostDeserializeInEditor()
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x4A387E0", Offset = "0x4A387E0", VA = "0x4A387E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x4A33790", Offset = "0x4A33790", VA = "0x4A33790", Slot = "11")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x4A38800", Offset = "0x4A38800", VA = "0x4A38800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x4A33840", Offset = "0x4A33840", VA = "0x4A33840")]
	protected LudiqScriptableObject()
	{
	}
}
