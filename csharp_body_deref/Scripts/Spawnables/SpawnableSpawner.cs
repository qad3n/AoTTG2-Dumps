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
	[Token(Token = "0x6000308")]
	[Address(RVA = "0x1DCF5A0", Offset = "0x1DCDBA0", VA = "0x181DCF5A0")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x1DCF310", Offset = "0x1DCD910", VA = "0x181DCF310")]
	public static void OnSpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SpawnableSpawner()
	{
	}
}
