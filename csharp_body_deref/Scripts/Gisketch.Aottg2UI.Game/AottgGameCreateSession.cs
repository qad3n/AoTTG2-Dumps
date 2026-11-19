// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateSession
// Update status: CHANGED in this game update
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

[Token(Token = "0x200026E")]
internal static class AottgGameCreateSession
{
	[Token(Token = "0x4000C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Experience> ExperiencesInternal;

	[Token(Token = "0x4000C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly SandboxGameCreateConfiguration SandboxConfiguration;

	[Token(Token = "0x4000C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<AottgSandboxField> SandboxFieldsInternal;

	[Token(Token = "0x4000C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static string[] _sandboxAddonNames;

	[Token(Token = "0x4000C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static bool _isMultiplayer;

	[Token(Token = "0x4000C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	private static bool _showSandboxVariableNames;

	[Token(Token = "0x4000C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22")]
	private static bool _showLockedSettings;

	[Token(Token = "0x4000C9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23")]
	private static bool _titanSpawnPresetCustom;

	[Token(Token = "0x4000C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static AottgGameCreateConfigurationMode _configurationMode;

	[Token(Token = "0x4000C9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly string[] SandboxSectionsInternal;

	[Token(Token = "0x4000C9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly string[] CategoryOrder;

	[Token(Token = "0x4000CAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static readonly HashSet<string> MultiplayerMiscIds;

	[Token(Token = "0x4000CAB")]
	private const string EnabledSuffix = "Enabled";

	[Token(Token = "0x4000CAC")]
	private const string ModeFieldPrefix = "mode.";

	[Token(Token = "0x4000CAD")]
	private const string ModeLabelKeyPrefix = "CreateGamePopup.Mode.";

	[Token(Token = "0x4000CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static readonly Dictionary<string, string> FieldLabelKeys;

	[Token(Token = "0x17000174")]
	public static AottgGameCreateLaunchContext LaunchContext
	{
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x5797230", Offset = "0x5796230", VA = "0x5797230")]
		[CompilerGenerated]
		get
		{
			return default(AottgGameCreateLaunchContext);
		}
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x57972A0", Offset = "0x57962A0", VA = "0x57972A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public static InGameSet Working
	{
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x57972F0", Offset = "0x57962F0", VA = "0x57972F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E70")]
		[Address(RVA = "0x5797360", Offset = "0x5796360", VA = "0x5797360")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public static string Category
	{
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x57973C0", Offset = "0x57963C0", VA = "0x57973C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x5797430", Offset = "0x5796430", VA = "0x5797430")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000177")]
	public static string Subcategory
	{
		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x5797490", Offset = "0x5796490", VA = "0x5797490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x5797500", Offset = "0x5796500", VA = "0x5797500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000178")]
	public static Experience Experience
	{
		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x5797560", Offset = "0x5796560", VA = "0x5797560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E76")]
		[Address(RVA = "0x57975D0", Offset = "0x57965D0", VA = "0x57975D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000179")]
	public static ExperienceRuleResult RuleResult
	{
		[Token(Token = "0x6000E77")]
		[Address(RVA = "0x5797630", Offset = "0x5796630", VA = "0x5797630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E78")]
		[Address(RVA = "0x57976A0", Offset = "0x57966A0", VA = "0x57976A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700017A")]
	public static string LoadError
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x5797700", Offset = "0x5796700", VA = "0x5797700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x5797770", Offset = "0x5796770", VA = "0x5797770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700017B")]
	public static string SandboxSection
	{
		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x57977D0", Offset = "0x57967D0", VA = "0x57977D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x5797840", Offset = "0x5796840", VA = "0x5797840")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700017C")]
	public static bool ShowRoomSettings
	{
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x57978A0", Offset = "0x57968A0", VA = "0x57978A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x5797910", Offset = "0x5796910", VA = "0x5797910")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	public static bool ShowFavorites
	{
		[Token(Token = "0x6000E7F")]
		[Address(RVA = "0x5797960", Offset = "0x5796960", VA = "0x5797960")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x57979D0", Offset = "0x57969D0", VA = "0x57979D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	public static string SelectedPresetName
	{
		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x5797A20", Offset = "0x5796A20", VA = "0x5797A20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x5797A90", Offset = "0x5796A90", VA = "0x5797A90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public static bool ShowSandboxVariableNames
	{
		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x5797AF0", Offset = "0x5796AF0", VA = "0x5797AF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	public static bool ShowLockedSettings
	{
		[Token(Token = "0x6000E84")]
		[Address(RVA = "0x5797B60", Offset = "0x5796B60", VA = "0x5797B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000181")]
	public static string MapDescription
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x57953B0", Offset = "0x57943B0", VA = "0x57953B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	public static string ModeDescription
	{
		[Token(Token = "0x6000E86")]
		[Address(RVA = "0x5795430", Offset = "0x5794430", VA = "0x5795430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000183")]
	public static bool IsSandbox
	{
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x577A250", Offset = "0x5779250", VA = "0x577A250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000184")]
	public static bool IsMultiplayer
	{
		[Token(Token = "0x6000E88")]
		[Address(RVA = "0x5797BD0", Offset = "0x5796BD0", VA = "0x5797BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	public static bool IsConfigured
	{
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x578E120", Offset = "0x578D120", VA = "0x578E120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000186")]
	public static bool CanStart
	{
		[Token(Token = "0x6000E8A")]
		[Address(RVA = "0x578E1D0", Offset = "0x578D1D0", VA = "0x578E1D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000187")]
	public static IReadOnlyList<Experience> Experiences
	{
		[Token(Token = "0x6000E8B")]
		[Address(RVA = "0x5797C40", Offset = "0x5796C40", VA = "0x5797C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000188")]
	public static IReadOnlyList<AottgSandboxField> SandboxFields
	{
		[Token(Token = "0x6000E8C")]
		[Address(RVA = "0x5797CB0", Offset = "0x5796CB0", VA = "0x5797CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public static string[] SandboxSections
	{
		[Token(Token = "0x6000E8D")]
		[Address(RVA = "0x5797D20", Offset = "0x5796D20", VA = "0x5797D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	public static string[] SandboxAddonNames
	{
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x5797D90", Offset = "0x5796D90", VA = "0x5797D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018B")]
	public static IReadOnlyList<AottgSandboxField> MultiplayerFields
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x57865C0", Offset = "0x57855C0", VA = "0x57865C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018C")]
	public static string SelectedVariant
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x5788DF0", Offset = "0x5787DF0", VA = "0x5788DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018D")]
	public static string[] VariantNames
	{
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x5788C20", Offset = "0x5787C20", VA = "0x5788C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x57987E0", Offset = "0x57977E0", VA = "0x57987E0")]
	public static void Begin(AottgGameCreateLaunchContext launchContext, bool multiplayer = false)
	{
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x579B580", Offset = "0x579A580", VA = "0x579B580")]
	public static void SaveForNextRound()
	{
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x579B710", Offset = "0x579A710", VA = "0x579B710")]
	private static void CacheExperiencePreview(string previewPath)
	{
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x579B810", Offset = "0x579A810", VA = "0x579B810")]
	private static void CachePreviewSprite(string previewPath)
	{
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x577D770", Offset = "0x577C770", VA = "0x577D770")]
	public static void CacheExperiencePreviews(IEnumerable<Experience> experiences)
	{
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x577C850", Offset = "0x577B850", VA = "0x577C850")]
	public static string[] Categories()
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x577CE00", Offset = "0x577BE00", VA = "0x577CE00")]
	public static string[] Subcategories()
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x577DCF0", Offset = "0x577CCF0", VA = "0x577DCF0")]
	public static Experience[] CurrentExperiences()
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x577D640", Offset = "0x577C640", VA = "0x577D640")]
	public static Experience[] ExperiencesIn(string category, string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x579BA40", Offset = "0x579AA40", VA = "0x579BA40")]
	private static Experience SingleExperience(string category, string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x579BAB0", Offset = "0x579AAB0", VA = "0x579BAB0")]
	public static string CategoryPreview(string category)
	{
		return null;
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x579BBD0", Offset = "0x579ABD0", VA = "0x579BBD0")]
	public static string SubcategoryPreview(string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x5789360", Offset = "0x5788360", VA = "0x5789360")]
	public static ExperienceRuleField[] VisibleFields()
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x5787200", Offset = "0x5786200", VA = "0x5787200")]
	public static ExperienceRuleField[] LockedFields()
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x579BCF0", Offset = "0x579ACF0", VA = "0x579BCF0")]
	public static bool ChangeField(int index, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x579C370", Offset = "0x579B370", VA = "0x579C370")]
	public static void SelectCategory(string category)
	{
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x579C7E0", Offset = "0x579B7E0", VA = "0x579C7E0")]
	public static void SelectSubcategory(string subcategory)
	{
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x578FD50", Offset = "0x578ED50", VA = "0x578FD50")]
	public static void SelectExperience(Experience experience)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x578E4D0", Offset = "0x578D4D0", VA = "0x578E4D0")]
	public static bool SelectVariant(string variant)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x5799C50", Offset = "0x5798C50", VA = "0x5799C50")]
	private static void ConfigureExperience(Experience experience, InGameSet persisted, [Optional] string variant, bool changingVariant = false)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x579D5C0", Offset = "0x579C5C0", VA = "0x579D5C0")]
	public static void SelectSandbox()
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x578AF50", Offset = "0x5789F50", VA = "0x578AF50")]
	public static bool SelectSandboxSection(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x578BBC0", Offset = "0x578ABC0", VA = "0x578BBC0")]
	public static void SetShowSandboxVariableNames(bool show)
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x579EE70", Offset = "0x579DE70", VA = "0x579EE70")]
	public static void SetShowLockedSettings(bool show)
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x578C470", Offset = "0x578B470", VA = "0x578C470")]
	public static string TitanSpawnPreset()
	{
		return null;
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x578C8D0", Offset = "0x578B8D0", VA = "0x578C8D0")]
	public static void SetTitanSpawnPreset(string preset)
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x579EEC0", Offset = "0x579DEC0", VA = "0x579EEC0")]
	public static float[] TitanSpawnProbabilities()
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x579F5C0", Offset = "0x579E5C0", VA = "0x579F5C0")]
	public static void SetTitanSpawnProbability(int index, float value)
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x579FCD0", Offset = "0x579ECD0", VA = "0x579FCD0")]
	public static void ResetTitanSpawnProbabilities()
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x579FD40", Offset = "0x579ED40", VA = "0x579FD40")]
	public static void AutofillTitanSpawnProbabilities()
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x57A00C0", Offset = "0x579F0C0", VA = "0x57A00C0")]
	public static void SetTitanHealthEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x579F830", Offset = "0x579E830", VA = "0x579F830")]
	private static FloatSetting[] TitanSpawnSettings()
	{
		return null;
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x579F470", Offset = "0x579E470", VA = "0x579F470")]
	private static void SetTitanSpawnProbabilities(float[] values)
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x579F360", Offset = "0x579E360", VA = "0x579F360")]
	private static bool Matches(float[] actual, params float[] expected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x57930A0", Offset = "0x57920A0", VA = "0x57930A0")]
	public static bool ChangeSandboxField(int index, string value, [Optional] string mapCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x57A06A0", Offset = "0x579F6A0", VA = "0x57A06A0")]
	public static bool ChangeMultiplayerField(int index, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x57A0A40", Offset = "0x579FA40", VA = "0x57A0A40")]
	public static bool ToggleSandboxAddon(int index, bool enabled)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x5786000", Offset = "0x5785000", VA = "0x5786000")]
	public static bool IsSandboxAddonSelected(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x57A0EC0", Offset = "0x579FEC0", VA = "0x57A0EC0")]
	public static void ReplaceSandboxWorking(InGameSet settings)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x57A14D0", Offset = "0x57A04D0", VA = "0x57A14D0")]
	public static void RefreshSandboxContent()
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x5780380", Offset = "0x577F380", VA = "0x5780380")]
	public static string[] FieldOptions(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x57A1820", Offset = "0x57A0820", VA = "0x57A1820")]
	public static string[] SandboxMapNames()
	{
		return null;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x57A1B90", Offset = "0x57A0B90", VA = "0x57A1B90")]
	public static string[] PresetNames()
	{
		return null;
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x57A1E00", Offset = "0x57A0E00", VA = "0x57A1E00")]
	public static string[] CustomPresetNames()
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x57A2260", Offset = "0x57A1260", VA = "0x57A2260")]
	private static string FavoriteExperienceId(Experience experience)
	{
		return null;
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x5790F40", Offset = "0x578FF40", VA = "0x5790F40")]
	public static bool IsFavorite(Experience experience)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x578B960", Offset = "0x578A960", VA = "0x578B960")]
	public static bool IsFavoritePreset(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x577E1A0", Offset = "0x577D1A0", VA = "0x577E1A0")]
	public static Experience[] FavoriteExperiences()
	{
		return null;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x577E270", Offset = "0x577D270", VA = "0x577E270")]
	public static string[] FavoritePresetNames()
	{
		return null;
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x57910D0", Offset = "0x57900D0", VA = "0x57910D0")]
	public static void ToggleFavorite(Experience experience)
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x5791C10", Offset = "0x5790C10", VA = "0x5791C10")]
	public static void ToggleFavoritePreset(string name)
	{
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x57A23A0", Offset = "0x57A13A0", VA = "0x57A23A0")]
	private static void ToggleFavorite(ListSetting<StringSetting> favorites, string id, StringComparison comparison)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x57A2590", Offset = "0x57A1590", VA = "0x57A2590")]
	public static void OpenFavorites()
	{
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x578FF40", Offset = "0x578EF40", VA = "0x578FF40")]
	public static bool LoadPreset(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x57A26B0", Offset = "0x57A16B0", VA = "0x57A26B0")]
	public static bool SavePreset(string name, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x57A2D40", Offset = "0x57A1D40", VA = "0x57A2D40")]
	public static bool DeletePreset(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x57A30B0", Offset = "0x57A20B0", VA = "0x57A30B0")]
	public static bool Back()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x57A3CC0", Offset = "0x57A2CC0", VA = "0x57A3CC0")]
	public static void NavigateRoot()
	{
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x57A3D80", Offset = "0x57A2D80", VA = "0x57A3D80")]
	public static bool NavigateCategory()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x57A3F60", Offset = "0x57A2F60", VA = "0x57A3F60")]
	public static bool NavigateSubcategory()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x57A4570", Offset = "0x57A3570", VA = "0x57A4570")]
	public static void OpenRoomSettings()
	{
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x57A4690", Offset = "0x57A3690", VA = "0x57A4690")]
	public static void OpenExperiences()
	{
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x57998C0", Offset = "0x57988C0", VA = "0x57998C0")]
	private static void RefreshSandbox()
	{
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x579E170", Offset = "0x579D170", VA = "0x579E170")]
	private static void RebuildSandboxFields()
	{
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x57A5080", Offset = "0x57A4080", VA = "0x57A5080")]
	private static void AddContainerFields(string prefix, BaseSettingsContainer container, [Optional] HashSet<string> excluded)
	{
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x578A5F0", Offset = "0x57895F0", VA = "0x578A5F0")]
	public static string[] SettingOptions(string id)
	{
		return null;
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x5786E90", Offset = "0x5785E90", VA = "0x5786E90")]
	public static string[] TitanHealthOptions()
	{
		return null;
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x5786B20", Offset = "0x5785B20", VA = "0x5786B20")]
	public static string[] VoiceChatOptions()
	{
		return null;
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x5785780", Offset = "0x5784780", VA = "0x5785780")]
	public static string FieldLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x5789E50", Offset = "0x5788E50", VA = "0x5789E50")]
	public static string FieldDescription(string id)
	{
		return null;
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x57A5960", Offset = "0x57A4960", VA = "0x57A5960")]
	private static string DescriptionText(string key)
	{
		return null;
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x57A5730", Offset = "0x57A4730", VA = "0x57A5730")]
	private static string FieldLabelKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x5797E00", Offset = "0x5796E00", VA = "0x5797E00")]
	private static IReadOnlyList<AottgSandboxField> BuildMultiplayerFields()
	{
		return null;
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x57A49E0", Offset = "0x57A39E0", VA = "0x57A49E0")]
	private static void AddDynamicFields(string prefix, Dictionary<string, BaseSetting> settings)
	{
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x57A4860", Offset = "0x57A3860", VA = "0x57A4860")]
	private static void AddSandboxField(string id, string label, BaseSetting setting, [Optional] string[] options, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x57A0360", Offset = "0x579F360", VA = "0x57A0360")]
	private static bool SetValue(AottgSandboxField field, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x57A5520", Offset = "0x57A4520", VA = "0x57A5520")]
	private static bool IsSupported(BaseSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x57A5AB0", Offset = "0x57A4AB0", VA = "0x57A5AB0")]
	public static bool IsMetadataField(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x57A1570", Offset = "0x57A0570", VA = "0x57A1570")]
	private static string[] MetadataOptions(Dictionary<string, BaseSetting> settings, string key)
	{
		return null;
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x57A5840", Offset = "0x57A4840", VA = "0x57A5840")]
	private static string ScriptTooltip(Dictionary<string, BaseSetting> settings, string name)
	{
		return null;
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x57A5B50", Offset = "0x57A4B50", VA = "0x57A5B50")]
	private static string MetadataString(Dictionary<string, BaseSetting> settings, string key)
	{
		return null;
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x57A5620", Offset = "0x57A4620", VA = "0x57A5620")]
	private static string Label(string value)
	{
		return null;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x5799830", Offset = "0x5798830", VA = "0x5799830")]
	private static InGameSet Clone(InGameSet source)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x579CA80", Offset = "0x579BA80", VA = "0x579CA80")]
	private static InGameSet CreateOfficialWorkingSet([Optional] InGameSet source)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x579DE60", Offset = "0x579CE60", VA = "0x579DE60")]
	private static void CopyRoomSettings(InGameSet source, InGameSet target)
	{
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x579CD20", Offset = "0x579BD20", VA = "0x579CD20")]
	private static void RestoreEditableValues(ExperienceRuleResult result, InGameSet persisted, [Optional] HashSet<string> resetIds, bool contentOnly = false)
	{
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x579CC60", Offset = "0x579BC60", VA = "0x579CC60")]
	private static bool TryResolveSetting(InGameSet settings, string id, out BaseSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x57A5C20", Offset = "0x57A4C20", VA = "0x57A5C20")]
	private static object SettingValue(BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x579CCC0", Offset = "0x579BCC0", VA = "0x579CCC0")]
	private static void CopySettingValue(BaseSetting target, BaseSetting source)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x57A5DC0", Offset = "0x57A4DC0", VA = "0x57A5DC0")]
	private static void SetSettingValue(BaseSetting setting, object value)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x579D030", Offset = "0x579C030", VA = "0x579D030")]
	private static void ValidateContentOptions(ExperienceRuleResult result)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x57A5FD0", Offset = "0x57A4FD0", VA = "0x57A5FD0")]
	private static string NoContentError(string id)
	{
		return null;
	}
}
