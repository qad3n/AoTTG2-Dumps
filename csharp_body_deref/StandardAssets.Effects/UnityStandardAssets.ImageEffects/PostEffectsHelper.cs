// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.PostEffectsHelper
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/PostEffectsHelper.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/PostEffectsHelper.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200002B")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
internal class PostEffectsHelper : MonoBehaviour
{
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4485420", Offset = "0x4485420", VA = "0x4485420")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4485480", Offset = "0x4485480", VA = "0x4485480")]
	private static void DrawLowLevelPlaneAlignedWithCamera(float dist, RenderTexture source, RenderTexture dest, Material material, Camera cameraForProjectionMatrix)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4485760", Offset = "0x4485760", VA = "0x4485760")]
	private static void DrawBorder(RenderTexture dest, Material material)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4485B60", Offset = "0x4485B60", VA = "0x4485B60")]
	private static void DrawLowLevelQuad(float x1, float x2, float y1, float y2, RenderTexture source, RenderTexture dest, Material material)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4485D00", Offset = "0x4485D00", VA = "0x4485D00")]
	public PostEffectsHelper()
	{
	}
}
