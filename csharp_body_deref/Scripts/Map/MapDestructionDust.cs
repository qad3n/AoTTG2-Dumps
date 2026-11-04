// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestructionDust
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapDestructionDust.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200039B")]
internal static class MapDestructionDust
{
	[Token(Token = "0x40012D2")]
	private const float MinRadius = 0.75f;

	[Token(Token = "0x40012D3")]
	private const float SoundPitch = 0.85f;

	[Token(Token = "0x40012D4")]
	private const float MinLifetime = 3f;

	[Token(Token = "0x40012D5")]
	[FieldOffset(Offset = "0x0")]
	private static Material _material;

	[Token(Token = "0x40012D6")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _sound;

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x1E9FD90", Offset = "0x1E9E390", VA = "0x181E9FD90")]
	private static void LoadAssets()
	{
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x1E9FEF0", Offset = "0x1E9E4F0", VA = "0x181E9FEF0")]
	public static void Spawn(Bounds objectBounds, Vector3 impact, float hitRadius)
	{
	}
}
