// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanSteamEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanSteamEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006D0")]
internal static class TitanSteamEffect
{
	[Token(Token = "0x4002238")]
	public const float WispLifetime = 1.3f;

	[Token(Token = "0x4002239")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color SteamColor;

	[Token(Token = "0x6004316")]
	[Address(RVA = "0x21CEBB0", Offset = "0x21CD1B0", VA = "0x1821CEBB0")]
	public static void ConfigureRegrowth(ParticleSystem particles, float titanSize)
	{
	}

	[Token(Token = "0x6004317")]
	[Address(RVA = "0x21CEDA0", Offset = "0x21CD3A0", VA = "0x1821CEDA0")]
	public static void Configure(ParticleSystem particles, float worldSize, bool plume, float rate)
	{
	}

	[Token(Token = "0x6004318")]
	[Address(RVA = "0x21CF750", Offset = "0x21CDD50", VA = "0x1821CF750")]
	private static void Prepare(ParticleSystem particles)
	{
	}

	[Token(Token = "0x6004319")]
	[Address(RVA = "0x21CF860", Offset = "0x21CDE60", VA = "0x1821CF860")]
	public static void SetSurface(ParticleSystem particles, Mesh mesh)
	{
	}
}
