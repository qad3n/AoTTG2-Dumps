using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200000F")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeType(Header = "Modules/XR/Subsystems/Display/XRDisplaySubsystem.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
public class XRDisplaySubsystem : IntegratedSubsystem<XRDisplaySubsystemDescriptor>
{
	[Token(Token = "0x2000010")]
	[Flags]
	public enum TextureLayout
	{
		[Token(Token = "0x4000046")]
		Texture2DArray = 1,
		[Token(Token = "0x4000047")]
		SingleTexture2D = 2,
		[Token(Token = "0x4000048")]
		SeparateTexture2Ds = 4
	}

	[Token(Token = "0x2000011")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	public struct XRRenderParameter
	{
		[Token(Token = "0x4000049")]
		[FieldOffset(Offset = "0x0")]
		public Matrix4x4 view;

		[Token(Token = "0x400004A")]
		[FieldOffset(Offset = "0x40")]
		public Matrix4x4 projection;

		[Token(Token = "0x400004B")]
		[FieldOffset(Offset = "0x80")]
		public Rect viewport;

		[Token(Token = "0x400004C")]
		[FieldOffset(Offset = "0x90")]
		public Mesh occlusionMesh;

		[Token(Token = "0x400004D")]
		[FieldOffset(Offset = "0x98")]
		public int textureArraySlice;

		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0x9C")]
		public Matrix4x4 previousView;

		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0xDC")]
		public bool isPreviousViewValid;
	}

	[Token(Token = "0x2000012")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTextureDesc.h")]
	public struct XRRenderPass
	{
		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0x0")]
		private IntPtr displaySubsystemInstance;

		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x8")]
		public int renderPassIndex;

		[Token(Token = "0x4000052")]
		[FieldOffset(Offset = "0x10")]
		public RenderTargetIdentifier renderTarget;

		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x38")]
		public RenderTextureDescriptor renderTargetDesc;

		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x6C")]
		public bool hasMotionVectorPass;

		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x70")]
		public RenderTargetIdentifier motionVectorRenderTarget;

		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x98")]
		public RenderTextureDescriptor motionVectorRenderTargetDesc;

		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0xCC")]
		public bool shouldFillOutDepth;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0xD0")]
		public int cullingPassIndex;

		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0xD8")]
		public IntPtr foveatedRenderingInfo;

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4DE5000", Offset = "0x4DE5000", VA = "0x4DE5000")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameter", IsFreeFunction = true, HasExplicitThis = true, ThrowsException = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public void GetRenderParameter(Camera camera, int renderParameterIndex, out XRRenderParameter renderParameter)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4DE5110", Offset = "0x4DE5110", VA = "0x4DE5110")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameterCount", IsFreeFunction = true, HasExplicitThis = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public extern int GetRenderParameterCount();

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4DE50C0", Offset = "0x4DE50C0", VA = "0x4DE50C0")]
		private static extern void GetRenderParameter_Injected(ref XRRenderPass _unity_self, IntPtr camera, int renderParameterIndex, out XRRenderParameter renderParameter);
	}

	[Token(Token = "0x2000013")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
	public struct XRBlitParams
	{
		[Token(Token = "0x400005A")]
		[FieldOffset(Offset = "0x0")]
		public RenderTexture srcTex;

		[Token(Token = "0x400005B")]
		[FieldOffset(Offset = "0x8")]
		public int srcTexArraySlice;

		[Token(Token = "0x400005C")]
		[FieldOffset(Offset = "0xC")]
		public Rect srcRect;

		[Token(Token = "0x400005D")]
		[FieldOffset(Offset = "0x1C")]
		public Rect destRect;

		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x30")]
		public IntPtr foveatedRenderingInfo;

		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x38")]
		public bool srcHdrEncoded;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x3C")]
		public ColorGamut srcHdrColorGamut;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x40")]
		public int srcHdrMaxLuminance;
	}

	[Token(Token = "0x2000014")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	public struct XRMirrorViewBlitDesc
	{
		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x0")]
		private IntPtr displaySubsystemInstance;

		[Token(Token = "0x4000063")]
		[FieldOffset(Offset = "0x8")]
		public bool nativeBlitAvailable;

		[Token(Token = "0x4000064")]
		[FieldOffset(Offset = "0x9")]
		public bool nativeBlitInvalidStates;

		[Token(Token = "0x4000065")]
		[FieldOffset(Offset = "0xC")]
		public int blitParamsCount;

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4DE5140", Offset = "0x4DE5140", VA = "0x4DE5140")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRMirrorViewBlitDescScriptApi::GetBlitParameter", IsFreeFunction = true, HasExplicitThis = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public extern void GetBlitParameter(int blitParameterIndex, out XRBlitParams blitParameter);
	}

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<bool> displayFocusChanged;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x28")]
	private HDROutputSettings m_HDROutputSettings;

	[Token(Token = "0x1700000D")]
	public extern float scaleOfAllRenderTargets
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4DE4820", Offset = "0x4DE4820", VA = "0x4DE4820")]
		set;
	}

	[Token(Token = "0x1700000E")]
	public extern float zNear
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4DE4870", Offset = "0x4DE4870", VA = "0x4DE4870")]
		set;
	}

	[Token(Token = "0x1700000F")]
	public extern float zFar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4DE48C0", Offset = "0x4DE48C0", VA = "0x4DE48C0")]
		set;
	}

	[Token(Token = "0x17000010")]
	public extern bool sRGB
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4DE4910", Offset = "0x4DE4910", VA = "0x4DE4910")]
		set;
	}

