// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Renderer2DResources
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E0")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E1")]
	internal Shader lightShader
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x2C78AF0", Offset = "0x2C770F0", VA = "0x182C78AF0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	internal Shader projectedShadowShader
	{
		[Token(Token = "0x60007F0")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x2C78B60", Offset = "0x2C77160", VA = "0x182C78B60")]
		set
		{
		}
	}

	[Token(Token = "0x170001E3")]
	internal Shader spriteShadowShader
	{
		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x2C78BD0", Offset = "0x2C771D0", VA = "0x182C78BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E4")]
	internal Shader spriteUnshadowShader
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x2C78C40", Offset = "0x2C77240", VA = "0x182C78C40")]
		set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	internal Shader geometryShadowShader
	{
		[Token(Token = "0x60007F6")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x2C78A10", Offset = "0x2C77010", VA = "0x182C78A10")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	internal Shader geometryUnshadowShader
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x2C78A80", Offset = "0x2C77080", VA = "0x182C78A80")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	internal Shader copyDepthPS
	{
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x2C789A0", Offset = "0x2C76FA0", VA = "0x182C789A0")]
		set
		{
		}
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Renderer2DResources()
	{
	}
}
