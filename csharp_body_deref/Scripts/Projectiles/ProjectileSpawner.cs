// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.ProjectileSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/ProjectileSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectileSpawner.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000078")]
internal class ProjectileSpawner : MonoBehaviour
{
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x57726C0", Offset = "0x57716C0", VA = "0x57726C0")]
	public static BaseProjectile Spawn(string name, Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 gravity, float liveTime, int charViewId, string team, [Optional] object[] settings)
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x5772830", Offset = "0x5771830", VA = "0x5772830")]
	public ProjectileSpawner()
	{
	}
}
