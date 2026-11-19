// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchView
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BF")]
public class GisketchView
{
	[Token(Token = "0x40003F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GameObject> _elements;

	[Token(Token = "0x1700009B")]
	public GameObject Root
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x5293710", Offset = "0x5292710", VA = "0x5293710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x5293720", Offset = "0x5292720", VA = "0x5293720")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public List<GisketchMotionTarget> MotionTargets
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x5293730", Offset = "0x5292730", VA = "0x5293730")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public List<GisketchSearchEntry> SearchEntries
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x5293740", Offset = "0x5292740", VA = "0x5293740")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public bool LayoutDirty
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x5293750", Offset = "0x5292750", VA = "0x5293750")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x5293760", Offset = "0x5292760", VA = "0x5293760")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x5293770", Offset = "0x5292770", VA = "0x5293770")]
	public void SetRoot(GameObject root)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x5293780", Offset = "0x5292780", VA = "0x5293780")]
	public void MarkLayoutDirty()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x5293790", Offset = "0x5292790", VA = "0x5293790")]
	public void MarkLayoutSettled()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x52937A0", Offset = "0x52927A0", VA = "0x52937A0")]
	public void Register(GisketchNodeDefinition node, GameObject go, [Optional] GisketchMotionDefinition styleMotion)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x5293DE0", Offset = "0x5292DE0", VA = "0x5293DE0")]
	public GameObject Find(string id)
	{
		return null;
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x5293E70", Offset = "0x5292E70", VA = "0x5293E70")]
	public void UnregisterSubtree(GameObject root)
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x5293AA0", Offset = "0x5292AA0", VA = "0x5293AA0")]
	private static bool IsSearchable(GisketchNodeDefinition node, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x5293C30", Offset = "0x5292C30", VA = "0x5293C30")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x5293C00", Offset = "0x5292C00", VA = "0x5293C00")]
	private static bool HasVisibleBinding(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x52942E0", Offset = "0x52932E0", VA = "0x52942E0")]
	private static bool IsInSubtree(GameObject value, GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x52943D0", Offset = "0x52933D0", VA = "0x52943D0")]
	public GisketchView()
	{
	}
}
