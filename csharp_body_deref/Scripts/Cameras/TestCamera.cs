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

[Token(Token = "0x20008F7")]
internal class TestCamera : BaseCamera
{
	[Token(Token = "0x4002D87")]
	private const float DefaultDistance = 30f;

	[Token(Token = "0x4002D88")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x4002D89")]
	[FieldOffset(Offset = "0x44")]
	private float MinDistance;

	[Token(Token = "0x4002D8A")]
	[FieldOffset(Offset = "0x48")]
	private float MaxDistance;

	[Token(Token = "0x6005549")]
	[Address(RVA = "0x5CD9440", Offset = "0x5CD8440", VA = "0x5CD9440", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x600554A")]
	[Address(RVA = "0x5CD94A0", Offset = "0x5CD84A0", VA = "0x5CD94A0")]
	protected void Update()
	{
	}

	[Token(Token = "0x600554B")]
	[Address(RVA = "0x5CD9AB0", Offset = "0x5CD8AB0", VA = "0x5CD9AB0")]
	public TestCamera()
	{
	}
}
