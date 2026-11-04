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

[Token(Token = "0x20001D7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoMemory.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoAudio.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsCapsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLoops/MotionVectorRenderLoop.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoRendering.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
public sealed class SystemInfo
{
	[Token(Token = "0x17000253")]
	public static string operatingSystem
	{
		[Token(Token = "0x6000F2B")]
		[Address(RVA = "0x2F28C50", Offset = "0x2F27250", VA = "0x182F28C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000254")]
	public static OperatingSystemFamily operatingSystemFamily
	{
		[Token(Token = "0x6000F2C")]
		[Address(RVA = "0x2F282F0", Offset = "0x2F268F0", VA = "0x182F282F0")]
		get
		{
			return default(OperatingSystemFamily);
		}
	}

	[Token(Token = "0x17000255")]
	public static string deviceUniqueIdentifier
	{
		[Token(Token = "0x6000F2D")]
		[Address(RVA = "0x2F28C20", Offset = "0x2F27220", VA = "0x182F28C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000256")]
	public static string deviceModel
	{
		[Token(Token = "0x6000F2E")]
		[Address(RVA = "0x2F28C10", Offset = "0x2F27210", VA = "0x182F28C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000257")]
	public static DeviceType deviceType
	{
		[Token(Token = "0x6000F2F")]
		[Address(RVA = "0x2F27E30", Offset = "0x2F26430", VA = "0x182F27E30")]
		get
		{
			return default(DeviceType);
		}
	}

	[Token(Token = "0x17000258")]
	public static string graphicsDeviceName
	{
		[Token(Token = "0x6000F30")]
		[Address(RVA = "0x2F28C30", Offset = "0x2F27230", VA = "0x182F28C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000259")]
	public static string graphicsDeviceVendor
	{
		[Token(Token = "0x6000F31")]
		[Address(RVA = "0x2F28C40", Offset = "0x2F27240", VA = "0x182F28C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025A")]
	public static int graphicsDeviceVendorID
	{
		[Token(Token = "0x6000F32")]
		[Address(RVA = "0x2F280A0", Offset = "0x2F266A0", VA = "0x182F280A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025B")]
	public static GraphicsDeviceType graphicsDeviceType
	{
		[Token(Token = "0x6000F33")]
		[Address(RVA = "0x2F28070", Offset = "0x2F26670", VA = "0x182F28070")]
		get
		{
			return default(GraphicsDeviceType);
		}
	}

	[Token(Token = "0x1700025C")]
	public static bool graphicsUVStartsAtTop
	{
		[Token(Token = "0x6000F34")]
		[Address(RVA = "0x2F28230", Offset = "0x2F26830", VA = "0x182F28230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025D")]
	public static int graphicsShaderLevel
	{
		[Token(Token = "0x6000F35")]
		[Address(RVA = "0x2F28200", Offset = "0x2F26800", VA = "0x182F28200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025E")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000F36")]
		[Address(RVA = "0x2F27F50", Offset = "0x2F26550", VA = "0x182F27F50")]
		get
		{
			return default(FoveatedRenderingCaps);
		}
	}

	[Token(Token = "0x1700025F")]
	public static bool hasHiddenSurfaceRemovalOnGPU
	{
		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x2F284D0", Offset = "0x2F26AD0", VA = "0x182F284D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000260")]
	public static bool supportsShadows
	{
		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x2F28A40", Offset = "0x2F27040", VA = "0x182F28A40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000261")]
	public static CopyTextureSupport copyTextureSupport
	{
		[Token(Token = "0x6000F39")]
		[Address(RVA = "0x2F27D10", Offset = "0x2F26310", VA = "0x182F27D10")]
		get
		{
			return default(CopyTextureSupport);
		}
	}

	[Token(Token = "0x17000262")]
	public static bool supportsComputeShaders
	{
		[Token(Token = "0x6000F3A")]
		[Address(RVA = "0x2F28670", Offset = "0x2F26C70", VA = "0x182F28670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000263")]
	public static bool supportsRenderTargetArrayIndexFromVertexShader
	{
		[Token(Token = "0x6000F3B")]
		[Address(RVA = "0x2F28910", Offset = "0x2F26F10", VA = "0x182F28910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public static bool supportsInstancing
	{
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x2F28700", Offset = "0x2F26D00", VA = "0x182F28700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000265")]
	public static int supportedRenderTargetCount
	{
		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x2F28640", Offset = "0x2F26C40", VA = "0x182F28640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000266")]
	public static int supportsMultisampledTextures
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x2F28880", Offset = "0x2F26E80", VA = "0x182F28880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000267")]
	public static bool supportsMultisampled2DArrayTextures
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x2F287F0", Offset = "0x2F26DF0", VA = "0x182F287F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000268")]
	public static bool supportsMultisampledBackBuffer
	{
		[Token(Token = "0x6000F40")]
		[Address(RVA = "0x2F28820", Offset = "0x2F26E20", VA = "0x182F28820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000269")]
	public static bool supportsMemorylessTextures
	{
		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x2F28730", Offset = "0x2F26D30", VA = "0x182F28730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public static bool supportsMultisampleAutoResolve
	{
		[Token(Token = "0x6000F42")]
		[Address(RVA = "0x2F28760", Offset = "0x2F26D60", VA = "0x182F28760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public static bool supportsMultisampledShaderResolve
	{
		[Token(Token = "0x6000F43")]
		[Address(RVA = "0x2F28850", Offset = "0x2F26E50", VA = "0x182F28850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026C")]
	public static bool usesReversedZBuffer
	{
		[Token(Token = "0x6000F44")]
		[Address(RVA = "0x2F28BE0", Offset = "0x2F271E0", VA = "0x182F28BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026D")]
	public static int maxTiledPixelStorageSize
	{
		[Token(Token = "0x6000F45")]
		[Address(RVA = "0x2F28610", Offset = "0x2F26C10", VA = "0x182F28610")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026E")]
	public static int maxTextureSize
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x2F282C0", Offset = "0x2F268C0", VA = "0x182F282C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026F")]
	internal static int maxRenderTextureSize
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x2F28290", Offset = "0x2F26890", VA = "0x182F28290")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	public static bool supportsGraphicsFence
	{
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x2F286A0", Offset = "0x2F26CA0", VA = "0x182F286A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000271")]
	public static bool supportsRayTracing
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x2F288E0", Offset = "0x2F26EE0", VA = "0x182F288E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000272")]
	public static long maxGraphicsBufferSize
	{
		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x2F285E0", Offset = "0x2F26BE0", VA = "0x182F285E0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000273")]
	public static HDRDisplaySupportFlags hdrDisplaySupportFlags
	{
		[Token(Token = "0x6000F4E")]
		[Address(RVA = "0x2F28260", Offset = "0x2F26860", VA = "0x182F28260")]
		get
		{
			return default(HDRDisplaySupportFlags);
		}
	}

	[Token(Token = "0x17000274")]
	public static bool supportsMultiview
	{
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x2F288B0", Offset = "0x2F26EB0", VA = "0x182F288B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000275")]
	public static bool supportsStoreAndResolveAction
	{
		[Token(Token = "0x6000F50")]
		[Address(RVA = "0x2F28A70", Offset = "0x2F27070", VA = "0x182F28A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000276")]
	public static bool supportsMultisampleResolveDepth
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x2F28790", Offset = "0x2F26D90", VA = "0x182F28790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000277")]
	public static bool supportsMultisampleResolveStencil
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x2F287C0", Offset = "0x2F26DC0", VA = "0x182F287C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000278")]
	public static bool supportsIndirectArgumentsBuffer
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x2F286D0", Offset = "0x2F26CD0", VA = "0x182F286D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x2F28580", Offset = "0x2F26B80", VA = "0x182F28580")]
	private static bool IsValidEnumValue(Enum value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x2F28940", Offset = "0x2F26F40", VA = "0x182F28940")]
	public static bool SupportsRenderTextureFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x2F28AE0", Offset = "0x2F270E0", VA = "0x182F28AE0")]
	public static bool SupportsTextureFormat(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x2F28360", Offset = "0x2F26960", VA = "0x182F28360")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetOperatingSystem")]
	private static string GetOperatingSystem()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x2F282F0", Offset = "0x2F268F0", VA = "0x182F282F0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetOperatingSystemFamily")]
	private static extern OperatingSystemFamily GetOperatingSystemFamily();

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x2F27EA0", Offset = "0x2F264A0", VA = "0x182F27EA0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceUniqueIdentifier")]
	private static string GetDeviceUniqueIdentifier()
	{
		return null;
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x2F27D80", Offset = "0x2F26380", VA = "0x182F27D80")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceModel")]
	private static string GetDeviceModel()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x2F27E30", Offset = "0x2F26430", VA = "0x182F27E30")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceType")]
	private static extern DeviceType GetDeviceType();

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x2F27FC0", Offset = "0x2F265C0", VA = "0x182F27FC0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceName")]
	private static string GetGraphicsDeviceName()
	{
		return null;
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x2F28110", Offset = "0x2F26710", VA = "0x182F28110")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendor")]
	private static string GetGraphicsDeviceVendor()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x2F280A0", Offset = "0x2F266A0", VA = "0x182F280A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendorID")]
	private static extern int GetGraphicsDeviceVendorID();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x2F28070", Offset = "0x2F26670", VA = "0x182F28070")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceType")]
	private static extern GraphicsDeviceType GetGraphicsDeviceType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x2F28230", Offset = "0x2F26830", VA = "0x182F28230")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsUVStartsAtTop")]
	private static extern bool GetGraphicsUVStartsAtTop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x2F28200", Offset = "0x2F26800", VA = "0x182F28200")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsShaderLevel")]
	private static extern int GetGraphicsShaderLevel();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x2F27F50", Offset = "0x2F26550", VA = "0x182F27F50")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetFoveatedRenderingCaps")]
	private static extern FoveatedRenderingCaps GetFoveatedRenderingCaps();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x2F284D0", Offset = "0x2F26AD0", VA = "0x182F284D0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::HasHiddenSurfaceRemovalOnGPU")]
	private static extern bool HasHiddenSurfaceRemovalOnGPU();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x2F28A40", Offset = "0x2F27040", VA = "0x182F28A40")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsShadows")]
	private static extern bool SupportsShadows();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x2F27D10", Offset = "0x2F26310", VA = "0x182F27D10")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCopyTextureSupport")]
	private static extern CopyTextureSupport GetCopyTextureSupport();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x2F28670", Offset = "0x2F26C70", VA = "0x182F28670")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsComputeShaders")]
	private static extern bool SupportsComputeShaders();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x2F28910", Offset = "0x2F26F10", VA = "0x182F28910")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsRenderTargetArrayIndexFromVertexShader")]
	private static extern bool SupportsRenderTargetArrayIndexFromVertexShader();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x2F28700", Offset = "0x2F26D00", VA = "0x182F28700")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsInstancing")]
	private static extern bool SupportsInstancing();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x2F28640", Offset = "0x2F26C40", VA = "0x182F28640")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportedRenderTargetCount")]
	private static extern int SupportedRenderTargetCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x2F28880", Offset = "0x2F26E80", VA = "0x182F28880")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledTextures")]
	private static extern int SupportsMultisampledTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x2F287F0", Offset = "0x2F26DF0", VA = "0x182F287F0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampled2DArrayTextures")]
	private static extern bool SupportsMultisampled2DArrayTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x2F28820", Offset = "0x2F26E20", VA = "0x182F28820")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledBackBuffer")]
	private static extern bool SupportsMultisampledBackBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x2F28730", Offset = "0x2F26D30", VA = "0x182F28730")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMemorylessTextures")]
	private static extern bool SupportsMemorylessTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x2F28760", Offset = "0x2F26D60", VA = "0x182F28760")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleAutoResolve")]
	private static extern bool SupportsMultisampleAutoResolve();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x2F28850", Offset = "0x2F26E50", VA = "0x182F28850")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledShaderResolve")]
	private static extern bool SupportsMultisampledShaderResolve();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x2F28BE0", Offset = "0x2F271E0", VA = "0x182F28BE0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::UsesReversedZBuffer")]
	private static extern bool UsesReversedZBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x2F28500", Offset = "0x2F26B00", VA = "0x182F28500")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::HasRenderTexture")]
	private static extern bool HasRenderTextureNative(RenderTextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x2F28AA0", Offset = "0x2F270A0", VA = "0x182F28AA0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsTextureFormat")]
	private static extern bool SupportsTextureFormatNative(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x2F282C0", Offset = "0x2F268C0", VA = "0x182F282C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxTextureSize")]
	private static extern int GetMaxTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x2F28290", Offset = "0x2F26890", VA = "0x182F28290")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxRenderTextureSize")]
	private static extern int GetMaxRenderTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x2F286A0", Offset = "0x2F26CA0", VA = "0x182F286A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsGPUFence")]
	private static extern bool SupportsGPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x2F288E0", Offset = "0x2F26EE0", VA = "0x182F288E0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsRayTracing")]
	private static extern bool SupportsRayTracing();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x2F285E0", Offset = "0x2F26BE0", VA = "0x182F285E0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::MaxGraphicsBufferSize")]
	private static extern long MaxGraphicsBufferSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x2F28540", Offset = "0x2F26B40", VA = "0x182F28540")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::IsFormatSupported")]
	public static extern bool IsFormatSupported(GraphicsFormat format, GraphicsFormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x2F27CD0", Offset = "0x2F262D0", VA = "0x182F27CD0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCompatibleFormat")]
	public static extern GraphicsFormat GetCompatibleFormat(GraphicsFormat format, GraphicsFormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x2F281C0", Offset = "0x2F267C0", VA = "0x182F281C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsFormat")]
	public static extern GraphicsFormat GetGraphicsFormat(DefaultFormat format);

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x2F28450", Offset = "0x2F26A50", VA = "0x182F28450")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetRenderTextureSupportedMSAASampleCount")]
	public static int GetRenderTextureSupportedMSAASampleCount(RenderTextureDescriptor desc)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x2F28490", Offset = "0x2F26A90", VA = "0x182F28490")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetTiledRenderTargetStorageSize")]
	public static extern int GetTiledRenderTargetStorageSize(GraphicsFormat format, int sampleCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x2F28260", Offset = "0x2F26860", VA = "0x182F28260")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetHDRDisplaySupportFlags")]
	private static extern HDRDisplaySupportFlags GetHDRDisplaySupportFlags();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x2F288B0", Offset = "0x2F26EB0", VA = "0x182F288B0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultiview")]
	private static extern bool SupportsMultiview();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x2F28A70", Offset = "0x2F27070", VA = "0x182F28A70")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsStoreAndResolveAction")]
	private static extern bool SupportsStoreAndResolveAction();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x2F28790", Offset = "0x2F26D90", VA = "0x182F28790")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveDepth")]
	private static extern bool SupportsMultisampleResolveDepth();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x2F287C0", Offset = "0x2F26DC0", VA = "0x182F287C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveStencil")]
	private static extern bool SupportsMultisampleResolveStencil();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x2F286D0", Offset = "0x2F26CD0", VA = "0x182F286D0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsIndirectArgumentsBuffer")]
	private static extern bool SupportsIndirectArgumentsBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x2F28610", Offset = "0x2F26C10", VA = "0x182F28610")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::MaxTiledPixelStorageSize")]
	private static extern int MaxTiledPixelStorageSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x2F28320", Offset = "0x2F26920", VA = "0x182F28320")]
	private static extern void GetOperatingSystem_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x2F27E60", Offset = "0x2F26460", VA = "0x182F27E60")]
	private static extern void GetDeviceUniqueIdentifier_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x2F27D40", Offset = "0x2F26340", VA = "0x182F27D40")]
	private static extern void GetDeviceModel_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x2F27F80", Offset = "0x2F26580", VA = "0x182F27F80")]
	private static extern void GetGraphicsDeviceName_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x2F280D0", Offset = "0x2F266D0", VA = "0x182F280D0")]
	private static extern void GetGraphicsDeviceVendor_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x2F28410", Offset = "0x2F26A10", VA = "0x182F28410")]
	private static extern int GetRenderTextureSupportedMSAASampleCount_Injected([In] ref RenderTextureDescriptor desc);
}
