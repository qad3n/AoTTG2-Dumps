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
	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x0")]
	public static bool WindEnabled;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x4")]
	public static Vector3 WindDirection;

	[Token(Token = "0x1700002B")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x1DA1240", Offset = "0x1D9F840", VA = "0x181DA1240", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x1DAE3A0", Offset = "0x1DAC9A0", VA = "0x181DAE3A0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x1DD52F0", Offset = "0x1DD38F0", VA = "0x181DD52F0", Slot = "6")]
	public override void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x1DD5360", Offset = "0x1DD3960", VA = "0x181DD5360", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x1DA1230", Offset = "0x1D9F830", VA = "0x181DA1230")]
	public WindWeatherEffect()
	{
	}
}
