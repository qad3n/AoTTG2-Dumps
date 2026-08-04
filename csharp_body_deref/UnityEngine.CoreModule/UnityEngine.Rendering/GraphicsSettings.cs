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

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CE")]
[UnityEngine.Bindings.StaticAccessor("GetGraphicsSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/GraphicsSettings.h")]
public sealed class GraphicsSettings : Object
{
	[Token(Token = "0x1700026E")]
	public static extern bool lightsUseLinearIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E47")]
		[Address(RVA = "0x4E19340", Offset = "0x4E19340", VA = "0x4E19340")]
		get;
	}

	[Token(Token = "0x1700026F")]
	[UnityEngine.Bindings.NativeName("CurrentRenderPipeline")]
	private static extern ScriptableObject INTERNAL_currentRenderPipeline
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E48")]
		[Address(RVA = "0x4E19370", Offset = "0x4E19370", VA = "0x4E19370")]
		get;
	}

	[Token(Token = "0x17000270")]
	public static RenderPipelineAsset currentRenderPipeline
	{
		[Token(Token = "0x6000E49")]
		[Address(RVA = "0x4E193A0", Offset = "0x4E193A0", VA = "0x4E193A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000271")]
	public static bool isScriptableRenderPipelineEnabled
	{
		[Token(Token = "0x6000E4A")]
		[Address(RVA = "0x4E19440", Offset = "0x4E19440", VA = "0x4E19440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000272")]
	public static Type currentRenderPipelineAssetType
	{
		[Token(Token = "0x6000E4B")]
		[Address(RVA = "0x4E194B0", Offset = "0x4E194B0", VA = "0x4E194B0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x4E19560", Offset = "0x4E19560", VA = "0x4E19560")]
	[UnityEngine.Bindings.NativeName("GetShaderModeScript")]
	public static extern BuiltinShaderMode GetShaderMode(BuiltinShaderType type);
}
