// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.SpawnableSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/SpawnableSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnableSpawner.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x2000062")]
internal class SpawnableSpawner
{
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3F84640", Offset = "0x3F84640", VA = "0x3F84640")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3F848B0", Offset = "0x3F848B0", VA = "0x3F848B0")]
	public static void OnSpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3F84B10", Offset = "0x3F84B10", VA = "0x3F84B10")]
	public SpawnableSpawner()
	{
	}
}
