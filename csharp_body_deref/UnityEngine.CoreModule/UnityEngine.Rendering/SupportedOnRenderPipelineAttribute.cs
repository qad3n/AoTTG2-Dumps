// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000368")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class SupportedOnRenderPipelineAttribute : Attribute
{
	[Token(Token = "0x2000369")]
	public enum SupportedMode
	{
		[Token(Token = "0x40009CE")]
		Unsupported,
		[Token(Token = "0x40009CF")]
		Supported,
		[Token(Token = "0x40009D0")]
		SupportedByBaseClass
	}

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<Type[]> k_DefaultRenderPipelineAsset;

	[Token(Token = "0x17000320")]
	public Type[] renderPipelineTypes
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600154E")]
	[Address(RVA = "0x2F74300", Offset = "0x2F72900", VA = "0x182F74300")]
	public SupportedOnRenderPipelineAttribute(Type renderPipeline)
	{
	}

	[Token(Token = "0x600154F")]
	[Address(RVA = "0x2F74000", Offset = "0x2F72600", VA = "0x182F74000")]
	public SupportedOnRenderPipelineAttribute(params Type[] renderPipeline)
	{
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x2F73B90", Offset = "0x2F72190", VA = "0x182F73B90")]
	public SupportedMode GetSupportedMode(Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x2F73D20", Offset = "0x2F72320", VA = "0x182F73D20")]
	internal static SupportedMode GetSupportedMode(Type[] renderPipelineTypes, Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x2F73E80", Offset = "0x2F72480", VA = "0x182F73E80")]
	public static bool IsTypeSupportedOnRenderPipeline(Type type, Type renderPipelineAssetType)
	{
		return default(bool);
	}
}
