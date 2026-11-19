// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphGlobalSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000160")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "Render Graph", Order = 50)]
[ElementInfo(Order = 0)]
public class RenderGraphGlobalSettings : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x2000161")]
	private enum Version
	{
		[Token(Token = "0x40006EC")]
		Initial = 0,
		[Token(Token = "0x40006ED")]
		Count = 1,
		[Token(Token = "0x40006EE")]
		Last = Initial
	}

	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_version;

	[Token(Token = "0x40006E9")]
	[FieldOffset(Offset = "0x14")]
	[RecreatePipelineOnChange]
	[SerializeField]
	[Tooltip("Enable caching of render graph compilation from one frame to another.")]
	private bool m_EnableCompilationCaching;

	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x15")]
	[RecreatePipelineOnChange]
	[SerializeField]
	[Tooltip("Enable validity checks of render graph in Editor and Development mode. Always disabled in Release build.")]
	private bool m_EnableValidityChecks;

	[Token(Token = "0x1700014F")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000B51")]
		[Address(RVA = "0x651DA10", Offset = "0x651CA10", VA = "0x651DA10", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000150")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6000B52")]
		[Address(RVA = "0x651DA20", Offset = "0x651CA20", VA = "0x651DA20", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000151")]
	public bool enableCompilationCaching
	{
		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x651DA30", Offset = "0x651CA30", VA = "0x651DA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x651DA40", Offset = "0x651CA40", VA = "0x651DA40")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public bool enableValidityChecks
	{
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x651DAA0", Offset = "0x651CAA0", VA = "0x651DAA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B56")]
		[Address(RVA = "0x651DAB0", Offset = "0x651CAB0", VA = "0x651DAB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x651DB10", Offset = "0x651CB10", VA = "0x651DB10")]
	public RenderGraphGlobalSettings()
	{
	}
}
