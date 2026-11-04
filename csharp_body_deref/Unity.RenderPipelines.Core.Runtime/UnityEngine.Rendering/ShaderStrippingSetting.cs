// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderStrippingSetting
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000182")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "Additional Shader Stripping Settings", Order = 40)]
[ElementInfo(Order = 0)]
public class ShaderStrippingSetting : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x2000183")]
	internal enum Version
	{
		[Token(Token = "0x4000798")]
		Initial
	}

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("Controls whether to output shader variant information to a file.")]
	private bool m_ExportShaderVariants;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Tooltip("Controls the level of logging of shader variant information outputted during the build process. Information appears in the Unity Console when the build finishes.")]
	private ShaderVariantLogLevel m_ShaderVariantLogLevel;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[Tooltip("When enabled, all debug display shader variants are removed when you build for the Unity Player. This decreases build time, but prevents the use of most Rendering Debugger features in Player builds.")]
	private bool m_StripRuntimeDebugShaders;

	[Token(Token = "0x1700016A")]
	public int version
	{
		[Token(Token = "0x6000BA3")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016B")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016C")]
	public bool exportShaderVariants
	{
		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x2B4A4F0", Offset = "0x2B48AF0", VA = "0x182B4A4F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700016D")]
	public ShaderVariantLogLevel shaderVariantLogLevel
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(ShaderVariantLogLevel);
		}
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x2B4A560", Offset = "0x2B48B60", VA = "0x182B4A560")]
		set
		{
		}
	}

	[Token(Token = "0x1700016E")]
	public bool stripRuntimeDebugShaders
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0xE5A3F0", Offset = "0xE589F0", VA = "0x180E5A3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x2B4A5D0", Offset = "0x2B48BD0", VA = "0x182B4A5D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x2B4A4E0", Offset = "0x2B48AE0", VA = "0x182B4A4E0")]
	public ShaderStrippingSetting()
	{
	}
}
