// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Renderer2DResources
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
[Token(Token = "0x2000165")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: 2D Renderer", Order = 1000)]
[HideInInspector]
internal class Renderer2DResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x400082D")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/2D/Light2D.shader", SearchType.ProjectPath)]
	private Shader m_LightShader;

	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Shaders/2D/Shadow2D-Projected.shader", SearchType.ProjectPath)]
	private Shader m_ProjectedShadowShader;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Shaders/2D/Shadow2D-Shadow-Sprite.shader", SearchType.ProjectPath)]
	private Shader m_SpriteShadowShader;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[ResourcePath("Shaders/2D/Shadow2D-Unshadow-Sprite.shader", SearchType.ProjectPath)]
	private Shader m_SpriteUnshadowShader;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[ResourcePath("Shaders/2D/Shadow2D-Shadow-Geometry.shader", SearchType.ProjectPath)]
	private Shader m_GeometryShadowShader;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[ResourcePath("Shaders/2D/Shadow2D-Unshadow-Geometry.shader", SearchType.ProjectPath)]
	private Shader m_GeometryUnshadowShader;

	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/CopyDepth.shader", SearchType.ProjectPath)]
	private Shader m_CopyDepthPS;

	[Token(Token = "0x170001DF")]
	public int version
	{
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x667ACE0", Offset = "0x6679CE0", VA = "0x667ACE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E0")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x667ACF0", Offset = "0x6679CF0", VA = "0x667ACF0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E1")]
	internal Shader lightShader
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x667AD00", Offset = "0x6679D00", VA = "0x667AD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x667AD10", Offset = "0x6679D10", VA = "0x667AD10")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	internal Shader projectedShadowShader
	{
		[Token(Token = "0x60007F0")]
		[Address(RVA = "0x667AD70", Offset = "0x6679D70", VA = "0x667AD70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x667AD80", Offset = "0x6679D80", VA = "0x667AD80")]
		set
		{
		}
	}

	[Token(Token = "0x170001E3")]
	internal Shader spriteShadowShader
	{
		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x667ADE0", Offset = "0x6679DE0", VA = "0x667ADE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x667ADF0", Offset = "0x6679DF0", VA = "0x667ADF0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E4")]
	internal Shader spriteUnshadowShader
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x667AE50", Offset = "0x6679E50", VA = "0x667AE50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x667AE60", Offset = "0x6679E60", VA = "0x667AE60")]
		set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	internal Shader geometryShadowShader
	{
		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x667AEC0", Offset = "0x6679EC0", VA = "0x667AEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x667AED0", Offset = "0x6679ED0", VA = "0x667AED0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	internal Shader geometryUnshadowShader
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x667AF30", Offset = "0x6679F30", VA = "0x667AF30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x667AF40", Offset = "0x6679F40", VA = "0x667AF40")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	internal Shader copyDepthPS
	{
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x667AFA0", Offset = "0x6679FA0", VA = "0x667AFA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x667AFB0", Offset = "0x6679FB0", VA = "0x667AFB0")]
		set
		{
		}
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x667B010", Offset = "0x667A010", VA = "0x667B010")]
	public Renderer2DResources()
	{
	}
}
