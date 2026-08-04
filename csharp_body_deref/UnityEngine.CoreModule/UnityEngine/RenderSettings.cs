// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000C1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/QualitySettingsTypes.h")]
[UnityEngine.Bindings.StaticAccessor("GetRenderSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class RenderSettings : Object
{
	[Token(Token = "0x170000D6")]
	[UnityEngine.Bindings.NativeProperty("UseFog")]
	public static extern bool fog
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x4DC9000", Offset = "0x4DC9000", VA = "0x4DC9000")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x4DC9030", Offset = "0x4DC9030", VA = "0x4DC9030")]
		set;
	}

	[Token(Token = "0x170000D7")]
	[UnityEngine.Bindings.NativeProperty("LinearFogStart")]
	public static extern float fogStartDistance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x4DC9060", Offset = "0x4DC9060", VA = "0x4DC9060")]
		get;
	}

	[Token(Token = "0x170000D8")]
	[UnityEngine.Bindings.NativeProperty("LinearFogEnd")]
	public static extern float fogEndDistance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x4DC9090", Offset = "0x4DC9090", VA = "0x4DC9090")]
		get;
	}

	[Token(Token = "0x170000D9")]
	public static extern FogMode fogMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x4DC90C0", Offset = "0x4DC90C0", VA = "0x4DC90C0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x4DC90F0", Offset = "0x4DC90F0", VA = "0x4DC90F0")]
		set;
	}

	[Token(Token = "0x170000DA")]
	public static Color fogColor
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x4DC9120", Offset = "0x4DC9120", VA = "0x4DC9120")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x4DC9190", Offset = "0x4DC9190", VA = "0x4DC9190")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public static extern float fogDensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x4DC9210", Offset = "0x4DC9210", VA = "0x4DC9210")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x4DC9240", Offset = "0x4DC9240", VA = "0x4DC9240")]
		set;
	}

	[Token(Token = "0x170000DC")]
	public static extern AmbientMode ambientMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x4DC9280", Offset = "0x4DC9280", VA = "0x4DC9280")]
		set;
	}

	[Token(Token = "0x170000DD")]
	public static extern float ambientIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x4DC92B0", Offset = "0x4DC92B0", VA = "0x4DC92B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x4DC92E0", Offset = "0x4DC92E0", VA = "0x4DC92E0")]
		set;
	}

	[Token(Token = "0x170000DE")]
	[UnityEngine.Bindings.NativeProperty("AmbientSkyColor")]
	public static Color ambientLight
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x4DC9320", Offset = "0x4DC9320", VA = "0x4DC9320")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x4DC9390", Offset = "0x4DC9390", VA = "0x4DC9390")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	[UnityEngine.Bindings.NativeProperty("SkyboxMaterial")]
	public static Material skybox
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x4DC9410", Offset = "0x4DC9410", VA = "0x4DC9410")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public static SphericalHarmonicsL2 ambientProbe
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x4DC94F0", Offset = "0x4DC94F0", VA = "0x4DC94F0")]
		[UnityEngine.Bindings.NativeMethod("GetFinalAmbientProbe")]
		get
		{
			return default(SphericalHarmonicsL2);
		}
	}

	[Token(Token = "0x170000E1")]
	[UnityEngine.Bindings.NativeProperty("CustomReflection")]
	public static Texture customReflectionTexture
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x4DC95C0", Offset = "0x4DC95C0", VA = "0x4DC95C0")]
		[UnityEngine.Bindings.NativeThrows]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public static extern float reflectionIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x4DC96A0", Offset = "0x4DC96A0", VA = "0x4DC96A0")]
		set;
	}

	[Token(Token = "0x170000E3")]
	public static extern DefaultReflectionMode defaultReflectionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x4DC96E0", Offset = "0x4DC96E0", VA = "0x4DC96E0")]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4DC9160", Offset = "0x4DC9160", VA = "0x4DC9160")]
	private static extern void get_fogColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4DC91E0", Offset = "0x4DC91E0", VA = "0x4DC91E0")]
	private static extern void set_fogColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4DC9360", Offset = "0x4DC9360", VA = "0x4DC9360")]
	private static extern void get_ambientLight_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4DC93E0", Offset = "0x4DC93E0", VA = "0x4DC93E0")]
	private static extern void set_ambientLight_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4DC94C0", Offset = "0x4DC94C0", VA = "0x4DC94C0")]
	private static extern void set_skybox_Injected(IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4DC9590", Offset = "0x4DC9590", VA = "0x4DC9590")]
	private static extern void get_ambientProbe_Injected(out SphericalHarmonicsL2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000451")]
	[Address(RVA = "0x4DC9670", Offset = "0x4DC9670", VA = "0x4DC9670")]
	private static extern void set_customReflectionTexture_Injected(IntPtr value);
}
