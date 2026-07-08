using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000033")]
internal class RainWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x17000020")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x3C76870", Offset = "0x3C76870", VA = "0x3C76870", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3C768C0", Offset = "0x3C768C0", VA = "0x3C768C0", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3C76D50", Offset = "0x3C76D50", VA = "0x3C76D50", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x3C77110", Offset = "0x3C77110", VA = "0x3C77110", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x3C77120", Offset = "0x3C77120", VA = "0x3C77120")]
	public RainWeatherEffect()
	{
	}
}
