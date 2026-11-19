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

[Token(Token = "0x20008E7")]
internal class UIManager : MonoBehaviour
{
	[Token(Token = "0x4002D08")]
	private const string InternalPrefix = "internal://";

	[Token(Token = "0x4002D09")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, JSONObject> _languages;

	[Token(Token = "0x4002D0A")]
	[FieldOffset(Offset = "0x8")]
	private static string _languageLettersName;

	[Token(Token = "0x4002D0B")]
	[FieldOffset(Offset = "0x10")]
	private static string _languageLetters;

	[Token(Token = "0x4002D0C")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, JSONObject> _uiThemes;

	[Token(Token = "0x4002D0D")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<Type, string> _lastCategories;

	[Token(Token = "0x4002D0E")]
	[FieldOffset(Offset = "0x28")]
	private static string _currentUITheme;

	[Token(Token = "0x4002D0F")]
	[FieldOffset(Offset = "0x30")]
	private static string _appliedLanguage;

	[Token(Token = "0x4002D10")]
	[FieldOffset(Offset = "0x38")]
	private static UIManager _instance;

	[Token(Token = "0x4002D11")]
	[FieldOffset(Offset = "0x40")]
	public static BaseMenu CurrentMenu;

	[Token(Token = "0x4002D12")]
	[FieldOffset(Offset = "0x48")]
	public static LoadingMenu LoadingMenu;

	[Token(Token = "0x4002D13")]
	[FieldOffset(Offset = "0x50")]
	public static float CurrentCanvasScale;

	[Token(Token = "0x4002D14")]
	[FieldOffset(Offset = "0x58")]
	public static List<string> AvailableProfileIcons;

	[Token(Token = "0x4002D15")]
	[FieldOffset(Offset = "0x60")]
	public static List<string> AvailableEmojis;

	[Token(Token = "0x4002D16")]
	[FieldOffset(Offset = "0x68")]
	public static HashSet<string> AnimatedEmojis;

	[Token(Token = "0x4002D17")]
	[FieldOffset(Offset = "0x70")]
	public static bool NeedResizeText;

	[Token(Token = "0x4002D18")]
	[FieldOffset(Offset = "0x71")]
	public static bool NeedResizeTextSecondFrame;

	[Token(Token = "0x4002D19")]
	private const int MinWordFitFontSize = 10;

	[Token(Token = "0x4002D1A")]
	[FieldOffset(Offset = "0x74")]
	private static int _lastFPS;

	[Token(Token = "0x4002D1B")]
	[FieldOffset(Offset = "0x78")]
	private static float _currentFrameTime;

	[Token(Token = "0x4002D1C")]
	[FieldOffset(Offset = "0x7C")]
	private static float _currentFrameCount;

	[Token(Token = "0x4002D1D")]
	[FieldOffset(Offset = "0x80")]
	private static float _maxFrameTime;

	[Token(Token = "0x60054AF")]
	[Address(RVA = "0x5CACDA0", Offset = "0x5CABDA0", VA = "0x5CACDA0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60054B0")]
	[Address(RVA = "0x5CADDE0", Offset = "0x5CACDE0", VA = "0x5CADDE0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60054B1")]
	[Address(RVA = "0x5CADDF0", Offset = "0x5CACDF0", VA = "0x5CADDF0")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60054B2")]
	[Address(RVA = "0x5CAE320", Offset = "0x5CAD320", VA = "0x5CAE320")]
	public static void PlaySound(UISound sound)
	{
	}

	[Token(Token = "0x60054B3")]
	[Address(RVA = "0x5CAE370", Offset = "0x5CAD370", VA = "0x5CAE370")]
	public static void SetLastCategory(Type t, string category)
	{
	}

	[Token(Token = "0x60054B4")]
	[Address(RVA = "0x5CAE4B0", Offset = "0x5CAD4B0", VA = "0x5CAE4B0")]
	public static string GetLastcategory(Type t)
	{
		return null;
	}

	[Token(Token = "0x60054B5")]
	[Address(RVA = "0x5CAD860", Offset = "0x5CAC860", VA = "0x5CAD860")]
	private static void LoadProfileIcons()
	{
	}

	[Token(Token = "0x60054B6")]
	[Address(RVA = "0x5CAE5C0", Offset = "0x5CAD5C0", VA = "0x5CAE5C0")]
	public static void ApplyLanguageAndTheme()
	{
	}

	[Token(Token = "0x60054B7")]
	[Address(RVA = "0x5CADEE0", Offset = "0x5CACEE0", VA = "0x5CADEE0")]
	public static void SetMenu(SceneName sceneName)
	{
	}

	[Token(Token = "0x60054B8")]
	[Address(RVA = "0x5CAE980", Offset = "0x5CAD980", VA = "0x5CAE980")]
	public static string GetProfileIcon(string icon)
	{
		return null;
	}

	[Token(Token = "0x60054B9")]
	[Address(RVA = "0x5CA7CE0", Offset = "0x5CA6CE0", VA = "0x5CA7CE0")]
	public static string GetLocaleFormatted(string category, string subCategory, string item = "", params object[] args)
	{
		return null;
	}

	[Token(Token = "0x60054BA")]
	[Address(RVA = "0x5C94190", Offset = "0x5C93190", VA = "0x5C94190")]
	public static string GetLocale(string category, string subCategory, string item = "", string forcedLanguage = "", string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x60054BB")]
	[Address(RVA = "0x5CAEA90", Offset = "0x5CADA90", VA = "0x5CAEA90")]
	public static bool HasLocale(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60054BC")]
	[Address(RVA = "0x5CAED10", Offset = "0x5CADD10", VA = "0x5CAED10")]
	public static string[] GetLocaleArray(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return null;
	}

	[Token(Token = "0x60054BD")]
	[Address(RVA = "0x5CAF360", Offset = "0x5CAE360", VA = "0x5CAF360")]
	public static string[] GetLocaleOptions(string key)
	{
		return null;
	}

	[Token(Token = "0x60054BE")]
	[Address(RVA = "0x5CAF470", Offset = "0x5CAE470", VA = "0x5CAF470")]
	public static string[] GetLocaleOptions(string category, string subCategory, string item)
	{
		return null;
	}

	[Token(Token = "0x60054BF")]
	[Address(RVA = "0x5CAF530", Offset = "0x5CAE530", VA = "0x5CAF530")]
	public static string[] GetLocaleOptions(string category, string subCategory, string item, string[] fallback)
	{
		return null;
	}

	[Token(Token = "0x60054C0")]
	[Address(RVA = "0x5C93470", Offset = "0x5C92470", VA = "0x5C93470")]
	public static string GetLocaleCommon(string item)
	{
		return null;
	}

	[Token(Token = "0x60054C1")]
	[Address(RVA = "0x5CAF610", Offset = "0x5CAE610", VA = "0x5CAF610")]
	public static string[] GetLocaleCommonArray(string item)
	{
		return null;
	}

	[Token(Token = "0x60054C2")]
	[Address(RVA = "0x5CAF680", Offset = "0x5CAE680", VA = "0x5CAF680")]
	public static Dictionary<string, Dictionary<string, string>> GetLocaleCategoryStrings(string pattern)
	{
		return null;
	}

	[Token(Token = "0x60054C3")]
	[Address(RVA = "0x5CAF740", Offset = "0x5CAE740", VA = "0x5CAF740")]
	private static Dictionary<string, Dictionary<string, string>> GetInternalLocaleCategoryStrings(string category)
	{
		return null;
	}

	[Token(Token = "0x60054C4")]
	[Address(RVA = "0x5CAFC60", Offset = "0x5CAEC60", VA = "0x5CAFC60")]
	private static Dictionary<string, Dictionary<string, string>> GetExternalLocaleCategoryStrings(string uniqueName)
	{
		return null;
	}

	[Token(Token = "0x60054C5")]
	[Address(RVA = "0x5CB0370", Offset = "0x5CAF370", VA = "0x5CB0370")]
	public static string[] GetLanguages()
	{
		return null;
	}

	[Token(Token = "0x60054C6")]
	[Address(RVA = "0x5CB0690", Offset = "0x5CAF690", VA = "0x5CB0690")]
	public static string GetLanguageLetters()
	{
		return null;
	}

	[Token(Token = "0x60054C7")]
	[Address(RVA = "0x5CB08E0", Offset = "0x5CAF8E0", VA = "0x5CB08E0")]
	private static void CollectLetters(JSONNode node, HashSet<char> letters)
	{
	}

	[Token(Token = "0x60054C8")]
	[Address(RVA = "0x5CB0D20", Offset = "0x5CAFD20", VA = "0x5CB0D20")]
	private static void PrepareDisplayText(JSONObject language)
	{
	}

	[Token(Token = "0x60054C9")]
	[Address(RVA = "0x5CB0E90", Offset = "0x5CAFE90", VA = "0x5CB0E90")]
	private static void PrepareDisplayText(JSONNode node)
	{
	}

	[Token(Token = "0x60054CA")]
	[Address(RVA = "0x5CACFF0", Offset = "0x5CABFF0", VA = "0x5CACFF0")]
	private static void LoadLanguages()
	{
	}

	[Token(Token = "0x60054CB")]
	[Address(RVA = "0x5CA4A00", Offset = "0x5CA3A00", VA = "0x5CA4A00")]
	public static Color GetThemeColor(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(Color);
	}

	[Token(Token = "0x60054CC")]
	[Address(RVA = "0x5CB1220", Offset = "0x5CB0220", VA = "0x5CB1220")]
	public static Texture2D GetThemeTexture(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return null;
	}

	[Token(Token = "0x60054CD")]
	[Address(RVA = "0x5CA52B0", Offset = "0x5CA42B0", VA = "0x5CA52B0")]
	public static ColorBlock GetThemeColorBlock(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(ColorBlock);
	}

	[Token(Token = "0x60054CE")]
	[Address(RVA = "0x5CB1790", Offset = "0x5CB0790", VA = "0x5CB1790")]
	public static string[] GetUIThemes()
	{
		return null;
	}

	[Token(Token = "0x60054CF")]
	[Address(RVA = "0x5CAD430", Offset = "0x5CAC430", VA = "0x5CAD430")]
	private static void LoadUIThemes()
	{
	}

	[Token(Token = "0x60054D0")]
	[Address(RVA = "0x5CB1B70", Offset = "0x5CB0B70", VA = "0x5CB1B70")]
	private void Update()
	{
	}

	[Token(Token = "0x60054D1")]
	[Address(RVA = "0x5CB2220", Offset = "0x5CB1220", VA = "0x5CB2220")]
	private static bool BreaksWord(Text text)
	{
		return default(bool);
	}

	[Token(Token = "0x60054D2")]
	[Address(RVA = "0x5CB20B0", Offset = "0x5CB10B0", VA = "0x5CB20B0")]
	private static bool IsContentSized(Text text)
	{
		return default(bool);
	}

	[Token(Token = "0x60054D3")]
	[Address(RVA = "0x5CB27F0", Offset = "0x5CB17F0", VA = "0x5CB27F0")]
	private static bool IsWordCharacter(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x60054D4")]
	[Address(RVA = "0x5CB2850", Offset = "0x5CB1850", VA = "0x5CB2850")]
	public static int GetFPS()
	{
		return default(int);
	}

	[Token(Token = "0x60054D5")]
	[Address(RVA = "0x5CB28C0", Offset = "0x5CB18C0", VA = "0x5CB28C0")]
	public UIManager()
	{
	}
}
