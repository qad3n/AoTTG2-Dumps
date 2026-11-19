// ==================== AoTTG2 cross-reference ====================
// Type: Effects.ThunderspearExplodeEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/ThunderspearExplodeEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Projectiles;

namespace Effects;

[Token(Token = "0x20003B4")]
internal class ThunderspearExplodeEffect : BaseEffect
{
	[Token(Token = "0x4001314")]
	[FieldOffset(Offset = "0x0")]
	public static float SizeMultiplier;

	[Token(Token = "0x4001315")]
	[FieldOffset(Offset = "0x2C")]
	private TSKillType _killType;

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x585E350", Offset = "0x585D350", VA = "0x585E350", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x585E730", Offset = "0x585D730", VA = "0x585E730", Slot = "5")]
	public override void PlayAudio()
	{
	}

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x585E8F0", Offset = "0x585D8F0", VA = "0x585E8F0")]
	public ThunderspearExplodeEffect()
	{
	}
}
