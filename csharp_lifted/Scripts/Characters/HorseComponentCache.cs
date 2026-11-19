// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HorseComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HorseComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006B1")]
internal class HorseComponentCache : BaseComponentCache
{
	[Token(Token = "0x4001E4D")]
	[FieldOffset(Offset = "0x38")]
	public ParticleSystem Dust;

	[Token(Token = "0x60040E5")]
	[Address(RVA = "0x5AF06D0", Offset = "0x5AEF6D0", VA = "0x5AF06D0")]
	public HorseComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/HorseComponentCache.c (Characters.HorseComponentCache$$.ctor): clean
		Transform pUVar1;
		ParticleSystem pUVar2;

		base(owner);
		if (owner != null) {
			pUVar1 = owner.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("Dust");
				if (pUVar1 != null) {
					pUVar2 = pUVar1.GetComponent<ParticleSystem>();
					this.Dust = pUVar2;
					this.LoadAudio("Horse/Prefabs/HorseSounds", this.Transform);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
