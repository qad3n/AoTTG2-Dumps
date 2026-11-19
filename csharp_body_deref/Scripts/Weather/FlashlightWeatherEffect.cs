// ==================== AoTTG2 cross-reference ====================
// Type: Weather.FlashlightWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/FlashlightWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/FlashlightWeatherEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x200002E")]
internal class FlashlightWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x70")]
	private Light _light;

	[Token(Token = "0x17000018")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x5753E60", Offset = "0x5752E60", VA = "0x5753E60", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x5753EB0", Offset = "0x5752EB0", VA = "0x5753EB0", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x5753EC0", Offset = "0x5752EC0", VA = "0x5753EC0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x5753F90", Offset = "0x5752F90", VA = "0x5753F90", Slot = "22")]
	public virtual void SetColor(Color color)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x5753FB0", Offset = "0x5752FB0", VA = "0x5753FB0", Slot = "19")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x5754160", Offset = "0x5753160", VA = "0x5754160")]
	public FlashlightWeatherEffect()
	{
	}
}
