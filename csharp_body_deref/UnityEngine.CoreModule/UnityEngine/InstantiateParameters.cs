// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InstantiateParameters
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PhotonNetwork.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.SceneManagement;

namespace UnityEngine;

[Token(Token = "0x20001C0")]
public struct InstantiateParameters
{
	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x0")]
	public Transform parent;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x8")]
	public Scene scene;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0xC")]
	public bool worldSpace;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0xD")]
	public bool originalImmutable;
}
