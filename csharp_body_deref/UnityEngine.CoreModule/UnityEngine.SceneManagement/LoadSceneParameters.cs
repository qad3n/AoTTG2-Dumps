using System;
using Il2CppDummyDll;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x20001FE")]
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

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x4AED550", Offset = "0x4AED550", VA = "0x4AED550")]
	public LoadSceneParameters(LoadSceneMode mode)
	{
	}
}
