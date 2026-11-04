// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GraphicsSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Settings/GraphicsSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200034F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/GraphicsSettings.h")]
[UnityEngine.Bindings.StaticAccessor("GetGraphicsSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class GraphicsSettings : Object
{
	[Token(Token = "0x4000997")]
	[FieldOffset(Offset = "0x0")]
	private static Lazy<RenderPipelineGlobalSettings> s_CurrentRenderPipelineGlobalSettings;

	[Token(Token = "0x17000302")]
	public static extern bool lightsUseLinearIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012C0")]
		[Address(RVA = "0x2F4A7B0", Offset = "0x2F48DB0", VA = "0x182F4A7B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012C1")]
		[Address(RVA = "0x2F4A820", Offset = "0x2F48E20", VA = "0x182F4A820")]
		set;
	}

	[Token(Token = "0x17000303")]
	public static extern bool lightsUseColorTemperature
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012C2")]
		[Address(RVA = "0x2F4A7E0", Offset = "0x2F48DE0", VA = "0x182F4A7E0")]
		set;
	}

	[Token(Token = "0x17000304")]
	public static extern bool useScriptableRenderPipelineBatching
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012C3")]
		[Address(RVA = "0x2F4A860", Offset = "0x2F48E60", VA = "0x182F4A860")]
		set;
	}

	[Token(Token = "0x17000305")]
	[UnityEngine.Bindings.NativeName("CurrentRenderPipeline")]
	private static ScriptableObject INTERNAL_currentRenderPipeline
	{
		[Token(Token = "0x60012C6")]
		[Address(RVA = "0x2F4A370", Offset = "0x2F48970", VA = "0x182F4A370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	public static RenderPipelineAsset currentRenderPipeline
	{
		[Token(Token = "0x60012C7")]
		[Address(RVA = "0x2F4A590", Offset = "0x2F48B90", VA = "0x182F4A590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000307")]
	public static bool isScriptableRenderPipelineEnabled
	{
		[Token(Token = "0x60012C8")]
		[Address(RVA = "0x2F4A730", Offset = "0x2F48D30", VA = "0x182F4A730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000308")]
	public static Type currentRenderPipelineAssetType
	{
		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x2F4A4A0", Offset = "0x2F48AA0", VA = "0x182F4A4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000309")]
	[UnityEngine.Bindings.NativeName("DefaultRenderPipeline")]
	private static ScriptableObject INTERNAL_defaultRenderPipeline
	{
		[Token(Token = "0x60012CA")]
		[Address(RVA = "0x2F4A420", Offset = "0x2F48A20", VA = "0x182F4A420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public static RenderPipelineAsset defaultRenderPipeline
	{
		[Token(Token = "0x60012CB")]
		[Address(RVA = "0x2F4A630", Offset = "0x2F48C30", VA = "0x182F4A630")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x2F49960", Offset = "0x2F47F60", VA = "0x182F49960")]
	public static extern bool HasShaderDefine(GraphicsTier tier, BuiltinShaderDefine defineHash);

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x2F499A0", Offset = "0x2F47FA0", VA = "0x182F499A0")]
	public static bool HasShaderDefine(BuiltinShaderDefine defineHash)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x2F49640", Offset = "0x2F47C40", VA = "0x182F49640")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static Shader GetDefaultShader(DefaultShaderType type)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x2F49350", Offset = "0x2F47950", VA = "0x182F49350")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static Material GetDefaultMaterial(DefaultMaterialType type)
	{
		return null;
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x2F49B90", Offset = "0x2F48190", VA = "0x182F49B90")]
	[UnityEngine.Bindings.NativeName("GetSettingsForRenderPipeline")]
	private static Object Internal_GetSettingsForRenderPipeline(string renderpipelineName)
	{
		return null;
	}

	[Token(Token = "0x60012CF")]
	public static RenderPipelineGlobalSettings GetSettingsForRenderPipeline<T>() where T : RenderPipeline
	{
		return null;
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x2F49A40", Offset = "0x2F48040", VA = "0x182F49A40")]
	private static RenderPipelineGlobalSettings Internal_GetCurrentRenderPipelineGlobalSettings()
	{
		return null;
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x2F49E30", Offset = "0x2F48430", VA = "0x182F49E30")]
	internal static void ValidateSetRenderPipelineAsset(RenderPipelineAsset newRenderPipelineAsset)
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x2F49D70", Offset = "0x2F48370", VA = "0x182F49D70")]
	public static bool TryGetCurrentRenderPipelineGlobalSettings(out RenderPipelineGlobalSettings asset)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D3")]
	public static T GetRenderPipelineSettings<T>() where T : class, IRenderPipelineGraphicsSettings
	{
		return null;
	}

	[Token(Token = "0x60012D4")]
	public static bool TryGetRenderPipelineSettings<T>(out T settings) where T : class, IRenderPipelineGraphicsSettings
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x2F4A340", Offset = "0x2F48940", VA = "0x182F4A340")]
	private static extern IntPtr get_INTERNAL_currentRenderPipeline_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x2F4A3F0", Offset = "0x2F489F0", VA = "0x182F4A3F0")]
	private static extern IntPtr get_INTERNAL_defaultRenderPipeline_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x2F49B50", Offset = "0x2F48150", VA = "0x182F49B50")]
	private static extern IntPtr Internal_GetSettingsForRenderPipeline_Injected(ref ManagedSpanWrapper renderpipelineName);
}
