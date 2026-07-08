using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004A3")]
internal class CameraDetection : BaseDetection
{
	[Token(Token = "0x40014C6")]
	[FieldOffset(Offset = "0x78")]
	private InGameCamera _camera;

	[Token(Token = "0x60031CF")]
	[Address(RVA = "0x3EA0D90", Offset = "0x3EA0D90", VA = "0x3EA0D90")]
	public CameraDetection(InGameCamera camera)
	{
	}

	[Token(Token = "0x60031D0")]
	[Address(RVA = "0x3EA0DD0", Offset = "0x3EA0DD0", VA = "0x3EA0DD0", Slot = "4")]
	public override bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x60031D1")]
	[Address(RVA = "0x3EA0DE0", Offset = "0x3EA0DE0", VA = "0x3EA0DE0", Slot = "7")]
	protected override Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60031D2")]
	[Address(RVA = "0x3EA0E10", Offset = "0x3EA0E10", VA = "0x3EA0E10", Slot = "6")]
	protected override float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x60031D3")]
	[Address(RVA = "0x3EA0EA0", Offset = "0x3EA0EA0", VA = "0x3EA0EA0", Slot = "8")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
