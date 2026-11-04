// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000B4")]
[Obsolete("Moved to GraphicsSettings. #from(2023.3)")]
public class UniversalRenderPipelineEditorResources : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x20000B5")]
	[ReloadGroup]
	[Obsolete("UniversalRenderPipelineEditorResources.ShaderResources is obsolete GraphicsSettings.TryGetRenderPipelineSettings<UniversalRenderPipelineEditorShaders>(). #from(2023.3)")]
	public sealed class ShaderResources
	{
		[Token(Token = "0x4000399")]
		[FieldOffset(Offset = "0x10")]
		[Reload("Shaders/AutodeskInteractive/AutodeskInteractive.shadergraph", ReloadAttribute.Package.Root)]
		public Shader autodeskInteractivePS;

		[Token(Token = "0x400039A")]
		[FieldOffset(Offset = "0x18")]
		[Reload("Shaders/AutodeskInteractive/AutodeskInteractiveTransparent.shadergraph", ReloadAttribute.Package.Root)]
		public Shader autodeskInteractiveTransparentPS;

		[Token(Token = "0x400039B")]
		[FieldOffset(Offset = "0x20")]
		[Reload("Shaders/AutodeskInteractive/AutodeskInteractiveMasked.shadergraph", ReloadAttribute.Package.Root)]
		public Shader autodeskInteractiveMaskedPS;

		[Token(Token = "0x400039C")]
		[FieldOffset(Offset = "0x28")]
		[Reload("Shaders/Terrain/TerrainDetailLit.shader", ReloadAttribute.Package.Root)]
		public Shader terrainDetailLitPS;

		[Token(Token = "0x400039D")]
		[FieldOffset(Offset = "0x30")]
		[Reload("Shaders/Terrain/WavingGrass.shader", ReloadAttribute.Package.Root)]
		public Shader terrainDetailGrassPS;

		[Token(Token = "0x400039E")]
		[FieldOffset(Offset = "0x38")]
		[Reload("Shaders/Terrain/WavingGrassBillboard.shader", ReloadAttribute.Package.Root)]
		public Shader terrainDetailGrassBillboardPS;

		[Token(Token = "0x400039F")]
		[FieldOffset(Offset = "0x40")]
		[Reload("Shaders/Nature/SpeedTree7.shader", ReloadAttribute.Package.Root)]
		public Shader defaultSpeedTree7PS;

		[Token(Token = "0x40003A0")]
		[FieldOffset(Offset = "0x48")]
		[Reload("Shaders/Nature/SpeedTree8_PBRLit.shadergraph", ReloadAttribute.Package.Root)]
		public Shader defaultSpeedTree8PS;

		[Token(Token = "0x600045C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ShaderResources()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20000B6")]
	[ReloadGroup]
	[Obsolete("UniversalRenderPipelineEditorResources.MaterialResources is obsolete GraphicsSettings.TryGetRenderPipelineSettings<UniversalRenderPipelineEditorMaterials>(). #from(2023.3)")]
	public sealed class MaterialResources
	{
		[Token(Token = "0x40003A1")]
		[FieldOffset(Offset = "0x10")]
		[Reload("Runtime/Materials/Lit.mat", ReloadAttribute.Package.Root)]
		public Material lit;

		[Token(Token = "0x40003A2")]
		[FieldOffset(Offset = "0x18")]
		[Reload("Runtime/Materials/ParticlesUnlit.mat", ReloadAttribute.Package.Root)]
		public Material particleLit;

		[Token(Token = "0x40003A3")]
		[FieldOffset(Offset = "0x20")]
		[Reload("Runtime/Materials/TerrainLit.mat", ReloadAttribute.Package.Root)]
		public Material terrainLit;

		[Token(Token = "0x40003A4")]
		[FieldOffset(Offset = "0x28")]
		[Reload("Runtime/Materials/Decal.mat", ReloadAttribute.Package.Root)]
		public Material decal;

		[Token(Token = "0x600045D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MaterialResources()
		{
		}
	}

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete("UniversalRenderPipelineEditorResources.ShaderResources is obsolete GraphicsSettings.TryGetRenderPipelineSettings<UniversalRenderPipelineEditorShaders>(). #from(2023.3)")]
	public ShaderResources shaders;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x20")]
	[Obsolete("UniversalRenderPipelineEditorResources.MaterialResources is obsolete GraphicsSettings.TryGetRenderPipelineSettings<UniversalRenderPipelineEditorMaterials>(). #from(2023.3)")]
	public MaterialResources materials;

	[Token(Token = "0x600045B")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	public UniversalRenderPipelineEditorResources()
	{
	}
}
