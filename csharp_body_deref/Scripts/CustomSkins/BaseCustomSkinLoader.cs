// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.BaseCustomSkinLoader
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000356")]
internal abstract class BaseCustomSkinLoader : MonoBehaviour
{
	[Token(Token = "0x400116C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TransparentURL;

	[Token(Token = "0x400116D")]
	[FieldOffset(Offset = "0x20")]
	protected GameObject _owner;

	[Token(Token = "0x400116E")]
	protected const int BytesPerKb = 1000;

	[Token(Token = "0x400116F")]
	protected const int MaxSizeLarge = 2000000;

	[Token(Token = "0x4001170")]
	protected const int MaxSizeMedium = 1000000;

	[Token(Token = "0x4001171")]
	protected const int MaxSizeSmall = 500000;

	[Token(Token = "0x17000240")]
	protected abstract string RendererIdPrefix
	{
		[Token(Token = "0x6001540")]
		get;
	}

	[Token(Token = "0x17000241")]
	internal virtual bool AllowLocalFileTextures
	{
		[Token(Token = "0x6001541")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x1E62B70", Offset = "0x1E61170", VA = "0x181E62B70")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6001543")]
	[Address(RVA = "0x1E62C20", Offset = "0x1E61220", VA = "0x181E62C20", Slot = "6")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001544")]
	public abstract IEnumerator LoadSkinsFromRPC(object[] data);

	[Token(Token = "0x6001545")]
	[Address(RVA = "0x1E62C60", Offset = "0x1E61260", VA = "0x181E62C60")]
	protected string GetRendererId(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001546")]
	[Address(RVA = "0x1E628E0", Offset = "0x1E60EE0", VA = "0x181E628E0")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6001547")]
	[Address(RVA = "0x1E627E0", Offset = "0x1E60DE0", VA = "0x181E627E0")]
	protected void AddAllRenderers(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x1E626A0", Offset = "0x1E60CA0", VA = "0x181E626A0")]
	protected void AddAllRenderersIfExists(List<Renderer> renderers, GameObject obj)
	{
	}

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x1E62990", Offset = "0x1E60F90", VA = "0x181E62990")]
	protected void AddRenderersContainingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x1E62A80", Offset = "0x1E61080", VA = "0x181E62A80")]
	protected void AddRenderersMatchingName(List<Renderer> renderers, GameObject obj, string name)
	{
	}

	[Token(Token = "0x600154B")]
	[Address(RVA = "0x1E62BA0", Offset = "0x1E611A0", VA = "0x181E62BA0")]
	protected List<int> GetCustomSkinPartIds(Type t)
	{
		return null;
	}

	[Token(Token = "0x600154C")]
	[Address(RVA = "0x1E62CA0", Offset = "0x1E612A0", VA = "0x181E62CA0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600154D")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected BaseCustomSkinLoader()
	{
	}
}
