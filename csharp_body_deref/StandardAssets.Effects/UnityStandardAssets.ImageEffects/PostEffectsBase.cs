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
	[Address(RVA = "0x4151960", Offset = "0x4151960", VA = "0x4151960")]
	protected Material CheckShaderAndCreateMaterial(Shader s, Material m2Create)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4150EB0", Offset = "0x4150EB0", VA = "0x4150EB0")]
	protected Material CreateMaterial(Shader s, Material m2Create)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x415FB40", Offset = "0x415FB40", VA = "0x415FB40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x415FB50", Offset = "0x415FB50", VA = "0x415FB50")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x415FB60", Offset = "0x415FB60", VA = "0x415FB60")]
	private void RemoveCreatedMaterials()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x415FC40", Offset = "0x415FC40", VA = "0x415FC40")]
	protected bool CheckSupport()
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x415FCC0", Offset = "0x415FCC0", VA = "0x415FCC0", Slot = "4")]
	public virtual bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x41595D0", Offset = "0x41595D0", VA = "0x41595D0")]
	protected void Start()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4150DD0", Offset = "0x4150DD0", VA = "0x4150DD0")]
	protected bool CheckSupport(bool needDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4156450", Offset = "0x4156450", VA = "0x4156450")]
	protected bool CheckSupport(bool needDepth, bool needHdr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x415FD60", Offset = "0x415FD60", VA = "0x415FD60")]
	public bool Dx11Support()
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x41510F0", Offset = "0x41510F0", VA = "0x41510F0")]
	protected void ReportAutoDisable()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x415FD70", Offset = "0x415FD70", VA = "0x415FD70")]
	private bool CheckShader(Shader s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x41510D0", Offset = "0x41510D0", VA = "0x41510D0")]
	protected void NotSupported()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x415FF10", Offset = "0x415FF10", VA = "0x415FF10")]
	protected void DrawBorder(RenderTexture dest, Material material)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4151780", Offset = "0x4151780", VA = "0x4151780")]
	public PostEffectsBase()
	{
	}
}
