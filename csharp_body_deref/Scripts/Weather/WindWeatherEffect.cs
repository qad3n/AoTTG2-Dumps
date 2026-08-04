// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WindWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WindWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WindWeatherEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000042")]
internal class WindWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x0")]
	public static bool WindEnabled;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x4")]
	public static Vector3 WindDirection;

	[Token(Token = "0x17000029")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x3F78B70", Offset = "0x3F78B70", VA = "0x3F78B70", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x3F78BC0", Offset = "0x3F78BC0", VA = "0x3F78BC0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3F78BD0", Offset = "0x3F78BD0", VA = "0x3F78BD0", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3F78BE0", Offset = "0x3F78BE0", VA = "0x3F78BE0", Slot = "6")]
	public override void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x3F78C40", Offset = "0x3F78C40", VA = "0x3F78C40", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3F78D20", Offset = "0x3F78D20", VA = "0x3F78D20")]
	public WindWeatherEffect()
	{
	}
}
