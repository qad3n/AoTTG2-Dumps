// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.CharacterEditorCamera
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/CharacterEditorCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/CharacterEditorCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008EE")]
internal class CharacterEditorCamera : BaseCamera
{
	[Token(Token = "0x4002D45")]
	private const float MaxDistance = 4f;

	[Token(Token = "0x4002D46")]
	private const float MinDistance = 1f;

	[Token(Token = "0x4002D47")]
	private const float DefaultDistance = 3f;

	[Token(Token = "0x4002D48")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x60054F2")]
	[Address(RVA = "0x5CCF680", Offset = "0x5CCE680", VA = "0x5CCF680", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60054F3")]
	[Address(RVA = "0x5CCF6E0", Offset = "0x5CCE6E0", VA = "0x5CCF6E0")]
	protected void Update()
	{
	}

	[Token(Token = "0x60054F4")]
	[Address(RVA = "0x5CCFD70", Offset = "0x5CCED70", VA = "0x5CCFD70")]
	private static bool IsInsidePreviewArea(CharacterEditorMenu menu, float screenX)
	{
		return default(bool);
	}

	[Token(Token = "0x60054F5")]
	[Address(RVA = "0x5CCFDD0", Offset = "0x5CCEDD0", VA = "0x5CCFDD0")]
	public CharacterEditorCamera()
	{
	}
}
