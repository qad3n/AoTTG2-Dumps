using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CB")]
[UnityEngine.Bindings.StaticAccessor("GetGraphicsSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/GraphicsSettings.h")]
public sealed class GraphicsSettings : Object
{
	[Token(Token = "0x1700026D")]
	public static extern bool lightsUseLinearIntensity
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E45")]
		[Address(RVA = "0x4AF1A10", Offset = "0x4AF1A10", VA = "0x4AF1A10")]
		get;
	}

	[Token(Token = "0x1700026E")]
	[UnityEngine.Bindings.NativeName("CurrentRenderPipeline")]
	private static extern ScriptableObject INTERNAL_currentRenderPipeline
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E46")]
		[Address(RVA = "0x4AF1A40", Offset = "0x4AF1A40", VA = "0x4AF1A40")]
		get;
	}

	[Token(Token = "0x1700026F")]
	public static RenderPipelineAsset currentRenderPipeline
	{
		[Token(Token = "0x6000E47")]
		[Address(RVA = "0x4AF1A70", Offset = "0x4AF1A70", VA = "0x4AF1A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000270")]
	public static bool isScriptableRenderPipelineEnabled
	{
		[Token(Token = "0x6000E48")]
		[Address(RVA = "0x4AF1B10", Offset = "0x4AF1B10", VA = "0x4AF1B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000271")]
	public static Type currentRenderPipelineAssetType
	{
		[Token(Token = "0x6000E49")]
		[Address(RVA = "0x4AF1B80", Offset = "0x4AF1B80", VA = "0x4AF1B80")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x4AF1C30", Offset = "0x4AF1C30", VA = "0x4AF1C30")]
	[UnityEngine.Bindings.NativeName("GetShaderModeScript")]
	public static extern BuiltinShaderMode GetShaderMode(BuiltinShaderType type);
}
