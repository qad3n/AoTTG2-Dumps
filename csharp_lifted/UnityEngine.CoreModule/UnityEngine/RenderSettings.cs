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

[Token(Token = "0x20000E3")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/QualitySettingsTypes.h")]
[UnityEngine.Bindings.StaticAccessor("GetRenderSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class RenderSettings : Object
{
	[Token(Token = "0x1700010D")]
	[UnityEngine.Bindings.NativeProperty("UseFog")]
	public static extern bool fog
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x68DAC70", Offset = "0x68D9C70", VA = "0x68DAC70")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x68DACA0", Offset = "0x68D9CA0", VA = "0x68DACA0")]
		set;
	}

	[Token(Token = "0x1700010E")]
	public static extern FogMode fogMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x68DACD0", Offset = "0x68D9CD0", VA = "0x68DACD0")]
		set;
	}

	[Token(Token = "0x1700010F")]
	public static Color fogColor
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x68DAD00", Offset = "0x68D9D00", VA = "0x68DAD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public static extern float fogDensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x68DAD80", Offset = "0x68D9D80", VA = "0x68DAD80")]
		set;
	}

	[Token(Token = "0x17000111")]
	public static extern AmbientMode ambientMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x68DADC0", Offset = "0x68D9DC0", VA = "0x68DADC0")]
		set;
	}

	[Token(Token = "0x17000112")]
	public static Color ambientSkyColor
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x68DADF0", Offset = "0x68D9DF0", VA = "0x68DADF0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000113")]
	public static Color ambientEquatorColor
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x68DAE60", Offset = "0x68D9E60", VA = "0x68DAE60")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000114")]
	public static Color ambientGroundColor
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x68DAED0", Offset = "0x68D9ED0", VA = "0x68DAED0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000115")]
	public static extern float ambientIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x68DAF40", Offset = "0x68D9F40", VA = "0x68DAF40")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x68DAF70", Offset = "0x68D9F70", VA = "0x68DAF70")]
		set;
	}

	[Token(Token = "0x17000116")]
	[UnityEngine.Bindings.NativeProperty("AmbientSkyColor")]
	public static Color ambientLight
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x68DAFB0", Offset = "0x68D9FB0", VA = "0x68DAFB0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x68DB020", Offset = "0x68DA020", VA = "0x68DB020")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public static Color subtractiveShadowColor
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x68DB0A0", Offset = "0x68DA0A0", VA = "0x68DB0A0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000118")]
	[UnityEngine.Bindings.NativeProperty("SkyboxMaterial")]
	public static Material skybox
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x68DB110", Offset = "0x68DA110", VA = "0x68DB110")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x68DB1A0", Offset = "0x68DA1A0", VA = "0x68DB1A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public static Light sun
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x68DB260", Offset = "0x68DA260", VA = "0x68DB260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public static SphericalHarmonicsL2 ambientProbe
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x68DB2F0", Offset = "0x68DA2F0", VA = "0x68DB2F0")]
		[UnityEngine.Bindings.NativeMethod("GetFinalAmbientProbe")]
		get
		{
			return default(SphericalHarmonicsL2);
		}
	}

	[Token(Token = "0x1700011B")]
	[UnityEngine.Bindings.NativeProperty("CustomReflection")]
	public static Texture customReflectionTexture
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x68DB3C0", Offset = "0x68DA3C0", VA = "0x68DB3C0")]
		[UnityEngine.Bindings.NativeThrows]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public static extern float reflectionIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x68DB480", Offset = "0x68DA480", VA = "0x68DB480")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x68DB4B0", Offset = "0x68DA4B0", VA = "0x68DB4B0")]
		set;
	}

	[Token(Token = "0x1700011D")]
	public static extern DefaultReflectionMode defaultReflectionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x68DB4F0", Offset = "0x68DA4F0", VA = "0x68DB4F0")]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x68DAD50", Offset = "0x68D9D50", VA = "0x68DAD50")]
	private static extern void set_fogColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x68DAE30", Offset = "0x68D9E30", VA = "0x68DAE30")]
	private static extern void get_ambientSkyColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x68DAEA0", Offset = "0x68D9EA0", VA = "0x68DAEA0")]
	private static extern void get_ambientEquatorColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x68DAF10", Offset = "0x68D9F10", VA = "0x68DAF10")]
	private static extern void get_ambientGroundColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x68DAFF0", Offset = "0x68D9FF0", VA = "0x68DAFF0")]
	private static extern void get_ambientLight_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x68DB070", Offset = "0x68DA070", VA = "0x68DB070")]
	private static extern void set_ambientLight_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x68DB0E0", Offset = "0x68DA0E0", VA = "0x68DB0E0")]
	private static extern void get_subtractiveShadowColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x68DB170", Offset = "0x68DA170", VA = "0x68DB170")]
	private static extern IntPtr get_skybox_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x68DB230", Offset = "0x68DA230", VA = "0x68DB230")]
	private static extern void set_skybox_Injected(IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x68DB2C0", Offset = "0x68DA2C0", VA = "0x68DB2C0")]
	private static extern IntPtr get_sun_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x68DB390", Offset = "0x68DA390", VA = "0x68DB390")]
	private static extern void get_ambientProbe_Injected(out SphericalHarmonicsL2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x68DB450", Offset = "0x68DA450", VA = "0x68DB450")]
	private static extern void set_customReflectionTexture_Injected(IntPtr value);
}
