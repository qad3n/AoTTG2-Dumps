// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ErenComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ErenComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006FB")]
internal class ErenComponentCache : ShifterComponentCache
{
	[Token(Token = "0x6004384")]
	[Address(RVA = "0x5B18EA0", Offset = "0x5B17EA0", VA = "0x5B18EA0")]
	public ErenComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/ErenComponentCache.c (Characters.ErenComponentCache$$.ctor): clean
		Transform pUVar1;

		base(owner);
		pUVar1 = this.Transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head");
			this.Head = pUVar1;
			pUVar1 = this.Transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck");
				this.Neck = pUVar1;
				pUVar1 = this.Transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("ErenRig_VER2/Core");
					this.Core = pUVar1;
					pUVar1 = this.Transform;
					if (pUVar1 != null) {
						pUVar1 = pUVar1.Find("ErenRig_VER2/Core/Controller_Body/hip");
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
