// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000703")]
internal class WallColossalComponentCache : ShifterComponentCache
{
	[Token(Token = "0x4002136")]
	[FieldOffset(Offset = "0x100")]
	public ParticleSystem ColossalSteam1;

	[Token(Token = "0x4002137")]
	[FieldOffset(Offset = "0x108")]
	public ParticleSystem ColossalSteam2;

	[Token(Token = "0x4002138")]
	[FieldOffset(Offset = "0x110")]
	public Transform LeftHand;

	[Token(Token = "0x4002139")]
	[FieldOffset(Offset = "0x118")]
	public Transform RightHand;

	[Token(Token = "0x400213A")]
	[FieldOffset(Offset = "0x120")]
	public ParticleSystem LeftHandSteam;

	[Token(Token = "0x400213B")]
	[FieldOffset(Offset = "0x128")]
	public ParticleSystem RightHandSteam;

	[Token(Token = "0x400213C")]
	[FieldOffset(Offset = "0x130")]
	public GameObject SteamWarningZone;

	[Token(Token = "0x400213D")]
	[FieldOffset(Offset = "0x138")]
	public WallColossalSteamWarningZone SteamWarningZoneComponent;

	[Token(Token = "0x60043AA")]
	[Address(RVA = "0x5B1DDA0", Offset = "0x5B1CDA0", VA = "0x5B1DDA0")]
	public WallColossalComponentCache(GameObject owner)
	{
	}
}
