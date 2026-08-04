// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CameraDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CameraDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004E8")]
internal class CameraDetection : BaseDetection
{
	[Token(Token = "0x40015D7")]
	[FieldOffset(Offset = "0x78")]
	private InGameCamera _camera;

	[Token(Token = "0x60033DD")]
	[Address(RVA = "0x41AD630", Offset = "0x41AD630", VA = "0x41AD630")]
	public CameraDetection(InGameCamera camera)
	{
	}

	[Token(Token = "0x60033DE")]
	[Address(RVA = "0x41AD670", Offset = "0x41AD670", VA = "0x41AD670", Slot = "4")]
	public override bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x60033DF")]
	[Address(RVA = "0x41AD680", Offset = "0x41AD680", VA = "0x41AD680", Slot = "7")]
	protected override Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60033E0")]
	[Address(RVA = "0x41AD6B0", Offset = "0x41AD6B0", VA = "0x41AD6B0", Slot = "6")]
	protected override float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x60033E1")]
	[Address(RVA = "0x41AD740", Offset = "0x41AD740", VA = "0x41AD740", Slot = "8")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
