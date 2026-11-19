// ==================== AoTTG2 cross-reference ====================
// Type: Utility.FolderPaths
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Utility/FolderPaths.c
// Prior real C# source (older reference): Assets/Scripts/Utility/FolderPaths.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200092A")]
internal class FolderPaths
{
	[Token(Token = "0x4002E23")]
	[FieldOffset(Offset = "0x0")]
	public static string Documents;

	[Token(Token = "0x4002E24")]
	[FieldOffset(Offset = "0x8")]
	public static string StreamingAssetsPath;

	[Token(Token = "0x4002E25")]
	[FieldOffset(Offset = "0x10")]
	public static string LanguagesPath;

	[Token(Token = "0x4002E26")]
	[FieldOffset(Offset = "0x18")]
	public static string PresetsPath;

	[Token(Token = "0x4002E27")]
	[FieldOffset(Offset = "0x20")]
	public static string UIThemesPath;

	[Token(Token = "0x4002E28")]
	[FieldOffset(Offset = "0x28")]
	public static string Settings;

	[Token(Token = "0x4002E29")]
	[FieldOffset(Offset = "0x30")]
	public static string Snapshots;

	[Token(Token = "0x4002E2A")]
	[FieldOffset(Offset = "0x38")]
	public static string GameProgress;

	[Token(Token = "0x4002E2B")]
	[FieldOffset(Offset = "0x40")]
	public static string PersistentData;

	[Token(Token = "0x4002E2C")]
	[FieldOffset(Offset = "0x48")]
	public static string CustomLogic;

	[Token(Token = "0x4002E2D")]
	[FieldOffset(Offset = "0x50")]
	public static string CustomAddon;

	[Token(Token = "0x4002E2E")]
	[FieldOffset(Offset = "0x58")]
	public static string CustomMap;

	[Token(Token = "0x4002E2F")]
	[FieldOffset(Offset = "0x60")]
	public static string CustomMapAutosave;

	[Token(Token = "0x4002E30")]
	[FieldOffset(Offset = "0x68")]
	public static string CustomMapBackups;

	[Token(Token = "0x4002E31")]
	[FieldOffset(Offset = "0x70")]
	public static string CustomAssetsLocal;

	[Token(Token = "0x4002E32")]
	[FieldOffset(Offset = "0x78")]
	public static string CustomAssetsWeb;

	[Token(Token = "0x4002E33")]
	[FieldOffset(Offset = "0x80")]
	public static string CharacterPreviews;

	[Token(Token = "0x4002E34")]
	[FieldOffset(Offset = "0x88")]
	public static string CustomControlSkins;

	[Token(Token = "0x4002E35")]
	[FieldOffset(Offset = "0x90")]
	public static string CustomLocale;

	[Token(Token = "0x17000F02")]
	public static bool IsDocumentsWritable
	{
		[Token(Token = "0x6005692")]
		[Address(RVA = "0x5CEDC60", Offset = "0x5CECC60", VA = "0x5CEDC60")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Utility/FolderPaths.c (Utility.FolderPaths$$get_IsDocumentsWritable): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075482dc == false) {
				Il2CppMethodInitialized_075482dc = true;
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return FolderPaths._IsDocumentsWritable_k__BackingField;
			}
			return (bool)*(byte)((long)(typeof(FolderPaths)).static_fields + 0x98);
		}
		[Token(Token = "0x6005693")]
		[Address(RVA = "0x5CEDCD0", Offset = "0x5CECCD0", VA = "0x5CEDCD0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Utility/FolderPaths.c (Utility.FolderPaths$$set_IsDocumentsWritable): clean
			FolderPaths._IsDocumentsWritable_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6005694")]
	[Address(RVA = "0x5CEDD30", Offset = "0x5CECD30", VA = "0x5CEDD30")]
	public static void CheckDocumentsWritable()
	{
		// Lifted from source/cpp/Utility/FolderPaths.c (Utility.FolderPaths$$CheckDocumentsWritable): clean
		uint uVar1;
		String path;

		path = String.Concat(FolderPaths.Documents, "/.write_test");
		Directory.CreateDirectory(FolderPaths.Documents);
		File.WriteAllText(path, (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (Il2CppMethodInitialized_075483c3 == false) {
			Il2CppMethodInitialized_075483c3 = true;
			uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		FolderPaths._IsDocumentsWritable_k__BackingField = true;
		File.Delete(path);
		return;
	}

	[Token(Token = "0x6005695")]
	[Address(RVA = "0x5CEE170", Offset = "0x5CED170", VA = "0x5CEE170")]
	public static void TryCreateDirectory(string path)
	{
		// Lifted from source/cpp/Utility/FolderPaths.c (Utility.FolderPaths$$TryCreateDirectory): clean
		Directory.CreateDirectory(path);
		return;
	}

	[Token(Token = "0x6005696")]
	[Address(RVA = "0x5CEE2F0", Offset = "0x5CED2F0", VA = "0x5CEE2F0")]
	public FolderPaths()
	{
		// Lifted from source/cpp/Utility/FolderPaths.c (Utility.FolderPaths$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/FolderPaths.c.

	// Utility.FolderPaths$$.cctor: clean
	static FolderPaths()
	{
		uint uVar1;
		Utility_FolderPaths_StaticFields pUVar2;
		bool bVar3;
		int iVar4;
		String pSVar5;

		bVar3 = MobilePlatformUtility.IsMobileRuntime();
		uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			pSVar5 = Application.persistentDataPath;
			goto label_05dee47d;
		}
		if (uVar1 == 0) {
			iVar4 = Application.platform;
			if (iVar4 != 0xd) goto label_05dee45d;
	label_05dee445: ;
			iVar4 = 0x1c;
		}
		else {
			iVar4 = Application.platform;
			if (iVar4 == 0xd) goto label_05dee445;
	label_05dee45d: ;
			iVar4 = 5;
		}
		pSVar5 = Environment.GetFolderPath(iVar4);
		pSVar5 = String.Concat(pSVar5, "/Aottg2");
	label_05dee47d: ;
		FolderPaths.Documents = pSVar5;
		bVar3 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar3) {
			pSVar5 = MobileBuiltinAssets.CachePath;
		}
		else {
			pSVar5 = Application.streamingAssetsPath;
		}
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.StreamingAssetsPath = pSVar5;
		pSVar5 = String.Concat(FolderPaths.StreamingAssetsPath, "/Languages");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.LanguagesPath = pSVar5;
		pSVar5 = String.Concat(FolderPaths.StreamingAssetsPath, "/Presets");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.PresetsPath = pSVar5;
		pSVar5 = String.Concat(FolderPaths.StreamingAssetsPath, "/UIThemes");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.UIThemesPath = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/Settings");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.Settings = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/Snapshots");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.Snapshots = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/GameProgress");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.GameProgress = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/PersistentData");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.PersistentData = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomLogic");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomLogic = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomAddon");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomAddon = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomMap");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomMap = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomMap/Autosave");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomMapAutosave = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomMap/Backups");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomMapBackups = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomAssets");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomAssetsLocal = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomAssets/WebDownload");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomAssetsWeb = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CharacterPreviews");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CharacterPreviews = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomControlSkins");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomControlSkins = pSVar5;
		pSVar5 = String.Concat(FolderPaths.Documents, "/CustomLocale");
		pUVar2 = typeof(FolderPaths).static_fields;
		pUVar2.CustomLocale = pSVar5;
		FolderPaths._IsDocumentsWritable_k__BackingField = true;
		return;
	}
}
