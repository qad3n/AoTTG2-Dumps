// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CameraExtensions
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C910A0", Offset = "0x2C8F6A0", VA = "0x182C910A0")]
	public static UniversalAdditionalCameraData GetUniversalAdditionalCameraData(this Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x2C91130", Offset = "0x2C8F730", VA = "0x182C91130")]
	public static VolumeFrameworkUpdateMode GetVolumeFrameworkUpdateMode(this Camera camera)
	{
		return default(VolumeFrameworkUpdateMode);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x2C913C0", Offset = "0x2C8F9C0", VA = "0x182C913C0")]
	public static void SetVolumeFrameworkUpdateMode(this Camera camera, VolumeFrameworkUpdateMode mode)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x2C914B0", Offset = "0x2C8FAB0", VA = "0x182C914B0")]
	public static void UpdateVolumeStack(this Camera camera)
	{
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x2C91560", Offset = "0x2C8FB60", VA = "0x182C91560")]
	public static void UpdateVolumeStack(this Camera camera, UniversalAdditionalCameraData cameraData)
	{
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x2C90FA0", Offset = "0x2C8F5A0", VA = "0x182C90FA0")]
	public static void DestroyVolumeStack(this Camera camera)
	{
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x2C90F20", Offset = "0x2C8F520", VA = "0x182C90F20")]
	public static void DestroyVolumeStack(this Camera camera, UniversalAdditionalCameraData cameraData)
	{
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x2C911D0", Offset = "0x2C8F7D0", VA = "0x182C911D0")]
	internal static void GetVolumeLayerMaskAndTrigger(this Camera camera, UniversalAdditionalCameraData cameraData, out LayerMask layerMask, out Transform trigger)
	{
	}
}
