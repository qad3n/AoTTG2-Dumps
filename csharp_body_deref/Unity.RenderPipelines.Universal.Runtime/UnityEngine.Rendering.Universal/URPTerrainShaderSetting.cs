// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.URPTerrainShaderSetting
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20001A0")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "Terrain Shader Inclusion Settings", Order = 50)]
[ElementInfo(Order = 10)]
public class URPTerrainShaderSetting : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x20001A1")]
	internal enum Version
	{
		[Token(Token = "0x4000914")]
		Initial
	}

	[Token(Token = "0x4000911")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x4000912")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("Include terrain shaders in build even if not referenced.")]
	private bool m_IncludeTerrainShaders;

	[Token(Token = "0x1700022A")]
	public int version
	{
		[Token(Token = "0x6000902")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022B")]
	public bool includeTerrainShaders
	{
		[Token(Token = "0x6000903")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x2CA2DA0", Offset = "0x2CA13A0", VA = "0x182CA2DA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x2CA2D90", Offset = "0x2CA1390", VA = "0x182CA2D90")]
	public URPTerrainShaderSetting()
	{
	}
}
