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

[Token(Token = "0x2000883")]
internal class BaseCamera : MonoBehaviour
{
	[Token(Token = "0x4002A7A")]
	[FieldOffset(Offset = "0x20")]
	public Camera Camera;

	[Token(Token = "0x4002A7B")]
	[FieldOffset(Offset = "0x28")]
	public BaseComponentCache Cache;

	[Token(Token = "0x4002A7C")]
	[FieldOffset(Offset = "0x30")]
	public Skybox Skybox;

	[Token(Token = "0x60051A0")]
	[Address(RVA = "0x22EAA90", Offset = "0x22E9090", VA = "0x1822EAA90", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60051A1")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "5")]
	public virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x60051A2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	protected virtual void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60051A3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60051A4")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseCamera()
	{
	}
}
