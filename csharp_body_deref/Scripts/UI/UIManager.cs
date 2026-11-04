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

[Token(Token = "0x2000881")]
internal class UIManager : MonoBehaviour
{
	[Token(Token = "0x4002A63")]
	private const string InternalPrefix = "internal://";

	[Token(Token = "0x4002A64")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, JSONObject> _languages;

	[Token(Token = "0x4002A65")]
	[FieldOffset(Offset = "0x20")]
	private string _arabicLanguageName;

	[Token(Token = "0x4002A66")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, JSONObject> _uiThemes;

	[Token(Token = "0x4002A67")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<Type, string> _lastCategories;

	[Token(Token = "0x4002A68")]
	[FieldOffset(Offset = "0x18")]
	private static string _currentUITheme;

	[Token(Token = "0x4002A69")]
	[FieldOffset(Offset = "0x20")]
	private static UIManager _instance;

	[Token(Token = "0x4002A6A")]
	[FieldOffset(Offset = "0x28")]
	public static BaseMenu CurrentMenu;

	[Token(Token = "0x4002A6B")]
	[FieldOffset(Offset = "0x30")]
	public static LoadingMenu LoadingMenu;

	[Token(Token = "0x4002A6C")]
	[FieldOffset(Offset = "0x38")]
	public static float CurrentCanvasScale;

	[Token(Token = "0x4002A6D")]
	[FieldOffset(Offset = "0x40")]
	public static List<string> AvailableProfileIcons;

	[Token(Token = "0x4002A6E")]
	[FieldOffset(Offset = "0x48")]
	public static List<string> AvailableEmojis;

	[Token(Token = "0x4002A6F")]
	[FieldOffset(Offset = "0x50")]
	public static HashSet<string> AnimatedEmojis;

	[Token(Token = "0x4002A70")]
	[FieldOffset(Offset = "0x58")]
	public static bool NeedResizeText;

	[Token(Token = "0x4002A71")]
	[FieldOffset(Offset = "0x59")]
	public static bool NeedResizeTextSecondFrame;

	[Token(Token = "0x4002A72")]
	[FieldOffset(Offset = "0x5C")]
	private static int _lastFPS;

	[Token(Token = "0x4002A73")]
	[FieldOffset(Offset = "0x60")]
	private static float _currentFrameTime;

	[Token(Token = "0x4002A74")]
	[FieldOffset(Offset = "0x64")]
	private static float _currentFrameCount;

	[Token(Token = "0x4002A75")]
	[FieldOffset(Offset = "0x68")]
	private static float _maxFrameTime;

	[Token(Token = "0x6005184")]
	[Address(RVA = "0x2301980", Offset = "0x22FFF80", VA = "0x182301980")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005185")]
	[Address(RVA = "0x2302A40", Offset = "0x2301040", VA = "0x182302A40")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005186")]
	[Address(RVA = "0x2302B10", Offset = "0x2301110", VA = "0x182302B10")]
	public static void PlaySound(UISound sound)
	{
	}

	[Token(Token = "0x6005187")]
	[Address(RVA = "0x2302B80", Offset = "0x2301180", VA = "0x182302B80")]
	public static void SetLastCategory(Type t, string category)
	{
	}

	[Token(Token = "0x6005188")]
	[Address(RVA = "0x22FF7B0", Offset = "0x22FDDB0", VA = "0x1822FF7B0")]
	public static string GetLastcategory(Type t)
	{
		return null;
	}

	[Token(Token = "0x6005189")]
	[Address(RVA = "0x2302070", Offset = "0x2300670", VA = "0x182302070")]
	private static void LoadProfileIcons()
	{
	}

	[Token(Token = "0x600518A")]
	[Address(RVA = "0x2302CB0", Offset = "0x23012B0", VA = "0x182302CB0")]
	public static void SetMenu(SceneName sceneName)
	{
	}

	[Token(Token = "0x600518B")]
	[Address(RVA = "0x23005B0", Offset = "0x22FEBB0", VA = "0x1823005B0")]
	public static string GetProfileIcon(string icon)
	{
		return null;
	}

	[Token(Token = "0x600518C")]
	[Address(RVA = "0x23000B0", Offset = "0x22FE6B0", VA = "0x1823000B0")]
	public static string GetLocaleFormatted(string category, string subCategory, string item = "", params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600518D")]
	[Address(RVA = "0x2300140", Offset = "0x22FE740", VA = "0x182300140")]
	public static string GetLocale(string category, string subCategory, string item = "", string forcedLanguage = "", string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x600518E")]
	[Address(RVA = "0x2301730", Offset = "0x22FFD30", VA = "0x182301730")]
	public static bool HasLocale(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return default(bool);
	}

	[Token(Token = "0x600518F")]
	[Address(RVA = "0x22FF890", Offset = "0x22FDE90", VA = "0x1822FF890")]
	public static string[] GetLocaleArray(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return null;
	}

	[Token(Token = "0x6005190")]
	[Address(RVA = "0x2300030", Offset = "0x22FE630", VA = "0x182300030")]
	public static string GetLocaleCommon(string item)
	{
		return null;
	}

	[Token(Token = "0x6005191")]
	[Address(RVA = "0x22FFFB0", Offset = "0x22FE5B0", VA = "0x1822FFFB0")]
	public static string[] GetLocaleCommonArray(string item)
	{
		return null;
	}

	[Token(Token = "0x6005192")]
	[Address(RVA = "0x22FFEF0", Offset = "0x22FE4F0", VA = "0x1822FFEF0")]
	public static Dictionary<string, Dictionary<string, string>> GetLocaleCategoryStrings(string pattern)
	{
		return null;
	}

	[Token(Token = "0x6005193")]
	[Address(RVA = "0x22FF030", Offset = "0x22FD630", VA = "0x1822FF030")]
	private static Dictionary<string, Dictionary<string, string>> GetInternalLocaleCategoryStrings(string category)
	{
		return null;
	}

	[Token(Token = "0x6005194")]
	[Address(RVA = "0x22FE960", Offset = "0x22FCF60", VA = "0x1822FE960")]
	private static Dictionary<string, Dictionary<string, string>> GetExternalLocaleCategoryStrings(string uniqueName)
	{
		return null;
	}

	[Token(Token = "0x6005195")]
	[Address(RVA = "0x22FF560", Offset = "0x22FDB60", VA = "0x1822FF560")]
	public static string[] GetLanguages()
	{
		return null;
	}

	[Token(Token = "0x6005196")]
	[Address(RVA = "0x2301BC0", Offset = "0x23001C0", VA = "0x182301BC0")]
	private static void LoadLanguages()
	{
	}

	[Token(Token = "0x6005197")]
	[Address(RVA = "0x2300870", Offset = "0x22FEE70", VA = "0x182300870")]
	public static Color GetThemeColor(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(Color);
	}

	[Token(Token = "0x6005198")]
	[Address(RVA = "0x2300FA0", Offset = "0x22FF5A0", VA = "0x182300FA0")]
	public static Texture2D GetThemeTexture(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return null;
	}

	[Token(Token = "0x6005199")]
	[Address(RVA = "0x23006A0", Offset = "0x22FECA0", VA = "0x1823006A0")]
	public static ColorBlock GetThemeColorBlock(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(ColorBlock);
	}

	[Token(Token = "0x600519A")]
	[Address(RVA = "0x2301460", Offset = "0x22FFA60", VA = "0x182301460")]
	public static string[] GetUIThemes()
	{
		return null;
	}

	[Token(Token = "0x600519B")]
	[Address(RVA = "0x2302610", Offset = "0x2300C10", VA = "0x182302610")]
	private static void LoadUIThemes()
	{
	}

	[Token(Token = "0x600519C")]
	[Address(RVA = "0x2303110", Offset = "0x2301710", VA = "0x182303110")]
	private void Update()
	{
	}

	[Token(Token = "0x600519D")]
	[Address(RVA = "0x22FEFE0", Offset = "0x22FD5E0", VA = "0x1822FEFE0")]
	public static int GetFPS()
	{
		return default(int);
	}

	[Token(Token = "0x600519E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public UIManager()
	{
	}
}
