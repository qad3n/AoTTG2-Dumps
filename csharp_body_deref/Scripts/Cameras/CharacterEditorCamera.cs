using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20006B7")]
internal class CharacterEditorCamera : BaseCamera
{
	[Token(Token = "0x4002089")]
	private const float MaxDistance = 4f;

	[Token(Token = "0x400208A")]
	private const float MinDistance = 1f;

	[Token(Token = "0x400208B")]
	private const float DefaultDistance = 3f;

	[Token(Token = "0x400208C")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x6004305")]
	[Address(RVA = "0x4042BB0", Offset = "0x4042BB0", VA = "0x4042BB0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6004306")]
	[Address(RVA = "0x4042C10", Offset = "0x4042C10", VA = "0x4042C10")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004307")]
	[Address(RVA = "0x40432D0", Offset = "0x40432D0", VA = "0x40432D0")]
	public CharacterEditorCamera()
	{
	}
}
