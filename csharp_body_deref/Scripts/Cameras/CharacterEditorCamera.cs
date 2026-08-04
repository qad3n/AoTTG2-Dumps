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

[Token(Token = "0x2000705")]
internal class CharacterEditorCamera : BaseCamera
{
	[Token(Token = "0x40021E6")]
	private const float MaxDistance = 4f;

	[Token(Token = "0x40021E7")]
	private const float MinDistance = 1f;

	[Token(Token = "0x40021E8")]
	private const float DefaultDistance = 3f;

	[Token(Token = "0x40021E9")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x600456D")]
	[Address(RVA = "0x4375BC0", Offset = "0x4375BC0", VA = "0x4375BC0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x600456E")]
	[Address(RVA = "0x4375C20", Offset = "0x4375C20", VA = "0x4375C20")]
	protected void Update()
	{
	}

	[Token(Token = "0x600456F")]
	[Address(RVA = "0x43762E0", Offset = "0x43762E0", VA = "0x43762E0")]
	public CharacterEditorCamera()
	{
	}
}
