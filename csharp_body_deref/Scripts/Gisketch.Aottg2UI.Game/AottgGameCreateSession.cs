// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateSession
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200024C")]
internal static class AottgGameCreateSession
{
	[Token(Token = "0x4000BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Experience> ExperiencesInternal;

	[Token(Token = "0x4000BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly SandboxGameCreateConfiguration SandboxConfiguration;

	[Token(Token = "0x4000BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<AottgSandboxField> SandboxFieldsInternal;

	[Token(Token = "0x4000BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static string[] _sandboxAddonNames;

	[Token(Token = "0x4000BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static bool _isMultiplayer;

	[Token(Token = "0x4000BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	private static bool _showSandboxVariableNames;

	[Token(Token = "0x4000BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22")]
	private static bool _showLockedSettings;

	[Token(Token = "0x4000BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23")]
	private static bool _titanSpawnPresetCustom;

	[Token(Token = "0x4000BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly string[] SandboxSectionsInternal;

	[Token(Token = "0x4000C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly string[] CategoryOrder;

	[Token(Token = "0x4000C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static readonly HashSet<string> MultiplayerMiscIds;

	[Token(Token = "0x17000169")]
	public static AottgGameCreateLaunchContext LaunchContext
	{
		[Token(Token = "0x6000D81")]
		[Address(RVA = "0x23F3AE0", Offset = "0x23F20E0", VA = "0x1823F3AE0")]
		[CompilerGenerated]
		get
		{
			return default(AottgGameCreateLaunchContext);
		}
		[Token(Token = "0x6000D82")]
		[Address(RVA = "0x23F43A0", Offset = "0x23F29A0", VA = "0x1823F43A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public static InGameSet Working
	{
		[Token(Token = "0x6000D83")]
		[Address(RVA = "0x23F4270", Offset = "0x23F2870", VA = "0x1823F4270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x23F4700", Offset = "0x23F2D00", VA = "0x1823F4700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public static string Category
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x23F37E0", Offset = "0x23F1DE0", VA = "0x1823F37E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x23F42C0", Offset = "0x23F28C0", VA = "0x1823F42C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700016C")]
	public static string Subcategory
	{
		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x23F40C0", Offset = "0x23F26C0", VA = "0x1823F40C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x23F4690", Offset = "0x23F2C90", VA = "0x1823F4690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700016D")]
	public static Experience Experience
	{
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x23F3830", Offset = "0x23F1E30", VA = "0x1823F3830")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x23F4330", Offset = "0x23F2930", VA = "0x1823F4330")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700016E")]
	public static ExperienceRuleResult RuleResult
	{
		[Token(Token = "0x6000D8B")]
		[Address(RVA = "0x23F3C80", Offset = "0x23F2280", VA = "0x1823F3C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x23F4470", Offset = "0x23F2A70", VA = "0x1823F4470")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700016F")]
	public static string LoadError
	{
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x23F3B30", Offset = "0x23F2130", VA = "0x1823F3B30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x23F4400", Offset = "0x23F2A00", VA = "0x1823F4400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public static string SandboxSection
	{
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x23F3D70", Offset = "0x23F2370", VA = "0x1823F3D70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x23F44E0", Offset = "0x23F2AE0", VA = "0x1823F44E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public static bool ShowRoomSettings
	{
		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x23F4020", Offset = "0x23F2620", VA = "0x1823F4020")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x23F4630", Offset = "0x23F2C30", VA = "0x1823F4630")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public static bool ShowFavorites
	{
		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x23F3F80", Offset = "0x23F2580", VA = "0x1823F3F80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D94")]
		[Address(RVA = "0x23F45D0", Offset = "0x23F2BD0", VA = "0x1823F45D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000173")]
	public static string SelectedPresetName
	{
		[Token(Token = "0x6000D95")]
		[Address(RVA = "0x23F3E10", Offset = "0x23F2410", VA = "0x1823F3E10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x23F4550", Offset = "0x23F2B50", VA = "0x1823F4550")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public static bool ShowSandboxVariableNames
	{
		[Token(Token = "0x6000D97")]
		[Address(RVA = "0x23F4070", Offset = "0x23F2670", VA = "0x1823F4070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public static bool ShowLockedSettings
	{
		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x23F3FD0", Offset = "0x23F25D0", VA = "0x1823F3FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000176")]
	public static string MapDescription
	{
		[Token(Token = "0x6000D99")]
		[Address(RVA = "0x23F3B80", Offset = "0x23F2180", VA = "0x1823F3B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000177")]
	public static string ModeDescription
	{
		[Token(Token = "0x6000D9A")]
		[Address(RVA = "0x23F3BE0", Offset = "0x23F21E0", VA = "0x1823F3BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public static bool IsSandbox
	{
		[Token(Token = "0x6000D9B")]
		[Address(RVA = "0x23F39D0", Offset = "0x23F1FD0", VA = "0x1823F39D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000179")]
	public static bool IsMultiplayer
	{
		[Token(Token = "0x6000D9C")]
		[Address(RVA = "0x23F3980", Offset = "0x23F1F80", VA = "0x1823F3980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	public static bool IsConfigured
	{
		[Token(Token = "0x6000D9D")]
		[Address(RVA = "0x23F38D0", Offset = "0x23F1ED0", VA = "0x1823F38D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public static bool CanStart
	{
		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x23F36E0", Offset = "0x23F1CE0", VA = "0x1823F36E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017C")]
	public static IReadOnlyList<Experience> Experiences
	{
		[Token(Token = "0x6000D9F")]
		[Address(RVA = "0x23F3880", Offset = "0x23F1E80", VA = "0x1823F3880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017D")]
	public static IReadOnlyList<AottgSandboxField> SandboxFields
	{
		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x23F3D20", Offset = "0x23F2320", VA = "0x1823F3D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	public static string[] SandboxSections
	{
		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x23F3DC0", Offset = "0x23F23C0", VA = "0x1823F3DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017F")]
	public static string[] SandboxAddonNames
	{
		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x23F3CD0", Offset = "0x23F22D0", VA = "0x1823F3CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000180")]
	public static IReadOnlyList<AottgSandboxField> MultiplayerFields
	{
		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x23F3C40", Offset = "0x23F2240", VA = "0x1823F3C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public static string SelectedVariant
	{
		[Token(Token = "0x6000DA4")]
		[Address(RVA = "0x23F3E70", Offset = "0x23F2470", VA = "0x1823F3E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	public static string[] VariantNames
	{
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x23F4110", Offset = "0x23F2710", VA = "0x1823F4110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x23E6110", Offset = "0x23E4710", VA = "0x1823E6110")]
	public static void Begin(AottgGameCreateLaunchContext launchContext, bool multiplayer = false)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x23E7980", Offset = "0x23E5F80", VA = "0x1823E7980")]
	private static void CacheExperiencePreview(string previewPath)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x23E7C70", Offset = "0x23E6270", VA = "0x1823E7C70")]
	private static void CachePreviewSprite(string previewPath)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x23E7A80", Offset = "0x23E6080", VA = "0x1823E7A80")]
	public static void CacheExperiencePreviews(IEnumerable<Experience> experiences)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x23E7EE0", Offset = "0x23E64E0", VA = "0x1823E7EE0")]
	public static string[] Categories()
	{
		return null;
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x23F13E0", Offset = "0x23EF9E0", VA = "0x1823F13E0")]
	public static string[] Subcategories()
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x23EA820", Offset = "0x23E8E20", VA = "0x1823EA820")]
	public static Experience[] CurrentExperiences()
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x23EA8F0", Offset = "0x23E8EF0", VA = "0x1823EA8F0")]
	public static Experience[] ExperiencesIn(string category, string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x23F1350", Offset = "0x23EF950", VA = "0x1823F1350")]
	private static Experience SingleExperience(string category, string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x23E8280", Offset = "0x23E6880", VA = "0x1823E8280")]
	public static string CategoryPreview(string category)
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x23F1780", Offset = "0x23EFD80", VA = "0x1823F1780")]
	public static string SubcategoryPreview(string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x23F2F40", Offset = "0x23F1540", VA = "0x1823F2F40")]
	public static ExperienceRuleField[] VisibleFields()
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x23EC030", Offset = "0x23EA630", VA = "0x1823EC030")]
	public static ExperienceRuleField[] LockedFields()
	{
		return null;
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x23E83A0", Offset = "0x23E69A0", VA = "0x1823E83A0")]
	public static bool ChangeField(int index, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x23EEE40", Offset = "0x23ED440", VA = "0x1823EEE40")]
	public static void SelectCategory(string category)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x23EFD70", Offset = "0x23EE370", VA = "0x1823EFD70")]
	public static void SelectSubcategory(string subcategory)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x23EF3C0", Offset = "0x23ED9C0", VA = "0x1823EF3C0")]
	public static void SelectExperience(Experience experience)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x23EFF60", Offset = "0x23EE560", VA = "0x1823EFF60")]
	public static bool SelectVariant(string variant)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x23E9050", Offset = "0x23E7650", VA = "0x1823E9050")]
	private static void ConfigureExperience(Experience experience, InGameSet persisted, [Optional] string variant, bool changingVariant = false)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x23EF6C0", Offset = "0x23EDCC0", VA = "0x1823EF6C0")]
	public static void SelectSandbox()
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x23EF500", Offset = "0x23EDB00", VA = "0x1823EF500")]
	public static bool SelectSandboxSection(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x23F0630", Offset = "0x23EEC30", VA = "0x1823F0630")]
	public static void SetShowSandboxVariableNames(bool show)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x23F05D0", Offset = "0x23EEBD0", VA = "0x1823F05D0")]
	public static void SetShowLockedSettings(bool show)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x23F18A0", Offset = "0x23EFEA0", VA = "0x1823F18A0")]
	public static string TitanSpawnPreset()
	{
		return null;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x23F08A0", Offset = "0x23EEEA0", VA = "0x1823F08A0")]
	public static void SetTitanSpawnPreset(string preset)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x23F1BB0", Offset = "0x23F01B0", VA = "0x1823F1BB0")]
	public static float[] TitanSpawnProbabilities()
	{
		return null;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x23F0C70", Offset = "0x23EF270", VA = "0x1823F0C70")]
	public static void SetTitanSpawnProbability(int index, float value)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x23EE320", Offset = "0x23EC920", VA = "0x1823EE320")]
	public static void ResetTitanSpawnProbabilities()
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x23E5740", Offset = "0x23E3D40", VA = "0x1823E5740")]
	public static void AutofillTitanSpawnProbabilities()
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x23F06B0", Offset = "0x23EECB0", VA = "0x1823F06B0")]
	public static void SetTitanHealthEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x23F1F70", Offset = "0x23F0570", VA = "0x1823F1F70")]
	private static FloatSetting[] TitanSpawnSettings()
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x23F0B40", Offset = "0x23EF140", VA = "0x1823F0B40")]
	private static void SetTitanSpawnProbabilities(float[] values)
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x23EC250", Offset = "0x23EA850", VA = "0x1823EC250")]
	private static bool Matches(float[] actual, params float[] expected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x23E8C50", Offset = "0x23E7250", VA = "0x1823E8C50")]
	public static bool ChangeSandboxField(int index, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x23E89B0", Offset = "0x23E6FB0", VA = "0x1823E89B0")]
	public static bool ChangeMultiplayerField(int index, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x23F27F0", Offset = "0x23F0DF0", VA = "0x1823F27F0")]
	public static bool ToggleSandboxAddon(int index, bool enabled)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x23EB9F0", Offset = "0x23E9FF0", VA = "0x1823EB9F0")]
	public static bool IsSandboxAddonSelected(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x23EDE10", Offset = "0x23EC410", VA = "0x1823EDE10")]
	public static void ReplaceSandboxWorking(InGameSet settings)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x23EDA60", Offset = "0x23EC060", VA = "0x1823EDA60")]
	public static void RefreshSandboxContent()
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x23EAEF0", Offset = "0x23E94F0", VA = "0x1823EAEF0")]
	public static string[] FieldOptions(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x23EE610", Offset = "0x23ECC10", VA = "0x1823EE610")]
	public static string[] SandboxMapNames()
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x23ECEE0", Offset = "0x23EB4E0", VA = "0x1823ECEE0")]
	public static string[] PresetNames()
	{
		return null;
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x23EAA30", Offset = "0x23E9030", VA = "0x1823EAA30")]
	private static string FavoriteExperienceId(Experience experience)
	{
		return null;
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x23EB840", Offset = "0x23E9E40", VA = "0x1823EB840")]
	public static bool IsFavorite(Experience experience)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x23EB730", Offset = "0x23E9D30", VA = "0x1823EB730")]
	public static bool IsFavoritePreset(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x23EAB60", Offset = "0x23E9160", VA = "0x1823EAB60")]
	public static Experience[] FavoriteExperiences()
	{
		return null;
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x23EAC30", Offset = "0x23E9230", VA = "0x1823EAC30")]
	public static string[] FavoritePresetNames()
	{
		return null;
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x23F2640", Offset = "0x23F0C40", VA = "0x1823F2640")]
	public static void ToggleFavorite(Experience experience)
	{
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x23F23D0", Offset = "0x23F09D0", VA = "0x1823F23D0")]
	public static void ToggleFavoritePreset(string name)
	{
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x23F2460", Offset = "0x23F0A60", VA = "0x1823F2460")]
	private static void ToggleFavorite(ListSetting<StringSetting> favorites, string id, StringComparison comparison)
	{
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x23ECD80", Offset = "0x23EB380", VA = "0x1823ECD80")]
	public static void OpenFavorites()
	{
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x23EBDA0", Offset = "0x23EA3A0", VA = "0x1823EBDA0")]
	public static bool LoadPreset(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x23EE8F0", Offset = "0x23ECEF0", VA = "0x1823EE8F0")]
	public static bool SavePreset(string name, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x23E5AA0", Offset = "0x23E40A0", VA = "0x1823E5AA0")]
	public static bool Back()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x23EC840", Offset = "0x23EAE40", VA = "0x1823EC840")]
	public static void NavigateRoot()
	{
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x23EC6E0", Offset = "0x23EACE0", VA = "0x1823EC6E0")]
	public static bool NavigateCategory()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x23EC8F0", Offset = "0x23EAEF0", VA = "0x1823EC8F0")]
	public static bool NavigateSubcategory()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x23ECE10", Offset = "0x23EB410", VA = "0x1823ECE10")]
	public static void OpenRoomSettings()
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x23ECCC0", Offset = "0x23EB2C0", VA = "0x1823ECCC0")]
	public static void OpenExperiences()
	{
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x23EDAF0", Offset = "0x23EC0F0", VA = "0x1823EDAF0")]
	private static void RefreshSandbox()
	{
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x23ED100", Offset = "0x23EB700", VA = "0x1823ED100")]
	private static void RebuildSandboxFields()
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x23E4A30", Offset = "0x23E3030", VA = "0x1823E4A30")]
	private static void AddContainerFields(string prefix, BaseSettingsContainer container, [Optional] HashSet<string> excluded)
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x23E6CB0", Offset = "0x23E52B0", VA = "0x1823E6CB0")]
	private static IReadOnlyList<AottgSandboxField> BuildMultiplayerFields()
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x23E5060", Offset = "0x23E3660", VA = "0x1823E5060")]
	private static void AddDynamicFields(string prefix, Dictionary<string, BaseSetting> settings)
	{
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x23E55A0", Offset = "0x23E3BA0", VA = "0x1823E55A0")]
	private static void AddSandboxField(string id, string label, BaseSetting setting, [Optional] string[] options, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x23F0E30", Offset = "0x23EF430", VA = "0x1823F0E30")]
	private static bool SetValue(AottgSandboxField field, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x23EBB80", Offset = "0x23EA180", VA = "0x1823EBB80")]
	private static bool IsSupported(BaseSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x23EB950", Offset = "0x23E9F50", VA = "0x1823EB950")]
	private static bool IsMetadataField(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x23EC360", Offset = "0x23EA960", VA = "0x1823EC360")]
	private static string[] MetadataOptions(Dictionary<string, BaseSetting> settings, string key)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x23EC610", Offset = "0x23EAC10", VA = "0x1823EC610")]
	private static string MetadataString(Dictionary<string, BaseSetting> settings, string key)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x23EBCB0", Offset = "0x23EA2B0", VA = "0x1823EBCB0")]
	private static string Label(string value)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x23E8FC0", Offset = "0x23E75C0", VA = "0x1823E8FC0")]
	private static InGameSet Clone(InGameSet source)
	{
		return null;
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x23EA390", Offset = "0x23E8990", VA = "0x1823EA390")]
	private static InGameSet CreateOfficialWorkingSet([Optional] InGameSet source)
	{
		return null;
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x23EE3A0", Offset = "0x23EC9A0", VA = "0x1823EE3A0")]
	private static void RestoreEditableValues(ExperienceRuleResult result, InGameSet persisted, [Optional] HashSet<string> resetIds, bool contentOnly = false)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x23F2B60", Offset = "0x23F1160", VA = "0x1823F2B60")]
	private static bool TryResolveSetting(InGameSet settings, string id, out BaseSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x23F11B0", Offset = "0x23EF7B0", VA = "0x1823F11B0")]
	private static object SettingValue(BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x23EA320", Offset = "0x23E8920", VA = "0x1823EA320")]
	private static void CopySettingValue(BaseSetting target, BaseSetting source)
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x23F0360", Offset = "0x23EE960", VA = "0x1823F0360")]
	private static void SetSettingValue(BaseSetting setting, object value)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x23F2BD0", Offset = "0x23F11D0", VA = "0x1823F2BD0")]
	private static void ValidateContentOptions(ExperienceRuleResult result)
	{
	}
}
