// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRDisplaySubsystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x510D090", Offset = "0x510D090", VA = "0x510D090")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameter", IsFreeFunction = true, HasExplicitThis = true, ThrowsException = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public void GetRenderParameter(Camera camera, int renderParameterIndex, out XRRenderParameter renderParameter)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x510D1A0", Offset = "0x510D1A0", VA = "0x510D1A0")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameterCount", IsFreeFunction = true, HasExplicitThis = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public extern int GetRenderParameterCount();

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x510D150", Offset = "0x510D150", VA = "0x510D150")]
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
		[Address(RVA = "0x510D1D0", Offset = "0x510D1D0", VA = "0x510D1D0")]
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
		[Address(RVA = "0x510C8B0", Offset = "0x510C8B0", VA = "0x510C8B0")]
		set;
	}

	[Token(Token = "0x1700000E")]
	public extern float zNear
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x510C900", Offset = "0x510C900", VA = "0x510C900")]
		set;
	}

	[Token(Token = "0x1700000F")]
	public extern float zFar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x510C950", Offset = "0x510C950", VA = "0x510C950")]
		set;
	}

	[Token(Token = "0x17000010")]
	public extern bool sRGB
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x510C9A0", Offset = "0x510C9A0", VA = "0x510C9A0")]
		set;
	}

	[Token(Token = "0x17000011")]
	public extern TextureLayout textureLayout
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x510C9E0", Offset = "0x510C9E0", VA = "0x510C9E0")]
		set;
	}

	[Token(Token = "0x17000012")]
	public extern bool disableLegacyRenderer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x510CA60", Offset = "0x510CA60", VA = "0x510CA60")]
		set;
	}

	[Token(Token = "0x17000013")]
	public HDROutputSettings hdrOutputSettings
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x510CFD0", Offset = "0x510CFD0", VA = "0x510CFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x510C890", Offset = "0x510C890", VA = "0x510C890")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeDisplayFocusChanged(bool focus)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x510CA20", Offset = "0x510CA20", VA = "0x510CA20")]
	public extern void SetMSAALevel(int level);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x510CAA0", Offset = "0x510CAA0", VA = "0x510CAA0")]
	public extern int GetRenderPassCount();

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x510CAD0", Offset = "0x510CAD0", VA = "0x510CAD0")]
	public void GetRenderPass(int renderPassIndex, out XRRenderPass renderPass)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x510CB60", Offset = "0x510CB60", VA = "0x510CB60")]
	[UnityEngine.Bindings.NativeMethod("TryGetRenderPass")]
	private extern bool Internal_TryGetRenderPass(int renderPassIndex, out XRRenderPass renderPass);

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x510CBA0", Offset = "0x510CBA0", VA = "0x510CBA0")]
	public void GetCullingParameters(Camera camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x510CD30", Offset = "0x510CD30", VA = "0x510CD30")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableCulling.h")]
	[UnityEngine.Bindings.NativeMethod("TryGetCullingParams")]
	private bool Internal_TryGetCullingParams(Camera camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x510CE40", Offset = "0x510CE40", VA = "0x510CE40")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	[UnityEngine.Bindings.NativeMethod(Name = "GetPreferredMirrorViewBlitMode", IsThreadSafe = false)]
	public extern int GetPreferredMirrorBlitMode();

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x510CE70", Offset = "0x510CE70", VA = "0x510CE70")]
	[UnityEngine.Bindings.NativeMethod(Name = "QueryMirrorViewBlitDesc", IsThreadSafe = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	public bool GetMirrorViewBlitDesc(RenderTexture mirrorRt, out XRMirrorViewBlitDesc outDesc, int mode)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x510CF80", Offset = "0x510CF80", VA = "0x510CF80")]
	[UnityEngine.Bindings.NativeMethod(Name = "AddGraphicsThreadMirrorViewBlit", IsThreadSafe = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
	public extern bool AddGraphicsThreadMirrorViewBlit(CommandBuffer cmd, bool allowGraphicsStateInvalidate, int mode);

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x510D050", Offset = "0x510D050", VA = "0x510D050")]
	public XRDisplaySubsystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x510CDF0", Offset = "0x510CDF0", VA = "0x510CDF0")]
	private static extern bool Internal_TryGetCullingParams_Injected(XRDisplaySubsystem _unity_self, IntPtr camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x510CF30", Offset = "0x510CF30", VA = "0x510CF30")]
	private static extern bool GetMirrorViewBlitDesc_Injected(XRDisplaySubsystem _unity_self, IntPtr mirrorRt, out XRMirrorViewBlitDesc outDesc, int mode);
}
