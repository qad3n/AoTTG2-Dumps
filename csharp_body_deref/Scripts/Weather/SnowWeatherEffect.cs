using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000034")]
internal class SnowWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x17000021")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x3C77130", Offset = "0x3C77130", VA = "0x3C77130", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3C77180", Offset = "0x3C77180", VA = "0x3C77180", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3C77190", Offset = "0x3C77190", VA = "0x3C77190", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3C77360", Offset = "0x3C77360", VA = "0x3C77360", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3C77370", Offset = "0x3C77370", VA = "0x3C77370")]
	public SnowWeatherEffect()
	{
	}
}
