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

[Token(Token = "0x20008E9")]
internal class BaseCamera : MonoBehaviour
{
	[Token(Token = "0x4002D22")]
	[FieldOffset(Offset = "0x20")]
	public Camera Camera;

	[Token(Token = "0x4002D23")]
	[FieldOffset(Offset = "0x28")]
	public BaseComponentCache Cache;

	[Token(Token = "0x4002D24")]
	[FieldOffset(Offset = "0x30")]
	public Skybox Skybox;

	[Token(Token = "0x60054D7")]
	[Address(RVA = "0x5CCB4E0", Offset = "0x5CCA4E0", VA = "0x5CCB4E0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60054D8")]
	[Address(RVA = "0x5CCB860", Offset = "0x5CCA860", VA = "0x5CCB860", Slot = "5")]
	public virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x60054D9")]
	[Address(RVA = "0x5CCB880", Offset = "0x5CCA880", VA = "0x5CCB880", Slot = "6")]
	protected virtual void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60054DA")]
	[Address(RVA = "0x5CCB890", Offset = "0x5CCA890", VA = "0x5CCB890", Slot = "7")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60054DB")]
	[Address(RVA = "0x5CCB8A0", Offset = "0x5CCA8A0", VA = "0x5CCB8A0")]
	public BaseCamera()
	{
	}
}
