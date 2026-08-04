// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.BaseCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/BaseCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/BaseCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x200023C")]
internal abstract class BaseCustomSkinLoader : MonoBehaviour
{
	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TransparentURL;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x20")]
	protected GameObject _owner;

	[Token(Token = "0x4000C42")]
	protected const int BytesPerKb = 1000;

	[Token(Token = "0x4000C43")]
	protected const int MaxSizeLarge = 2000000;

	[Token(Token = "0x4000C44")]
	protected const int MaxSizeMedium = 1000000;

	[Token(Token = "0x4000C45")]
	protected const int MaxSizeSmall = 500000;

	[Token(Token = "0x170001AB")]
	protected abstract string RendererIdPrefix
	{
		[Token(Token = "0x6000DE1")]
		get;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x4473BA0", Offset = "0x4473BA0", VA = "0x4473BA0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x4473BC0", Offset = "0x4473BC0", VA = "0x4473BC0", Slot = "5")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	public abstract IEnumerator LoadSkinsFromRPC(object[] data);

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x4473960", Offset = "0x4473960", VA = "0x4473960")]
	protected string GetRendererId(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x4473C00", Offset = "0x4473C00", VA = "0x4473C00")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x4473840", Offset = "0x4473840", VA = "0x4473840")]
	protected void AddAllRenderers(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4473D00", Offset = "0x4473D00", VA = "0x4473D00")]
	protected void AddAllRenderersIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x4473E60", Offset = "0x4473E60", VA = "0x4473E60")]
	protected void AddRenderersContainingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x4474010", Offset = "0x4474010", VA = "0x4474010")]
	protected void AddRenderersMatchingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x44741A0", Offset = "0x44741A0", VA = "0x44741A0")]
	protected List<int> GetCustomSkinPartIds(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x4474220", Offset = "0x4474220", VA = "0x4474220")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4473A10", Offset = "0x4473A10", VA = "0x4473A10")]
	protected BaseCustomSkinLoader()
	{
	}
}
