using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000CB")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Light.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Light.bindings.h")]
[RequireComponent(typeof(Transform))]
public sealed class Light : Behaviour
{
	[Token(Token = "0x400020C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_BakedIndex;

	[Token(Token = "0x170000F3")]
	[UnityEngine.Bindings.NativeProperty("LightType")]
	public LightType type
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x4AA6B00", Offset = "0x4AA6B00", VA = "0x4AA6B00")]
		get
		{
			return default(LightType);
		}
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x4AA6BD0", Offset = "0x4AA6BD0", VA = "0x4AA6BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public float spotAngle
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x4AA6CB0", Offset = "0x4AA6CB0", VA = "0x4AA6CB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x4AA6D80", Offset = "0x4AA6D80", VA = "0x4AA6D80")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public Color color
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x4AA6E80", Offset = "0x4AA6E80", VA = "0x4AA6E80")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x4AA6F80", Offset = "0x4AA6F80", VA = "0x4AA6F80")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public float colorTemperature
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x4AA7070", Offset = "0x4AA7070", VA = "0x4AA7070")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F7")]
	public bool useColorTemperature
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x4AA7140", Offset = "0x4AA7140", VA = "0x4AA7140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F8")]
	public float intensity
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x4AA7210", Offset = "0x4AA7210", VA = "0x4AA7210")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x4AA72E0", Offset = "0x4AA72E0", VA = "0x4AA72E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public float bounceIntensity
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x4AA73E0", Offset = "0x4AA73E0", VA = "0x4AA73E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x4AA74B0", Offset = "0x4AA74B0", VA = "0x4AA74B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public float shadowBias
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x4AA75B0", Offset = "0x4AA75B0", VA = "0x4AA75B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public float range
	{
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x4AA76B0", Offset = "0x4AA76B0", VA = "0x4AA76B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x4AA7780", Offset = "0x4AA7780", VA = "0x4AA7780")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public LightBakingOutput bakingOutput
	{
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x4AA7880", Offset = "0x4AA7880", VA = "0x4AA7880")]
		get
		{
			return default(LightBakingOutput);
		}
	}

	[Token(Token = "0x170000FD")]
	public LightShadows shadows
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x4AA7990", Offset = "0x4AA7990", VA = "0x4AA7990")]
		[UnityEngine.Bindings.NativeMethod("GetShadowType")]
		get
		{
			return default(LightShadows);
		}
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x4AA7A60", Offset = "0x4AA7A60", VA = "0x4AA7A60")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowType", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	public float shadowStrength
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x4AA7B40", Offset = "0x4AA7B40", VA = "0x4AA7B40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x4AA7C10", Offset = "0x4AA7C10", VA = "0x4AA7C10")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowStrength", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public float cookieSize
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x4AA7D10", Offset = "0x4AA7D10", VA = "0x4AA7D10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000100")]
	public Texture cookie
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x4AA7DE0", Offset = "0x4AA7DE0", VA = "0x4AA7DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000101")]
	public LightRenderMode renderMode
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x4AA7EB0", Offset = "0x4AA7EB0", VA = "0x4AA7EB0")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetRenderMode", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4AA6BA0", Offset = "0x4AA6BA0", VA = "0x4AA6BA0")]
	private static extern LightType get_type_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4AA6C70", Offset = "0x4AA6C70", VA = "0x4AA6C70")]
	private static extern void set_type_Injected(IntPtr _unity_self, LightType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x4AA6D50", Offset = "0x4AA6D50", VA = "0x4AA6D50")]
	private static extern float get_spotAngle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4AA6E30", Offset = "0x4AA6E30", VA = "0x4AA6E30")]
	private static extern void set_spotAngle_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4AA6F40", Offset = "0x4AA6F40", VA = "0x4AA6F40")]
	private static extern void get_color_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4AA7030", Offset = "0x4AA7030", VA = "0x4AA7030")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4AA7110", Offset = "0x4AA7110", VA = "0x4AA7110")]
	private static extern float get_colorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4AA71E0", Offset = "0x4AA71E0", VA = "0x4AA71E0")]
	private static extern bool get_useColorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4AA72B0", Offset = "0x4AA72B0", VA = "0x4AA72B0")]
	private static extern float get_intensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000505")]
	[Address(RVA = "0x4AA7390", Offset = "0x4AA7390", VA = "0x4AA7390")]
	private static extern void set_intensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000506")]
	[Address(RVA = "0x4AA7480", Offset = "0x4AA7480", VA = "0x4AA7480")]
	private static extern float get_bounceIntensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000507")]
	[Address(RVA = "0x4AA7560", Offset = "0x4AA7560", VA = "0x4AA7560")]
	private static extern void set_bounceIntensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4AA7660", Offset = "0x4AA7660", VA = "0x4AA7660")]
	private static extern void set_shadowBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4AA7750", Offset = "0x4AA7750", VA = "0x4AA7750")]
	private static extern float get_range_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x4AA7830", Offset = "0x4AA7830", VA = "0x4AA7830")]
	private static extern void set_range_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4AA7950", Offset = "0x4AA7950", VA = "0x4AA7950")]
	private static extern void get_bakingOutput_Injected(IntPtr _unity_self, out LightBakingOutput ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4AA7A30", Offset = "0x4AA7A30", VA = "0x4AA7A30")]
	private static extern LightShadows get_shadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4AA7B00", Offset = "0x4AA7B00", VA = "0x4AA7B00")]
	private static extern void set_shadows_Injected(IntPtr _unity_self, LightShadows value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4AA7BE0", Offset = "0x4AA7BE0", VA = "0x4AA7BE0")]
	private static extern float get_shadowStrength_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4AA7CC0", Offset = "0x4AA7CC0", VA = "0x4AA7CC0")]
	private static extern void set_shadowStrength_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4AA7DB0", Offset = "0x4AA7DB0", VA = "0x4AA7DB0")]
	private static extern float get_cookieSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4AA7E80", Offset = "0x4AA7E80", VA = "0x4AA7E80")]
	private static extern Texture get_cookie_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4AA7F50", Offset = "0x4AA7F50", VA = "0x4AA7F50")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, LightRenderMode value);
}
