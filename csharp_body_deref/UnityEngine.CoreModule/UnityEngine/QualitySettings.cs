// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.QualitySettings
// Update status: CHANGED in this game update
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

namespace UnityEngine;

[Token(Token = "0x20000DC")]
[UnityEngine.Bindings.StaticAccessor("GetQualitySettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/QualitySettings.h")]
public sealed class QualitySettings : Object
{
	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<int, int> activeQualityLevelChanged;

	[Token(Token = "0x170000D6")]
	[UnityEngine.Bindings.NativeProperty("ShadowmaskMode")]
	public static extern ShadowmaskMode shadowmaskMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x2EEF180", Offset = "0x2EED780", VA = "0x182EEF180")]
		get;
	}

	[Token(Token = "0x170000D7")]
	[UnityEngine.Bindings.NativeProperty("LODBias")]
	public static extern float lodBias
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x2EEF030", Offset = "0x2EED630", VA = "0x182EEF030")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x2EEF360", Offset = "0x2EED960", VA = "0x182EEF360")]
		set;
	}

	[Token(Token = "0x170000D8")]
	[UnityEngine.Bindings.NativeProperty("MeshLODThreshold")]
	public static extern float meshLodThreshold
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x2EEF090", Offset = "0x2EED690", VA = "0x182EEF090")]
		get;
	}

	[Token(Token = "0x170000D9")]
	[UnityEngine.Bindings.NativeProperty("AnisotropicTextures")]
	public static extern AnisotropicFiltering anisotropicFiltering
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x2EEF260", Offset = "0x2EED860", VA = "0x182EEF260")]
		set;
	}

	[Token(Token = "0x170000DA")]
	public static extern int globalTextureMipmapLimit
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x2EEF320", Offset = "0x2EED920", VA = "0x182EEF320")]
		set;
	}

	[Token(Token = "0x170000DB")]
	public static extern int maximumLODLevel
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x2EEF060", Offset = "0x2EED660", VA = "0x182EEF060")]
		get;
	}

	[Token(Token = "0x170000DC")]
	public static extern bool enableLODCrossFade
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x2EEF000", Offset = "0x2EED600", VA = "0x182EEF000")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x2EEF2E0", Offset = "0x2EED8E0", VA = "0x182EEF2E0")]
		set;
	}

	[Token(Token = "0x170000DD")]
	public static extern int vSyncCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x2EEF450", Offset = "0x2EEDA50", VA = "0x182EEF450")]
		set;
	}

	[Token(Token = "0x170000DE")]
	public static extern int antiAliasing
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x2EEEFA0", Offset = "0x2EED5A0", VA = "0x182EEEFA0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x2EEF2A0", Offset = "0x2EED8A0", VA = "0x182EEF2A0")]
		set;
	}

	[Token(Token = "0x170000DF")]
	public static extern bool billboardsFaceCameraPosition
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x2EEEFD0", Offset = "0x2EED5D0", VA = "0x182EEEFD0")]
		get;
	}

	[Token(Token = "0x170000E0")]
	[UnityEngine.Bindings.NativeName("RenderPipeline")]
	private static ScriptableObject INTERNAL_renderPipeline
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x2EEEF10", Offset = "0x2EED510", VA = "0x182EEEF10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x2EEF1F0", Offset = "0x2EED7F0", VA = "0x182EEF1F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public static RenderPipelineAsset renderPipeline
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x2EEF0C0", Offset = "0x2EED6C0", VA = "0x182EEF0C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x2EEF3A0", Offset = "0x2EED9A0", VA = "0x182EEF3A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public static extern ColorSpace activeColorSpace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x2EEEF70", Offset = "0x2EED570", VA = "0x182EEEF70")]
		[UnityEngine.Bindings.NativeName("GetColorSpace")]
		[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		get;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x2EEEE80", Offset = "0x2EED480", VA = "0x182EEEE80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveQualityLevelChanged(int previousQualityLevel, int currentQualityLevel)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x2EEEEE0", Offset = "0x2EED4E0", VA = "0x182EEEEE0")]
	private static extern IntPtr get_INTERNAL_renderPipeline_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x2EEF1B0", Offset = "0x2EED7B0", VA = "0x182EEF1B0")]
	private static extern void set_INTERNAL_renderPipeline_Injected(IntPtr value);
}
