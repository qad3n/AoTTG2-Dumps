// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MinimapCameraRender
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/MinimapCameraRender.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x200088F")]
internal class MinimapCameraRender : MonoBehaviour
{
	[Token(Token = "0x4002ADB")]
	[FieldOffset(Offset = "0x20")]
	private List<MapLight> _disabledLights;

	[Token(Token = "0x4002ADC")]
	[FieldOffset(Offset = "0x28")]
	private Color _ambientLight;

	[Token(Token = "0x4002ADD")]
	[FieldOffset(Offset = "0x38")]
	private float _ambientIntensity;

	[Token(Token = "0x4002ADE")]
	[FieldOffset(Offset = "0x3C")]
	private bool _fog;

	[Token(Token = "0x6005207")]
	[Address(RVA = "0x22F8570", Offset = "0x22F6B70", VA = "0x1822F8570")]
	public void BeginRender()
	{
	}

	[Token(Token = "0x6005208")]
	[Address(RVA = "0x22F87A0", Offset = "0x22F6DA0", VA = "0x1822F87A0")]
	public void EndRender()
	{
	}

	[Token(Token = "0x6005209")]
	[Address(RVA = "0x22F8900", Offset = "0x22F6F00", VA = "0x1822F8900")]
	public MinimapCameraRender()
	{
	}
}
