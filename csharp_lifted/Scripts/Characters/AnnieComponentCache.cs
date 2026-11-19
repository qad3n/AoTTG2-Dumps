// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnnieComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AnnieComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006F1")]
internal class AnnieComponentCache : ShifterComponentCache
{
	[Token(Token = "0x6004325")]
	[Address(RVA = "0x5B14020", Offset = "0x5B13020", VA = "0x5B14020")]
	public AnnieComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/AnnieComponentCache.c (Characters.AnnieComponentCache$$.ctor): clean
		Transform pUVar1;

		base(owner);
		pUVar1 = this.Transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Armature_FemT/Core/Controller_Body/hip/spine/chest/neck/head");
			this.Head = pUVar1;
			pUVar1 = this.Transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("Armature_FemT/Core/Controller_Body/hip/spine/chest/neck");
				this.Neck = pUVar1;
				pUVar1 = this.Transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("Armature_FemT/Core");
					this.Core = pUVar1;
					pUVar1 = this.Transform;
					if (pUVar1 != null) {
						pUVar1 = pUVar1.Find("Armature_FemT/Core/Controller_Body/hip");
						this.Hip = pUVar1;
						this.LoadAudio("Shifters/Prefabs/ShifterSounds", this.Neck);
						this.LoadAudio("Titans/Prefabs/TitanSounds", this.Neck);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
