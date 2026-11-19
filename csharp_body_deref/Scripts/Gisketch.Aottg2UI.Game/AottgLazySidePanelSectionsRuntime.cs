// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034A")]
internal sealed class AottgLazySidePanelSectionsRuntime : MonoBehaviour, IGisketchSectionContentProvider
{
	[Token(Token = "0x4001081")]
	public const string NodeType = "LazySidePanelSections";

	[Token(Token = "0x4001082")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4001083")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x4001084")]
	[FieldOffset(Offset = "0x28")]
	private string[] _sectionIds;

	[Token(Token = "0x4001085")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition[] _sectionNodes;

	[Token(Token = "0x4001086")]
	[FieldOffset(Offset = "0x38")]
	private GisketchBuildContext _context;

	[Token(Token = "0x4001087")]
	[FieldOffset(Offset = "0x40")]
	private GisketchView _view;

	[Token(Token = "0x4001088")]
	[FieldOffset(Offset = "0x48")]
	private readonly Dictionary<string, GameObject> _built;

	[Token(Token = "0x1700023E")]
	public string Prefix
	{
		[Token(Token = "0x600148D")]
		[Address(RVA = "0x5814C60", Offset = "0x5813C60", VA = "0x5814C60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x5814C70", Offset = "0x5813C70", VA = "0x5814C70")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x5814D60", Offset = "0x5813D60", VA = "0x5814D60")]
	public static bool Select(GameObject source, string sectionId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x5814FB0", Offset = "0x5813FB0", VA = "0x5814FB0")]
	public static bool Invalidate(GameObject root, string prefix, string sectionId, GisketchNodeDefinition replacement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x5815330", Offset = "0x5814330", VA = "0x5815330")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x5815410", Offset = "0x5814410", VA = "0x5815410")]
	private void Setup(GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x5815560", Offset = "0x5814560", VA = "0x5815560")]
	private void Start()
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x5815610", Offset = "0x5814610", VA = "0x5815610", Slot = "5")]
	public bool EnsureSection(string sectionId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x5815530", Offset = "0x5814530", VA = "0x5815530")]
	private void PrimeInitialSection()
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x5814FA0", Offset = "0x5813FA0", VA = "0x5814FA0")]
	private bool BuildSection(string sectionId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x5815620", Offset = "0x5814620", VA = "0x5815620")]
	private bool BuildSection(string sectionId, bool settle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x5815760", Offset = "0x5814760", VA = "0x5815760")]
	private bool BuildSectionCore(string sectionId, bool settle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x5815180", Offset = "0x5814180", VA = "0x5815180")]
	private bool ReplaceSection(string sectionId, GisketchNodeDefinition replacement)
	{
		return default(bool);
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x5815A00", Offset = "0x5814A00", VA = "0x5815A00")]
	private void ShowOnly(string sectionId)
	{
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x5815BC0", Offset = "0x5814BC0", VA = "0x5815BC0")]
	private int IndexOf(string sectionId)
	{
		return default(int);
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x5815C30", Offset = "0x5814C30", VA = "0x5815C30")]
	private void Settle()
	{
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x5814E30", Offset = "0x5813E30", VA = "0x5814E30")]
	private static AottgLazySidePanelSectionsRuntime Find(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x5815050", Offset = "0x5814050", VA = "0x5815050")]
	private static AottgLazySidePanelSectionsRuntime Find(GameObject root, string prefix)
	{
		return null;
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x5815D00", Offset = "0x5814D00", VA = "0x5815D00")]
	private static void DestroyObject(GameObject go)
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x5815DC0", Offset = "0x5814DC0", VA = "0x5815DC0")]
	public AottgLazySidePanelSectionsRuntime()
	{
	}
}
