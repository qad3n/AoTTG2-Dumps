using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200022F")]
internal class MapLight
{
	[Token(Token = "0x4000C1B")]
	[FieldOffset(Offset = "0x10")]
	public Light Light;

	[Token(Token = "0x4000C1C")]
	[FieldOffset(Offset = "0x18")]
	public float MaxIntensity;

	[Token(Token = "0x4000C1D")]
	[FieldOffset(Offset = "0x20")]
	private Transform _transform;

	[Token(Token = "0x4000C1E")]
	[FieldOffset(Offset = "0x28")]
	private bool _isDaylight;

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x3C9F4C0", Offset = "0x3C9F4C0", VA = "0x3C9F4C0")]
	public MapLight(Light light, bool isDaylight)
	{
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x3C9F520", Offset = "0x3C9F520", VA = "0x3C9F520")]
	public void UpdateCull(Transform cameraPosition)
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x3C9F830", Offset = "0x3C9F830", VA = "0x3C9F830")]
	public bool MinimapDisableLight()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x3C9F8F0", Offset = "0x3C9F8F0", VA = "0x3C9F8F0")]
	public void MinimapEnableLight()
	{
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x3C9F780", Offset = "0x3C9F780", VA = "0x3C9F780")]
	private void UpdateIntensity(float intensity)
	{
	}
}
