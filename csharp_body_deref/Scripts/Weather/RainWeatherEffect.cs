// ==================== AoTTG2 cross-reference ====================
// Type: Weather.RainWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/RainWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/RainWeatherEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000033")]
internal class RainWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x17000022")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x1DAE3B0", Offset = "0x1DAC9B0", VA = "0x181DAE3B0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x1DADCD0", Offset = "0x1DAC2D0", VA = "0x181DADCD0", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x1DAE0A0", Offset = "0x1DAC6A0", VA = "0x181DAE0A0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x1DAE3A0", Offset = "0x1DAC9A0", VA = "0x181DAE3A0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x1DA1230", Offset = "0x1D9F830", VA = "0x181DA1230")]
	public RainWeatherEffect()
	{
	}
}
