using System;
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000026")]
[AddComponentMenu("")]
public class ImageEffects
{
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x415DD40", Offset = "0x415DD40", VA = "0x415DD40")]
	public static void RenderDistortion(Material material, RenderTexture source, RenderTexture destination, float angle, Vector2 center, Vector2 radius)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x415E020", Offset = "0x415E020", VA = "0x415E020")]
	[Obsolete("Use Graphics.Blit(source,dest) instead")]
	public static void Blit(RenderTexture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x415E080", Offset = "0x415E080", VA = "0x415E080")]
	[Obsolete("Use Graphics.Blit(source, destination, material) instead")]
	public static void BlitWithMaterial(Material material, RenderTexture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x415E0E0", Offset = "0x415E0E0", VA = "0x415E0E0")]
	public ImageEffects()
	{
	}
}
