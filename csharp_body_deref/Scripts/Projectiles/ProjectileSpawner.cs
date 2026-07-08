using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E3")]
internal class ProjectileSpawner : MonoBehaviour
{
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x3E193F0", Offset = "0x3E193F0", VA = "0x3E193F0")]
	public static BaseProjectile Spawn(string name, Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 gravity, float liveTime, int charViewId, string team, [Optional] object[] settings)
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x3E19560", Offset = "0x3E19560", VA = "0x3E19560")]
	public ProjectileSpawner()
	{
	}
}
