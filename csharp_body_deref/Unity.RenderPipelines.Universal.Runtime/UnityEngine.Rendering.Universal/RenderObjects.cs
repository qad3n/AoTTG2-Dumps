// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderObjects
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200017F")]
[ExcludeFromPreset]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.Universal", null, null)]
[Tooltip("Render Objects simplifies the injection of additional render passes by exposing a selection of commonly used settings.")]
public class RenderObjects : ScriptableRendererFeature
{
	[Serializable]
	[Token(Token = "0x2000180")]
	public class RenderObjectsSettings
	{
		[Token(Token = "0x2000181")]
		public enum OverrideMaterialMode
		{
			[Token(Token = "0x40008A5")]
			None,
			[Token(Token = "0x40008A6")]
			Material,
			[Token(Token = "0x40008A7")]
			Shader
		}

		[Token(Token = "0x4000897")]
		[FieldOffset(Offset = "0x10")]
		public string passTag;

		[Token(Token = "0x4000898")]
		[FieldOffset(Offset = "0x18")]
		public RenderPassEvent Event;

		[Token(Token = "0x4000899")]
		[FieldOffset(Offset = "0x20")]
		public FilterSettings filterSettings;

		[Token(Token = "0x400089A")]
		[FieldOffset(Offset = "0x28")]
		public Material overrideMaterial;

		[Token(Token = "0x400089B")]
		[FieldOffset(Offset = "0x30")]
		public int overrideMaterialPassIndex;

		[Token(Token = "0x400089C")]
		[FieldOffset(Offset = "0x38")]
		public Shader overrideShader;

		[Token(Token = "0x400089D")]
		[FieldOffset(Offset = "0x40")]
		public int overrideShaderPassIndex;

		[Token(Token = "0x400089E")]
		[FieldOffset(Offset = "0x44")]
		public OverrideMaterialMode overrideMode;

		[Token(Token = "0x400089F")]
		[FieldOffset(Offset = "0x48")]
		public bool overrideDepthState;

		[Token(Token = "0x40008A0")]
		[FieldOffset(Offset = "0x4C")]
		public CompareFunction depthCompareFunction;

		[Token(Token = "0x40008A1")]
		[FieldOffset(Offset = "0x50")]
		public bool enableWrite;

		[Token(Token = "0x40008A2")]
		[FieldOffset(Offset = "0x58")]
		public StencilStateData stencilSettings;

		[Token(Token = "0x40008A3")]
		[FieldOffset(Offset = "0x60")]
		public CustomCameraSettings cameraSettings;

		[Token(Token = "0x6000887")]
		[Address(RVA = "0x2C775A0", Offset = "0x2C75BA0", VA = "0x182C775A0")]
		public RenderObjectsSettings()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000182")]
	public class FilterSettings
	{
		[Token(Token = "0x40008A8")]
		[FieldOffset(Offset = "0x10")]
		public RenderQueueType RenderQueueType;

		[Token(Token = "0x40008A9")]
		[FieldOffset(Offset = "0x14")]
		public LayerMask LayerMask;

		[Token(Token = "0x40008AA")]
		[FieldOffset(Offset = "0x18")]
		public string[] PassNames;

		[Token(Token = "0x6000888")]
		[Address(RVA = "0x2C704C0", Offset = "0x2C6EAC0", VA = "0x182C704C0")]
		public FilterSettings()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000183")]
	public class CustomCameraSettings
	{
		[Token(Token = "0x40008AB")]
		[FieldOffset(Offset = "0x10")]
		public bool overrideCamera;

		[Token(Token = "0x40008AC")]
		[FieldOffset(Offset = "0x11")]
		public bool restoreCamera;

		[Token(Token = "0x40008AD")]
		[FieldOffset(Offset = "0x14")]
		public Vector4 offset;

		[Token(Token = "0x40008AE")]
		[FieldOffset(Offset = "0x24")]
		public float cameraFieldOfView;

		[Token(Token = "0x6000889")]
		[Address(RVA = "0x2C70430", Offset = "0x2C6EA30", VA = "0x182C70430")]
		public CustomCameraSettings()
		{
		}
	}

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x20")]
	public RenderObjectsSettings settings;

	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x28")]
	private RenderObjectsPass renderObjectsPass;

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x2C77770", Offset = "0x2C75D70", VA = "0x182C77770", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x2C776D0", Offset = "0x2C75CD0", VA = "0x182C776D0", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x2C77A70", Offset = "0x2C76070", VA = "0x182C77A70")]
	public RenderObjects()
	{
	}
}
