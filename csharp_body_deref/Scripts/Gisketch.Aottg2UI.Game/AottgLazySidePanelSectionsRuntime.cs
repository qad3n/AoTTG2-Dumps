// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime
// Update status: NEW in this game update
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

[Token(Token = "0x20002EC")]
internal sealed class AottgLazySidePanelSectionsRuntime : MonoBehaviour, IGisketchSectionContentProvider
{
	[Token(Token = "0x4000EEB")]
	public const string NodeType = "LazySidePanelSections";

	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x28")]
	private string[] _sectionIds;

	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition[] _sectionNodes;

	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x38")]
	private GisketchBuildContext _context;

	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x40")]
	private GisketchView _view;

	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0x48")]
	private readonly Dictionary<string, GameObject> _built;

	[Token(Token = "0x17000201")]
	public string Prefix
	{
		[Token(Token = "0x6001237")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x1E2B0C0", Offset = "0x1E296C0", VA = "0x181E2B0C0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x1E2B400", Offset = "0x1E29A00", VA = "0x181E2B400")]
	public static bool Select(GameObject source, string sectionId)
	{
		return default(bool);
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x1E2AEF0", Offset = "0x1E294F0", VA = "0x181E2AEF0")]
	public static bool Invalidate(GameObject root, string prefix, string sectionId, GisketchNodeDefinition replacement)
	{
		return default(bool);
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x1E2A550", Offset = "0x1E28B50", VA = "0x181E2A550")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x1E2B6E0", Offset = "0x1E29CE0", VA = "0x181E2B6E0")]
	private void Setup(GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x1E2B960", Offset = "0x1E29F60", VA = "0x181E2B960")]
	private void Start()
	{
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x1E2AB20", Offset = "0x1E29120", VA = "0x181E2AB20", Slot = "5")]
	public bool EnsureSection(string sectionId)
	{
		return default(bool);
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x1E2B080", Offset = "0x1E29680", VA = "0x181E2B080")]
	private void PrimeInitialSection()
	{
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x1E2AB20", Offset = "0x1E29120", VA = "0x181E2AB20")]
	private bool BuildSection(string sectionId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x1E2A9F0", Offset = "0x1E28FF0", VA = "0x181E2A9F0")]
	private bool BuildSection(string sectionId, bool settle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x1E2A6E0", Offset = "0x1E28CE0", VA = "0x181E2A6E0")]
	private bool BuildSectionCore(string sectionId, bool settle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x1E2B1C0", Offset = "0x1E297C0", VA = "0x181E2B1C0")]
	private bool ReplaceSection(string sectionId, GisketchNodeDefinition replacement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x1E2B7C0", Offset = "0x1E29DC0", VA = "0x181E2B7C0")]
	private void ShowOnly(string sectionId)
	{
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x1E2AE50", Offset = "0x1E29450", VA = "0x181E2AE50")]
	private int IndexOf(string sectionId)
	{
		return default(int);
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x1E2B610", Offset = "0x1E29C10", VA = "0x181E2B610")]
	private void Settle()
	{
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x1E2AD10", Offset = "0x1E29310", VA = "0x181E2AD10")]
	private static AottgLazySidePanelSectionsRuntime Find(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x1E2ABF0", Offset = "0x1E291F0", VA = "0x181E2ABF0")]
	private static AottgLazySidePanelSectionsRuntime Find(GameObject root, string prefix)
	{
		return null;
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x1E2AB30", Offset = "0x1E29130", VA = "0x181E2AB30")]
	private static void DestroyObject(GameObject go)
	{
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x1E2BA20", Offset = "0x1E2A020", VA = "0x181E2BA20")]
	public AottgLazySidePanelSectionsRuntime()
	{
	}
}
