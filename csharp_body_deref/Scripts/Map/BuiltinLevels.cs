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

[Token(Token = "0x20003E3")]
internal class BuiltinLevels
{
	[Token(Token = "0x20003E4")]
	private sealed class BuiltinExperienceDefinition
	{
		[Token(Token = "0x40013D4")]
		[FieldOffset(Offset = "0x10")]
		public string Category;

		[Token(Token = "0x40013D5")]
		[FieldOffset(Offset = "0x18")]
		public string SubCategory;

		[Token(Token = "0x40013D6")]
		[FieldOffset(Offset = "0x20")]
		public string Name;

		[Token(Token = "0x40013D7")]
		[FieldOffset(Offset = "0x28")]
		public string TemplateName;

		[Token(Token = "0x40013D8")]
		[FieldOffset(Offset = "0x30")]
		public string Preview;

		[Token(Token = "0x40013D9")]
		[FieldOffset(Offset = "0x38")]
		public bool HasScoring;

		[Token(Token = "0x40013DA")]
		[FieldOffset(Offset = "0x40")]
		public List<string> UIRules;

		[Token(Token = "0x40013DB")]
		[FieldOffset(Offset = "0x48")]
		public Dictionary<string, List<string>> Variants;

		[Token(Token = "0x60018DC")]
		[Address(RVA = "0x586E0B0", Offset = "0x586D0B0", VA = "0x586E0B0")]
		public BuiltinExperienceDefinition()
		{
		}
	}

	[Token(Token = "0x20003E8")]
	[CompilerGenerated]
	private sealed class _003CGetExperienceDefinitions_003Ed__17 : IEnumerable<BuiltinExperienceDefinition>, IEnumerable, IEnumerator<BuiltinExperienceDefinition>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013E8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013E9")]
		[FieldOffset(Offset = "0x18")]
		private BuiltinExperienceDefinition _003C_003E2__current;

