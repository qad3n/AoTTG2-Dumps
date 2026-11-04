// ==================== AoTTG2 cross-reference ====================
// Type: Effects.ThunderspearExplodeEffect
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Effects/ThunderspearExplodeEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Projectiles;

namespace Effects;

[Token(Token = "0x2000352")]
internal class ThunderspearExplodeEffect : BaseEffect
{
	[Token(Token = "0x4001164")]
	[FieldOffset(Offset = "0x0")]
	public static float SizeMultiplier;

	[Token(Token = "0x4001165")]
	[FieldOffset(Offset = "0x30")]
	private TSKillType _killType;

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x1E777F0", Offset = "0x1E75DF0", VA = "0x181E777F0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x1E773A0", Offset = "0x1E759A0", VA = "0x181E773A0", Slot = "5")]
	public override void PlayAudio()
	{
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ThunderspearExplodeEffect()
	{
	}
}
