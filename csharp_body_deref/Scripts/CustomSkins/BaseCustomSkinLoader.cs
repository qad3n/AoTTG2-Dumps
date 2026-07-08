using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000206")]
internal abstract class BaseCustomSkinLoader : MonoBehaviour
{
	[Token(Token = "0x4000B67")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TransparentURL;

	[Token(Token = "0x4000B68")]
	[FieldOffset(Offset = "0x20")]
	protected GameObject _owner;

	[Token(Token = "0x4000B69")]
	protected const int BytesPerKb = 1000;

	[Token(Token = "0x4000B6A")]
	protected const int MaxSizeLarge = 2000000;

	[Token(Token = "0x4000B6B")]
	protected const int MaxSizeMedium = 1000000;

	[Token(Token = "0x4000B6C")]
	protected const int MaxSizeSmall = 500000;

	[Token(Token = "0x17000154")]
	protected abstract string RendererIdPrefix
	{
		[Token(Token = "0x6000C48")]
		get;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x413F550", Offset = "0x413F550", VA = "0x413F550")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x413F570", Offset = "0x413F570", VA = "0x413F570", Slot = "5")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	public abstract IEnumerator LoadSkinsFromRPC(object[] data);

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x413EFD0", Offset = "0x413EFD0", VA = "0x413EFD0")]
	protected string GetRendererId(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x413F5B0", Offset = "0x413F5B0", VA = "0x413F5B0")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x413EEB0", Offset = "0x413EEB0", VA = "0x413EEB0")]
	protected void AddAllRenderers(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x413F6B0", Offset = "0x413F6B0", VA = "0x413F6B0")]
	protected void AddAllRenderersIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x413F810", Offset = "0x413F810", VA = "0x413F810")]
	protected void AddRenderersContainingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x413F9C0", Offset = "0x413F9C0", VA = "0x413F9C0")]
	protected void AddRenderersMatchingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x413FB50", Offset = "0x413FB50", VA = "0x413FB50")]
	protected List<int> GetCustomSkinPartIds(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x413FBD0", Offset = "0x413FBD0", VA = "0x413FBD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x413F160", Offset = "0x413F160", VA = "0x413F160")]
	protected BaseCustomSkinLoader()
	{
	}
}
