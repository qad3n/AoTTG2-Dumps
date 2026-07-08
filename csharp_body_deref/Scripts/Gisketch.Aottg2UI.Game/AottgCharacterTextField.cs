using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000165")]
internal sealed class AottgCharacterTextField : AottgComponent
{
	[Token(Token = "0x400082A")]
	private const int VisibleLimit = 31;

	[Token(Token = "0x400082B")]
	private const int RawInputLimit = 512;

	[Token(Token = "0x400082C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x400082D")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _placeholder;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _value;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _enabled;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x38")]
	private readonly string _effectPrefix;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x40")]
	private readonly Action<GisketchActionContext> _changed;

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x40DEA50", Offset = "0x40DEA50", VA = "0x40DEA50")]
	public AottgCharacterTextField(string id, string label, string placeholder, string value, bool enabled, string effectPrefix, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x40DEB20", Offset = "0x40DEB20", VA = "0x40DEB20")]
	public static string Value(string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x40DEBE0", Offset = "0x40DEBE0", VA = "0x40DEBE0")]
	public static void SetValue(GameObject source, string id, string value)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x40DEF70", Offset = "0x40DEF70", VA = "0x40DEF70")]
	public static void SetFont(GameObject source, string id, string font)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x40DF1B0", Offset = "0x40DF1B0", VA = "0x40DF1B0")]
	public static string VisibleText(string value)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x40DF240", Offset = "0x40DF240", VA = "0x40DF240", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x40DF450", Offset = "0x40DF450", VA = "0x40DF450")]
	private static bool IsEnabled(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x40DF5D0", Offset = "0x40DF5D0", VA = "0x40DF5D0")]
	private static void SetFromInput(GisketchActionContext context, string id, Action<GisketchActionContext> changed)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x40DF7B0", Offset = "0x40DF7B0", VA = "0x40DF7B0")]
	private static string CleanInput(string value)
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x40DF590", Offset = "0x40DF590", VA = "0x40DF590")]
	public static string EnabledKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x40DED30", Offset = "0x40DED30", VA = "0x40DED30")]
	private static void SetInputText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x40DF030", Offset = "0x40DF030", VA = "0x40DF030")]
	private static void SetInputFont(Transform root, string id, string font)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x40DF880", Offset = "0x40DF880", VA = "0x40DF880")]
	public static void SetFieldVisible(GameObject source, string id, bool visible)
	{
	}
}
