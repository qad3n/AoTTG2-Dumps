// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Blur
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Blur.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Blur.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000014")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Blur/Blur")]
public class Blur : MonoBehaviour
{
	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x20")]
	[Range(0f, 10f)]
	public int iterations;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x24")]
	[Range(0f, 1f)]
	public float blurSpread;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x28")]
	public Shader blurShader;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x0")]
	private static Material m_Material;

	[Token(Token = "0x17000001")]
	protected Material material
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4479BB0", Offset = "0x4479BB0", VA = "0x4479BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4479CA0", Offset = "0x4479CA0", VA = "0x4479CA0")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4479D40", Offset = "0x4479D40", VA = "0x4479D40")]
	protected void Start()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4479DF0", Offset = "0x4479DF0", VA = "0x4479DF0")]
	public void FourTapCone(RenderTexture source, RenderTexture dest, int iteration)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4479F20", Offset = "0x4479F20", VA = "0x4479F20")]
	private void DownSample4x(RenderTexture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x447A010", Offset = "0x447A010", VA = "0x447A010")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x447A160", Offset = "0x447A160", VA = "0x447A160")]
	public Blur()
	{
	}
}
