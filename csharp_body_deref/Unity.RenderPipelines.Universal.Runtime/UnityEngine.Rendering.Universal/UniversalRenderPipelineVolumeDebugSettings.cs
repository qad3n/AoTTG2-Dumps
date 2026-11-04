// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineVolumeDebugSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200006D")]
[Obsolete("This is not longer supported Please use DebugDisplaySettingsVolume. #from(6000.2)")]
public class UniversalRenderPipelineVolumeDebugSettings : VolumeDebugSettings<UniversalAdditionalCameraData>
{
	[Token(Token = "0x170000C2")]
	public override VolumeStack selectedCameraVolumeStack
	{
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x2C342E0", Offset = "0x2C328E0", VA = "0x182C342E0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public override LayerMask selectedCameraLayerMask
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x2C340F0", Offset = "0x2C326F0", VA = "0x182C340F0", Slot = "20")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x170000C4")]
	public override Vector3 selectedCameraPosition
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x2C341E0", Offset = "0x2C327E0", VA = "0x182C341E0", Slot = "21")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000C5")]
	[Obsolete("This property is obsolete and kept only for not breaking user code. VolumeDebugSettings will use current pipeline when it needs to gather volume component types and paths. #from(2023.2)")]
	public override Type targetRenderPipeline
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x2C34410", Offset = "0x2C32A10", VA = "0x182C34410", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x2C34090", Offset = "0x2C32690", VA = "0x182C34090")]
	public UniversalRenderPipelineVolumeDebugSettings()
	{
	}
}
