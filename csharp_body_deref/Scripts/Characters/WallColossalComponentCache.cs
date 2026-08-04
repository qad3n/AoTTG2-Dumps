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

[Token(Token = "0x2000545")]
internal class WallColossalComponentCache : ShifterComponentCache
{
	[Token(Token = "0x40018BD")]
	[FieldOffset(Offset = "0x100")]
	public ParticleSystem ColossalSteam1;

	[Token(Token = "0x40018BE")]
	[FieldOffset(Offset = "0x108")]
	public ParticleSystem ColossalSteam2;

	[Token(Token = "0x40018BF")]
	[FieldOffset(Offset = "0x110")]
	public Transform LeftHand;

	[Token(Token = "0x40018C0")]
	[FieldOffset(Offset = "0x118")]
	public Transform RightHand;

	[Token(Token = "0x40018C1")]
	[FieldOffset(Offset = "0x120")]
	public ParticleSystem LeftHandSteam;

	[Token(Token = "0x40018C2")]
	[FieldOffset(Offset = "0x128")]
	public ParticleSystem RightHandSteam;

	[Token(Token = "0x40018C3")]
	[FieldOffset(Offset = "0x130")]
	public GameObject SteamWarningZone;

	[Token(Token = "0x40018C4")]
	[FieldOffset(Offset = "0x138")]
	public WallColossalSteamWarningZone SteamWarningZoneComponent;

	[Token(Token = "0x60036AB")]
	[Address(RVA = "0x4204A40", Offset = "0x4204A40", VA = "0x4204A40")]
	public WallColossalComponentCache(GameObject owner)
	{
	}
}
