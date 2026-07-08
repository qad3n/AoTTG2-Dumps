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
