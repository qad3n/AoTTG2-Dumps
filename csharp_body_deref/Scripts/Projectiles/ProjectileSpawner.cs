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

[Token(Token = "0x2000104")]
internal class ProjectileSpawner : MonoBehaviour
{
	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x20CE3F0", Offset = "0x20CC9F0", VA = "0x1820CE3F0")]
	public static BaseProjectile Spawn(string name, Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 gravity, float liveTime, int charViewId, string team, [Optional] object[] settings)
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ProjectileSpawner()
	{
	}
}
