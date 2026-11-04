// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinLevels
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/BuiltinLevels.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinLevels.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x2000388")]
internal class BuiltinLevels
{
	[Token(Token = "0x2000389")]
	private sealed class BuiltinExperienceDefinition
	{
		[Token(Token = "0x4001242")]
		[FieldOffset(Offset = "0x10")]
		public string Category;

		[Token(Token = "0x4001243")]
		[FieldOffset(Offset = "0x18")]
		public string SubCategory;

		[Token(Token = "0x4001244")]
		[FieldOffset(Offset = "0x20")]
		public string Name;

		[Token(Token = "0x4001245")]
		[FieldOffset(Offset = "0x28")]
		public string Description;

		[Token(Token = "0x4001246")]
		[FieldOffset(Offset = "0x30")]
		public string Preview;

		[Token(Token = "0x4001247")]
		[FieldOffset(Offset = "0x38")]
		public bool HasScoring;

		[Token(Token = "0x4001248")]
		[FieldOffset(Offset = "0x40")]
		public List<string> UIRules;

		[Token(Token = "0x4001249")]
		[FieldOffset(Offset = "0x48")]
		public Dictionary<string, List<string>> Variants;

		[Token(Token = "0x6001675")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public BuiltinExperienceDefinition()
		{
		}
	}

