// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Light
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000F1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Light.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Light.bindings.h")]
[RequireComponent(typeof(Transform))]
public sealed class Light : Behaviour
{
	[Token(Token = "0x4000271")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private LightShape _003Cshape_003Ek__BackingField;

	[Token(Token = "0x4000272")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_BakedIndex;

	[Token(Token = "0x17000134")]
	[UnityEngine.Bindings.NativeProperty("LightType")]
	public LightType type
	{
		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x68E28C0", Offset = "0x68E18C0", VA = "0x68E28C0")]
		get
		{
			return default(LightType);
		}
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x68E2970", Offset = "0x68E1970", VA = "0x68E2970")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public float spotAngle
	{
		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x68E2A30", Offset = "0x68E1A30", VA = "0x68E2A30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x68E2AE0", Offset = "0x68E1AE0", VA = "0x68E2AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public float innerSpotAngle
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x68E2BC0", Offset = "0x68E1BC0", VA = "0x68E2BC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000137")]
	public Color color
	{
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x68E2C70", Offset = "0x68E1C70", VA = "0x68E2C70")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x68E2D50", Offset = "0x68E1D50", VA = "0x68E2D50")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public float colorTemperature
	{
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x68E2E20", Offset = "0x68E1E20", VA = "0x68E2E20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000139")]
	public bool useColorTemperature
	{
		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x68E2ED0", Offset = "0x68E1ED0", VA = "0x68E2ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public float intensity
	{
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x68E2F80", Offset = "0x68E1F80", VA = "0x68E2F80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x68E3030", Offset = "0x68E2030", VA = "0x68E3030")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public float bounceIntensity
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x68E3110", Offset = "0x68E2110", VA = "0x68E3110")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006EF")]
		[Address(RVA = "0x68E31C0", Offset = "0x68E21C0", VA = "0x68E31C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public float luxAtDistance
	{
		[Token(Token = "0x60006F0")]
		[Address(RVA = "0x68E32A0", Offset = "0x68E22A0", VA = "0x68E32A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013D")]
	public bool enableSpotReflector
	{
		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x68E3350", Offset = "0x68E2350", VA = "0x68E3350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public float shadowBias
	{
		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x68E3400", Offset = "0x68E2400", VA = "0x68E3400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x68E34B0", Offset = "0x68E24B0", VA = "0x68E34B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public float shadowNormalBias
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x68E3590", Offset = "0x68E2590", VA = "0x68E3590")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000140")]
	public float shadowNearPlane
	{
		[Token(Token = "0x60006F5")]
		[Address(RVA = "0x68E3640", Offset = "0x68E2640", VA = "0x68E3640")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000141")]
	public float range
	{
		[Token(Token = "0x60006F6")]
		[Address(RVA = "0x68E36F0", Offset = "0x68E26F0", VA = "0x68E36F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x68E37A0", Offset = "0x68E27A0", VA = "0x68E37A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public float dilatedRange
	{
		[Token(Token = "0x60006F8")]
		[Address(RVA = "0x68E3880", Offset = "0x68E2880", VA = "0x68E3880")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000143")]
	public LightBakingOutput bakingOutput
	{
		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x68E3930", Offset = "0x68E2930", VA = "0x68E3930")]
		get
		{
			return default(LightBakingOutput);
		}
	}

	[Token(Token = "0x17000144")]
	public int renderingLayerMask
	{
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x68E3A20", Offset = "0x68E2A20", VA = "0x68E3A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public LightShadows shadows
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x68E3AE0", Offset = "0x68E2AE0", VA = "0x68E3AE0")]
		[UnityEngine.Bindings.NativeMethod("GetShadowType")]
		get
		{
			return default(LightShadows);
		}
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x68E3B90", Offset = "0x68E2B90", VA = "0x68E3B90")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowType", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public float shadowStrength
	{
		[Token(Token = "0x60006FD")]
		[Address(RVA = "0x68E3C50", Offset = "0x68E2C50", VA = "0x68E3C50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006FE")]
		[Address(RVA = "0x68E3D00", Offset = "0x68E2D00", VA = "0x68E3D00")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowStrength", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public LightShadowResolution shadowResolution
	{
		[Token(Token = "0x60006FF")]
		[Address(RVA = "0x68E3DE0", Offset = "0x68E2DE0", VA = "0x68E3DE0")]
		get
		{
			return default(LightShadowResolution);
		}
	}

	[Token(Token = "0x17000148")]
	private LightShadowResolution ShadowResolution
	{
		[Token(Token = "0x6000700")]
		[Address(RVA = "0x68E3E60", Offset = "0x68E2E60", VA = "0x68E3E60")]
		get
		{
			return default(LightShadowResolution);
		}
	}

	[Token(Token = "0x17000149")]
	public Vector2 cookieSize2D
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x68E3F10", Offset = "0x68E2F10", VA = "0x68E3F10")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700014A")]
	public Texture cookie
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x68E3FE0", Offset = "0x68E2FE0", VA = "0x68E3FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	public LightRenderMode renderMode
	{
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x68E40B0", Offset = "0x68E30B0", VA = "0x68E40B0")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetRenderMode", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public Vector2 areaSize
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x68E4170", Offset = "0x68E3170", VA = "0x68E4170")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x68E4240", Offset = "0x68E3240", VA = "0x68E4240")]
	public Light()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000706")]
	[Address(RVA = "0x68E2940", Offset = "0x68E1940", VA = "0x68E2940")]
	private static extern LightType get_type_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000707")]
	[Address(RVA = "0x68E29F0", Offset = "0x68E19F0", VA = "0x68E29F0")]
	private static extern void set_type_Injected(IntPtr _unity_self, LightType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000708")]
	[Address(RVA = "0x68E2AB0", Offset = "0x68E1AB0", VA = "0x68E2AB0")]
	private static extern float get_spotAngle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000709")]
	[Address(RVA = "0x68E2B70", Offset = "0x68E1B70", VA = "0x68E2B70")]
	private static extern void set_spotAngle_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070A")]
	[Address(RVA = "0x68E2C40", Offset = "0x68E1C40", VA = "0x68E2C40")]
	private static extern float get_innerSpotAngle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070B")]
	[Address(RVA = "0x68E2D10", Offset = "0x68E1D10", VA = "0x68E2D10")]
	private static extern void get_color_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070C")]
	[Address(RVA = "0x68E2DE0", Offset = "0x68E1DE0", VA = "0x68E2DE0")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070D")]
	[Address(RVA = "0x68E2EA0", Offset = "0x68E1EA0", VA = "0x68E2EA0")]
	private static extern float get_colorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070E")]
	[Address(RVA = "0x68E2F50", Offset = "0x68E1F50", VA = "0x68E2F50")]
	private static extern bool get_useColorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070F")]
	[Address(RVA = "0x68E3000", Offset = "0x68E2000", VA = "0x68E3000")]
	private static extern float get_intensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000710")]
	[Address(RVA = "0x68E30C0", Offset = "0x68E20C0", VA = "0x68E30C0")]
	private static extern void set_intensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x68E3190", Offset = "0x68E2190", VA = "0x68E3190")]
	private static extern float get_bounceIntensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000712")]
	[Address(RVA = "0x68E3250", Offset = "0x68E2250", VA = "0x68E3250")]
	private static extern void set_bounceIntensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000713")]
	[Address(RVA = "0x68E3320", Offset = "0x68E2320", VA = "0x68E3320")]
	private static extern float get_luxAtDistance_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x68E33D0", Offset = "0x68E23D0", VA = "0x68E33D0")]
	private static extern bool get_enableSpotReflector_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000715")]
	[Address(RVA = "0x68E3480", Offset = "0x68E2480", VA = "0x68E3480")]
	private static extern float get_shadowBias_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000716")]
	[Address(RVA = "0x68E3540", Offset = "0x68E2540", VA = "0x68E3540")]
	private static extern void set_shadowBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000717")]
	[Address(RVA = "0x68E3610", Offset = "0x68E2610", VA = "0x68E3610")]
	private static extern float get_shadowNormalBias_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000718")]
	[Address(RVA = "0x68E36C0", Offset = "0x68E26C0", VA = "0x68E36C0")]
	private static extern float get_shadowNearPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000719")]
	[Address(RVA = "0x68E3770", Offset = "0x68E2770", VA = "0x68E3770")]
	private static extern float get_range_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071A")]
	[Address(RVA = "0x68E3830", Offset = "0x68E2830", VA = "0x68E3830")]
	private static extern void set_range_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071B")]
	[Address(RVA = "0x68E3900", Offset = "0x68E2900", VA = "0x68E3900")]
	private static extern float get_dilatedRange_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071C")]
	[Address(RVA = "0x68E39E0", Offset = "0x68E29E0", VA = "0x68E39E0")]
	private static extern void get_bakingOutput_Injected(IntPtr _unity_self, out LightBakingOutput ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071D")]
	[Address(RVA = "0x68E3AA0", Offset = "0x68E2AA0", VA = "0x68E3AA0")]
	private static extern void set_renderingLayerMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071E")]
	[Address(RVA = "0x68E3B60", Offset = "0x68E2B60", VA = "0x68E3B60")]
	private static extern LightShadows get_shadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071F")]
	[Address(RVA = "0x68E3C10", Offset = "0x68E2C10", VA = "0x68E3C10")]
	private static extern void set_shadows_Injected(IntPtr _unity_self, LightShadows value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000720")]
	[Address(RVA = "0x68E3CD0", Offset = "0x68E2CD0", VA = "0x68E3CD0")]
	private static extern float get_shadowStrength_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000721")]
	[Address(RVA = "0x68E3D90", Offset = "0x68E2D90", VA = "0x68E3D90")]
	private static extern void set_shadowStrength_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x68E3EE0", Offset = "0x68E2EE0", VA = "0x68E3EE0")]
	private static extern LightShadowResolution get_ShadowResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000723")]
	[Address(RVA = "0x68E3FA0", Offset = "0x68E2FA0", VA = "0x68E3FA0")]
	private static extern void get_cookieSize2D_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000724")]
	[Address(RVA = "0x68E4080", Offset = "0x68E3080", VA = "0x68E4080")]
	private static extern IntPtr get_cookie_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000725")]
	[Address(RVA = "0x68E4130", Offset = "0x68E3130", VA = "0x68E4130")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, LightRenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000726")]
	[Address(RVA = "0x68E4200", Offset = "0x68E3200", VA = "0x68E4200")]
	private static extern void get_areaSize_Injected(IntPtr _unity_self, out Vector2 ret);
}
