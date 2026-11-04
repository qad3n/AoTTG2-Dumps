// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapLight
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapLight.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLight.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003A4")]
internal class MapLight
{
	[Token(Token = "0x40012F8")]
	[FieldOffset(Offset = "0x10")]
	public Light Light;

	[Token(Token = "0x40012F9")]
	[FieldOffset(Offset = "0x18")]
	public float MaxIntensity;

	[Token(Token = "0x40012FA")]
	[FieldOffset(Offset = "0x20")]
	private Transform _transform;

	[Token(Token = "0x40012FB")]
	[FieldOffset(Offset = "0x28")]
	private bool _isDaylight;

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x1EA83D0", Offset = "0x1EA69D0", VA = "0x181EA83D0")]
	public MapLight(Light light, bool isDaylight)
	{
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x1EA81A0", Offset = "0x1EA67A0", VA = "0x181EA81A0")]
	public void UpdateCull(Vector3 cameraPosition, float lightDistance)
	{
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x1EA8020", Offset = "0x1EA6620", VA = "0x181EA8020")]
	public bool MinimapDisableLight()
	{
		return default(bool);
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x1EA80F0", Offset = "0x1EA66F0", VA = "0x181EA80F0")]
	public void MinimapEnableLight()
	{
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x1EA8320", Offset = "0x1EA6920", VA = "0x181EA8320")]
	private void UpdateIntensity(float intensity)
	{
	}
}
