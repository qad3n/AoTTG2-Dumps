// ==================== AoTTG2 cross-reference ====================
// Type: UI.UIManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/UIManager.c
// Prior real C# source (older reference): Assets/Scripts/UI/UIManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000702")]
internal class UIManager : MonoBehaviour
{
	[Token(Token = "0x40021CB")]
	private const string InternalPrefix = "internal://";

	[Token(Token = "0x40021CC")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, JSONObject> _languages;

	[Token(Token = "0x40021CD")]
	[FieldOffset(Offset = "0x20")]
	private string _arabicLanguageName;

	[Token(Token = "0x40021CE")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, JSONObject> _uiThemes;

	[Token(Token = "0x40021CF")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<Type, string> _lastCategories;

	[Token(Token = "0x40021D0")]
	[FieldOffset(Offset = "0x18")]
	private static string _currentUITheme;

	[Token(Token = "0x40021D1")]
	[FieldOffset(Offset = "0x20")]
	private static UIManager _instance;

	[Token(Token = "0x40021D2")]
	[FieldOffset(Offset = "0x28")]
	public static BaseMenu CurrentMenu;

	[Token(Token = "0x40021D3")]
	[FieldOffset(Offset = "0x30")]
	public static LoadingMenu LoadingMenu;

	[Token(Token = "0x40021D4")]
	[FieldOffset(Offset = "0x38")]
	public static float CurrentCanvasScale;

	[Token(Token = "0x40021D5")]
	[FieldOffset(Offset = "0x40")]
	public static List<string> AvailableProfileIcons;

	[Token(Token = "0x40021D6")]
	[FieldOffset(Offset = "0x48")]
	public static List<string> AvailableEmojis;

	[Token(Token = "0x40021D7")]
	[FieldOffset(Offset = "0x50")]
	public static HashSet<string> AnimatedEmojis;

	[Token(Token = "0x40021D8")]
	[FieldOffset(Offset = "0x58")]
	public static bool NeedResizeText;

	[Token(Token = "0x40021D9")]
	[FieldOffset(Offset = "0x59")]
	public static bool NeedResizeTextSecondFrame;

	[Token(Token = "0x40021DA")]
	[FieldOffset(Offset = "0x60")]
	private static Dictionary<string, AudioSource> _sounds;

	[Token(Token = "0x40021DB")]
	[FieldOffset(Offset = "0x68")]
	private static int _lastFPS;

	[Token(Token = "0x40021DC")]
	[FieldOffset(Offset = "0x6C")]
	private static float _currentFrameTime;

	[Token(Token = "0x40021DD")]
	[FieldOffset(Offset = "0x70")]
	private static float _currentFrameCount;

	[Token(Token = "0x40021DE")]
	[FieldOffset(Offset = "0x74")]
	private static float _maxFrameTime;

	[Token(Token = "0x600454B")]
	[Address(RVA = "0x4353180", Offset = "0x4353180", VA = "0x4353180")]
	public static void Init()
	{
	}

	[Token(Token = "0x600454C")]
	[Address(RVA = "0x4354220", Offset = "0x4354220", VA = "0x4354220")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600454D")]
	[Address(RVA = "0x4354920", Offset = "0x4354920", VA = "0x4354920")]
	public static void PlaySound(UISound sound)
	{
	}

	[Token(Token = "0x600454E")]
	[Address(RVA = "0x43549E0", Offset = "0x43549E0", VA = "0x43549E0")]
	public static void SetLastCategory(Type t, string category)
	{
	}

	[Token(Token = "0x600454F")]
	[Address(RVA = "0x4354B10", Offset = "0x4354B10", VA = "0x4354B10")]
	public static string GetLastcategory(Type t)
	{
		return null;
	}

	[Token(Token = "0x6004550")]
	[Address(RVA = "0x4353C70", Offset = "0x4353C70", VA = "0x4353C70")]
	private static void LoadProfileIcons()
	{
	}

	[Token(Token = "0x6004551")]
	[Address(RVA = "0x4354720", Offset = "0x4354720", VA = "0x4354720")]
	private static void LoadSounds()
	{
	}

	[Token(Token = "0x6004552")]
	[Address(RVA = "0x4354340", Offset = "0x4354340", VA = "0x4354340")]
	public static void SetMenu(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004553")]
	[Address(RVA = "0x4354C20", Offset = "0x4354C20", VA = "0x4354C20")]
	public static string GetProfileIcon(string icon)
	{
		return null;
	}

	[Token(Token = "0x6004554")]
	[Address(RVA = "0x4354D30", Offset = "0x4354D30", VA = "0x4354D30")]
	public static string GetLocaleFormatted(string category, string subCategory, string item = "", params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6004555")]
	[Address(RVA = "0x4341B80", Offset = "0x4341B80", VA = "0x4341B80")]
	public static string GetLocale(string category, string subCategory, string item = "", string forcedLanguage = "", string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6004556")]
	[Address(RVA = "0x4354DC0", Offset = "0x4354DC0", VA = "0x4354DC0")]
	public static bool HasLocale(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return default(bool);
	}

	[Token(Token = "0x6004557")]
	[Address(RVA = "0x43453D0", Offset = "0x43453D0", VA = "0x43453D0")]
	public static string[] GetLocaleArray(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return null;
	}

	[Token(Token = "0x6004558")]
	[Address(RVA = "0x433EFC0", Offset = "0x433EFC0", VA = "0x433EFC0")]
	public static string GetLocaleCommon(string item)
	{
		return null;
	}

	[Token(Token = "0x6004559")]
	[Address(RVA = "0x4355040", Offset = "0x4355040", VA = "0x4355040")]
	public static string[] GetLocaleCommonArray(string item)
	{
		return null;
	}

	[Token(Token = "0x600455A")]
	[Address(RVA = "0x43550B0", Offset = "0x43550B0", VA = "0x43550B0")]
	public static Dictionary<string, Dictionary<string, string>> GetLocaleCategoryStrings(string pattern)
	{
		return null;
	}

	[Token(Token = "0x600455B")]
	[Address(RVA = "0x4355170", Offset = "0x4355170", VA = "0x4355170")]
	private static Dictionary<string, Dictionary<string, string>> GetInternalLocaleCategoryStrings(string category)
	{
		return null;
	}

	[Token(Token = "0x600455C")]
	[Address(RVA = "0x4355B50", Offset = "0x4355B50", VA = "0x4355B50")]
	private static Dictionary<string, Dictionary<string, string>> GetExternalLocaleCategoryStrings(string uniqueName)
	{
		return null;
	}

	[Token(Token = "0x600455D")]
	[Address(RVA = "0x43439B0", Offset = "0x43439B0", VA = "0x43439B0")]
	public static string[] GetLanguages()
	{
		return null;
	}

	[Token(Token = "0x600455E")]
	[Address(RVA = "0x4353380", Offset = "0x4353380", VA = "0x4353380")]
	private static void LoadLanguages()
	{
	}

	[Token(Token = "0x600455F")]
	[Address(RVA = "0x4356500", Offset = "0x4356500", VA = "0x4356500")]
	public static Color GetThemeColor(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(Color);
	}

	[Token(Token = "0x6004560")]
	[Address(RVA = "0x4356ED0", Offset = "0x4356ED0", VA = "0x4356ED0")]
	public static Texture2D GetThemeTexture(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return null;
	}

	[Token(Token = "0x6004561")]
	[Address(RVA = "0x43574A0", Offset = "0x43574A0", VA = "0x43574A0")]
	public static ColorBlock GetThemeColorBlock(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(ColorBlock);
	}

	[Token(Token = "0x6004562")]
	[Address(RVA = "0x43511E0", Offset = "0x43511E0", VA = "0x43511E0")]
	public static string[] GetUIThemes()
	{
		return null;
	}

	[Token(Token = "0x6004563")]
	[Address(RVA = "0x4353830", Offset = "0x4353830", VA = "0x4353830")]
	private static void LoadUIThemes()
	{
	}

	[Token(Token = "0x6004564")]
	[Address(RVA = "0x4357620", Offset = "0x4357620", VA = "0x4357620")]
	private void Update()
	{
	}

	[Token(Token = "0x6004565")]
	[Address(RVA = "0x4357AF0", Offset = "0x4357AF0", VA = "0x4357AF0")]
	public static int GetFPS()
	{
		return default(int);
	}

	[Token(Token = "0x6004566")]
	[Address(RVA = "0x4357B60", Offset = "0x4357B60", VA = "0x4357B60")]
	public UIManager()
	{
	}
}
