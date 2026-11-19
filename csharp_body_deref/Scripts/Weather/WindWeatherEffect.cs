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

[Token(Token = "0x2000041")]
internal class WindWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x0")]
	public static bool WindEnabled;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x4")]
	public static Vector3 WindDirection;

	[Token(Token = "0x17000024")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x57627E0", Offset = "0x57617E0", VA = "0x57627E0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5762830", Offset = "0x5761830", VA = "0x5762830", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5762840", Offset = "0x5761840", VA = "0x5762840", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x5762850", Offset = "0x5761850", VA = "0x5762850", Slot = "6")]
	public override void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x57628B0", Offset = "0x57618B0", VA = "0x57628B0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x5762990", Offset = "0x5761990", VA = "0x5762990")]
	public WindWeatherEffect()
	{
	}
}
