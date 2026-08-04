// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000197")]
internal sealed class AottgCharacterTextField : AottgComponent
{
	[Token(Token = "0x40008EB")]
	private const int VisibleLimit = 31;

	[Token(Token = "0x40008EC")]
	private const int RawInputLimit = 512;

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x40008EE")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008EF")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _placeholder;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _value;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _enabled;

	[Token(Token = "0x40008F3")]
	[FieldOffset(Offset = "0x38")]
	private readonly string _effectPrefix;

	[Token(Token = "0x40008F4")]
	[FieldOffset(Offset = "0x40")]
	private readonly Action<GisketchActionContext> _changed;

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x4411240", Offset = "0x4411240", VA = "0x4411240")]
	public AottgCharacterTextField(string id, string label, string placeholder, string value, bool enabled, string effectPrefix, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x44035B0", Offset = "0x44035B0", VA = "0x44035B0")]
	public static string Value(string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x4408E40", Offset = "0x4408E40", VA = "0x4408E40")]
	public static void SetValue(GameObject source, string id, string value)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x4403D70", Offset = "0x4403D70", VA = "0x4403D70")]
	public static void SetFont(GameObject source, string id, string font)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x44116D0", Offset = "0x44116D0", VA = "0x44116D0")]
	public static string VisibleText(string value)
	{
		return null;
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x4411760", Offset = "0x4411760", VA = "0x4411760", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x4411970", Offset = "0x4411970", VA = "0x4411970")]
	private static bool IsEnabled(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x4411AF0", Offset = "0x4411AF0", VA = "0x4411AF0")]
	private static void SetFromInput(GisketchActionContext context, string id, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x4411D40", Offset = "0x4411D40", VA = "0x4411D40")]
	private static string CleanInput(string value)
	{
		return null;
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x4411AB0", Offset = "0x4411AB0", VA = "0x4411AB0")]
	public static string EnabledKey(string id)
	{
		return null;
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x4411310", Offset = "0x4411310", VA = "0x4411310")]
	private static void SetInputText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x4411550", Offset = "0x4411550", VA = "0x4411550")]
	private static void SetInputFont(Transform root, string id, string font)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x4411E10", Offset = "0x4411E10", VA = "0x4411E10")]
	public static void SetFieldVisible(GameObject source, string id, bool visible)
	{
	}
}
