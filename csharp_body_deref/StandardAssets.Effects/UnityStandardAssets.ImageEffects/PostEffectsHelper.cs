using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200002B")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
internal class PostEffectsHelper : MonoBehaviour
{
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4160320", Offset = "0x4160320", VA = "0x4160320")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4160380", Offset = "0x4160380", VA = "0x4160380")]
	private static void DrawLowLevelPlaneAlignedWithCamera(float dist, RenderTexture source, RenderTexture dest, Material material, Camera cameraForProjectionMatrix)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4160660", Offset = "0x4160660", VA = "0x4160660")]
	private static void DrawBorder(RenderTexture dest, Material material)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4160A60", Offset = "0x4160A60", VA = "0x4160A60")]
	private static void DrawLowLevelQuad(float x1, float x2, float y1, float y2, RenderTexture source, RenderTexture dest, Material material)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4160C00", Offset = "0x4160C00", VA = "0x4160C00")]
	public PostEffectsHelper()
	{
	}
}
