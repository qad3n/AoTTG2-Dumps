using Il2CppDummyDll;
using Photon.Realtime;

namespace Effects;

[Token(Token = "0x2000200")]
internal class GasBurstEffect : BaseEffect
{
	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x413E1C0", Offset = "0x413E1C0", VA = "0x413E1C0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x413E380", Offset = "0x413E380", VA = "0x413E380")]
	public GasBurstEffect()
	{
	}
}
