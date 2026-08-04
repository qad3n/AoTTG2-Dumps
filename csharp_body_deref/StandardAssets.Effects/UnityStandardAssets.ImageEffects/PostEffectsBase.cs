// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.PostEffectsBase
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/PostEffectsBase.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/PostEffectsBase.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200002A")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class PostEffectsBase : MonoBehaviour
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x20")]
	protected bool supportHDRTextures;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x21")]
	protected bool supportDX11;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x22")]
	protected bool isSupported;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x28")]
	private List<Material> createdMaterials;

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4476A60", Offset = "0x4476A60", VA = "0x4476A60")]
	protected Material CheckShaderAndCreateMaterial(Shader s, Material m2Create)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4475FB0", Offset = "0x4475FB0", VA = "0x4475FB0")]
	protected Material CreateMaterial(Shader s, Material m2Create)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4484C40", Offset = "0x4484C40", VA = "0x4484C40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4484C50", Offset = "0x4484C50", VA = "0x4484C50")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4484C60", Offset = "0x4484C60", VA = "0x4484C60")]
	private void RemoveCreatedMaterials()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4484D40", Offset = "0x4484D40", VA = "0x4484D40")]
	protected bool CheckSupport()
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4484DC0", Offset = "0x4484DC0", VA = "0x4484DC0", Slot = "4")]
	public virtual bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x447E6D0", Offset = "0x447E6D0", VA = "0x447E6D0")]
	protected void Start()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4475ED0", Offset = "0x4475ED0", VA = "0x4475ED0")]
	protected bool CheckSupport(bool needDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x447B550", Offset = "0x447B550", VA = "0x447B550")]
	protected bool CheckSupport(bool needDepth, bool needHdr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4484E60", Offset = "0x4484E60", VA = "0x4484E60")]
	public bool Dx11Support()
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x44761F0", Offset = "0x44761F0", VA = "0x44761F0")]
	protected void ReportAutoDisable()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4484E70", Offset = "0x4484E70", VA = "0x4484E70")]
	private bool CheckShader(Shader s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x44761D0", Offset = "0x44761D0", VA = "0x44761D0")]
	protected void NotSupported()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4485010", Offset = "0x4485010", VA = "0x4485010")]
	protected void DrawBorder(RenderTexture dest, Material material)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4476880", Offset = "0x4476880", VA = "0x4476880")]
	public PostEffectsBase()
	{
	}
}
