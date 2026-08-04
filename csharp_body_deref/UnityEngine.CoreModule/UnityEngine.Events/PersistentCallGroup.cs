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
[Token(Token = "0x20001E8")]
internal class PersistentCallGroup
{
	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("m_Listeners")]
	private List<PersistentCall> m_Calls;

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x4E12470", Offset = "0x4E12470", VA = "0x4E12470")]
	public PersistentCallGroup()
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x4E124F0", Offset = "0x4E124F0", VA = "0x4E124F0")]
	public void Initialize(InvokableCallList invokableList, UnityEventBase unityEventBase)
	{
	}
}
