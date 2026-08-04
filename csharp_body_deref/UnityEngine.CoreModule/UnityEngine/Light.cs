// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Light
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

namespace UnityEngine;

[Token(Token = "0x20000CD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Light.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Light.bindings.h")]
[RequireComponent(typeof(Transform))]
public sealed class Light : Behaviour
{
	[Token(Token = "0x400020C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_BakedIndex;

	[Token(Token = "0x170000F4")]
	[UnityEngine.Bindings.NativeProperty("LightType")]
	public LightType type
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x4DCE430", Offset = "0x4DCE430", VA = "0x4DCE430")]
		get
		{
			return default(LightType);
		}
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x4DCE500", Offset = "0x4DCE500", VA = "0x4DCE500")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public float spotAngle
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x4DCE5E0", Offset = "0x4DCE5E0", VA = "0x4DCE5E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x4DCE6B0", Offset = "0x4DCE6B0", VA = "0x4DCE6B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Color color
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x4DCE7B0", Offset = "0x4DCE7B0", VA = "0x4DCE7B0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x4DCE8B0", Offset = "0x4DCE8B0", VA = "0x4DCE8B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public float colorTemperature
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x4DCE9A0", Offset = "0x4DCE9A0", VA = "0x4DCE9A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F8")]
	public bool useColorTemperature
	{
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x4DCEA70", Offset = "0x4DCEA70", VA = "0x4DCEA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F9")]
	public float intensity
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x4DCEB40", Offset = "0x4DCEB40", VA = "0x4DCEB40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x4DCEC10", Offset = "0x4DCEC10", VA = "0x4DCEC10")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public float bounceIntensity
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x4DCED10", Offset = "0x4DCED10", VA = "0x4DCED10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x4DCEDE0", Offset = "0x4DCEDE0", VA = "0x4DCEDE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public float shadowBias
	{
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x4DCEEE0", Offset = "0x4DCEEE0", VA = "0x4DCEEE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public float range
	{
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x4DCEFE0", Offset = "0x4DCEFE0", VA = "0x4DCEFE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x4DCF0B0", Offset = "0x4DCF0B0", VA = "0x4DCF0B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public LightBakingOutput bakingOutput
	{
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x4DCF1B0", Offset = "0x4DCF1B0", VA = "0x4DCF1B0")]
		get
		{
			return default(LightBakingOutput);
		}
	}

	[Token(Token = "0x170000FE")]
	public LightShadows shadows
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x4DCF2C0", Offset = "0x4DCF2C0", VA = "0x4DCF2C0")]
		[UnityEngine.Bindings.NativeMethod("GetShadowType")]
		get
		{
			return default(LightShadows);
		}
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x4DCF390", Offset = "0x4DCF390", VA = "0x4DCF390")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowType", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public float shadowStrength
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x4DCF470", Offset = "0x4DCF470", VA = "0x4DCF470")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x4DCF540", Offset = "0x4DCF540", VA = "0x4DCF540")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowStrength", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public float cookieSize
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x4DCF640", Offset = "0x4DCF640", VA = "0x4DCF640")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000101")]
	public Texture cookie
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x4DCF710", Offset = "0x4DCF710", VA = "0x4DCF710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000102")]
	public LightRenderMode renderMode
	{
		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x4DCF7E0", Offset = "0x4DCF7E0", VA = "0x4DCF7E0")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetRenderMode", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x4DCE4D0", Offset = "0x4DCE4D0", VA = "0x4DCE4D0")]
	private static extern LightType get_type_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4DCE5A0", Offset = "0x4DCE5A0", VA = "0x4DCE5A0")]
	private static extern void set_type_Injected(IntPtr _unity_self, LightType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4DCE680", Offset = "0x4DCE680", VA = "0x4DCE680")]
	private static extern float get_spotAngle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4DCE760", Offset = "0x4DCE760", VA = "0x4DCE760")]
	private static extern void set_spotAngle_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4DCE870", Offset = "0x4DCE870", VA = "0x4DCE870")]
	private static extern void get_color_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4DCE960", Offset = "0x4DCE960", VA = "0x4DCE960")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4DCEA40", Offset = "0x4DCEA40", VA = "0x4DCEA40")]
	private static extern float get_colorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000505")]
	[Address(RVA = "0x4DCEB10", Offset = "0x4DCEB10", VA = "0x4DCEB10")]
	private static extern bool get_useColorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000506")]
	[Address(RVA = "0x4DCEBE0", Offset = "0x4DCEBE0", VA = "0x4DCEBE0")]
	private static extern float get_intensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000507")]
	[Address(RVA = "0x4DCECC0", Offset = "0x4DCECC0", VA = "0x4DCECC0")]
	private static extern void set_intensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4DCEDB0", Offset = "0x4DCEDB0", VA = "0x4DCEDB0")]
	private static extern float get_bounceIntensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4DCEE90", Offset = "0x4DCEE90", VA = "0x4DCEE90")]
	private static extern void set_bounceIntensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x4DCEF90", Offset = "0x4DCEF90", VA = "0x4DCEF90")]
	private static extern void set_shadowBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4DCF080", Offset = "0x4DCF080", VA = "0x4DCF080")]
	private static extern float get_range_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4DCF160", Offset = "0x4DCF160", VA = "0x4DCF160")]
	private static extern void set_range_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4DCF280", Offset = "0x4DCF280", VA = "0x4DCF280")]
	private static extern void get_bakingOutput_Injected(IntPtr _unity_self, out LightBakingOutput ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4DCF360", Offset = "0x4DCF360", VA = "0x4DCF360")]
	private static extern LightShadows get_shadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4DCF430", Offset = "0x4DCF430", VA = "0x4DCF430")]
	private static extern void set_shadows_Injected(IntPtr _unity_self, LightShadows value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4DCF510", Offset = "0x4DCF510", VA = "0x4DCF510")]
	private static extern float get_shadowStrength_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4DCF5F0", Offset = "0x4DCF5F0", VA = "0x4DCF5F0")]
	private static extern void set_shadowStrength_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4DCF6E0", Offset = "0x4DCF6E0", VA = "0x4DCF6E0")]
	private static extern float get_cookieSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4DCF7B0", Offset = "0x4DCF7B0", VA = "0x4DCF7B0")]
	private static extern Texture get_cookie_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000514")]
	[Address(RVA = "0x4DCF880", Offset = "0x4DCF880", VA = "0x4DCF880")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, LightRenderMode value);
}