	[Token(Token = "0x200038D")]
	[CompilerGenerated]
	private sealed class _003CGetExperienceDefinitions_003Ed__16 : IEnumerable<BuiltinExperienceDefinition>, IEnumerable, IEnumerator<BuiltinExperienceDefinition>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001256")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001257")]
		[FieldOffset(Offset = "0x18")]
		private BuiltinExperienceDefinition _003C_003E2__current;

		[Token(Token = "0x4001258")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001259")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x400125A")]
		[FieldOffset(Offset = "0x70")]
		private JSONNode _003Ccategory_003E5__3;

		[Token(Token = "0x400125B")]
		[FieldOffset(Offset = "0x78")]
		private string _003CcategoryName_003E5__4;

		[Token(Token = "0x400125C")]
		[FieldOffset(Offset = "0x80")]
		private JSONNode.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x400125D")]
		[FieldOffset(Offset = "0xC8")]
		private JSONNode _003CsubCategory_003E5__6;

		[Token(Token = "0x400125E")]
		[FieldOffset(Offset = "0xD0")]
		private string _003CsubCategoryName_003E5__7;

		[Token(Token = "0x400125F")]
		[FieldOffset(Offset = "0xD8")]
		private bool _003CexperiencePerMap_003E5__8;

		[Token(Token = "0x4001260")]
		[FieldOffset(Offset = "0xE0")]
		private JSONNode.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x4001261")]
		[FieldOffset(Offset = "0x128")]
		private JSONNode _003Cexperience_003E5__10;

		[Token(Token = "0x4001262")]
		[FieldOffset(Offset = "0x130")]
		private List<string> _003Crules_003E5__11;

		[Token(Token = "0x4001263")]
		[FieldOffset(Offset = "0x138")]
		private Dictionary<string, List<string>> _003Cvariants_003E5__12;

		[Token(Token = "0x4001264")]
		[FieldOffset(Offset = "0x140")]
		private bool _003ChasScoring_003E5__13;

		[Token(Token = "0x4001265")]
		[FieldOffset(Offset = "0x148")]
		private string[] _003C_003E7__wrap13;

		[Token(Token = "0x4001266")]
		[FieldOffset(Offset = "0x150")]
		private int _003C_003E7__wrap14;

		[Token(Token = "0x17000267")]
		private BuiltinExperienceDefinition System_002ECollections_002EGeneric_002EIEnumerator_003CMap_002EBuiltinLevels_002EBuiltinExperienceDefinition_003E_002ECurrent
		{
			[Token(Token = "0x6001686")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000268")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001688")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001683")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetExperienceDefinitions_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001684")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001685")]
		[Address(RVA = "0x1E98410", Offset = "0x1E96A10", VA = "0x181E98410", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001687")]
		[Address(RVA = "0x1E99330", Offset = "0x1E97930", VA = "0x181E99330", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001689")]
		[Address(RVA = "0x1E992A0", Offset = "0x1E978A0", VA = "0x181E992A0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BuiltinExperienceDefinition> System_002ECollections_002EGeneric_002EIEnumerable_003CMap_002EBuiltinLevels_002EBuiltinExperienceDefinition_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600168A")]
		[Address(RVA = "0x1E992A0", Offset = "0x1E978A0", VA = "0x181E992A0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400123A")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _info;

	[Token(Token = "0x400123B")]
	[FieldOffset(Offset = "0x8")]
	private static List<Experience> _experiences;

	[Token(Token = "0x400123C")]
	[FieldOffset(Offset = "0x10")]
	public static string CustomMapFolderPath;

	[Token(Token = "0x400123D")]
	[FieldOffset(Offset = "0x18")]
	public static string CustomMapAutosaveFolderPath;

	[Token(Token = "0x400123E")]
	[FieldOffset(Offset = "0x20")]
	public static string CustomMapBackupsFolderPath;

	[Token(Token = "0x400123F")]
	[FieldOffset(Offset = "0x28")]
	public static string CustomLogicFolderPath;

	[Token(Token = "0x4001240")]
	[FieldOffset(Offset = "0x30")]
	public static string CustomAddonFolderPath;

	[Token(Token = "0x4001241")]
	[FieldOffset(Offset = "0x38")]
	public static string UseMapLogic;

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x1E81F10", Offset = "0x1E80510", VA = "0x181E81F10")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x1E82660", Offset = "0x1E80C60", VA = "0x181E82660")]
	public static PresetDefinition LoadExperience(string name)
	{
		return null;
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x1E7F4C0", Offset = "0x1E7DAC0", VA = "0x181E7F4C0")]
	public static List<Experience> GetExperiences()
	{
		return null;
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x1E81DB0", Offset = "0x1E803B0", VA = "0x181E81DB0")]
	public static bool HasExperienceScoring(string category, string subCategory, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001649")]
	[Address(RVA = "0x1E84300", Offset = "0x1E82900", VA = "0x181E84300")]
	public static void ResolveExperiencePreviews(IEnumerable<Experience> experiences)
	{
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x1E83F10", Offset = "0x1E82510", VA = "0x181E83F10")]
	private static string ResolveExperiencePreview(Experience experience)
	{
		return null;
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x1E844F0", Offset = "0x1E82AF0", VA = "0x181E844F0")]
	private static string ResolveMapPreviewPath(string mapName)
	{
		return null;
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x1E7E1C0", Offset = "0x1E7C7C0", VA = "0x181E7E1C0")]
	private static BuiltinExperienceDefinition FindExperience(string name)
	{
		return null;
	}

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x1E7F460", Offset = "0x1E7DA60", VA = "0x181E7F460")]
	[IteratorStateMachine(typeof(_003CGetExperienceDefinitions_003Ed__16))]
	private static IEnumerable<BuiltinExperienceDefinition> GetExperienceDefinitions()
	{
		return null;
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x1E7DE20", Offset = "0x1E7C420", VA = "0x181E7DE20")]
	private static BuiltinExperienceDefinition CreateExperienceDefinition(string category, string subCategory, string name, JSONNode experience, List<string> rules, Dictionary<string, List<string>> variants, bool hasScoring)
	{
		return null;
	}

	[Token(Token = "0x600164F")]
	[Address(RVA = "0x1E7D960", Offset = "0x1E7BF60", VA = "0x181E7D960")]
	private static List<string> ComposeUIRules(params JSONNode[] ruleSets)
	{
		return null;
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x1E7E320", Offset = "0x1E7C920", VA = "0x181E7E320")]
	public static string FindMapCategory(string mapName)
	{
		return null;
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x1E83B60", Offset = "0x1E82160", VA = "0x181E83B60")]
	public static string[] QueryMapsNames(UIRule query)
	{
		return null;
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x1E835E0", Offset = "0x1E81BE0", VA = "0x181E835E0")]
	public static string[] QueryMapsNames(UIRule query, UIRule categoryQuery)
	{
		return null;
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x1E83BB0", Offset = "0x1E821B0", VA = "0x181E83BB0")]
	public static string[] QueryModeNames(UIRule query)
	{
		return null;
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x1E82CA0", Offset = "0x1E812A0", VA = "0x181E82CA0")]
	public static string LoadMap(string category, string name)
	{
		return null;
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x1E825A0", Offset = "0x1E80BA0", VA = "0x181E825A0")]
	public static string LoadAutosave(string name)
	{
		return null;
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x1E82890", Offset = "0x1E80E90", VA = "0x181E82890")]
	public static string LoadLogic(string name)
	{
		return null;
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x1E821F0", Offset = "0x1E807F0", VA = "0x181E821F0")]
	public static bool IsLogicBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x1E806B0", Offset = "0x1E7ECB0", VA = "0x181E806B0")]
	public static string[] GetMapCategories()
	{
		return null;
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x1E809B0", Offset = "0x1E7EFB0", VA = "0x181E809B0")]
	public static string[] GetMapNames(string category)
	{
		return null;
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x1E7E910", Offset = "0x1E7CF10", VA = "0x181E7E910")]
	public static string[] GetAutosaveNames()
	{
		return null;
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x1E82400", Offset = "0x1E80A00", VA = "0x181E82400")]
	public static string LoadAddon(string name)
	{
		return null;
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x1E7E650", Offset = "0x1E7CC50", VA = "0x181E7E650")]
	public static string[] GetAddonNames()
	{
		return null;
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x1E7EA00", Offset = "0x1E7D000", VA = "0x181E7EA00")]
	public static string[] GetBuiltinAddons()
	{
		return null;
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x1E82130", Offset = "0x1E80730", VA = "0x181E82130")]
	public static bool IsAddonBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x1E7F070", Offset = "0x1E7D670", VA = "0x181E7F070")]
	public static string[] GetCustomAddons()
	{
		return null;
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x1E7E120", Offset = "0x1E7C720", VA = "0x181E7E120")]
	public static void DeleteCustomMap(string name)
	{
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x1E7E040", Offset = "0x1E7C640", VA = "0x181E7E040")]
	public static void DeleteCustomLogic(string name)
	{
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x1E7DFA0", Offset = "0x1E7C5A0", VA = "0x181E7DFA0")]
	public static void DeleteCustomAddon(string name)
	{
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x1E847A0", Offset = "0x1E82DA0", VA = "0x181E847A0")]
	public static void SaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x1E7D670", Offset = "0x1E7BC70", VA = "0x181E7D670")]
	public static void AutosaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x1E7D740", Offset = "0x1E7BD40", VA = "0x181E7D740")]
	public static void BackupCustomMap(string name, string map, string version)
	{
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x1E846F0", Offset = "0x1E82CF0", VA = "0x181E846F0")]
	public static void SaveCustomLogic(string name, string script)
	{
	}

	[Token(Token = "0x6001667")]
	[Address(RVA = "0x1E84640", Offset = "0x1E82C40", VA = "0x181E84640")]
	public static void SaveCustomAddon(string name, string script)
	{
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x1E7FB10", Offset = "0x1E7E110", VA = "0x181E7FB10")]
	public static string[] GetGameModes(string category, string mapName, bool hasMapLogic)
	{
		return null;
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x1E81150", Offset = "0x1E7F750", VA = "0x181E81150")]
	public static string[] GetSandboxGameModes(string category, string mapName, bool hasMapLogic, out int recommendedModeCount)
	{
		return null;
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x1E82EF0", Offset = "0x1E814F0", VA = "0x181E82EF0")]
	public static void LoadSandboxMiscSettings(string category, string mapName, string gameMode, InGameMiscSettings settings)
	{
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x1E81C30", Offset = "0x1E80230", VA = "0x181E81C30")]
	private static string[] GetTxtFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x1E7EEF0", Offset = "0x1E7D4F0", VA = "0x181E7EEF0")]
	private static string[] GetClFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x1E7F160", Offset = "0x1E7D760", VA = "0x181E7F160")]
	public static string[] GetCustomModes()
	{
		return null;
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x1E818B0", Offset = "0x1E7FEB0", VA = "0x181E818B0")]
	private static Dictionary<string, JSONNode> GetSandboxMiscSettings(string category, string mapName, string gameMode)
	{
		return null;
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x1E80E30", Offset = "0x1E7F430", VA = "0x181E80E30")]
	private static JSONNode GetMap(string category, string mapName)
	{
		return null;
	}

	[Token(Token = "0x6001670")]
	[Address(RVA = "0x1E7ED10", Offset = "0x1E7D310", VA = "0x181E7ED10")]
	private static JSONNode GetCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x1E7F930", Offset = "0x1E7DF30", VA = "0x181E7F930")]
	private static JSONNode GetGameMode(string gameMode)
	{
		return null;
	}

	[Token(Token = "0x6001672")]
	[Address(RVA = "0x1E83400", Offset = "0x1E81A00", VA = "0x181E83400")]
	private static void MergeSandboxMiscSettings(Dictionary<string, JSONNode> current, JSONNode node)
	{
	}

	[Token(Token = "0x6001673")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BuiltinLevels()
	{
	}
}
