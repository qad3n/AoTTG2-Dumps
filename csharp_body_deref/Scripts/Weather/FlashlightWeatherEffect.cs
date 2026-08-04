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
	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x70")]
	private Light _light;

	[Token(Token = "0x1700001D")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x3F6A4F0", Offset = "0x3F6A4F0", VA = "0x3F6A4F0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3F6A540", Offset = "0x3F6A540", VA = "0x3F6A540", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3F6A550", Offset = "0x3F6A550", VA = "0x3F6A550", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3F6A620", Offset = "0x3F6A620", VA = "0x3F6A620", Slot = "22")]
	public virtual void SetColor(Color color)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3F6A640", Offset = "0x3F6A640", VA = "0x3F6A640", Slot = "19")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3F6A7D0", Offset = "0x3F6A7D0", VA = "0x3F6A7D0")]
	public FlashlightWeatherEffect()
	{
	}
}
