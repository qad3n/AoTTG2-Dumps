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

[Token(Token = "0x2000022")]
public class DefaultPool : IPunPrefabPool
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x10")]
	public readonly Dictionary<string, GameObject> ResourceCache;

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x1D60DB0", Offset = "0x1D5F3B0", VA = "0x181D60DB0", Slot = "4")]
	public GameObject Instantiate(string prefabId, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x1D60D60", Offset = "0x1D5F360", VA = "0x181D60D60", Slot = "5")]
	public void Destroy(GameObject gameObject)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x1D60FD0", Offset = "0x1D5F5D0", VA = "0x181D60FD0")]
	public DefaultPool()
	{
	}
}
