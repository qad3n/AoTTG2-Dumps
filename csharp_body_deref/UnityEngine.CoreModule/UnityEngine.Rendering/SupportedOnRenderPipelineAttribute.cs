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

[Token(Token = "0x20002D3")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class SupportedOnRenderPipelineAttribute : Attribute
{
	[Token(Token = "0x20002D4")]
	public enum SupportedMode
	{
		[Token(Token = "0x400081A")]
		Unsupported,
		[Token(Token = "0x400081B")]
		Supported,
		[Token(Token = "0x400081C")]
		SupportedByBaseClass
	}

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<Type[]> k_DefaultRenderPipelineAsset;

	[Token(Token = "0x17000276")]
	public Type[] renderPipelineTypes
	{
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x4E284C0", Offset = "0x4E284C0", VA = "0x4E284C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x4E284D0", Offset = "0x4E284D0", VA = "0x4E284D0")]
	public SupportedOnRenderPipelineAttribute(params Type[] renderPipeline)
	{
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x4E287F0", Offset = "0x4E287F0", VA = "0x4E287F0")]
	public SupportedMode GetSupportedMode(Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x4E28850", Offset = "0x4E28850", VA = "0x4E28850")]
	internal static SupportedMode GetSupportedMode(Type[] renderPipelineTypes, Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}
}
