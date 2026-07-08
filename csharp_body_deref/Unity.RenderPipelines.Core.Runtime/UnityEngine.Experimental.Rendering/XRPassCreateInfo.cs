using System;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.XR;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000016")]
public struct XRPassCreateInfo
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	internal RenderTargetIdentifier renderTarget;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x28")]
	internal RenderTextureDescriptor renderTargetDesc;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x60")]
	internal ScriptableCullingParameters cullingParameters;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x690")]
	internal Material occlusionMeshMaterial;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x698")]
	internal IntPtr foveatedRenderingInfo;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x6A0")]
	internal int multipassId;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x6A4")]
	internal int cullingPassId;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x6A8")]
	internal bool copyDepth;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x6B0")]
	internal XRDisplaySubsystem.XRRenderPass xrSdkRenderPass;
}
