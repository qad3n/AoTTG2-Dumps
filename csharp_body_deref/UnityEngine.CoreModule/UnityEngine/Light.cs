// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Light
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000F0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Light.bindings.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Light.h")]
[RequireComponent(typeof(Transform))]
public sealed class Light : Behaviour
{
	[Token(Token = "0x400026C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private LightShape _003Cshape_003Ek__BackingField;

	[Token(Token = "0x400026D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_BakedIndex;

	[Token(Token = "0x1700012E")]
	[UnityEngine.Bindings.NativeProperty("LightType")]
	public LightType type
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x2EDCC30", Offset = "0x2EDB230", VA = "0x182EDCC30")]
		get
		{
			return default(LightType);
		}
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x2EDD640", Offset = "0x2EDBC40", VA = "0x182EDD640")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public float spotAngle
	{
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x2EDCB70", Offset = "0x2EDB170", VA = "0x182EDCB70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x2EDD570", Offset = "0x2EDBB70", VA = "0x182EDD570")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public float innerSpotAngle
	{
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x2EDC4B0", Offset = "0x2EDAAB0", VA = "0x182EDC4B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000131")]
	public Color color
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x2EDC0A0", Offset = "0x2EDA6A0", VA = "0x182EDC0A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x2EDCEA0", Offset = "0x2EDB4A0", VA = "0x182EDCEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public float colorTemperature
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x2EDBFD0", Offset = "0x2EDA5D0", VA = "0x182EDBFD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000133")]
	public bool useColorTemperature
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x2EDCCF0", Offset = "0x2EDB2F0", VA = "0x182EDCCF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public float intensity
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x2EDC570", Offset = "0x2EDAB70", VA = "0x182EDC570")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x2EDCF80", Offset = "0x2EDB580", VA = "0x182EDCF80")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public float bounceIntensity
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0x2EDBF10", Offset = "0x2EDA510", VA = "0x182EDBF10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x2EDCDC0", Offset = "0x2EDB3C0", VA = "0x182EDCDC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public float luxAtDistance
	{
		[Token(Token = "0x60006E0")]
		[Address(RVA = "0x2EDC630", Offset = "0x2EDAC30", VA = "0x182EDC630")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000137")]
	public bool enableSpotReflector
	{
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x2EDC3F0", Offset = "0x2EDA9F0", VA = "0x182EDC3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public float shadowBias
	{
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x2EDC7B0", Offset = "0x2EDADB0", VA = "0x182EDC7B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x2EDD2E0", Offset = "0x2EDB8E0", VA = "0x182EDD2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public float shadowNormalBias
	{
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x2EDC930", Offset = "0x2EDAF30", VA = "0x182EDC930")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013A")]
	public float shadowNearPlane
	{
		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x2EDC870", Offset = "0x2EDAE70", VA = "0x182EDC870")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013B")]
	public float range
	{
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x2EDC6F0", Offset = "0x2EDACF0", VA = "0x182EDC6F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x2EDD060", Offset = "0x2EDB660", VA = "0x182EDD060")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public float dilatedRange
	{
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x2EDC330", Offset = "0x2EDA930", VA = "0x182EDC330")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013D")]
	public LightBakingOutput bakingOutput
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x2EDBE30", Offset = "0x2EDA430", VA = "0x182EDBE30")]
		get
		{
			return default(LightBakingOutput);
		}
	}

	[Token(Token = "0x1700013E")]
	public int renderingLayerMask
	{
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x2EDD200", Offset = "0x2EDB800", VA = "0x182EDD200")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public LightShadows shadows
	{
		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x2EDCAB0", Offset = "0x2EDB0B0", VA = "0x182EDCAB0")]
		[UnityEngine.Bindings.NativeMethod("GetShadowType")]
		get
		{
			return default(LightShadows);
		}
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x2EDD490", Offset = "0x2EDBA90", VA = "0x182EDD490")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowType", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public float shadowStrength
	{
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x2EDC9F0", Offset = "0x2EDAFF0", VA = "0x182EDC9F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x2EDD3C0", Offset = "0x2EDB9C0", VA = "0x182EDD3C0")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetShadowStrength", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public LightShadowResolution shadowResolution
	{
		[Token(Token = "0x60006EF")]
		[Address(RVA = "0x2EDBC80", Offset = "0x2EDA280", VA = "0x182EDBC80")]
		get
		{
			return default(LightShadowResolution);
		}
	}

	[Token(Token = "0x17000142")]
	private LightShadowResolution ShadowResolution
	{
		[Token(Token = "0x60006F0")]
		[Address(RVA = "0x2EDBC80", Offset = "0x2EDA280", VA = "0x182EDBC80")]
		get
		{
			return default(LightShadowResolution);
		}
	}

	[Token(Token = "0x17000143")]
	public Vector2 cookieSize2D
	{
		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x2EDC180", Offset = "0x2EDA780", VA = "0x182EDC180")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000144")]
	public Texture cookie
	{
		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x2EDC250", Offset = "0x2EDA850", VA = "0x182EDC250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	public LightRenderMode renderMode
	{
		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x2EDD130", Offset = "0x2EDB730", VA = "0x182EDD130")]
		[UnityEngine.Bindings.FreeFunction("Light_Bindings::SetRenderMode", HasExplicitThis = true, ThrowsException = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public Vector2 areaSize
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x2EDBD50", Offset = "0x2EDA350", VA = "0x182EDBD50")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Light()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x2EDCBF0", Offset = "0x2EDB1F0", VA = "0x182EDCBF0")]
	private static extern LightType get_type_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x2EDD600", Offset = "0x2EDBC00", VA = "0x182EDD600")]
	private static extern void set_type_Injected(IntPtr _unity_self, LightType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x2EDCB30", Offset = "0x2EDB130", VA = "0x182EDCB30")]
	private static extern float get_spotAngle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x2EDD520", Offset = "0x2EDBB20", VA = "0x182EDD520")]
	private static extern void set_spotAngle_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x2EDC470", Offset = "0x2EDAA70", VA = "0x182EDC470")]
	private static extern float get_innerSpotAngle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x2EDC050", Offset = "0x2EDA650", VA = "0x182EDC050")]
	private static extern void get_color_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x2EDCE50", Offset = "0x2EDB450", VA = "0x182EDCE50")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x2EDBF90", Offset = "0x2EDA590", VA = "0x182EDBF90")]
	private static extern float get_colorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x2EDCCB0", Offset = "0x2EDB2B0", VA = "0x182EDCCB0")]
	private static extern bool get_useColorTemperature_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x2EDC530", Offset = "0x2EDAB30", VA = "0x182EDC530")]
	private static extern float get_intensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x2EDCF30", Offset = "0x2EDB530", VA = "0x182EDCF30")]
	private static extern void set_intensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x2EDBED0", Offset = "0x2EDA4D0", VA = "0x182EDBED0")]
	private static extern float get_bounceIntensity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x2EDCD70", Offset = "0x2EDB370", VA = "0x182EDCD70")]
	private static extern void set_bounceIntensity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x2EDC5F0", Offset = "0x2EDABF0", VA = "0x182EDC5F0")]
	private static extern float get_luxAtDistance_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000704")]
	[Address(RVA = "0x2EDC3B0", Offset = "0x2EDA9B0", VA = "0x182EDC3B0")]
	private static extern bool get_enableSpotReflector_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000705")]
	[Address(RVA = "0x2EDC770", Offset = "0x2EDAD70", VA = "0x182EDC770")]
	private static extern float get_shadowBias_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000706")]
	[Address(RVA = "0x2EDD290", Offset = "0x2EDB890", VA = "0x182EDD290")]
	private static extern void set_shadowBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000707")]
	[Address(RVA = "0x2EDC8F0", Offset = "0x2EDAEF0", VA = "0x182EDC8F0")]
	private static extern float get_shadowNormalBias_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000708")]
	[Address(RVA = "0x2EDC830", Offset = "0x2EDAE30", VA = "0x182EDC830")]
	private static extern float get_shadowNearPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000709")]
	[Address(RVA = "0x2EDC6B0", Offset = "0x2EDACB0", VA = "0x182EDC6B0")]
	private static extern float get_range_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070A")]
	[Address(RVA = "0x2EDD010", Offset = "0x2EDB610", VA = "0x182EDD010")]
	private static extern void set_range_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070B")]
	[Address(RVA = "0x2EDC2F0", Offset = "0x2EDA8F0", VA = "0x182EDC2F0")]
	private static extern float get_dilatedRange_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070C")]
	[Address(RVA = "0x2EDBDE0", Offset = "0x2EDA3E0", VA = "0x182EDBDE0")]
	private static extern void get_bakingOutput_Injected(IntPtr _unity_self, out LightBakingOutput ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070D")]
	[Address(RVA = "0x2EDD1C0", Offset = "0x2EDB7C0", VA = "0x182EDD1C0")]
	private static extern void set_renderingLayerMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070E")]
	[Address(RVA = "0x2EDCA70", Offset = "0x2EDB070", VA = "0x182EDCA70")]
	private static extern LightShadows get_shadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600070F")]
	[Address(RVA = "0x2EDD450", Offset = "0x2EDBA50", VA = "0x182EDD450")]
	private static extern void set_shadows_Injected(IntPtr _unity_self, LightShadows value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000710")]
	[Address(RVA = "0x2EDC9B0", Offset = "0x2EDAFB0", VA = "0x182EDC9B0")]
	private static extern float get_shadowStrength_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x2EDD370", Offset = "0x2EDB970", VA = "0x182EDD370")]
	private static extern void set_shadowStrength_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000712")]
	[Address(RVA = "0x2EDBC40", Offset = "0x2EDA240", VA = "0x182EDBC40")]
	private static extern LightShadowResolution get_ShadowResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000713")]
	[Address(RVA = "0x2EDC130", Offset = "0x2EDA730", VA = "0x182EDC130")]
	private static extern void get_cookieSize2D_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x2EDC210", Offset = "0x2EDA810", VA = "0x182EDC210")]
	private static extern IntPtr get_cookie_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000715")]
	[Address(RVA = "0x2EDD0F0", Offset = "0x2EDB6F0", VA = "0x182EDD0F0")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, LightRenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000716")]
	[Address(RVA = "0x2EDBD00", Offset = "0x2EDA300", VA = "0x182EDBD00")]
	private static extern void get_areaSize_Injected(IntPtr _unity_self, out Vector2 ret);
}
