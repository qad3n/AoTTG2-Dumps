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
	[Token(Token = "0x170000D5")]
	[UnityEngine.Bindings.NativeProperty("UseFog")]
	public static extern bool fog
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x4AA16D0", Offset = "0x4AA16D0", VA = "0x4AA16D0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x4AA1700", Offset = "0x4AA1700", VA = "0x4AA1700")]
		set;
	}

	[Token(Token = "0x170000D6")]
	[UnityEngine.Bindings.NativeProperty("LinearFogStart")]
	public static extern float fogStartDistance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x4AA1730", Offset = "0x4AA1730", VA = "0x4AA1730")]
		get;
	}

	[Token(Token = "0x170000D7")]
	[UnityEngine.Bindings.NativeProperty("LinearFogEnd")]
	public static extern float fogEndDistance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x4AA1760", Offset = "0x4AA1760", VA = "0x4AA1760")]
		get;
	}

	[Token(Token = "0x170000D8")]
	public static extern FogMode fogMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x4AA1790", Offset = "0x4AA1790", VA = "0x4AA1790")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x4AA17C0", Offset = "0x4AA17C0", VA = "0x4AA17C0")]
		set;
	}

	[Token(Token = "0x170000D9")]
	public static Color fogColor
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x4AA17F0", Offset = "0x4AA17F0", VA = "0x4AA17F0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x4AA1860", Offset = "0x4AA1860", VA = "0x4AA1860")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public static extern float fogDensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x4AA18E0", Offset = "0x4AA18E0", VA = "0x4AA18E0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x4AA1910", Offset = "0x4AA1910", VA = "0x4AA1910")]
		set;
	}

	[Token(Token = "0x170000DB")]
	public static extern AmbientMode ambientMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x4AA1950", Offset = "0x4AA1950", VA = "0x4AA1950")]
		set;
	}

	[Token(Token = "0x170000DC")]
	public static extern float ambientIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x4AA1980", Offset = "0x4AA1980", VA = "0x4AA1980")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x4AA19B0", Offset = "0x4AA19B0", VA = "0x4AA19B0")]
		set;
	}

	[Token(Token = "0x170000DD")]
	[UnityEngine.Bindings.NativeProperty("AmbientSkyColor")]
	public static Color ambientLight
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x4AA19F0", Offset = "0x4AA19F0", VA = "0x4AA19F0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x4AA1A60", Offset = "0x4AA1A60", VA = "0x4AA1A60")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	[UnityEngine.Bindings.NativeProperty("SkyboxMaterial")]
	public static Material skybox
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x4AA1AE0", Offset = "0x4AA1AE0", VA = "0x4AA1AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public static SphericalHarmonicsL2 ambientProbe
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x4AA1BC0", Offset = "0x4AA1BC0", VA = "0x4AA1BC0")]
		[UnityEngine.Bindings.NativeMethod("GetFinalAmbientProbe")]
		get
		{
			return default(SphericalHarmonicsL2);
		}
	}

	[Token(Token = "0x170000E0")]
	[UnityEngine.Bindings.NativeProperty("CustomReflection")]
	public static Texture customReflectionTexture
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x4AA1C90", Offset = "0x4AA1C90", VA = "0x4AA1C90")]
		[UnityEngine.Bindings.NativeThrows]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public static extern float reflectionIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x4AA1D70", Offset = "0x4AA1D70", VA = "0x4AA1D70")]
		set;
	}

	[Token(Token = "0x170000E2")]
	public static extern DefaultReflectionMode defaultReflectionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x4AA1DB0", Offset = "0x4AA1DB0", VA = "0x4AA1DB0")]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4AA1830", Offset = "0x4AA1830", VA = "0x4AA1830")]
	private static extern void get_fogColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4AA18B0", Offset = "0x4AA18B0", VA = "0x4AA18B0")]
	private static extern void set_fogColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4AA1A30", Offset = "0x4AA1A30", VA = "0x4AA1A30")]
	private static extern void get_ambientLight_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4AA1AB0", Offset = "0x4AA1AB0", VA = "0x4AA1AB0")]
	private static extern void set_ambientLight_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4AA1B90", Offset = "0x4AA1B90", VA = "0x4AA1B90")]
	private static extern void set_skybox_Injected(IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4AA1C60", Offset = "0x4AA1C60", VA = "0x4AA1C60")]
	private static extern void get_ambientProbe_Injected(out SphericalHarmonicsL2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4AA1D40", Offset = "0x4AA1D40", VA = "0x4AA1D40")]
	private static extern void set_customReflectionTexture_Injected(IntPtr value);
}
