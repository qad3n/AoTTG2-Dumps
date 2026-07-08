using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x2000062")]
internal class SpawnableSpawner
{
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3C8ECF0", Offset = "0x3C8ECF0", VA = "0x3C8ECF0")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3C8EF60", Offset = "0x3C8EF60", VA = "0x3C8EF60")]
	public static void OnSpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3C8F1C0", Offset = "0x3C8F1C0", VA = "0x3C8F1C0")]
	public SpawnableSpawner()
	{
	}
}
