// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CameraExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001C4")]
public static class CameraExtensions
{
	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x669D2F0", Offset = "0x669C2F0", VA = "0x669D2F0")]
	public static UniversalAdditionalCameraData GetUniversalAdditionalCameraData(this Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x669D390", Offset = "0x669C390", VA = "0x669D390")]
	public static VolumeFrameworkUpdateMode GetVolumeFrameworkUpdateMode(this Camera camera)
	{
		return default(VolumeFrameworkUpdateMode);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x669D3B0", Offset = "0x669C3B0", VA = "0x669D3B0")]
	public static void SetVolumeFrameworkUpdateMode(this Camera camera, VolumeFrameworkUpdateMode mode)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x669D640", Offset = "0x669C640", VA = "0x669D640")]
	public static void UpdateVolumeStack(this Camera camera)
	{
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x669D500", Offset = "0x669C500", VA = "0x669D500")]
	public static void UpdateVolumeStack(this Camera camera, UniversalAdditionalCameraData cameraData)
	{
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x669D990", Offset = "0x669C990", VA = "0x669D990")]
	public static void DestroyVolumeStack(this Camera camera)
	{
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x669DA00", Offset = "0x669CA00", VA = "0x669DA00")]
	public static void DestroyVolumeStack(this Camera camera, UniversalAdditionalCameraData cameraData)
	{
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x669D790", Offset = "0x669C790", VA = "0x669D790")]
	internal static void GetVolumeLayerMaskAndTrigger(this Camera camera, UniversalAdditionalCameraData cameraData, out LayerMask layerMask, out Transform trigger)
	{
	}
}
