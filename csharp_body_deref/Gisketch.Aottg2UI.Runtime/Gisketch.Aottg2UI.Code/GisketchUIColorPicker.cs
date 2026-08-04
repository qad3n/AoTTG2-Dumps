// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007E")]
public sealed class GisketchUIColorPicker : AottgComponent
{
	[Token(Token = "0x200007F")]
	internal readonly struct Definition
	{
		[Token(Token = "0x40002A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x40002A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool EnableAlpha;

		[Token(Token = "0x40002A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Action<GisketchActionContext> Save;

		[Token(Token = "0x40002A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool LivePreview;

		[Token(Token = "0x40002A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
		public readonly bool Disabled;

		[Token(Token = "0x600037D")]
		[Address(RVA = "0x3A6A720", Offset = "0x3A6A720", VA = "0x3A6A720")]
		public Definition(string id, bool enableAlpha, Action<GisketchActionContext> save, bool livePreview, bool disabled)
		{
		}
	}

	[Token(Token = "0x4000297")]
	private const string VisualType = "GisketchUIColorPickerVisual";

	[Token(Token = "0x4000298")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Definition> Definitions;

	[Token(Token = "0x4000299")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x400029A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400029B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x400029C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _value;

	[Token(Token = "0x400029D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _enableAlpha;

	[Token(Token = "0x400029E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GisketchActionContext> _save;

	[Token(Token = "0x400029F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _livePreview;

	[Token(Token = "0x40002A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _compact;

	[Token(Token = "0x40002A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private readonly bool _disabled;

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3A69FE0", Offset = "0x3A69FE0", VA = "0x3A69FE0")]
	static GisketchUIColorPicker()
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3A6A360", Offset = "0x3A6A360", VA = "0x3A6A360")]
	public GisketchUIColorPicker(string id, string label, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool compact = false, bool disabled = false)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3A6A3F0", Offset = "0x3A6A3F0", VA = "0x3A6A3F0")]
	public static string Value(string id, string fallback, bool enableAlpha = false)
	{
		return null;
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3A6A5B0", Offset = "0x3A6A5B0", VA = "0x3A6A5B0")]
	public static void Register(string id, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool disabled = false)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x3A6A770", Offset = "0x3A6A770", VA = "0x3A6A770")]
	public static void SetValue(string id, string value, [Optional][DefaultParameterValue(false)] bool enableAlpha, [Optional] GameObject source)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3A6ABE0", Offset = "0x3A6ABE0", VA = "0x3A6ABE0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3A6AF10", Offset = "0x3A6AF10", VA = "0x3A6AF10")]
	private void BuildCompact(AottgUi ui, string value)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3A6B150", Offset = "0x3A6B150", VA = "0x3A6B150")]
	internal static string Current(string id, bool enableAlpha)
	{
		return null;
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3A6B1D0", Offset = "0x3A6B1D0", VA = "0x3A6B1D0")]
	internal static void Commit(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3A6B600", Offset = "0x3A6B600", VA = "0x3A6B600")]
	internal static void Preview(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x3A6B860", Offset = "0x3A6B860", VA = "0x3A6B860")]
	internal static void Cancel(string id, GameObject source)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x3A6B9E0", Offset = "0x3A6B9E0", VA = "0x3A6B9E0")]
	internal static GisketchNodeDefinition PopoverNode(string id)
	{
		return null;
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x3A6D4E0", Offset = "0x3A6D4E0", VA = "0x3A6D4E0")]
	public static void Open(GisketchActionContext context, string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x3A6DD80", Offset = "0x3A6DD80", VA = "0x3A6DD80")]
	private static bool BuildVisual(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x3A6C7B0", Offset = "0x3A6C7B0", VA = "0x3A6C7B0")]
	private static GisketchNodeDefinition RgbInput(string id, string suffix)
	{
		return null;
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x3A6D070", Offset = "0x3A6D070", VA = "0x3A6D070")]
	private static GisketchNodeDefinition HexInput(string id, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x3A6CA00", Offset = "0x3A6CA00", VA = "0x3A6CA00")]
	private static GisketchNodeDefinition Field(string id, string label, GisketchNodeDefinition input)
	{
		return null;
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x3A6CEA0", Offset = "0x3A6CEA0", VA = "0x3A6CEA0")]
	private static GisketchNodeDefinition Label(string id, string text, float width)
	{
		return null;
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x3A6CCB0", Offset = "0x3A6CCB0", VA = "0x3A6CCB0")]
	private static GisketchNodeDefinition Row(string id, params GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x3A6D320", Offset = "0x3A6D320", VA = "0x3A6D320")]
	private static GisketchNodeDefinition Button(string id, string text, string style)
	{
		return null;
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x3A6C680", Offset = "0x3A6C680", VA = "0x3A6C680")]
	private static GisketchNodeDefinition SwatchNode(string id, string value, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x3A6A9E0", Offset = "0x3A6A9E0", VA = "0x3A6A9E0")]
	private static void SetSwatch(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x3A6AB10", Offset = "0x3A6AB10", VA = "0x3A6AB10")]
	private static void SetText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000376")]
	internal static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x3A6C640", Offset = "0x3A6C640", VA = "0x3A6C640")]
	internal static string PreviewId(string id)
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x3A6C770", Offset = "0x3A6C770", VA = "0x3A6C770")]
	internal static string VisualId(string id)
	{
		return null;
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x3A6E0B0", Offset = "0x3A6E0B0", VA = "0x3A6E0B0")]
	internal static string HexId(string id)
	{
		return null;
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x3A6E0F0", Offset = "0x3A6E0F0", VA = "0x3A6E0F0")]
	private static string ButtonId(string id)
	{
		return null;
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x3A6A9A0", Offset = "0x3A6A9A0", VA = "0x3A6A9A0")]
	private static string SwatchId(string id)
	{
		return null;
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x3A6AAD0", Offset = "0x3A6AAD0", VA = "0x3A6AAD0")]
	private static string TextId(string id)
	{
		return null;
	}
}
