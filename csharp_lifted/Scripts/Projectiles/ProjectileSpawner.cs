// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.ProjectileSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/ProjectileSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectileSpawner.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Projectiles/ProjectileSpawner.c (Projectiles.ProjectileSpawner$$Spawn): 1 lines keep C-only constructs
		String prefabName;
		GameObject __this;
		BaseProjectile pPVar1;

		if (Il2CppMethodInitialized_07545179 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile) ;
			Il2CppMethodInitialized_07545179 = true;
		}
		prefabName = String.Concat(ResourcePaths.Projectiles, "/", name);
		__this = PhotonNetwork.Instantiate(prefabName, position, rotation, 0, null);
		if (__this != null) {
			pPVar1 = __this.GetComponent<BaseProjectile>();
			if (pPVar1 != null) {
				pPVar1.Setup(liveTime, velocity, gravity, charViewId, team, settings);
				return pPVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x5772830", Offset = "0x5771830", VA = "0x5772830")]
	public ProjectileSpawner()
	{
		// Lifted from source/cpp/Projectiles/ProjectileSpawner.c (Projectiles.ProjectileSpawner$$.ctor): clean
		base();
		return;
	}
}
