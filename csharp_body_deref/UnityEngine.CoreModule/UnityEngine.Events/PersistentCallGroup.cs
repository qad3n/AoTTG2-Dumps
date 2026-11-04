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
	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("m_Listeners")]
	[SerializeField]
	private List<PersistentCall> m_Calls;

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x2F4BD40", Offset = "0x2F4A340", VA = "0x182F4BD40")]
	public PersistentCallGroup()
	{
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x2F4BBD0", Offset = "0x2F4A1D0", VA = "0x182F4BBD0")]
	public void Initialize(InvokableCallList invokableList, UnityEventBase unityEventBase)
	{
	}
}
