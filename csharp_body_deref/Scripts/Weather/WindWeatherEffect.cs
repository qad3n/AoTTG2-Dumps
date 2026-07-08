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
		[Address(RVA = "0x3C83220", Offset = "0x3C83220", VA = "0x3C83220", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x3C83270", Offset = "0x3C83270", VA = "0x3C83270", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3C83280", Offset = "0x3C83280", VA = "0x3C83280", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3C83290", Offset = "0x3C83290", VA = "0x3C83290", Slot = "6")]
	public override void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x3C832F0", Offset = "0x3C832F0", VA = "0x3C832F0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3C833D0", Offset = "0x3C833D0", VA = "0x3C833D0")]
	public WindWeatherEffect()
	{
	}
}
