// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ImageEffects
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ImageEffects.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ImageEffects.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000026")]
[AddComponentMenu("")]
public class ImageEffects
{
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4482E40", Offset = "0x4482E40", VA = "0x4482E40")]
	public static void RenderDistortion(Material material, RenderTexture source, RenderTexture destination, float angle, Vector2 center, Vector2 radius)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4483120", Offset = "0x4483120", VA = "0x4483120")]
	[Obsolete("Use Graphics.Blit(source,dest) instead")]
	public static void Blit(RenderTexture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4483180", Offset = "0x4483180", VA = "0x4483180")]
	[Obsolete("Use Graphics.Blit(source, destination, material) instead")]
	public static void BlitWithMaterial(Material material, RenderTexture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x44831E0", Offset = "0x44831E0", VA = "0x44831E0")]
	public ImageEffects()
	{
	}
}
