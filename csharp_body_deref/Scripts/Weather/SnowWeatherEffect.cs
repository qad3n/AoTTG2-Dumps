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
	[Token(Token = "0x17000021")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x3F6CA80", Offset = "0x3F6CA80", VA = "0x3F6CA80", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3F6CAD0", Offset = "0x3F6CAD0", VA = "0x3F6CAD0", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3F6CAE0", Offset = "0x3F6CAE0", VA = "0x3F6CAE0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3F6CCB0", Offset = "0x3F6CCB0", VA = "0x3F6CCB0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3F6CCC0", Offset = "0x3F6CCC0", VA = "0x3F6CCC0")]
	public SnowWeatherEffect()
	{
	}
}
