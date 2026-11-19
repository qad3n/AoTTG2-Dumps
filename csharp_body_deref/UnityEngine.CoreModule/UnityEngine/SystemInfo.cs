// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SystemInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20001D8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoMemory.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLoops/MotionVectorRenderLoop.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoAudio.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoRendering.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsCapsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
public sealed class SystemInfo
{
	[Token(Token = "0x17000258")]
	public static string operatingSystem
	{
		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x6925D40", Offset = "0x6924D40", VA = "0x6925D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000259")]
	public static OperatingSystemFamily operatingSystemFamily
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x6925E10", Offset = "0x6924E10", VA = "0x6925E10")]
		get
		{
			return default(OperatingSystemFamily);
		}
	}

	[Token(Token = "0x1700025A")]
	public static int systemMemorySize
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x6925E70", Offset = "0x6924E70", VA = "0x6925E70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025B")]
	public static string deviceUniqueIdentifier
	{
		[Token(Token = "0x6000F40")]
		[Address(RVA = "0x6925ED0", Offset = "0x6924ED0", VA = "0x6925ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025C")]
	public static string deviceModel
	{
		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x6925FA0", Offset = "0x6924FA0", VA = "0x6925FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public static bool supportsGyroscope
	{
		[Token(Token = "0x6000F42")]
		[Address(RVA = "0x6926070", Offset = "0x6925070", VA = "0x6926070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025E")]
	public static DeviceType deviceType
	{
		[Token(Token = "0x6000F43")]
		[Address(RVA = "0x69260D0", Offset = "0x69250D0", VA = "0x69260D0")]
		get
		{
			return default(DeviceType);
		}
	}

	[Token(Token = "0x1700025F")]
	public static string graphicsDeviceName
	{
		[Token(Token = "0x6000F44")]
		[Address(RVA = "0x6926130", Offset = "0x6925130", VA = "0x6926130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public static string graphicsDeviceVendor
	{
		[Token(Token = "0x6000F45")]
		[Address(RVA = "0x6926200", Offset = "0x6925200", VA = "0x6926200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000261")]
	public static int graphicsDeviceVendorID
	{
		[Token(Token = "0x6000F46")]
		[Address(RVA = "0x69262D0", Offset = "0x69252D0", VA = "0x69262D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000262")]
	public static GraphicsDeviceType graphicsDeviceType
	{
		[Token(Token = "0x6000F47")]
		[Address(RVA = "0x6926330", Offset = "0x6925330", VA = "0x6926330")]
		get
		{
			return default(GraphicsDeviceType);
		}
	}

	[Token(Token = "0x17000263")]
	public static bool graphicsUVStartsAtTop
	{
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x6926390", Offset = "0x6925390", VA = "0x6926390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public static int graphicsShaderLevel
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x69263F0", Offset = "0x69253F0", VA = "0x69263F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000265")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x6926450", Offset = "0x6925450", VA = "0x6926450")]
		get
		{
			return default(FoveatedRenderingCaps);
		}
	}

	[Token(Token = "0x17000266")]
	public static bool hasHiddenSurfaceRemovalOnGPU
	{
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x69264B0", Offset = "0x69254B0", VA = "0x69264B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000267")]
	public static bool supportsShadows
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x6926510", Offset = "0x6925510", VA = "0x6926510")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000268")]
	public static CopyTextureSupport copyTextureSupport
	{
		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x6926570", Offset = "0x6925570", VA = "0x6926570")]
		get
		{
			return default(CopyTextureSupport);
		}
	}

	[Token(Token = "0x17000269")]
	public static bool supportsComputeShaders
	{
		[Token(Token = "0x6000F4E")]
		[Address(RVA = "0x69265D0", Offset = "0x69255D0", VA = "0x69265D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public static bool supportsRenderTargetArrayIndexFromVertexShader
	{
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x6926630", Offset = "0x6925630", VA = "0x6926630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public static bool supportsInstancing
	{
		[Token(Token = "0x6000F50")]
		[Address(RVA = "0x6926690", Offset = "0x6925690", VA = "0x6926690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026C")]
	public static int supportedRenderTargetCount
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x69266F0", Offset = "0x69256F0", VA = "0x69266F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026D")]
	public static int supportsMultisampledTextures
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x6926750", Offset = "0x6925750", VA = "0x6926750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026E")]
	public static bool supportsMultisampled2DArrayTextures
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x69267B0", Offset = "0x69257B0", VA = "0x69267B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026F")]
	public static bool supportsMultisampledBackBuffer
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x6926810", Offset = "0x6925810", VA = "0x6926810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000270")]
	public static bool supportsMemorylessTextures
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x6926870", Offset = "0x6925870", VA = "0x6926870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000271")]
	public static bool supportsMultisampleAutoResolve
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x69268D0", Offset = "0x69258D0", VA = "0x69268D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000272")]
	public static bool supportsMultisampledShaderResolve
	{
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x6926930", Offset = "0x6925930", VA = "0x6926930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000273")]
	public static bool usesReversedZBuffer
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x6926990", Offset = "0x6925990", VA = "0x6926990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000274")]
	public static int maxTiledPixelStorageSize
	{
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x69269F0", Offset = "0x69259F0", VA = "0x69269F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000275")]
	public static int maxTextureSize
	{
		[Token(Token = "0x6000F5D")]
		[Address(RVA = "0x6926D00", Offset = "0x6925D00", VA = "0x6926D00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000276")]
	internal static int maxRenderTextureSize
	{
		[Token(Token = "0x6000F5E")]
		[Address(RVA = "0x6926D60", Offset = "0x6925D60", VA = "0x6926D60")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000277")]
	public static bool supportsGraphicsFence
	{
		[Token(Token = "0x6000F5F")]
		[Address(RVA = "0x6926DC0", Offset = "0x6925DC0", VA = "0x6926DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000278")]
	public static bool supportsRayTracing
	{
		[Token(Token = "0x6000F60")]
		[Address(RVA = "0x6926E20", Offset = "0x6925E20", VA = "0x6926E20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000279")]
	public static long maxGraphicsBufferSize
	{
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x69245F0", Offset = "0x69235F0", VA = "0x69245F0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700027A")]
	public static HDRDisplaySupportFlags hdrDisplaySupportFlags
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x6926EB0", Offset = "0x6925EB0", VA = "0x6926EB0")]
		get
		{
			return default(HDRDisplaySupportFlags);
		}
	}

	[Token(Token = "0x1700027B")]
	public static bool supportsMultiview
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x6926F10", Offset = "0x6925F10", VA = "0x6926F10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027C")]
	public static bool supportsStoreAndResolveAction
	{
		[Token(Token = "0x6000F64")]
		[Address(RVA = "0x6926F70", Offset = "0x6925F70", VA = "0x6926F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027D")]
	public static bool supportsMultisampleResolveDepth
	{
		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x6926FD0", Offset = "0x6925FD0", VA = "0x6926FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027E")]
	public static bool supportsMultisampleResolveStencil
	{
		[Token(Token = "0x6000F66")]
		[Address(RVA = "0x6927030", Offset = "0x6926030", VA = "0x6927030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	public static bool supportsIndirectArgumentsBuffer
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x6927090", Offset = "0x6926090", VA = "0x6927090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x6926A50", Offset = "0x6925A50", VA = "0x6926A50")]
	private static bool IsValidEnumValue(Enum value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x6926AA0", Offset = "0x6925AA0", VA = "0x6926AA0")]
	public static bool SupportsRenderTextureFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x6926BD0", Offset = "0x6925BD0", VA = "0x6926BD0")]
	public static bool SupportsTextureFormat(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x6925D50", Offset = "0x6924D50", VA = "0x6925D50")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetOperatingSystem")]
	private static string GetOperatingSystem()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x6925E40", Offset = "0x6924E40", VA = "0x6925E40")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetOperatingSystemFamily")]
	private static extern OperatingSystemFamily GetOperatingSystemFamily();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x6925EA0", Offset = "0x6924EA0", VA = "0x6925EA0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetPhysicalMemoryMB")]
	private static extern int GetPhysicalMemoryMB();

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x6925EE0", Offset = "0x6924EE0", VA = "0x6925EE0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceUniqueIdentifier")]
	private static string GetDeviceUniqueIdentifier()
	{
		return null;
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x6925FB0", Offset = "0x6924FB0", VA = "0x6925FB0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceModel")]
	private static string GetDeviceModel()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x69260A0", Offset = "0x69250A0", VA = "0x69260A0")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern bool IsGyroAvailable();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x6926100", Offset = "0x6925100", VA = "0x6926100")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceType")]
	private static extern DeviceType GetDeviceType();

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x6926140", Offset = "0x6925140", VA = "0x6926140")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceName")]
	private static string GetGraphicsDeviceName()
	{
		return null;
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x6926210", Offset = "0x6925210", VA = "0x6926210")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendor")]
	private static string GetGraphicsDeviceVendor()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x6926300", Offset = "0x6925300", VA = "0x6926300")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendorID")]
	private static extern int GetGraphicsDeviceVendorID();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x6926360", Offset = "0x6925360", VA = "0x6926360")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceType")]
	private static extern GraphicsDeviceType GetGraphicsDeviceType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x69263C0", Offset = "0x69253C0", VA = "0x69263C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsUVStartsAtTop")]
	private static extern bool GetGraphicsUVStartsAtTop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x6926420", Offset = "0x6925420", VA = "0x6926420")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsShaderLevel")]
	private static extern int GetGraphicsShaderLevel();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x6926480", Offset = "0x6925480", VA = "0x6926480")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetFoveatedRenderingCaps")]
	private static extern FoveatedRenderingCaps GetFoveatedRenderingCaps();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x69264E0", Offset = "0x69254E0", VA = "0x69264E0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::HasHiddenSurfaceRemovalOnGPU")]
	private static extern bool HasHiddenSurfaceRemovalOnGPU();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x6926540", Offset = "0x6925540", VA = "0x6926540")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsShadows")]
	private static extern bool SupportsShadows();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x69265A0", Offset = "0x69255A0", VA = "0x69265A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCopyTextureSupport")]
	private static extern CopyTextureSupport GetCopyTextureSupport();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x6926600", Offset = "0x6925600", VA = "0x6926600")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsComputeShaders")]
	private static extern bool SupportsComputeShaders();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x6926660", Offset = "0x6925660", VA = "0x6926660")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsRenderTargetArrayIndexFromVertexShader")]
	private static extern bool SupportsRenderTargetArrayIndexFromVertexShader();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x69266C0", Offset = "0x69256C0", VA = "0x69266C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsInstancing")]
	private static extern bool SupportsInstancing();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x6926720", Offset = "0x6925720", VA = "0x6926720")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportedRenderTargetCount")]
	private static extern int SupportedRenderTargetCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x6926780", Offset = "0x6925780", VA = "0x6926780")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledTextures")]
	private static extern int SupportsMultisampledTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x69267E0", Offset = "0x69257E0", VA = "0x69267E0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampled2DArrayTextures")]
	private static extern bool SupportsMultisampled2DArrayTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x6926840", Offset = "0x6925840", VA = "0x6926840")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledBackBuffer")]
	private static extern bool SupportsMultisampledBackBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x69268A0", Offset = "0x69258A0", VA = "0x69268A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMemorylessTextures")]
	private static extern bool SupportsMemorylessTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x6926900", Offset = "0x6925900", VA = "0x6926900")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleAutoResolve")]
	private static extern bool SupportsMultisampleAutoResolve();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x6926960", Offset = "0x6925960", VA = "0x6926960")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledShaderResolve")]
	private static extern bool SupportsMultisampledShaderResolve();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x69269C0", Offset = "0x69259C0", VA = "0x69269C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::UsesReversedZBuffer")]
	private static extern bool UsesReversedZBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x6926BA0", Offset = "0x6925BA0", VA = "0x6926BA0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::HasRenderTexture")]
	private static extern bool HasRenderTextureNative(RenderTextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x6926CD0", Offset = "0x6925CD0", VA = "0x6926CD0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsTextureFormat")]
	private static extern bool SupportsTextureFormatNative(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x6926D30", Offset = "0x6925D30", VA = "0x6926D30")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxTextureSize")]
	private static extern int GetMaxTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x6926D90", Offset = "0x6925D90", VA = "0x6926D90")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxRenderTextureSize")]
	private static extern int GetMaxRenderTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x6926DF0", Offset = "0x6925DF0", VA = "0x6926DF0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsGPUFence")]
	private static extern bool SupportsGPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x6926E50", Offset = "0x6925E50", VA = "0x6926E50")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsRayTracing")]
	private static extern bool SupportsRayTracing();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x6926E80", Offset = "0x6925E80", VA = "0x6926E80")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::MaxGraphicsBufferSize")]
	private static extern long MaxGraphicsBufferSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x69271E0", Offset = "0x69261E0", VA = "0x69271E0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::IsFormatSupported")]
	public static extern bool IsFormatSupported(GraphicsFormat format, GraphicsFormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x6927220", Offset = "0x6926220", VA = "0x6927220")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCompatibleFormat")]
	public static extern GraphicsFormat GetCompatibleFormat(GraphicsFormat format, GraphicsFormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x6927260", Offset = "0x6926260", VA = "0x6927260")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsFormat")]
	public static extern GraphicsFormat GetGraphicsFormat(DefaultFormat format);

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x6927290", Offset = "0x6926290", VA = "0x6927290")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetRenderTextureSupportedMSAASampleCount")]
	public static int GetRenderTextureSupportedMSAASampleCount(RenderTextureDescriptor desc)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x6927300", Offset = "0x6926300", VA = "0x6927300")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetTiledRenderTargetStorageSize")]
	public static extern int GetTiledRenderTargetStorageSize(GraphicsFormat format, int sampleCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x6926EE0", Offset = "0x6925EE0", VA = "0x6926EE0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetHDRDisplaySupportFlags")]
	private static extern HDRDisplaySupportFlags GetHDRDisplaySupportFlags();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x6926F40", Offset = "0x6925F40", VA = "0x6926F40")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultiview")]
	private static extern bool SupportsMultiview();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x6926FA0", Offset = "0x6925FA0", VA = "0x6926FA0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsStoreAndResolveAction")]
	private static extern bool SupportsStoreAndResolveAction();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x6927000", Offset = "0x6926000", VA = "0x6927000")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveDepth")]
	private static extern bool SupportsMultisampleResolveDepth();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x6927060", Offset = "0x6926060", VA = "0x6927060")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveStencil")]
	private static extern bool SupportsMultisampleResolveStencil();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x69270C0", Offset = "0x69260C0", VA = "0x69270C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsIndirectArgumentsBuffer")]
	private static extern bool SupportsIndirectArgumentsBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x6926A20", Offset = "0x6925A20", VA = "0x6926A20")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::MaxTiledPixelStorageSize")]
	private static extern int MaxTiledPixelStorageSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x69270F0", Offset = "0x69260F0", VA = "0x69270F0")]
	private static extern void GetOperatingSystem_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x6927120", Offset = "0x6926120", VA = "0x6927120")]
	private static extern void GetDeviceUniqueIdentifier_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x6927150", Offset = "0x6926150", VA = "0x6927150")]
	private static extern void GetDeviceModel_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x6927180", Offset = "0x6926180", VA = "0x6927180")]
	private static extern void GetGraphicsDeviceName_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x69271B0", Offset = "0x69261B0", VA = "0x69271B0")]
	private static extern void GetGraphicsDeviceVendor_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x69272D0", Offset = "0x69262D0", VA = "0x69272D0")]
	private static extern int GetRenderTextureSupportedMSAASampleCount_Injected([In] ref RenderTextureDescriptor desc);
}
