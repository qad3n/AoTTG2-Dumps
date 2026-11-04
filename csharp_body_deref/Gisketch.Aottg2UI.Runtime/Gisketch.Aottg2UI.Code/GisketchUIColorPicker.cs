// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000096")]
public sealed class GisketchUIColorPicker : AottgComponent
{
	[Token(Token = "0x2000097")]
	internal readonly struct Definition
	{
		[Token(Token = "0x4000332")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x4000333")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool EnableAlpha;

		[Token(Token = "0x4000334")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Action<GisketchActionContext> Save;

		[Token(Token = "0x4000335")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool LivePreview;

		[Token(Token = "0x4000336")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
		public readonly bool Disabled;

		[Token(Token = "0x600048F")]
		[Address(RVA = "0x18DA420", Offset = "0x18D8A20", VA = "0x1818DA420")]
		public Definition(string id, bool enableAlpha, Action<GisketchActionContext> save, bool livePreview, bool disabled)
		{
		}
	}

	[Token(Token = "0x4000327")]
	private const string VisualType = "GisketchUIColorPickerVisual";

	[Token(Token = "0x4000328")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Definition> Definitions;

	[Token(Token = "0x4000329")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x400032A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400032B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x400032C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _value;

	[Token(Token = "0x400032D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _enableAlpha;

	[Token(Token = "0x400032E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GisketchActionContext> _save;

	[Token(Token = "0x400032F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _livePreview;

	[Token(Token = "0x4000330")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _compact;

	[Token(Token = "0x4000331")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private readonly bool _disabled;

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x18D8430", Offset = "0x18D6A30", VA = "0x1818D8430")]
	static GisketchUIColorPicker()
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x18D8670", Offset = "0x18D6C70", VA = "0x1818D8670")]
	public GisketchUIColorPicker(string id, string label, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool compact = false, bool disabled = false)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x18D8320", Offset = "0x18D6920", VA = "0x1818D8320")]
	public static string Value(string id, string fallback, bool enableAlpha = false)
	{
		return null;
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x18D7860", Offset = "0x18D5E60", VA = "0x1818D7860")]
	public static void Register(string id, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool disabled = false)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x18D7FB0", Offset = "0x18D65B0", VA = "0x1818D7FB0")]
	public static void SetValue(string id, string value, [Optional][DefaultParameterValue(false)] bool enableAlpha, [Optional] GameObject source)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x18D5410", Offset = "0x18D3A10", VA = "0x1818D5410", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x18D5100", Offset = "0x18D3700", VA = "0x1818D5100")]
	private void BuildCompact(AottgUi ui, string value)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x18D6060", Offset = "0x18D4660", VA = "0x1818D6060")]
	internal static string Current(string id, bool enableAlpha)
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x18D5D70", Offset = "0x18D4370", VA = "0x1818D5D70")]
	internal static void Commit(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x18D76A0", Offset = "0x18D5CA0", VA = "0x1818D76A0")]
	internal static void Preview(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x18D5BE0", Offset = "0x18D41E0", VA = "0x1818D5BE0")]
	internal static void Cancel(string id, GameObject source)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x18D6AA0", Offset = "0x18D50A0", VA = "0x1818D6AA0")]
	internal static GisketchNodeDefinition PopoverNode(string id)
	{
		return null;
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x18D6810", Offset = "0x18D4E10", VA = "0x1818D6810")]
	public static void Open(GisketchActionContext context, string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x18D52F0", Offset = "0x18D38F0", VA = "0x1818D52F0")]
	private static bool BuildVisual(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x18D79C0", Offset = "0x18D5FC0", VA = "0x1818D79C0")]
	private static GisketchNodeDefinition RgbInput(string id, string suffix)
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x18D63C0", Offset = "0x18D49C0", VA = "0x1818D63C0")]
	private static GisketchNodeDefinition HexInput(string id, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x18D6100", Offset = "0x18D4700", VA = "0x1818D6100")]
	private static GisketchNodeDefinition Field(string id, string label, GisketchNodeDefinition input)
	{
		return null;
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x18D6650", Offset = "0x18D4C50", VA = "0x1818D6650")]
	private static GisketchNodeDefinition Label(string id, string text, float width)
	{
		return null;
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x18D7C10", Offset = "0x18D6210", VA = "0x1818D7C10")]
	private static GisketchNodeDefinition Row(string id, params GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x18D5A50", Offset = "0x18D4050", VA = "0x1818D5A50")]
	private static GisketchNodeDefinition Button(string id, string text, string style)
	{
		return null;
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x18D8200", Offset = "0x18D6800", VA = "0x1818D8200")]
	private static GisketchNodeDefinition SwatchNode(string id, string value, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x18D7DE0", Offset = "0x18D63E0", VA = "0x1818D7DE0")]
	private static void SetSwatch(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x18D7EE0", Offset = "0x18D64E0", VA = "0x1818D7EE0")]
	private static void SetText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000488")]
	internal static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x18D7660", Offset = "0x18D5C60", VA = "0x1818D7660")]
	internal static string PreviewId(string id)
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x18D83F0", Offset = "0x18D69F0", VA = "0x1818D83F0")]
	internal static string VisualId(string id)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x18D6380", Offset = "0x18D4980", VA = "0x1818D6380")]
	internal static string HexId(string id)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x18D5A10", Offset = "0x18D4010", VA = "0x1818D5A10")]
	private static string ButtonId(string id)
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x18D81C0", Offset = "0x18D67C0", VA = "0x1818D81C0")]
	private static string SwatchId(string id)
	{
		return null;
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x18D82E0", Offset = "0x18D68E0", VA = "0x1818D82E0")]
	private static string TextId(string id)
	{
		return null;
	}
}
