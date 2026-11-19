// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CharacterSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CharacterSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterSpawner.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200069D")]
internal class CharacterSpawner : MonoBehaviour
{
	[Token(Token = "0x600403A")]
	[Address(RVA = "0x5AE2E80", Offset = "0x5AE1E80", VA = "0x5AE2E80")]
	public static BaseCharacter Spawn(string name, Vector3 position, Quaternion rotation)
	{
		// Lifted from source/cpp/Characters/CharacterSpawner.c (Characters.CharacterSpawner$$Spawn): clean
		String prefabName;
		GameObject __this;
		BaseCharacter pCVar1;

		prefabName = String.Concat(ResourcePaths.Characters, "/", name);
		__this = PhotonNetwork.Instantiate(prefabName, position, rotation, 0, null);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this.GetComponent<BaseCharacter>();
		return pCVar1;
	}

	[Token(Token = "0x600403B")]
	[Address(RVA = "0x5AE2F80", Offset = "0x5AE1F80", VA = "0x5AE2F80")]
	public CharacterSpawner()
	{
		// Lifted from source/cpp/Characters/CharacterSpawner.c (Characters.CharacterSpawner$$.ctor): clean
		base();
		return;
	}
}
