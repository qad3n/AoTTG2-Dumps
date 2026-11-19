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

[Token(Token = "0x20008F5")]
internal class MinimapCameraRender : MonoBehaviour
{
	[Token(Token = "0x4002D83")]
	[FieldOffset(Offset = "0x20")]
	private List<MapLight> _disabledLights;

	[Token(Token = "0x4002D84")]
	[FieldOffset(Offset = "0x28")]
	private Color _ambientLight;

	[Token(Token = "0x4002D85")]
	[FieldOffset(Offset = "0x38")]
	private float _ambientIntensity;

	[Token(Token = "0x4002D86")]
	[FieldOffset(Offset = "0x3C")]
	private bool _fog;

	[Token(Token = "0x6005543")]
	[Address(RVA = "0x5CD8B50", Offset = "0x5CD7B50", VA = "0x5CD8B50")]
	public void BeginRender()
	{
	}

	[Token(Token = "0x6005544")]
	[Address(RVA = "0x5CD91E0", Offset = "0x5CD81E0", VA = "0x5CD91E0")]
	public void EndRender()
	{
	}

	[Token(Token = "0x6005545")]
	[Address(RVA = "0x5CD9350", Offset = "0x5CD8350", VA = "0x5CD9350")]
	public MinimapCameraRender()
	{
	}
}
