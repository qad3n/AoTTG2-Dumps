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
	[Address(RVA = "0x3C188C0", Offset = "0x3C188C0", VA = "0x3C188C0", Slot = "4")]
	public GameObject Instantiate(string prefabId, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3C18AE0", Offset = "0x3C18AE0", VA = "0x3C18AE0", Slot = "5")]
	public void Destroy(GameObject gameObject)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3C18B50", Offset = "0x3C18B50", VA = "0x3C18B50")]
	public DefaultPool()
	{
	}
}