	[Token(Token = "0x17000011")]
	public extern TextureLayout textureLayout
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4DE4950", Offset = "0x4DE4950", VA = "0x4DE4950")]
		set;
	}

	[Token(Token = "0x17000012")]
	public extern bool disableLegacyRenderer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4DE49D0", Offset = "0x4DE49D0", VA = "0x4DE49D0")]
		set;
	}

	[Token(Token = "0x17000013")]
	public HDROutputSettings hdrOutputSettings
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4DE4F40", Offset = "0x4DE4F40", VA = "0x4DE4F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4DE4800", Offset = "0x4DE4800", VA = "0x4DE4800")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeDisplayFocusChanged(bool focus)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4DE4990", Offset = "0x4DE4990", VA = "0x4DE4990")]
	public extern void SetMSAALevel(int level);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4DE4A10", Offset = "0x4DE4A10", VA = "0x4DE4A10")]
	public extern int GetRenderPassCount();

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4DE4A40", Offset = "0x4DE4A40", VA = "0x4DE4A40")]
	public void GetRenderPass(int renderPassIndex, out XRRenderPass renderPass)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4DE4AD0", Offset = "0x4DE4AD0", VA = "0x4DE4AD0")]
	[UnityEngine.Bindings.NativeMethod("TryGetRenderPass")]
	private extern bool Internal_TryGetRenderPass(int renderPassIndex, out XRRenderPass renderPass);

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4DE4B10", Offset = "0x4DE4B10", VA = "0x4DE4B10")]
	public void GetCullingParameters(Camera camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4DE4CA0", Offset = "0x4DE4CA0", VA = "0x4DE4CA0")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableCulling.h")]
	[UnityEngine.Bindings.NativeMethod("TryGetCullingParams")]
	private bool Internal_TryGetCullingParams(Camera camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4DE4DB0", Offset = "0x4DE4DB0", VA = "0x4DE4DB0")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	[UnityEngine.Bindings.NativeMethod(Name = "GetPreferredMirrorViewBlitMode", IsThreadSafe = false)]
	public extern int GetPreferredMirrorBlitMode();

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4DE4DE0", Offset = "0x4DE4DE0", VA = "0x4DE4DE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "QueryMirrorViewBlitDesc", IsThreadSafe = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	public bool GetMirrorViewBlitDesc(RenderTexture mirrorRt, out XRMirrorViewBlitDesc outDesc, int mode)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4DE4EF0", Offset = "0x4DE4EF0", VA = "0x4DE4EF0")]
	[UnityEngine.Bindings.NativeMethod(Name = "AddGraphicsThreadMirrorViewBlit", IsThreadSafe = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
	public extern bool AddGraphicsThreadMirrorViewBlit(CommandBuffer cmd, bool allowGraphicsStateInvalidate, int mode);

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4DE4FC0", Offset = "0x4DE4FC0", VA = "0x4DE4FC0")]
	public XRDisplaySubsystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4DE4D60", Offset = "0x4DE4D60", VA = "0x4DE4D60")]
	private static extern bool Internal_TryGetCullingParams_Injected(XRDisplaySubsystem _unity_self, IntPtr camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4DE4EA0", Offset = "0x4DE4EA0", VA = "0x4DE4EA0")]
	private static extern bool GetMirrorViewBlitDesc_Injected(XRDisplaySubsystem _unity_self, IntPtr mirrorRt, out XRMirrorViewBlitDesc outDesc, int mode);
}
