// ==================== AoTTG2 cross-reference ====================
// Type: MiscExtensions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MiscExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/MiscExtensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

[Token(Token = "0x2000025")]
internal static class MiscExtensions
{
	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string HexPattern;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string ColorTagPattern;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string ColorEndPattern;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string TagPattern;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string SizePattern;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string MaterialPattern;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string QuadPattern;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Regex HexRegex;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Regex ColorTagRegex;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Regex ColorEndRegex;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Regex TagRegex;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Regex IllegalStyleRegex;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Regex NamedColorTagRegex;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x68")]
	public static readonly Dictionary<string, string> NamedColorHex;

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x574E640", Offset = "0x574D640", VA = "0x574E640")]
	public static string ResolveNamedColorHex(string name)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x574E730", Offset = "0x574D730", VA = "0x574E730")]
	public static string ReplaceNamedColorTags(string input)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x574E890", Offset = "0x574D890", VA = "0x574E890")]
	public static bool GetActive(this GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x574E8B0", Offset = "0x574D8B0", VA = "0x574E8B0")]
	public static void BakeLocalMesh(this SkinnedMeshRenderer renderer, Mesh mesh)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x574E980", Offset = "0x574D980", VA = "0x574E980")]
	public static string ToDisplayString(this Vector3 vector)
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x574EB00", Offset = "0x574DB00", VA = "0x574EB00")]
	public static double UnboxToDouble(this object obj)
	{
		return default(double);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x574EB50", Offset = "0x574DB50", VA = "0x574EB50")]
	public static float UnboxToFloat(this object obj)
	{
		return default(float);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x574ECE0", Offset = "0x574DCE0", VA = "0x574ECE0")]
	public static int UnboxToInt(this object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x574EE40", Offset = "0x574DE40", VA = "0x574EE40")]
	public static float MaxComponent(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x574EF80", Offset = "0x574DF80", VA = "0x574EF80")]
	public static string UpperFirstLetter(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x574F050", Offset = "0x574E050", VA = "0x574F050")]
	public static string StripHex(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x574F0F0", Offset = "0x574E0F0", VA = "0x574F0F0")]
	public static List<string> Tokenize(string input)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x574F790", Offset = "0x574E790", VA = "0x574F790")]
	public static string StripRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x574F830", Offset = "0x574E830", VA = "0x574F830")]
	public static string StripIllegalRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x574F8D0", Offset = "0x574E8D0", VA = "0x574F8D0")]
	public static string ForceWhiteColorTag(this string text)
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x574F970", Offset = "0x574E970", VA = "0x574F970")]
	public static string StripColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x574FA40", Offset = "0x574EA40", VA = "0x574FA40")]
	public static string ForceColor(this string text, Color color)
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x574FBE0", Offset = "0x574EBE0", VA = "0x574FBE0")]
	public static string ForceColor(this string text, string colorHex)
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x574FD30", Offset = "0x574ED30", VA = "0x574FD30")]
	public static string TruncateRichText(this string text, int length)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5750350", Offset = "0x574F350", VA = "0x5750350")]
	public static string HexColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	public static T ToEnum<T>(this string value, bool ignoreCase = true)
	{
		return (T)null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x5750600", Offset = "0x574F600", VA = "0x5750600")]
	public static float ParseFloat(string str)
	{
		return default(float);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x5750610", Offset = "0x574F610", VA = "0x5750610")]
	public static bool IsGray(this Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x5750640", Offset = "0x574F640", VA = "0x5750640")]
	public static bool IsGray(this Color255 color)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	public static T GetRandomItem<T>(this List<T> list)
	{
		return (T)null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x5750670", Offset = "0x574F670", VA = "0x5750670")]
	public static JSONNode GetRandomItem(this JSONNode list)
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x57506C0", Offset = "0x574F6C0", VA = "0x57506C0")]
	public static Color ToColor(this JSONNode array)
	{
		return default(Color);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5750810", Offset = "0x574F810", VA = "0x5750810")]
	public static PlayerInfo GetPlayerInfo(this Player player)
	{
		return null;
	}
}
