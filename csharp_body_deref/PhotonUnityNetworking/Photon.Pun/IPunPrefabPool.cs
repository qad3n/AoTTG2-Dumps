// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.IPunPrefabPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Interfaces/IPunCallbacks.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000011")]
public interface IPunPrefabPool
{
	[Token(Token = "0x600000F")]
	GameObject Instantiate(string prefabId, Vector3 position, Quaternion rotation);

	[Token(Token = "0x6000010")]
	void Destroy(GameObject gameObject);
}
