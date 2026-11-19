// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute
// Update status: unchanged since the previous dump
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
		[Token(Token = "0x40009CC")]
		Unsupported,
		[Token(Token = "0x40009CD")]
		Supported,
		[Token(Token = "0x40009CE")]
		SupportedByBaseClass
	}

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<Type[]> k_DefaultRenderPipelineAsset;

	[Token(Token = "0x17000325")]
	public Type[] renderPipelineTypes
	{
		[Token(Token = "0x6001561")]
		[Address(RVA = "0x6954630", Offset = "0x6953630", VA = "0x6954630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x6954640", Offset = "0x6953640", VA = "0x6954640")]
	public SupportedOnRenderPipelineAttribute(Type renderPipeline)
	{
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x69546E0", Offset = "0x69536E0", VA = "0x69546E0")]
	public SupportedOnRenderPipelineAttribute(params Type[] renderPipeline)
	{
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x69549F0", Offset = "0x69539F0", VA = "0x69549F0")]
	public SupportedMode GetSupportedMode(Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}

	[Token(Token = "0x6001565")]
	[Address(RVA = "0x6954A50", Offset = "0x6953A50", VA = "0x6954A50")]
	internal static SupportedMode GetSupportedMode(Type[] renderPipelineTypes, Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x6954BB0", Offset = "0x6953BB0", VA = "0x6954BB0")]
	public static bool IsTypeSupportedOnRenderPipeline(Type type, Type renderPipelineAssetType)
	{
		return default(bool);
	}
}
