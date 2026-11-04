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

[Token(Token = "0x20006A3")]
internal class WallColossalComponentCache : ShifterComponentCache
{
	[Token(Token = "0x4001F83")]
	[FieldOffset(Offset = "0x100")]
	public ParticleSystem ColossalSteam1;

	[Token(Token = "0x4001F84")]
	[FieldOffset(Offset = "0x108")]
	public ParticleSystem ColossalSteam2;

	[Token(Token = "0x4001F85")]
	[FieldOffset(Offset = "0x110")]
	public Transform LeftHand;

	[Token(Token = "0x4001F86")]
	[FieldOffset(Offset = "0x118")]
	public Transform RightHand;

	[Token(Token = "0x4001F87")]
	[FieldOffset(Offset = "0x120")]
	public ParticleSystem LeftHandSteam;

	[Token(Token = "0x4001F88")]
	[FieldOffset(Offset = "0x128")]
	public ParticleSystem RightHandSteam;

	[Token(Token = "0x4001F89")]
	[FieldOffset(Offset = "0x130")]
	public GameObject SteamWarningZone;

	[Token(Token = "0x4001F8A")]
	[FieldOffset(Offset = "0x138")]
	public WallColossalSteamWarningZone SteamWarningZoneComponent;

	[Token(Token = "0x600410A")]
	[Address(RVA = "0x2193A00", Offset = "0x2192000", VA = "0x182193A00")]
	public WallColossalComponentCache(GameObject owner)
	{
	}
}
