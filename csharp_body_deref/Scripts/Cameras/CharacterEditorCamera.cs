// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.CharacterEditorCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/CharacterEditorCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/CharacterEditorCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x2000888")]
internal class CharacterEditorCamera : BaseCamera
{
	[Token(Token = "0x4002A9D")]
	private const float MaxDistance = 4f;

	[Token(Token = "0x4002A9E")]
	private const float MinDistance = 1f;

	[Token(Token = "0x4002A9F")]
	private const float DefaultDistance = 3f;

	[Token(Token = "0x4002AA0")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x60051BB")]
	[Address(RVA = "0x22EEA30", Offset = "0x22ED030", VA = "0x1822EEA30", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60051BC")]
	[Address(RVA = "0x22EEAB0", Offset = "0x22ED0B0", VA = "0x1822EEAB0")]
	protected void Update()
	{
	}

	[Token(Token = "0x60051BD")]
	[Address(RVA = "0x22EF0B0", Offset = "0x22ED6B0", VA = "0x1822EF0B0")]
	public CharacterEditorCamera()
	{
	}
}
