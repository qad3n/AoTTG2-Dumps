using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002D0")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class SupportedOnRenderPipelineAttribute : Attribute
{
	[Token(Token = "0x20002D1")]
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

	[Token(Token = "0x17000275")]
	public Type[] renderPipelineTypes
	{
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x4B00B90", Offset = "0x4B00B90", VA = "0x4B00B90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x4B00BA0", Offset = "0x4B00BA0", VA = "0x4B00BA0")]
	public SupportedOnRenderPipelineAttribute(params Type[] renderPipeline)
	{
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x4B00EC0", Offset = "0x4B00EC0", VA = "0x4B00EC0")]
	public SupportedMode GetSupportedMode(Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x4B00F20", Offset = "0x4B00F20", VA = "0x4B00F20")]
	internal static SupportedMode GetSupportedMode(Type[] renderPipelineTypes, Type renderPipelineAssetType)
	{
		return default(SupportedMode);
	}
}
