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
	[Token(Token = "0x17000020")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x3F6C1C0", Offset = "0x3F6C1C0", VA = "0x3F6C1C0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3F6C210", Offset = "0x3F6C210", VA = "0x3F6C210", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3F6C6A0", Offset = "0x3F6C6A0", VA = "0x3F6C6A0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x3F6CA60", Offset = "0x3F6CA60", VA = "0x3F6CA60", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x3F6CA70", Offset = "0x3F6CA70", VA = "0x3F6CA70")]
	public RainWeatherEffect()
	{
	}
}
