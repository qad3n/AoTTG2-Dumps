// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200029D")]
internal sealed class AottgCharacterTextField : AottgComponent
{
	[Token(Token = "0x4000D8E")]
	private const int VisibleLimit = 31;

	[Token(Token = "0x4000D8F")]
	private const int RawInputLimit = 512;

	[Token(Token = "0x4000D90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x4000D91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000D92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000D93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x4000D94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _placeholder;

	[Token(Token = "0x4000D95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _placeholderKey;

	[Token(Token = "0x4000D96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _value;

	[Token(Token = "0x4000D97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly bool _enabled;

	[Token(Token = "0x4000D98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _effectPrefix;

	[Token(Token = "0x4000D99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly Action<GisketchActionContext> _changed;

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x1E06160", Offset = "0x1E04760", VA = "0x181E06160")]
	public AottgCharacterTextField(string id, string label, string placeholder, string value, bool enabled, string effectPrefix, Action<GisketchActionContext> changed, [Optional] string labelKey, [Optional] string placeholderKey)
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x1E05F20", Offset = "0x1E04520", VA = "0x181E05F20")]
	public static string Value(string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x1E05300", Offset = "0x1E03900", VA = "0x181E05300")]
	public static void SetValue(GameObject source, string id, string value)
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x1E04B70", Offset = "0x1E03170", VA = "0x181E04B70")]
	public static void SetFont(GameObject source, string id, string font)
	{
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x1E05FF0", Offset = "0x1E045F0", VA = "0x181E05FF0")]
	public static string VisibleText(string value)
	{
		return null;
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x1E04510", Offset = "0x1E02B10", VA = "0x181E04510", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x1E04830", Offset = "0x1E02E30", VA = "0x181E04830")]
	private static bool IsEnabled(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x1E04D80", Offset = "0x1E03380", VA = "0x181E04D80")]
	private static void SetFromInput(GisketchActionContext context, string id, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x1E04750", Offset = "0x1E02D50", VA = "0x181E04750")]
	private static string CleanInput(string value)
	{
		return null;
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x1E047F0", Offset = "0x1E02DF0", VA = "0x181E047F0")]
	public static string EnabledKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x1E05180", Offset = "0x1E03780", VA = "0x181E05180")]
	private static void SetInputText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x1E05000", Offset = "0x1E03600", VA = "0x181E05000")]
	private static void SetInputFont(Transform root, string id, string font)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x1E04990", Offset = "0x1E02F90", VA = "0x181E04990")]
	public static void SetFieldVisible(GameObject source, string id, bool visible)
	{
	}
}
