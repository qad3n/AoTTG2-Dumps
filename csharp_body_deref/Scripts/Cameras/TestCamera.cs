// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.TestCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/TestCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/TestCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x200070E")]
internal class TestCamera : BaseCamera
{
	[Token(Token = "0x4002222")]
	private const float DefaultDistance = 30f;

	[Token(Token = "0x4002223")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x4002224")]
	[FieldOffset(Offset = "0x44")]
	private float MinDistance;

	[Token(Token = "0x4002225")]
	[FieldOffset(Offset = "0x48")]
	private float MaxDistance;

	[Token(Token = "0x60045B6")]
	[Address(RVA = "0x437F2C0", Offset = "0x437F2C0", VA = "0x437F2C0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60045B7")]
	[Address(RVA = "0x437F320", Offset = "0x437F320", VA = "0x437F320")]
	protected void Update()
	{
	}

	[Token(Token = "0x60045B8")]
	[Address(RVA = "0x437F8C0", Offset = "0x437F8C0", VA = "0x437F8C0")]
	public TestCamera()
	{
	}
}
