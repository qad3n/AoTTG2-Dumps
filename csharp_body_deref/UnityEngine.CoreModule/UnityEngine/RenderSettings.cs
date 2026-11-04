// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderSettings
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
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000E2")]
[UnityEngine.Bindings.StaticAccessor("GetRenderSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/QualitySettingsTypes.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderSettings.h")]
public sealed class RenderSettings : Object
{
	[Token(Token = "0x17000107")]
	[UnityEngine.Bindings.NativeProperty("UseFog")]
	public static extern bool fog
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x2EEF760", Offset = "0x2EEDD60", VA = "0x182EEF760")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x2EEFC50", Offset = "0x2EEE250", VA = "0x182EEFC50")]
		set;
	}

	[Token(Token = "0x17000108")]
	public static extern FogMode fogMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x2EEFC10", Offset = "0x2EEE210", VA = "0x182EEFC10")]
		set;
	}

	[Token(Token = "0x17000109")]
	public static Color fogColor
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x2EEFB90", Offset = "0x2EEE190", VA = "0x182EEFB90")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public static extern float fogDensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x2EEFBD0", Offset = "0x2EEE1D0", VA = "0x182EEFBD0")]
		set;
	}

	[Token(Token = "0x1700010B")]
	public static extern AmbientMode ambientMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x2EEFA20", Offset = "0x2EEE020", VA = "0x182EEFA20")]
		set;
	}

	[Token(Token = "0x1700010C")]
	public static Color ambientSkyColor
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x2EEF720", Offset = "0x2EEDD20", VA = "0x182EEF720")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700010D")]
	public static Color ambientEquatorColor
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x2EEF4D0", Offset = "0x2EEDAD0", VA = "0x182EEF4D0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700010E")]
	public static Color ambientGroundColor
	{
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x2EEF550", Offset = "0x2EEDB50", VA = "0x182EEF550")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700010F")]
	public static extern float ambientIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x2EEF590", Offset = "0x2EEDB90", VA = "0x182EEF590")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x2EEF960", Offset = "0x2EEDF60", VA = "0x182EEF960")]
		set;
	}

	[Token(Token = "0x17000110")]
	[UnityEngine.Bindings.NativeProperty("AmbientSkyColor")]
	public static Color ambientLight
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x2EEF600", Offset = "0x2EEDC00", VA = "0x182EEF600")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x2EEF9E0", Offset = "0x2EEDFE0", VA = "0x182EEF9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public static Color subtractiveShadowColor
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x2EEF890", Offset = "0x2EEDE90", VA = "0x182EEF890")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000112")]
	[UnityEngine.Bindings.NativeProperty("SkyboxMaterial")]
	public static Material skybox
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x2EEF7F0", Offset = "0x2EEDDF0", VA = "0x182EEF7F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x2EEFD10", Offset = "0x2EEE310", VA = "0x182EEFD10")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public static Light sun
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x2EEF900", Offset = "0x2EEDF00", VA = "0x182EEF900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	public static SphericalHarmonicsL2 ambientProbe
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x2EEF680", Offset = "0x2EEDC80", VA = "0x182EEF680")]
		[UnityEngine.Bindings.NativeMethod("GetFinalAmbientProbe")]
		get
		{
			return default(SphericalHarmonicsL2);
		}
	}

	[Token(Token = "0x17000115")]
	[UnityEngine.Bindings.NativeProperty("CustomReflection")]
	public static Texture customReflectionTexture
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x2EEFAA0", Offset = "0x2EEE0A0", VA = "0x182EEFAA0")]
		[UnityEngine.Bindings.NativeThrows]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public static extern float reflectionIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x2EEF790", Offset = "0x2EEDD90", VA = "0x182EEF790")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x2EEFC90", Offset = "0x2EEE290", VA = "0x182EEFC90")]
		set;
	}

	[Token(Token = "0x17000117")]
	public static extern DefaultReflectionMode defaultReflectionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x2EEFB10", Offset = "0x2EEE110", VA = "0x182EEFB10")]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x2EEFB50", Offset = "0x2EEE150", VA = "0x182EEFB50")]
	private static extern void set_fogColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x2EEF6E0", Offset = "0x2EEDCE0", VA = "0x182EEF6E0")]
	private static extern void get_ambientSkyColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x2EEF490", Offset = "0x2EEDA90", VA = "0x182EEF490")]
	private static extern void get_ambientEquatorColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x2EEF510", Offset = "0x2EEDB10", VA = "0x182EEF510")]
	private static extern void get_ambientGroundColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x2EEF5C0", Offset = "0x2EEDBC0", VA = "0x182EEF5C0")]
	private static extern void get_ambientLight_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x2EEF9A0", Offset = "0x2EEDFA0", VA = "0x182EEF9A0")]
	private static extern void set_ambientLight_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x2EEF850", Offset = "0x2EEDE50", VA = "0x182EEF850")]
	private static extern void get_subtractiveShadowColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x2EEF7C0", Offset = "0x2EEDDC0", VA = "0x182EEF7C0")]
	private static extern IntPtr get_skybox_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x2EEFCD0", Offset = "0x2EEE2D0", VA = "0x182EEFCD0")]
	private static extern void set_skybox_Injected(IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x2EEF8D0", Offset = "0x2EEDED0", VA = "0x182EEF8D0")]
	private static extern IntPtr get_sun_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x2EEF640", Offset = "0x2EEDC40", VA = "0x182EEF640")]
	private static extern void get_ambientProbe_Injected(out SphericalHarmonicsL2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x2EEFA60", Offset = "0x2EEE060", VA = "0x182EEFA60")]
	private static extern void set_customReflectionTexture_Injected(IntPtr value);
}
