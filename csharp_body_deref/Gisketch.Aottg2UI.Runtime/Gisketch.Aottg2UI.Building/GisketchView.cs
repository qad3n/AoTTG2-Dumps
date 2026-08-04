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

[Token(Token = "0x200009B")]
public class GisketchView
{
	[Token(Token = "0x4000326")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GameObject> _elements;

	[Token(Token = "0x1700006F")]
	public GameObject Root
	{
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x3A89550", Offset = "0x3A89550", VA = "0x3A89550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x3A89560", Offset = "0x3A89560", VA = "0x3A89560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public List<GisketchMotionTarget> MotionTargets
	{
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x3A89570", Offset = "0x3A89570", VA = "0x3A89570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public List<GisketchSearchEntry> SearchEntries
	{
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x3A89580", Offset = "0x3A89580", VA = "0x3A89580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x3A89590", Offset = "0x3A89590", VA = "0x3A89590")]
	public void SetRoot(GameObject root)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x3A895A0", Offset = "0x3A895A0", VA = "0x3A895A0")]
	public void Register(GisketchNodeDefinition node, GameObject go, [Optional] GisketchMotionDefinition styleMotion)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x3A89BE0", Offset = "0x3A89BE0", VA = "0x3A89BE0")]
	public GameObject Find(string id)
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x3A898A0", Offset = "0x3A898A0", VA = "0x3A898A0")]
	private static bool IsSearchable(GisketchNodeDefinition node, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x3A89A30", Offset = "0x3A89A30", VA = "0x3A89A30")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x3A89A00", Offset = "0x3A89A00", VA = "0x3A89A00")]
	private static bool HasVisibleBinding(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x3A89C70", Offset = "0x3A89C70", VA = "0x3A89C70")]
	public GisketchView()
	{
	}
}
