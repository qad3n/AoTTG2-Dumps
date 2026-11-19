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
[Token(Token = "0x2000252")]
public struct LoadSceneParameters
{
	[Token(Token = "0x4000761")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private LoadSceneMode m_LoadSceneMode;

	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private LocalPhysicsMode m_LocalPhysicsMode;

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x69374F0", Offset = "0x69364F0", VA = "0x69374F0")]
	public LoadSceneParameters(LoadSceneMode mode)
	{
	}
}
