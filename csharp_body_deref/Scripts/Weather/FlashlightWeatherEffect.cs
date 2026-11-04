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

[Token(Token = "0x200002F")]
internal class FlashlightWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x70")]
	private Light _light;

	[Token(Token = "0x1700001F")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x1DA1240", Offset = "0x1D9F840", VA = "0x181DA1240", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x1DA1150", Offset = "0x1D9F750", VA = "0x181DA1150", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x1DA1120", Offset = "0x1D9F720", VA = "0x181DA1120", Slot = "22")]
	public virtual void SetColor(Color color)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x1DA0F40", Offset = "0x1D9F540", VA = "0x181DA0F40", Slot = "19")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x1DA1230", Offset = "0x1D9F830", VA = "0x181DA1230")]
	public FlashlightWeatherEffect()
	{
	}
}
