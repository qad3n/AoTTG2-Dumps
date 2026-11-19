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

[Token(Token = "0x2000032")]
internal class RainWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x1700001B")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x5755FD0", Offset = "0x5754FD0", VA = "0x5755FD0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x5756020", Offset = "0x5755020", VA = "0x5756020", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x57563B0", Offset = "0x57553B0", VA = "0x57563B0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x57566C0", Offset = "0x57556C0", VA = "0x57566C0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x57566D0", Offset = "0x57556D0", VA = "0x57566D0")]
	public RainWeatherEffect()
	{
	}
}
