using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x2000201")]
internal class LineRendererEffect : BaseEffect
{
	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x2C")]
	protected float _totalTime;

	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _renderer;

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x413E390", Offset = "0x413E390", VA = "0x413E390", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x413E5D0", Offset = "0x413E5D0", VA = "0x413E5D0", Slot = "5")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x413E6B0", Offset = "0x413E6B0", VA = "0x413E6B0")]
	public LineRendererEffect()
	{
	}
}
