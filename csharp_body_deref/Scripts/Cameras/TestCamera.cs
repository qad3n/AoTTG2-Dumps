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

[Token(Token = "0x2000891")]
internal class TestCamera : BaseCamera
{
	[Token(Token = "0x4002ADF")]
	private const float DefaultDistance = 30f;

	[Token(Token = "0x4002AE0")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x4002AE1")]
	[FieldOffset(Offset = "0x44")]
	private float MinDistance;

	[Token(Token = "0x4002AE2")]
	[FieldOffset(Offset = "0x48")]
	private float MaxDistance;

	[Token(Token = "0x600520D")]
	[Address(RVA = "0x233F2D0", Offset = "0x233D8D0", VA = "0x18233F2D0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x600520E")]
	[Address(RVA = "0x233F350", Offset = "0x233D950", VA = "0x18233F350")]
	protected void Update()
	{
	}

	[Token(Token = "0x600520F")]
	[Address(RVA = "0x233F880", Offset = "0x233DE80", VA = "0x18233F880")]
	public TestCamera()
	{
	}
}
