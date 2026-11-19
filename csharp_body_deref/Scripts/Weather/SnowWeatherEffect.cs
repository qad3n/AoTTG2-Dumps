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

[Token(Token = "0x2000033")]
internal class SnowWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x1700001C")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x57566E0", Offset = "0x57556E0", VA = "0x57566E0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x5756730", Offset = "0x5755730", VA = "0x5756730", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x5756740", Offset = "0x5755740", VA = "0x5756740", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x57568C0", Offset = "0x57558C0", VA = "0x57568C0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x57568D0", Offset = "0x57558D0", VA = "0x57568D0")]
	public SnowWeatherEffect()
	{
	}
}