		[Token(Token = "0x40013EA")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40013EB")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x40013EC")]
		[FieldOffset(Offset = "0x70")]
		private JSONNode _003Ccategory_003E5__3;

		[Token(Token = "0x40013ED")]
		[FieldOffset(Offset = "0x78")]
		private string _003CcategoryName_003E5__4;

		[Token(Token = "0x40013EE")]
		[FieldOffset(Offset = "0x80")]
		private JSONNode.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x40013EF")]
		[FieldOffset(Offset = "0xC8")]
		private JSONNode _003CsubCategory_003E5__6;

		[Token(Token = "0x40013F0")]
		[FieldOffset(Offset = "0xD0")]
		private string _003CsubCategoryName_003E5__7;

		[Token(Token = "0x40013F1")]
		[FieldOffset(Offset = "0xD8")]
		private bool _003CexperiencePerMap_003E5__8;

		[Token(Token = "0x40013F2")]
		[FieldOffset(Offset = "0xE0")]
		private JSONNode.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x40013F3")]
		[FieldOffset(Offset = "0x128")]
		private JSONNode _003Cexperience_003E5__10;

		[Token(Token = "0x40013F4")]
		[FieldOffset(Offset = "0x130")]
		private List<string> _003Crules_003E5__11;

		[Token(Token = "0x40013F5")]
		[FieldOffset(Offset = "0x138")]
		private Dictionary<string, List<string>> _003Cvariants_003E5__12;

		[Token(Token = "0x40013F6")]
		[FieldOffset(Offset = "0x140")]
		private bool _003ChasScoring_003E5__13;

		[Token(Token = "0x40013F7")]
		[FieldOffset(Offset = "0x148")]
		private string[] _003C_003E7__wrap13;

		[Token(Token = "0x40013F8")]
		[FieldOffset(Offset = "0x150")]
		private int _003C_003E7__wrap14;

		[Token(Token = "0x170002A8")]
		private BuiltinExperienceDefinition System_002ECollections_002EGeneric_002EIEnumerator_003CMap_002EBuiltinLevels_002EBuiltinExperienceDefinition_003E_002ECurrent
		{
			[Token(Token = "0x60018ED")]
			[Address(RVA = "0x5875B10", Offset = "0x5874B10", VA = "0x5875B10", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002A9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60018EF")]
			[Address(RVA = "0x5875B60", Offset = "0x5874B60", VA = "0x5875B60", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60018EA")]
		[Address(RVA = "0x5874C40", Offset = "0x5873C40", VA = "0x5874C40")]
		[DebuggerHidden]
		public _003CGetExperienceDefinitions_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60018EB")]
		[Address(RVA = "0x5874C70", Offset = "0x5873C70", VA = "0x5874C70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60018EC")]
		[Address(RVA = "0x5874C80", Offset = "0x5873C80", VA = "0x5874C80", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60018EE")]
		[Address(RVA = "0x5875B20", Offset = "0x5874B20", VA = "0x5875B20", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60018F0")]
		[Address(RVA = "0x5875B70", Offset = "0x5874B70", VA = "0x5875B70", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BuiltinExperienceDefinition> System_002ECollections_002EGeneric_002EIEnumerable_003CMap_002EBuiltinLevels_002EBuiltinExperienceDefinition_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60018F1")]
		[Address(RVA = "0x5875BF0", Offset = "0x5874BF0", VA = "0x5875BF0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40013CB")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _info;

	[Token(Token = "0x40013CC")]
	[FieldOffset(Offset = "0x8")]
	private static List<Experience> _experiences;

	[Token(Token = "0x40013CD")]
	[FieldOffset(Offset = "0x10")]
	public static string CustomMapFolderPath;

	[Token(Token = "0x40013CE")]
	[FieldOffset(Offset = "0x18")]
	public static string CustomMapAutosaveFolderPath;

	[Token(Token = "0x40013CF")]
	[FieldOffset(Offset = "0x20")]
	public static string CustomMapBackupsFolderPath;

	[Token(Token = "0x40013D0")]
	[FieldOffset(Offset = "0x28")]
	public static string CustomLogicFolderPath;

	[Token(Token = "0x40013D1")]
	[FieldOffset(Offset = "0x30")]
	public static string CustomAddonFolderPath;

	[Token(Token = "0x40013D2")]
	[FieldOffset(Offset = "0x38")]
	public static string UseMapLogic;

	[Token(Token = "0x40013D3")]
	private const int MaxCustomFileNameLength = 50;

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x586CA30", Offset = "0x586BA30", VA = "0x586CA30")]
	public static void Init()
	{
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x586CC50", Offset = "0x586BC50", VA = "0x586CC50")]
	public static PresetDefinition LoadExperience(string name)
	{
		return null;
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x586CED0", Offset = "0x586BED0", VA = "0x586CED0")]
	public static List<Experience> GetExperiences()
	{
		return null;
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x586D480", Offset = "0x586C480", VA = "0x586D480")]
	public static bool HasExperienceScoring(string category, string subCategory, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x586D620", Offset = "0x586C620", VA = "0x586D620")]
	public static void ResolveExperiencePreviews(IEnumerable<Experience> experiences)
	{
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x586D950", Offset = "0x586C950", VA = "0x586D950")]
	private static string ResolveExperiencePreview(Experience experience)
	{
		return null;
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x586DDE0", Offset = "0x586CDE0", VA = "0x586DDE0")]
	private static string ResolveMapPreviewPath(string mapName)
	{
		return null;
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x586CD70", Offset = "0x586BD70", VA = "0x586CD70")]
	private static BuiltinExperienceDefinition FindExperience(string name)
	{
		return null;
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x586D430", Offset = "0x586C430", VA = "0x586D430")]
	[IteratorStateMachine(typeof(_003CGetExperienceDefinitions_003Ed__17))]
	private static IEnumerable<BuiltinExperienceDefinition> GetExperienceDefinitions()
	{
		return null;
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x586DF20", Offset = "0x586CF20", VA = "0x586DF20")]
	private static BuiltinExperienceDefinition CreateExperienceDefinition(string category, string subCategory, string name, JSONNode experience, List<string> rules, Dictionary<string, List<string>> variants, bool hasScoring)
	{
		return null;
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x586E0C0", Offset = "0x586D0C0", VA = "0x586E0C0")]
	private static List<string> ComposeUIRules(params JSONNode[] ruleSets)
	{
		return null;
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x586E600", Offset = "0x586D600", VA = "0x586E600")]
	public static string FindMapCategory(string mapName)
	{
		return null;
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x586DD70", Offset = "0x586CD70", VA = "0x586DD70")]
	public static string[] QueryMapsNames(UIRule query)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x586E900", Offset = "0x586D900", VA = "0x586E900")]
	public static string[] QueryMapsNames(UIRule query, UIRule categoryQuery)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x586F020", Offset = "0x586E020", VA = "0x586F020")]
	public static string[] QueryModeNames(UIRule query)
	{
		return null;
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x586F490", Offset = "0x586E490", VA = "0x586F490")]
	public static string LoadMap(string category, string name)
	{
		return null;
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x586F5B0", Offset = "0x586E5B0", VA = "0x586F5B0")]
	public static bool TryLoadBuiltinMap(string category, string name, out string source)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x586FB10", Offset = "0x586EB10", VA = "0x586FB10")]
	public static string LoadAutosave(string name)
	{
		return null;
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x586FBE0", Offset = "0x586EBE0", VA = "0x586FBE0")]
	public static string LoadLogic(string name)
	{
		return null;
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x586FF40", Offset = "0x586EF40", VA = "0x586FF40")]
	public static bool IsLogicBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x58700F0", Offset = "0x586F0F0", VA = "0x58700F0")]
	public static string[] GetMapCategories()
	{
		return null;
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x5870430", Offset = "0x586F430", VA = "0x5870430")]
	public static string[] GetMapNames(string category)
	{
		return null;
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x5870AD0", Offset = "0x586FAD0", VA = "0x5870AD0")]
	public static string[] GetAutosaveNames()
	{
		return null;
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x586A800", Offset = "0x5869800", VA = "0x586A800")]
	public static string LoadAddon(string name)
	{
		return null;
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x5870BC0", Offset = "0x586FBC0", VA = "0x5870BC0")]
	public static string[] GetAddonNames()
	{
		return null;
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x5870F30", Offset = "0x586FF30", VA = "0x5870F30")]
	public static string[] GetBuiltinAddons()
	{
		return null;
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x586A740", Offset = "0x5869740", VA = "0x586A740")]
	public static bool IsAddonBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x5871310", Offset = "0x5870310", VA = "0x5871310")]
	public static string[] GetCustomAddons()
	{
		return null;
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x5871590", Offset = "0x5870590", VA = "0x5871590")]
	public static void DeleteCustomMap(string name)
	{
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x5871720", Offset = "0x5870720", VA = "0x5871720")]
	public static void RenameCustomMap(string oldName, string newName)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x5871960", Offset = "0x5870960", VA = "0x5871960")]
	public static bool IsValidCustomFileName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x5871690", Offset = "0x5870690", VA = "0x5871690")]
	private static string GetCustomMapPath(string name)
	{
		return null;
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x5871A90", Offset = "0x5870A90", VA = "0x5871A90")]
	public static void DeleteCustomLogic(string name)
	{
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x5871B60", Offset = "0x5870B60", VA = "0x5871B60")]
	public static void DeleteCustomAddon(string name)
	{
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x5871C00", Offset = "0x5870C00", VA = "0x5871C00")]
	public static void SaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x5871D30", Offset = "0x5870D30", VA = "0x5871D30")]
	public static void AutosaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x5871DF0", Offset = "0x5870DF0", VA = "0x5871DF0")]
	public static void BackupCustomMap(string name, string map, string version)
	{
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x5872010", Offset = "0x5871010", VA = "0x5872010")]
	public static void SaveCustomLogic(string name, string script)
	{
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x58720B0", Offset = "0x58710B0", VA = "0x58720B0")]
	public static void SaveCustomAddon(string name, string script)
	{
	}

	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x5872150", Offset = "0x5871150", VA = "0x5872150")]
	public static string[] GetGameModes(string category, string mapName, bool hasMapLogic)
	{
		return null;
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x5873380", Offset = "0x5872380", VA = "0x5873380")]
	public static string[] GetSandboxGameModes(string category, string mapName, bool hasMapLogic, out int recommendedModeCount)
	{
		return null;
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x5873CC0", Offset = "0x5872CC0", VA = "0x5873CC0")]
	public static void LoadSandboxMiscSettings(string category, string mapName, string gameMode, InGameMiscSettings settings)
	{
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x5870940", Offset = "0x586F940", VA = "0x5870940")]
	private static string[] GetTxtFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x5871400", Offset = "0x5870400", VA = "0x5871400")]
	private static string[] GetClFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x5872EA0", Offset = "0x5871EA0", VA = "0x5872EA0")]
	public static string[] GetCustomModes()
	{
		return null;
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x5874260", Offset = "0x5873260", VA = "0x5874260")]
	private static Dictionary<string, JSONNode> GetSandboxMiscSettings(string category, string mapName, string gameMode)
	{
		return null;
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x586F830", Offset = "0x586E830", VA = "0x586F830")]
	private static JSONNode GetMap(string category, string mapName)
	{
		return null;
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x5872D20", Offset = "0x5871D20", VA = "0x5872D20")]
	private static JSONNode GetCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x5874440", Offset = "0x5873440", VA = "0x5874440")]
	private static JSONNode GetGameMode(string gameMode)
	{
		return null;
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x58745C0", Offset = "0x58735C0", VA = "0x58745C0")]
	private static void MergeSandboxMiscSettings(Dictionary<string, JSONNode> current, JSONNode node)
	{
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x5874770", Offset = "0x5873770", VA = "0x5874770")]
	public BuiltinLevels()
	{
	}
}
