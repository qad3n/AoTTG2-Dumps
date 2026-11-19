// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestructionDust
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapDestructionDust.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003F6")]
internal static class MapDestructionDust
{
	[Token(Token = "0x4001464")]
	private const float MinRadius = 0.75f;

	[Token(Token = "0x4001465")]
	private const float SoundPitch = 0.85f;

	[Token(Token = "0x4001466")]
	private const float MinLifetime = 3f;

	[Token(Token = "0x4001467")]
	[FieldOffset(Offset = "0x0")]
	private static Material _material;

	[Token(Token = "0x4001468")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _sound;

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x58888E0", Offset = "0x58878E0", VA = "0x58888E0")]
	private static void LoadAssets()
	{
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x58811E0", Offset = "0x58801E0", VA = "0x58811E0")]
	public static void Spawn(Bounds objectBounds, Vector3 impact, float hitRadius)
	{
	}
}
