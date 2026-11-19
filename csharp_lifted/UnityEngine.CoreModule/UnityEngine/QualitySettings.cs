// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.QualitySettings
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

namespace UnityEngine;

[Token(Token = "0x20000DD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/QualitySettings.h")]
[UnityEngine.Bindings.StaticAccessor("GetQualitySettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
public sealed class QualitySettings : Object
{
	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<int, int> activeQualityLevelChanged;

	[Token(Token = "0x170000DC")]
	[UnityEngine.Bindings.NativeProperty("ShadowmaskMode")]
	public static extern ShadowmaskMode shadowmaskMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x68D4B90", Offset = "0x68D3B90", VA = "0x68D4B90")]
		get;
	}

	[Token(Token = "0x170000DD")]
	[UnityEngine.Bindings.NativeProperty("LODBias")]
	public static extern float lodBias
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x68D4BC0", Offset = "0x68D3BC0", VA = "0x68D4BC0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x68D4BF0", Offset = "0x68D3BF0", VA = "0x68D4BF0")]
		set;
	}

	[Token(Token = "0x170000DE")]
	[UnityEngine.Bindings.NativeProperty("MeshLODThreshold")]
	public static extern float meshLodThreshold
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x68D4C30", Offset = "0x68D3C30", VA = "0x68D4C30")]
		get;
	}

	[Token(Token = "0x170000DF")]
	[UnityEngine.Bindings.NativeProperty("AnisotropicTextures")]
	public static extern AnisotropicFiltering anisotropicFiltering
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x68D4C60", Offset = "0x68D3C60", VA = "0x68D4C60")]
		set;
	}

	[Token(Token = "0x170000E0")]
	public static extern int globalTextureMipmapLimit
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x68D4C90", Offset = "0x68D3C90", VA = "0x68D4C90")]
		set;
	}

	[Token(Token = "0x170000E1")]
	public static extern int maximumLODLevel
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x68D4CC0", Offset = "0x68D3CC0", VA = "0x68D4CC0")]
		get;
	}

	[Token(Token = "0x170000E2")]
	public static extern bool enableLODCrossFade
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x68D4CF0", Offset = "0x68D3CF0", VA = "0x68D4CF0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x68D4D20", Offset = "0x68D3D20", VA = "0x68D4D20")]
		set;
	}

	[Token(Token = "0x170000E3")]
	public static extern int vSyncCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x68D4D50", Offset = "0x68D3D50", VA = "0x68D4D50")]
		set;
	}

	[Token(Token = "0x170000E4")]
	public static extern int antiAliasing
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x68D4D80", Offset = "0x68D3D80", VA = "0x68D4D80")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x68D4DB0", Offset = "0x68D3DB0", VA = "0x68D4DB0")]
		set;
	}

	[Token(Token = "0x170000E5")]
	public static extern bool billboardsFaceCameraPosition
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x68D4DE0", Offset = "0x68D3DE0", VA = "0x68D4DE0")]
		get;
	}

	[Token(Token = "0x170000E6")]
	[UnityEngine.Bindings.NativeName("RenderPipeline")]
	private static ScriptableObject INTERNAL_renderPipeline
	{
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x68D4E10", Offset = "0x68D3E10", VA = "0x68D4E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x68D4EA0", Offset = "0x68D3EA0", VA = "0x68D4EA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public static RenderPipelineAsset renderPipeline
	{
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x68D4F60", Offset = "0x68D3F60", VA = "0x68D4F60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x68D5030", Offset = "0x68D4030", VA = "0x68D5030")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public static extern ColorSpace activeColorSpace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x68D5100", Offset = "0x68D4100", VA = "0x68D5100")]
		[UnityEngine.Bindings.NativeName("GetColorSpace")]
		[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		get;
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x68D4B30", Offset = "0x68D3B30", VA = "0x68D4B30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveQualityLevelChanged(int previousQualityLevel, int currentQualityLevel)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x68D4E70", Offset = "0x68D3E70", VA = "0x68D4E70")]
	private static extern IntPtr get_INTERNAL_renderPipeline_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x68D4F30", Offset = "0x68D3F30", VA = "0x68D4F30")]
	private static extern void set_INTERNAL_renderPipeline_Injected(IntPtr value);
}
