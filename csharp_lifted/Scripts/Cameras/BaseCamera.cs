// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.BaseCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/BaseCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/BaseCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Cameras/BaseCamera.c (Cameras.BaseCamera$$Awake): 3 lines keep C-only constructs
		Camera* targetAddress;
		uint uVar1;
		GameObject pUVar2;
		Camera pUVar3;
		Skybox pUVar4;
		BaseComponentCache __this_00;

		pUVar2 = this.gameObject;
		if (pUVar2 != null) {
			pUVar3 = pUVar2.GetComponent<Camera>();
			targetAddress = &this.Camera;
			this.Camera = pUVar3;
			pUVar3 = this.Camera;
			if (pUVar3 != null) {
				uVar1 = pUVar3.depthTextureMode;
				pUVar3.depthTextureMode = uVar1 | 1;
				pUVar2 = this.gameObject;
				if (pUVar2 != null) {
					pUVar4 = pUVar2.GetComponent<Skybox>();
					this.Skybox = pUVar4;
					pUVar2 = this.gameObject;
					__this_00 = new BaseComponentCache(pUVar2);
					this.Cache = __this_00;
					FullscreenHandler.UpdateSound();
					pUVar3 = *targetAddress;
					if (pUVar3 != null) {
						pUVar3.fieldOfView = 50.0;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054D8")]
	[Address(RVA = "0x5CCB860", Offset = "0x5CCA860", VA = "0x5CCB860", Slot = "5")]
	public virtual void OnFinishLoading()
	{
		// Lifted from source/cpp/Cameras/BaseCamera.c (Cameras.BaseCamera$$OnFinishLoading): clean
		this.SetDefaultCameraPosition();
		return;
	}

	[Token(Token = "0x60054D9")]
	[Address(RVA = "0x5CCB880", Offset = "0x5CCA880", VA = "0x5CCB880", Slot = "6")]
	protected virtual void SetDefaultCameraPosition()
	{
		// Lifted from source/cpp/Cameras/BaseCamera.c (Cameras.BaseCamera$$SetDefaultCameraPosition): clean
		return;
	}

	[Token(Token = "0x60054DA")]
	[Address(RVA = "0x5CCB890", Offset = "0x5CCA890", VA = "0x5CCB890", Slot = "7")]
	protected virtual void LateUpdate()
	{
		// Lifted from source/cpp/Cameras/BaseCamera.c (Cameras.BaseCamera$$LateUpdate): clean
		return;
	}

	[Token(Token = "0x60054DB")]
	[Address(RVA = "0x5CCB8A0", Offset = "0x5CCA8A0", VA = "0x5CCB8A0")]
	public BaseCamera()
	{
		// Lifted from source/cpp/Cameras/BaseCamera.c (Cameras.BaseCamera$$.ctor): clean
		base();
		return;
	}
}
