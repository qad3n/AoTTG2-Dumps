using Il2CppDummyDll;
using Photon.Realtime;

namespace Effects;

[Token(Token = "0x2000202")]
internal class ThunderspearExplodeEffect : BaseEffect
{
	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x0")]
	public static float SizeMultiplier;

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x413E6C0", Offset = "0x413E6C0", VA = "0x413E6C0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x413EC80", Offset = "0x413EC80", VA = "0x413EC80")]
	public ThunderspearExplodeEffect()
	{
	}
}
