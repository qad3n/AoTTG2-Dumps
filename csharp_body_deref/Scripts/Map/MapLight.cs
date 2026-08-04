// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapLight
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapLight.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLight.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000268")]
internal class MapLight
{
	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x10")]
	public Light Light;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x18")]
	public float MaxIntensity;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x20")]
	private Transform _transform;

	[Token(Token = "0x4000D04")]
	[FieldOffset(Offset = "0x28")]
	private bool _isDaylight;

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x3FA47E0", Offset = "0x3FA47E0", VA = "0x3FA47E0")]
	public MapLight(Light light, bool isDaylight)
	{
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x3FA4840", Offset = "0x3FA4840", VA = "0x3FA4840")]
	public void UpdateCull(Transform cameraPosition)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x3FA4B50", Offset = "0x3FA4B50", VA = "0x3FA4B50")]
	public bool MinimapDisableLight()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x3FA4C10", Offset = "0x3FA4C10", VA = "0x3FA4C10")]
	public void MinimapEnableLight()
	{
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x3FA4AA0", Offset = "0x3FA4AA0", VA = "0x3FA4AA0")]
	private void UpdateIntensity(float intensity)
	{
	}
}
