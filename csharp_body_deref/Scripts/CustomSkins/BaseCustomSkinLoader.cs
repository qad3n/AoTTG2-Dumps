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

[Token(Token = "0x20003B8")]
internal abstract class BaseCustomSkinLoader : MonoBehaviour
{
	[Token(Token = "0x400131C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TransparentURL;

	[Token(Token = "0x400131D")]
	[FieldOffset(Offset = "0x20")]
	protected GameObject _owner;

	[Token(Token = "0x400131E")]
	protected const int BytesPerKb = 1000;

	[Token(Token = "0x400131F")]
	protected const int MaxSizeLarge = 2000000;

	[Token(Token = "0x4001320")]
	protected const int MaxSizeMedium = 1000000;

	[Token(Token = "0x4001321")]
	protected const int MaxSizeSmall = 500000;

	[Token(Token = "0x17000287")]
	protected abstract string RendererIdPrefix
	{
		[Token(Token = "0x60017C0")]
		get;
	}

	[Token(Token = "0x17000288")]
	internal virtual bool AllowLocalFileTextures
	{
		[Token(Token = "0x60017C1")]
		[Address(RVA = "0x585F1D0", Offset = "0x585E1D0", VA = "0x585F1D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x585F1E0", Offset = "0x585E1E0", VA = "0x585F1E0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x585F200", Offset = "0x585E200", VA = "0x585F200", Slot = "6")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017C4")]
	public abstract IEnumerator LoadSkinsFromRPC(object[] data);

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x585EC20", Offset = "0x585DC20", VA = "0x585EC20")]
	protected string GetRendererId(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x585F240", Offset = "0x585E240", VA = "0x585F240")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x585EB10", Offset = "0x585DB10", VA = "0x585EB10")]
	protected void AddAllRenderers(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x585F340", Offset = "0x585E340", VA = "0x585F340")]
	protected void AddAllRenderersIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x60017C9")]
	[Address(RVA = "0x585F490", Offset = "0x585E490", VA = "0x585F490")]
	protected void AddRenderersContainingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x60017CA")]
	[Address(RVA = "0x585F620", Offset = "0x585E620", VA = "0x585F620")]
	protected void AddRenderersMatchingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x585F7A0", Offset = "0x585E7A0", VA = "0x585F7A0")]
	protected List<int> GetCustomSkinPartIds(Type t)
	{
		return null;
	}

	[Token(Token = "0x60017CC")]
	[Address(RVA = "0x585F820", Offset = "0x585E820", VA = "0x585F820")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60017CD")]
	[Address(RVA = "0x585EDB0", Offset = "0x585DDB0", VA = "0x585EDB0")]
	protected BaseCustomSkinLoader()
	{
	}
}
