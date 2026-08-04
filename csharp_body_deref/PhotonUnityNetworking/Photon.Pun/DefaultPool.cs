// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.DefaultPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PunClasses.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000024")]
public class DefaultPool : IPunPrefabPool
{
	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	public readonly Dictionary<string, GameObject> ResourceCache;

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3F0E210", Offset = "0x3F0E210", VA = "0x3F0E210", Slot = "4")]
	public GameObject Instantiate(string prefabId, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3F0E430", Offset = "0x3F0E430", VA = "0x3F0E430", Slot = "5")]
	public void Destroy(GameObject gameObject)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3F0E4A0", Offset = "0x3F0E4A0", VA = "0x3F0E4A0")]
	public DefaultPool()
	{
	}
}
