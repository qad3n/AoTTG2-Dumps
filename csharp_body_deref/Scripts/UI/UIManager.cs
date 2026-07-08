using System;
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006B4")]
internal class UIManager : MonoBehaviour
{
	[Token(Token = "0x400206E")]
	private const string InternalPrefix = "internal://";

	[Token(Token = "0x400206F")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, JSONObject> _languages;

	[Token(Token = "0x4002070")]
	[FieldOffset(Offset = "0x20")]
	private string _arabicLanguageName;

	[Token(Token = "0x4002071")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, JSONObject> _uiThemes;

	[Token(Token = "0x4002072")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<Type, string> _lastCategories;

	[Token(Token = "0x4002073")]
	[FieldOffset(Offset = "0x18")]
	private static string _currentUITheme;

	[Token(Token = "0x4002074")]
	[FieldOffset(Offset = "0x20")]
	private static UIManager _instance;

	[Token(Token = "0x4002075")]
	[FieldOffset(Offset = "0x28")]
	public static BaseMenu CurrentMenu;

	[Token(Token = "0x4002076")]
	[FieldOffset(Offset = "0x30")]
	public static LoadingMenu LoadingMenu;

	[Token(Token = "0x4002077")]
	[FieldOffset(Offset = "0x38")]
	public static float CurrentCanvasScale;

	[Token(Token = "0x4002078")]
	[FieldOffset(Offset = "0x40")]
	public static List<string> AvailableProfileIcons;

	[Token(Token = "0x4002079")]
	[FieldOffset(Offset = "0x48")]
	public static List<string> AvailableEmojis;

	[Token(Token = "0x400207A")]
	[FieldOffset(Offset = "0x50")]
	public static HashSet<string> AnimatedEmojis;

	[Token(Token = "0x400207B")]
	[FieldOffset(Offset = "0x58")]
	public static bool NeedResizeText;

	[Token(Token = "0x400207C")]
	[FieldOffset(Offset = "0x59")]
	public static bool NeedResizeTextSecondFrame;

	[Token(Token = "0x400207D")]
	[FieldOffset(Offset = "0x60")]
	private static Dictionary<string, AudioSource> _sounds;

	[Token(Token = "0x400207E")]
	[FieldOffset(Offset = "0x68")]
	private static int _lastFPS;

	[Token(Token = "0x400207F")]
	[FieldOffset(Offset = "0x6C")]
	private static float _currentFrameTime;

	[Token(Token = "0x4002080")]
	[FieldOffset(Offset = "0x70")]
	private static float _currentFrameCount;

	[Token(Token = "0x4002081")]
	[FieldOffset(Offset = "0x74")]
	private static float _maxFrameTime;

	[Token(Token = "0x60042E4")]
	[Address(RVA = "0x403DDB0", Offset = "0x403DDB0", VA = "0x403DDB0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60042E5")]
	[Address(RVA = "0x403EE50", Offset = "0x403EE50", VA = "0x403EE50")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60042E6")]
	[Address(RVA = "0x403F550", Offset = "0x403F550", VA = "0x403F550")]
	public static void PlaySound(UISound sound)
	{
	}

	[Token(Token = "0x60042E7")]
	[Address(RVA = "0x403F610", Offset = "0x403F610", VA = "0x403F610")]
	public static void SetLastCategory(Type t, string category)
	{
	}

	[Token(Token = "0x60042E8")]
	[Address(RVA = "0x403F740", Offset = "0x403F740", VA = "0x403F740")]
	public static string GetLastcategory(Type t)
	{
		return null;
	}

	[Token(Token = "0x60042E9")]
	[Address(RVA = "0x403E8A0", Offset = "0x403E8A0", VA = "0x403E8A0")]
	private static void LoadProfileIcons()
	{
	}

	[Token(Token = "0x60042EA")]
	[Address(RVA = "0x403F350", Offset = "0x403F350", VA = "0x403F350")]
	private static void LoadSounds()
	{
	}

	[Token(Token = "0x60042EB")]
	[Address(RVA = "0x403EF70", Offset = "0x403EF70", VA = "0x403EF70")]
	public static void SetMenu(SceneName sceneName)
	{
	}

	[Token(Token = "0x60042EC")]
	[Address(RVA = "0x403F850", Offset = "0x403F850", VA = "0x403F850")]
	public static string GetProfileIcon(string icon)
	{
		return null;
	}

	[Token(Token = "0x60042ED")]
	[Address(RVA = "0x403F960", Offset = "0x403F960", VA = "0x403F960")]
	public static string GetLocaleFormatted(string category, string subCategory, string item = "", params object[] args)
	{
		return null;
	}

	[Token(Token = "0x60042EE")]
	[Address(RVA = "0x402C7B0", Offset = "0x402C7B0", VA = "0x402C7B0")]
	public static string GetLocale(string category, string subCategory, string item = "", string forcedLanguage = "", string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x60042EF")]
	[Address(RVA = "0x4030000", Offset = "0x4030000", VA = "0x4030000")]
	public static string[] GetLocaleArray(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		return null;
	}

	[Token(Token = "0x60042F0")]
	[Address(RVA = "0x4029BF0", Offset = "0x4029BF0", VA = "0x4029BF0")]
	public static string GetLocaleCommon(string item)
	{
		return null;
	}

	[Token(Token = "0x60042F1")]
	[Address(RVA = "0x403F9F0", Offset = "0x403F9F0", VA = "0x403F9F0")]
	public static string[] GetLocaleCommonArray(string item)
	{
		return null;
	}

	[Token(Token = "0x60042F2")]
	[Address(RVA = "0x403FA60", Offset = "0x403FA60", VA = "0x403FA60")]
	public static Dictionary<string, Dictionary<string, string>> GetLocaleCategoryStrings(string pattern)
	{
		return null;
	}

	[Token(Token = "0x60042F3")]
	[Address(RVA = "0x403FB20", Offset = "0x403FB20", VA = "0x403FB20")]
	private static Dictionary<string, Dictionary<string, string>> GetInternalLocaleCategoryStrings(string category)
	{
		return null;
	}

	[Token(Token = "0x60042F4")]
	[Address(RVA = "0x4040500", Offset = "0x4040500", VA = "0x4040500")]
	private static Dictionary<string, Dictionary<string, string>> GetExternalLocaleCategoryStrings(string uniqueName)
	{
		return null;
	}

	[Token(Token = "0x60042F5")]
	[Address(RVA = "0x402E5E0", Offset = "0x402E5E0", VA = "0x402E5E0")]
	public static string[] GetLanguages()
	{
		return null;
	}

	[Token(Token = "0x60042F6")]
	[Address(RVA = "0x403DFB0", Offset = "0x403DFB0", VA = "0x403DFB0")]
	private static void LoadLanguages()
	{
	}

	[Token(Token = "0x60042F7")]
	[Address(RVA = "0x4040EB0", Offset = "0x4040EB0", VA = "0x4040EB0")]
	public static Color GetThemeColor(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(Color);
	}

	[Token(Token = "0x60042F8")]
	[Address(RVA = "0x4041880", Offset = "0x4041880", VA = "0x4041880")]
	public static Texture2D GetThemeTexture(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return null;
	}

	[Token(Token = "0x60042F9")]
	[Address(RVA = "0x4041E50", Offset = "0x4041E50", VA = "0x4041E50")]
	public static ColorBlock GetThemeColorBlock(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		return default(ColorBlock);
	}

	[Token(Token = "0x60042FA")]
	[Address(RVA = "0x403BE10", Offset = "0x403BE10", VA = "0x403BE10")]
	public static string[] GetUIThemes()
	{
		return null;
	}

	[Token(Token = "0x60042FB")]
	[Address(RVA = "0x403E460", Offset = "0x403E460", VA = "0x403E460")]
	private static void LoadUIThemes()
	{
	}

	[Token(Token = "0x60042FC")]
	[Address(RVA = "0x4041FD0", Offset = "0x4041FD0", VA = "0x4041FD0")]
	private void Update()
	{
	}

	[Token(Token = "0x60042FD")]
	[Address(RVA = "0x40424A0", Offset = "0x40424A0", VA = "0x40424A0")]
	public static int GetFPS()
	{
		return default(int);
	}

	[Token(Token = "0x60042FE")]
	[Address(RVA = "0x4042510", Offset = "0x4042510", VA = "0x4042510")]
	public UIManager()
	{
	}
}
