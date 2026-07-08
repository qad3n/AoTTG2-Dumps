using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20006C0")]
internal class TestCamera : BaseCamera
{
	[Token(Token = "0x40020C5")]
	private const float DefaultDistance = 30f;

	[Token(Token = "0x40020C6")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x40020C7")]
	[FieldOffset(Offset = "0x44")]
	private float MinDistance;

	[Token(Token = "0x40020C8")]
	[FieldOffset(Offset = "0x48")]
	private float MaxDistance;

	[Token(Token = "0x600434E")]
	[Address(RVA = "0x404C2B0", Offset = "0x404C2B0", VA = "0x404C2B0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x600434F")]
	[Address(RVA = "0x404C310", Offset = "0x404C310", VA = "0x404C310")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004350")]
	[Address(RVA = "0x404C8B0", Offset = "0x404C8B0", VA = "0x404C8B0")]
	public TestCamera()
	{
	}
}
