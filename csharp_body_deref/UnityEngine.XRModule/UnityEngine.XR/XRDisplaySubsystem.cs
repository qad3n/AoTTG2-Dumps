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
[UnityEngine.Bindings.NativeType(Header = "Modules/XR/Subsystems/Display/XRDisplaySubsystem.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Scripting.UsedByNativeCode]
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
		public Mesh visibleMesh;

		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0xA0")]
		public int textureArraySlice;

		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0xA4")]
		public Matrix4x4 previousView;

		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0xE4")]
		public bool isPreviousViewValid;
	}

	[Token(Token = "0x2000012")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTextureDesc.h")]
	public struct XRRenderPass
	{
		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x0")]
		private IntPtr displaySubsystemInstance;

		[Token(Token = "0x4000052")]
		[FieldOffset(Offset = "0x8")]
		public int renderPassIndex;

		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x10")]
		public RenderTargetIdentifier renderTarget;

		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x38")]
		public RenderTextureDescriptor renderTargetDesc;

		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x6C")]
		public int renderTargetScaledWidth;

		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x70")]
		public int renderTargetScaledHeight;

		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0x74")]
		public bool hasMotionVectorPass;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0x78")]
		public RenderTargetIdentifier motionVectorRenderTarget;

		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0xA0")]
		public RenderTextureDescriptor motionVectorRenderTargetDesc;

		[Token(Token = "0x400005A")]
		[FieldOffset(Offset = "0xD4")]
		public bool shouldFillOutDepth;

		[Token(Token = "0x400005B")]
		[FieldOffset(Offset = "0xD5")]
		public bool spaceWarpRightHandedNDC;

		[Token(Token = "0x400005C")]
		[FieldOffset(Offset = "0xD8")]
		public int cullingPassIndex;

		[Token(Token = "0x400005D")]
		[FieldOffset(Offset = "0xE0")]
		public IntPtr foveatedRenderingInfo;

		[Token(Token = "0x600004E")]
		[Address(RVA = "0x6D245E0", Offset = "0x6D235E0", VA = "0x6D245E0")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameter", IsFreeFunction = true, HasExplicitThis = true, ThrowsException = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public void GetRenderParameter(Camera camera, int renderParameterIndex, out XRRenderParameter renderParameter)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x6D246E0", Offset = "0x6D236E0", VA = "0x6D246E0")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameterCount", IsFreeFunction = true, HasExplicitThis = true)]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		public extern int GetRenderParameterCount();

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x6D24690", Offset = "0x6D23690", VA = "0x6D24690")]
		private static extern void GetRenderParameter_Injected(ref XRRenderPass _unity_self, IntPtr camera, int renderParameterIndex, out XRRenderParameter renderParameter);
	}

	[Token(Token = "0x2000013")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	public struct XRBlitParams
	{
		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x0")]
		public RenderTexture srcTex;

		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x8")]
		public int srcTexArraySlice;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0xC")]
		public Rect srcRect;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x1C")]
		public Rect destRect;

		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x30")]
		public IntPtr foveatedRenderingInfo;

		[Token(Token = "0x4000063")]
		[FieldOffset(Offset = "0x38")]
		public bool srcHdrEncoded;

		[Token(Token = "0x4000064")]
		[FieldOffset(Offset = "0x3C")]
		public ColorGamut srcHdrColorGamut;

		[Token(Token = "0x4000065")]
		[FieldOffset(Offset = "0x40")]
		public int srcHdrMaxLuminance;
	}

	[Token(Token = "0x2000014")]
	[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
	public struct XRMirrorViewBlitDesc
	{
		[Token(Token = "0x4000066")]
		[FieldOffset(Offset = "0x0")]
		private IntPtr displaySubsystemInstance;

		[Token(Token = "0x4000067")]
		[FieldOffset(Offset = "0x8")]
		public bool nativeBlitAvailable;

		[Token(Token = "0x4000068")]
		[FieldOffset(Offset = "0x9")]
		public bool nativeBlitInvalidStates;

		[Token(Token = "0x4000069")]
		[FieldOffset(Offset = "0xC")]
		public int blitParamsCount;

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x6D24710", Offset = "0x6D23710", VA = "0x6D24710")]
		[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
		[UnityEngine.Bindings.NativeMethod(Name = "XRMirrorViewBlitDescScriptApi::GetBlitParameter", IsFreeFunction = true, HasExplicitThis = true)]
		public extern void GetBlitParameter(int blitParameterIndex, out XRBlitParams blitParameter);
	}

	[Token(Token = "0x2000015")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x6D24750", Offset = "0x6D23750", VA = "0x6D24750")]
		public static IntPtr ConvertToNative(XRDisplaySubsystem xrDisplaySubsystem)
		{
			return default(IntPtr);
		}
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
	public float appliedViewportScale
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x6D23040", Offset = "0x6D22040", VA = "0x6D23040")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public float scaleOfAllRenderTargets
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x6D230D0", Offset = "0x6D220D0", VA = "0x6D230D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float globalDynamicScale
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x6D231A0", Offset = "0x6D221A0", VA = "0x6D231A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000010")]
	public float zNear
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x6D23230", Offset = "0x6D22230", VA = "0x6D23230")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float zFar
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x6D23300", Offset = "0x6D22300", VA = "0x6D23300")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool sRGB
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x6D233D0", Offset = "0x6D223D0", VA = "0x6D233D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public TextureLayout textureLayout
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x6D23470", Offset = "0x6D22470", VA = "0x6D23470")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool disableLegacyRenderer
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x6D237B0", Offset = "0x6D227B0", VA = "0x6D237B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public HDROutputSettings hdrOutputSettings
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x6D24520", Offset = "0x6D23520", VA = "0x6D24520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6D23020", Offset = "0x6D22020", VA = "0x6D23020")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeDisplayFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6D23510", Offset = "0x6D22510", VA = "0x6D23510")]
	public int ScaledTextureWidth(RenderTexture renderTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6D23610", Offset = "0x6D22610", VA = "0x6D23610")]
	public int ScaledTextureHeight(RenderTexture renderTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6D23710", Offset = "0x6D22710", VA = "0x6D23710")]
	public void SetMSAALevel(int level)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6D23850", Offset = "0x6D22850", VA = "0x6D23850")]
	public int GetRenderPassCount()
	{
		return default(int);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6D238E0", Offset = "0x6D228E0", VA = "0x6D238E0")]
	public void GetRenderPass(int renderPassIndex, out XRRenderPass renderPass)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6D23990", Offset = "0x6D22990", VA = "0x6D23990")]
	[UnityEngine.Bindings.NativeMethod("TryGetRenderPass")]
	private bool Internal_TryGetRenderPass(int renderPassIndex, out XRRenderPass renderPass)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6D23A30", Offset = "0x6D22A30", VA = "0x6D23A30")]
	public void EndRecordingIfLateLatched(Camera camera)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6D23BC0", Offset = "0x6D22BC0", VA = "0x6D23BC0")]
	[UnityEngine.Bindings.NativeMethod("TryEndRecordingIfLateLatched")]
	private bool Internal_TryEndRecordingIfLateLatched(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6D23CC0", Offset = "0x6D22CC0", VA = "0x6D23CC0")]
	public void BeginRecordingIfLateLatched(Camera camera)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6D23E50", Offset = "0x6D22E50", VA = "0x6D23E50")]
	[UnityEngine.Bindings.NativeMethod("TryBeginRecordingIfLateLatched")]
	private bool Internal_TryBeginRecordingIfLateLatched(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6D23F50", Offset = "0x6D22F50", VA = "0x6D23F50")]
	public void GetCullingParameters(Camera camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6D240E0", Offset = "0x6D230E0", VA = "0x6D240E0")]
	[UnityEngine.Bindings.NativeMethod("TryGetCullingParams")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableCulling.h")]
	private bool Internal_TryGetCullingParams(Camera camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6D24200", Offset = "0x6D23200", VA = "0x6D24200")]
	[UnityEngine.Bindings.NativeMethod(Name = "GetPreferredMirrorViewBlitMode", IsThreadSafe = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	public int GetPreferredMirrorBlitMode()
	{
		return default(int);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6D24290", Offset = "0x6D23290", VA = "0x6D24290")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	[UnityEngine.Bindings.NativeMethod(Name = "SetPreferredMirrorViewBlitMode", IsThreadSafe = false)]
	public void SetPreferredMirrorBlitMode(int blitMode)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6D24330", Offset = "0x6D23330", VA = "0x6D24330")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	[UnityEngine.Bindings.NativeMethod(Name = "QueryMirrorViewBlitDesc", IsThreadSafe = false)]
	public bool GetMirrorViewBlitDesc(RenderTexture mirrorRt, out XRMirrorViewBlitDesc outDesc, int mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x6D24450", Offset = "0x6D23450", VA = "0x6D24450")]
	[UnityEngine.Bindings.NativeMethod(Name = "AddGraphicsThreadMirrorViewBlit", IsThreadSafe = false)]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	public bool AddGraphicsThreadMirrorViewBlit(CommandBuffer cmd, bool allowGraphicsStateInvalidate, int mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x6D245A0", Offset = "0x6D235A0", VA = "0x6D245A0")]
	public XRDisplaySubsystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x6D230A0", Offset = "0x6D220A0", VA = "0x6D230A0")]
	private static extern float get_appliedViewportScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x6D23150", Offset = "0x6D22150", VA = "0x6D23150")]
	private static extern void set_scaleOfAllRenderTargets_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x6D23200", Offset = "0x6D22200", VA = "0x6D23200")]
	private static extern float get_globalDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x6D232B0", Offset = "0x6D222B0", VA = "0x6D232B0")]
	private static extern void set_zNear_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x6D23380", Offset = "0x6D22380", VA = "0x6D23380")]
	private static extern void set_zFar_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6D23430", Offset = "0x6D22430", VA = "0x6D23430")]
	private static extern void set_sRGB_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6D234D0", Offset = "0x6D224D0", VA = "0x6D234D0")]
	private static extern void set_textureLayout_Injected(IntPtr _unity_self, TextureLayout value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6D235D0", Offset = "0x6D225D0", VA = "0x6D235D0")]
	private static extern int ScaledTextureWidth_Injected(IntPtr _unity_self, IntPtr renderTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6D236D0", Offset = "0x6D226D0", VA = "0x6D236D0")]
	private static extern int ScaledTextureHeight_Injected(IntPtr _unity_self, IntPtr renderTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6D23770", Offset = "0x6D22770", VA = "0x6D23770")]
	private static extern void SetMSAALevel_Injected(IntPtr _unity_self, int level);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6D23810", Offset = "0x6D22810", VA = "0x6D23810")]
	private static extern void set_disableLegacyRenderer_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6D238B0", Offset = "0x6D228B0", VA = "0x6D238B0")]
	private static extern int GetRenderPassCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6D239F0", Offset = "0x6D229F0", VA = "0x6D239F0")]
	private static extern bool Internal_TryGetRenderPass_Injected(IntPtr _unity_self, int renderPassIndex, out XRRenderPass renderPass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6D23C80", Offset = "0x6D22C80", VA = "0x6D23C80")]
	private static extern bool Internal_TryEndRecordingIfLateLatched_Injected(IntPtr _unity_self, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6D23F10", Offset = "0x6D22F10", VA = "0x6D23F10")]
	private static extern bool Internal_TryBeginRecordingIfLateLatched_Injected(IntPtr _unity_self, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6D241B0", Offset = "0x6D231B0", VA = "0x6D241B0")]
	private static extern bool Internal_TryGetCullingParams_Injected(IntPtr _unity_self, IntPtr camera, int cullingPassIndex, out ScriptableCullingParameters scriptableCullingParameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6D24260", Offset = "0x6D23260", VA = "0x6D24260")]
	private static extern int GetPreferredMirrorBlitMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6D242F0", Offset = "0x6D232F0", VA = "0x6D242F0")]
	private static extern void SetPreferredMirrorBlitMode_Injected(IntPtr _unity_self, int blitMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6D24400", Offset = "0x6D23400", VA = "0x6D24400")]
	private static extern bool GetMirrorViewBlitDesc_Injected(IntPtr _unity_self, IntPtr mirrorRt, out XRMirrorViewBlitDesc outDesc, int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6D244D0", Offset = "0x6D234D0", VA = "0x6D244D0")]
	private static extern bool AddGraphicsThreadMirrorViewBlit_Injected(IntPtr _unity_self, IntPtr cmd, bool allowGraphicsStateInvalidate, int mode);
}
