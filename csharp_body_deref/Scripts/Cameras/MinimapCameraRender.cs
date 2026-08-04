// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MinimapCameraRender
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/MinimapCameraRender.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x200070C")]
internal class MinimapCameraRender : MonoBehaviour
{
	[Token(Token = "0x400221E")]
	[FieldOffset(Offset = "0x20")]
	private List<MapLight> _disabledLights;

	[Token(Token = "0x400221F")]
	[FieldOffset(Offset = "0x28")]
	private Color _ambientLight;

	[Token(Token = "0x4002220")]
	[FieldOffset(Offset = "0x38")]
	private float _ambientIntensity;

	[Token(Token = "0x4002221")]
	[FieldOffset(Offset = "0x3C")]
	private bool _fog;

	[Token(Token = "0x60045B0")]
	[Address(RVA = "0x437ED80", Offset = "0x437ED80", VA = "0x437ED80")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x60045B1")]
	[Address(RVA = "0x437F050", Offset = "0x437F050", VA = "0x437F050")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x60045B2")]
	[Address(RVA = "0x437F1D0", Offset = "0x437F1D0", VA = "0x437F1D0")]
	public MinimapCameraRender()
	{
	}
}
