// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ArmoredComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ArmoredComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006F4")]
internal class ArmoredComponentCache : ShifterComponentCache
{
	[Token(Token = "0x600433A")]
	[Address(RVA = "0x5B15800", Offset = "0x5B14800", VA = "0x5B15800")]
	public ArmoredComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/ArmoredComponentCache.c (Characters.ArmoredComponentCache$$.ctor): clean
		Transform pUVar1;

		base(owner);
		pUVar1 = this.Transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
			this.Head = pUVar1;
			pUVar1 = this.Transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
				this.Neck = pUVar1;
				pUVar1 = this.Transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("Amarture_VER2/Core");
					this.Core = pUVar1;
					pUVar1 = this.Transform;
					if (pUVar1 != null) {
						pUVar1 = pUVar1.Find("Amarture_VER2/Core/Controller.Body/hip");
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
