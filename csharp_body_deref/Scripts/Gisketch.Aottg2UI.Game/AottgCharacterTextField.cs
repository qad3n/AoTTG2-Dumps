// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F9")]
internal sealed class AottgCharacterTextField : AottgComponent
{
	[Token(Token = "0x4000F25")]
	private const int VisibleLimit = 31;

	[Token(Token = "0x4000F26")]
	private const int RawInputLimit = 512;

	[Token(Token = "0x4000F27")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x4000F28")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000F29")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _labelKey;

	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _placeholderKey;

	[Token(Token = "0x4000F2B")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _value;

	[Token(Token = "0x4000F2C")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _enabled;

	[Token(Token = "0x4000F2D")]
	[FieldOffset(Offset = "0x38")]
	private readonly string _effectPrefix;

	[Token(Token = "0x4000F2E")]
	[FieldOffset(Offset = "0x40")]
	private readonly Action<GisketchActionContext> _changed;

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x57EDF10", Offset = "0x57ECF10", VA = "0x57EDF10")]
	public AottgCharacterTextField(string id, string labelKey, string placeholderKey, string value, bool enabled, string effectPrefix, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x57DF000", Offset = "0x57DE000", VA = "0x57DF000")]
	public static string Value(string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x57E55F0", Offset = "0x57E45F0", VA = "0x57E55F0")]
	public static void SetValue(GameObject source, string id, string value)
	{
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x57DF7C0", Offset = "0x57DE7C0", VA = "0x57DF7C0")]
	public static void SetFont(GameObject source, string id, string font)
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x57EE380", Offset = "0x57ED380", VA = "0x57EE380")]
	public static string VisibleText(string value)
	{
		return null;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x57EE410", Offset = "0x57ED410", VA = "0x57EE410", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x57EE620", Offset = "0x57ED620", VA = "0x57EE620")]
	private static bool IsEnabled(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x57EE7A0", Offset = "0x57ED7A0", VA = "0x57EE7A0")]
	private static void SetFromInput(GisketchActionContext context, string id, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x57EE9F0", Offset = "0x57ED9F0", VA = "0x57EE9F0")]
	private static string CleanInput(string value)
	{
		return null;
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x57EE760", Offset = "0x57ED760", VA = "0x57EE760")]
	public static string EnabledKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x57EDFE0", Offset = "0x57ECFE0", VA = "0x57EDFE0")]
	private static void SetInputText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x57EE200", Offset = "0x57ED200", VA = "0x57EE200")]
	private static void SetInputFont(Transform root, string id, string font)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x57EEAC0", Offset = "0x57EDAC0", VA = "0x57EEAC0")]
	public static void SetFieldVisible(GameObject source, string id, bool visible)
	{
	}
}
