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
		[Address(RVA = "0x3C74BA0", Offset = "0x3C74BA0", VA = "0x3C74BA0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3C74BF0", Offset = "0x3C74BF0", VA = "0x3C74BF0", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3C74C00", Offset = "0x3C74C00", VA = "0x3C74C00", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3C74CD0", Offset = "0x3C74CD0", VA = "0x3C74CD0", Slot = "22")]
	public virtual void SetColor(Color color)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3C74CF0", Offset = "0x3C74CF0", VA = "0x3C74CF0", Slot = "19")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3C74E80", Offset = "0x3C74E80", VA = "0x3C74E80")]
	public FlashlightWeatherEffect()
	{
	}
}
