// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanSteamEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanSteamEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000732")]
internal static class TitanSteamEffect
{
	[Token(Token = "0x400242B")]
	public const float WispLifetime = 1.3f;

	[Token(Token = "0x400242C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color SteamColor;

	[Token(Token = "0x60045D7")]
	[Address(RVA = "0x5B60BB0", Offset = "0x5B5FBB0", VA = "0x5B60BB0")]
	public static void ConfigureRegrowth(ParticleSystem particles, float titanSize)
	{
	}

	[Token(Token = "0x60045D8")]
	[Address(RVA = "0x5B60EE0", Offset = "0x5B5FEE0", VA = "0x5B60EE0")]
	public static void Configure(ParticleSystem particles, float worldSize, bool plume, float rate)
	{
	}

	[Token(Token = "0x60045D9")]
	[Address(RVA = "0x5B60DD0", Offset = "0x5B5FDD0", VA = "0x5B60DD0")]
	private static void Prepare(ParticleSystem particles)
	{
	}

	[Token(Token = "0x60045DA")]
	[Address(RVA = "0x5B61940", Offset = "0x5B60940", VA = "0x5B61940")]
	public static void SetSurface(ParticleSystem particles, Mesh mesh)
	{
	}
}
