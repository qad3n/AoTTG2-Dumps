// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderResources
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000B7")]
[ReloadGroup]
[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
public sealed class ShaderResources
{
	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x10")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	[Reload("Shaders/Utils/Blit.shader", ReloadAttribute.Package.Root)]
	public Shader blitPS;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x18")]
	[Reload("Shaders/Utils/CopyDepth.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader copyDepthPS;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x20")]
	[Obsolete("Obsolete, this feature will be supported by new 'ScreenSpaceShadows' renderer feature. #from(2023.3) #breakingFrom(2023.3)", true)]
	public Shader screenSpaceShadowPS;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x28")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	[Reload("Shaders/Utils/Sampling.shader", ReloadAttribute.Package.Root)]
	public Shader samplingPS;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x30")]
	[Reload("Shaders/Utils/StencilDeferred.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader stencilDeferredPS;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x38")]
	[Reload("Shaders/Utils/FallbackError.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader fallbackErrorPS;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x40")]
	[Reload("Shaders/Utils/FallbackLoading.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader fallbackLoadingPS;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x48")]
	[Obsolete("Use fallbackErrorPS instead. #from(2023.3) #breakingFrom(2023.3)", true)]
	public Shader materialErrorPS;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x50")]
	[Reload("Shaders/Utils/CoreBlit.shader", ReloadAttribute.Package.Root)]
	[SerializeField]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	internal Shader coreBlitPS;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x58")]
	[Reload("Shaders/Utils/CoreBlitColorAndDepth.shader", ReloadAttribute.Package.Root)]
	[SerializeField]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	internal Shader coreBlitColorAndDepthPS;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x60")]
	[Reload("Shaders/Utils/BlitHDROverlay.shader", ReloadAttribute.Package.Root)]
	[SerializeField]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	internal Shader blitHDROverlay;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x68")]
	[Reload("Shaders/CameraMotionVectors.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader cameraMotionVector;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x70")]
	[Reload("Shaders/PostProcessing/LensFlareScreenSpace.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader screenSpaceLensFlare;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x78")]
	[Reload("Shaders/PostProcessing/LensFlareDataDriven.shader", ReloadAttribute.Package.Root)]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeShaders on GraphicsSettings. #from(2023.3)")]
	public Shader dataDrivenLensFlare;

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ShaderResources()
	{
	}
}
