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

[Token(Token = "0x20003FF")]
internal class MapLight
{
	[Token(Token = "0x400148A")]
	[FieldOffset(Offset = "0x10")]
	public Light Light;

	[Token(Token = "0x400148B")]
	[FieldOffset(Offset = "0x18")]
	public float MaxIntensity;

	[Token(Token = "0x400148C")]
	[FieldOffset(Offset = "0x20")]
	private Transform _transform;

	[Token(Token = "0x400148D")]
	[FieldOffset(Offset = "0x28")]
	private bool _isDaylight;

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x588F550", Offset = "0x588E550", VA = "0x588F550")]
	public MapLight(Light light, bool isDaylight)
	{
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x588F5B0", Offset = "0x588E5B0", VA = "0x588F5B0")]
	public void UpdateCull(Vector3 cameraPosition, float lightDistance)
	{
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x588F800", Offset = "0x588E800", VA = "0x588F800")]
	public bool MinimapDisableLight()
	{
		return default(bool);
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x588F8C0", Offset = "0x588E8C0", VA = "0x588F8C0")]
	public void MinimapEnableLight()
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x588F750", Offset = "0x588E750", VA = "0x588F750")]
	private void UpdateIntensity(float intensity)
	{
	}
}
