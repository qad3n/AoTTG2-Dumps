// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.LoadSceneParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x2000201")]
public struct LoadSceneParameters
{
	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private LoadSceneMode m_LoadSceneMode;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private LocalPhysicsMode m_LocalPhysicsMode;

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x4E14E80", Offset = "0x4E14E80", VA = "0x4E14E80")]
	public LoadSceneParameters(LoadSceneMode mode)
	{
	}
}
