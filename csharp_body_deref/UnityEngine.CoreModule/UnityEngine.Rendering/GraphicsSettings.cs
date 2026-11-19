// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GraphicsSettings
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200034D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/GraphicsSettings.h")]
[UnityEngine.Bindings.StaticAccessor("GetGraphicsSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class GraphicsSettings : Object
{
	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x0")]
	private static Lazy<RenderPipelineGlobalSettings> s_CurrentRenderPipelineGlobalSettings;

	[Token(Token = "0x17000307")]
	public static extern bool lightsUseLinearIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x693EB60", Offset = "0x693DB60", VA = "0x693EB60")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x693EB90", Offset = "0x693DB90", VA = "0x693EB90")]
		set;
	}

	[Token(Token = "0x17000308")]
	public static extern bool lightsUseColorTemperature
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x693EBC0", Offset = "0x693DBC0", VA = "0x693EBC0")]
		set;
	}

	[Token(Token = "0x17000309")]
	public static extern bool useScriptableRenderPipelineBatching
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x693EBF0", Offset = "0x693DBF0", VA = "0x693EBF0")]
		set;
	}

	[Token(Token = "0x1700030A")]
	[UnityEngine.Bindings.NativeName("CurrentRenderPipeline")]
	private static ScriptableObject INTERNAL_currentRenderPipeline
	{
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x693ED00", Offset = "0x693DD00", VA = "0x693ED00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public static RenderPipelineAsset currentRenderPipeline
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x693E620", Offset = "0x693D620", VA = "0x693E620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030C")]
	public static bool isScriptableRenderPipelineEnabled
	{
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x693EDD0", Offset = "0x693DDD0", VA = "0x693EDD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700030D")]
	public static Type currentRenderPipelineAssetType
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x693EF10", Offset = "0x693DF10", VA = "0x693EF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030E")]
	[UnityEngine.Bindings.NativeName("DefaultRenderPipeline")]
	private static ScriptableObject INTERNAL_defaultRenderPipeline
	{
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x693F060", Offset = "0x693E060", VA = "0x693F060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030F")]
	public static RenderPipelineAsset defaultRenderPipeline
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x693F130", Offset = "0x693E130", VA = "0x693F130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x693E2E0", Offset = "0x693D2E0", VA = "0x693E2E0")]
	[UnityEngine.Bindings.NativeName("GetSettingsForRenderPipeline")]
	private static Object Internal_GetSettingsForRenderPipeline(string renderpipelineName)
	{
		return null;
	}

	[Token(Token = "0x60012D5")]
	public static RenderPipelineGlobalSettings GetSettingsForRenderPipeline<T>() where T : RenderPipeline
	{
		return null;
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x693E520", Offset = "0x693D520", VA = "0x693E520")]
	private static RenderPipelineGlobalSettings Internal_GetCurrentRenderPipelineGlobalSettings()
	{
		return null;
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x693E770", Offset = "0x693D770", VA = "0x693E770")]
	internal static void ValidateSetRenderPipelineAsset(RenderPipelineAsset newRenderPipelineAsset)
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x693EA70", Offset = "0x693DA70", VA = "0x693EA70")]
	public static bool TryGetCurrentRenderPipelineGlobalSettings(out RenderPipelineGlobalSettings asset)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D9")]
	public static T GetRenderPipelineSettings<T>() where T : class, IRenderPipelineGraphicsSettings
	{
		return null;
	}

	[Token(Token = "0x60012DA")]
	public static bool TryGetRenderPipelineSettings<T>(out T settings) where T : class, IRenderPipelineGraphicsSettings
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x693EC20", Offset = "0x693DC20", VA = "0x693EC20")]
	public static extern bool HasShaderDefine(GraphicsTier tier, BuiltinShaderDefine defineHash);

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x693EC60", Offset = "0x693DC60", VA = "0x693EC60")]
	public static bool HasShaderDefine(BuiltinShaderDefine defineHash)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x693F280", Offset = "0x693E280", VA = "0x693F280")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static Shader GetDefaultShader(DefaultShaderType type)
	{
		return null;
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x693F4C0", Offset = "0x693E4C0", VA = "0x693F4C0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static Material GetDefaultMaterial(DefaultMaterialType type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x693E4F0", Offset = "0x693D4F0", VA = "0x693E4F0")]
	private static extern IntPtr Internal_GetSettingsForRenderPipeline_Injected(ref ManagedSpanWrapper renderpipelineName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x693EDA0", Offset = "0x693DDA0", VA = "0x693EDA0")]
	private static extern IntPtr get_INTERNAL_currentRenderPipeline_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x693F100", Offset = "0x693E100", VA = "0x693F100")]
	private static extern IntPtr get_INTERNAL_defaultRenderPipeline_Injected();
}
