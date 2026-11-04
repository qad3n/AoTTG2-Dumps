// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRPassCreateInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.XR;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000F")]
public struct XRPassCreateInfo
{
	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x0")]
	internal RenderTargetIdentifier renderTarget;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x28")]
	internal RenderTextureDescriptor renderTargetDesc;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x60")]
	internal RenderTargetIdentifier motionVectorRenderTarget;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x88")]
	internal RenderTextureDescriptor motionVectorRenderTargetDesc;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0xC0")]
	internal ScriptableCullingParameters cullingParameters;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x6F8")]
	internal Material occlusionMeshMaterial;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x700")]
	internal float occlusionMeshScale;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x704")]
	internal int renderTargetScaledWidth;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x708")]
	internal int renderTargetScaledHeight;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x710")]
	internal IntPtr foveatedRenderingInfo;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x718")]
	internal int multipassId;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x71C")]
	internal int cullingPassId;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x720")]
	internal bool copyDepth;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x721")]
	internal bool hasMotionVectorPass;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x722")]
	internal bool spaceWarpRightHandedNDC;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x723")]
	internal bool isLastCameraPass;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x728")]
	internal XRDisplaySubsystem.XRRenderPass xrSdkRenderPass;
}
