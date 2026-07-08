using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001E5")]
internal class PersistentCallGroup
{
	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("m_Listeners")]
	private List<PersistentCall> m_Calls;

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x4AEAB40", Offset = "0x4AEAB40", VA = "0x4AEAB40")]
	public PersistentCallGroup()
	{
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x4AEABC0", Offset = "0x4AEABC0", VA = "0x4AEABC0")]
	public void Initialize(InvokableCallList invokableList, UnityEventBase unityEventBase)
	{
	}
}
