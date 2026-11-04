// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchView
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000B9")]
public class GisketchView
{
	[Token(Token = "0x40003CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GameObject> _elements;

	[Token(Token = "0x1700009B")]
	public GameObject Root
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public List<GisketchMotionTarget> MotionTargets
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public List<GisketchSearchEntry> SearchEntries
	{
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public bool LayoutDirty
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
	public void SetRoot(GameObject root)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0xACCA70", Offset = "0xACB070", VA = "0x180ACCA70")]
	public void MarkLayoutDirty()
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0xACCA60", Offset = "0xACB060", VA = "0x180ACCA60")]
	public void MarkLayoutSettled()
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x1908F40", Offset = "0x1907540", VA = "0x181908F40")]
	public void Register(GisketchNodeDefinition node, GameObject go, [Optional] GisketchMotionDefinition styleMotion)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x1908C00", Offset = "0x1907200", VA = "0x181908C00")]
	public GameObject Find(string id)
	{
		return null;
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x1909380", Offset = "0x1907980", VA = "0x181909380")]
	public void UnregisterSubtree(GameObject root)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x1908DE0", Offset = "0x19073E0", VA = "0x181908DE0")]
	private static bool IsSearchable(GisketchNodeDefinition node, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x1887A10", Offset = "0x1886010", VA = "0x181887A10")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x1908C90", Offset = "0x1907290", VA = "0x181908C90")]
	private static bool HasVisibleBinding(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x1908CD0", Offset = "0x19072D0", VA = "0x181908CD0")]
	private static bool IsInSubtree(GameObject value, GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x1909730", Offset = "0x1907D30", VA = "0x181909730")]
	public GisketchView()
	{
	}
}
