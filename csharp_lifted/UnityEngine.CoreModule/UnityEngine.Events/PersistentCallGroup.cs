// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.PersistentCallGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x200022A")]
internal class PersistentCallGroup
{
	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("m_Listeners")]
	private List<PersistentCall> m_Calls;

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x6934320", Offset = "0x6933320", VA = "0x6934320")]
	public PersistentCallGroup()
	{
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x69343A0", Offset = "0x69333A0", VA = "0x69343A0")]
	public void Initialize(InvokableCallList invokableList, UnityEventBase unityEventBase)
	{
	}
}
