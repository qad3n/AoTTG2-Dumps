// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.BaseCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/BaseCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/BaseCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Cameras;

[Token(Token = "0x2000704")]
internal class BaseCamera : MonoBehaviour
{
	[Token(Token = "0x40021E3")]
	[FieldOffset(Offset = "0x20")]
	public Camera Camera;

	[Token(Token = "0x40021E4")]
	[FieldOffset(Offset = "0x28")]
	public BaseComponentCache Cache;

	[Token(Token = "0x40021E5")]
	[FieldOffset(Offset = "0x30")]
	public Skybox Skybox;

	[Token(Token = "0x6004568")]
	[Address(RVA = "0x43757D0", Offset = "0x43757D0", VA = "0x43757D0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6004569")]
	[Address(RVA = "0x4375B70", Offset = "0x4375B70", VA = "0x4375B70", Slot = "5")]
	public virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x600456A")]
	[Address(RVA = "0x4375B90", Offset = "0x4375B90", VA = "0x4375B90", Slot = "6")]
	protected virtual void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x600456B")]
	[Address(RVA = "0x4375BA0", Offset = "0x4375BA0", VA = "0x4375BA0", Slot = "7")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x600456C")]
	[Address(RVA = "0x4375BB0", Offset = "0x4375BB0", VA = "0x4375BB0")]
	public BaseCamera()
	{
	}
}
