using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004B4")]
internal class HorseComponentCache : BaseComponentCache
{
	[Token(Token = "0x400151C")]
	[FieldOffset(Offset = "0x38")]
	public ParticleSystem Dust;

	[Token(Token = "0x6003237")]
	[Address(RVA = "0x3ED17C0", Offset = "0x3ED17C0", VA = "0x3ED17C0")]
	public HorseComponentCache(GameObject owner)
	{
	}
}
