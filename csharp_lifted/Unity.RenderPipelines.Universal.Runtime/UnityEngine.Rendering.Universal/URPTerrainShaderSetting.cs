// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.URPTerrainShaderSetting
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6689780", Offset = "0x6688780", VA = "0x6689780", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022B")]
	public bool includeTerrainShaders
	{
		[Token(Token = "0x6000903")]
		[Address(RVA = "0x6689790", Offset = "0x6688790", VA = "0x6689790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x66897A0", Offset = "0x66887A0", VA = "0x66897A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x6689800", Offset = "0x6688800", VA = "0x6689800")]
	public URPTerrainShaderSetting()
	{
	}
}
