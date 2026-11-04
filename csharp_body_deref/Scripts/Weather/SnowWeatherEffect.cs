// ==================== AoTTG2 cross-reference ====================
// Type: Weather.SnowWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/SnowWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/SnowWeatherEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000034")]
internal class SnowWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x17000023")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x1DA1240", Offset = "0x1D9F840", VA = "0x181DA1240", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x1DAE9B0", Offset = "0x1DACFB0", VA = "0x181DAE9B0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x1DAE3A0", Offset = "0x1DAC9A0", VA = "0x181DAE3A0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x1DA1230", Offset = "0x1D9F830", VA = "0x181DA1230")]
	public SnowWeatherEffect()
	{
	}
}
