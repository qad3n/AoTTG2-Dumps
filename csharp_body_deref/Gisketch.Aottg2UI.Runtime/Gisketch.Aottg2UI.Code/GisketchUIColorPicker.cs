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

[Token(Token = "0x200009C")]
public sealed class GisketchUIColorPicker : AottgComponent
{
	[Token(Token = "0x200009D")]
	internal readonly struct Definition
	{
		[Token(Token = "0x4000359")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x400035A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool EnableAlpha;

		[Token(Token = "0x400035B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Action<GisketchActionContext> Save;

		[Token(Token = "0x400035C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool LivePreview;

		[Token(Token = "0x400035D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
		public readonly bool Disabled;

		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x5272700", Offset = "0x5271700", VA = "0x5272700")]
		public Definition(string id, bool enableAlpha, Action<GisketchActionContext> save, bool livePreview, bool disabled)
		{
		}
	}

	[Token(Token = "0x400034E")]
	private const string VisualType = "GisketchUIColorPickerVisual";

	[Token(Token = "0x400034F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Definition> Definitions;

	[Token(Token = "0x4000350")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x4000351")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000352")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000353")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _value;

	[Token(Token = "0x4000354")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _enableAlpha;

	[Token(Token = "0x4000355")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GisketchActionContext> _save;

	[Token(Token = "0x4000356")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _livePreview;

	[Token(Token = "0x4000357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _compact;

	[Token(Token = "0x4000358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private readonly bool _disabled;

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x5271FC0", Offset = "0x5270FC0", VA = "0x5271FC0")]
	static GisketchUIColorPicker()
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x5272330", Offset = "0x5271330", VA = "0x5272330")]
	public GisketchUIColorPicker(string id, string label, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool compact = false, bool disabled = false)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x52723C0", Offset = "0x52713C0", VA = "0x52723C0")]
	public static string Value(string id, string fallback, bool enableAlpha = false)
	{
		return null;
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x5272590", Offset = "0x5271590", VA = "0x5272590")]
	public static void Register(string id, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool disabled = false)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x5272750", Offset = "0x5271750", VA = "0x5272750")]
	public static void SetValue(string id, string value, [Optional][DefaultParameterValue(false)] bool enableAlpha, [Optional] GameObject source)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x5272BB0", Offset = "0x5271BB0", VA = "0x5272BB0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x5272EE0", Offset = "0x5271EE0", VA = "0x5272EE0")]
	private void BuildCompact(AottgUi ui, string value)
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x5273110", Offset = "0x5272110", VA = "0x5273110")]
	internal static string Current(string id, bool enableAlpha)
	{
		return null;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x52731A0", Offset = "0x52721A0", VA = "0x52731A0")]
	internal static void Commit(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x52735E0", Offset = "0x52725E0", VA = "0x52735E0")]
	internal static void Preview(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x5273830", Offset = "0x5272830", VA = "0x5273830")]
	internal static void Cancel(string id, GameObject source)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5273990", Offset = "0x5272990", VA = "0x5273990")]
	internal static GisketchNodeDefinition PopoverNode(string id)
	{
		return null;
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5275520", Offset = "0x5274520", VA = "0x5275520")]
	public static void Open(GisketchActionContext context, string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5275DA0", Offset = "0x5274DA0", VA = "0x5275DA0")]
	private static bool BuildVisual(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x52747B0", Offset = "0x52737B0", VA = "0x52747B0")]
	private static GisketchNodeDefinition RgbInput(string id, string suffix)
	{
		return null;
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x5275070", Offset = "0x5274070", VA = "0x5275070")]
	private static GisketchNodeDefinition HexInput(string id, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x5274A00", Offset = "0x5273A00", VA = "0x5274A00")]
	private static GisketchNodeDefinition Field(string id, string label, GisketchNodeDefinition input)
	{
		return null;
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x5274EA0", Offset = "0x5273EA0", VA = "0x5274EA0")]
	private static GisketchNodeDefinition Label(string id, string text, float width)
	{
		return null;
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x5274CB0", Offset = "0x5273CB0", VA = "0x5274CB0")]
	private static GisketchNodeDefinition Row(string id, params GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x5275320", Offset = "0x5274320", VA = "0x5275320")]
	private static GisketchNodeDefinition Button(string id, string key, string style)
	{
		return null;
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x5274680", Offset = "0x5273680", VA = "0x5274680")]
	private static GisketchNodeDefinition SwatchNode(string id, string value, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x52729B0", Offset = "0x52719B0", VA = "0x52729B0")]
	private static void SetSwatch(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x5272AE0", Offset = "0x5271AE0", VA = "0x5272AE0")]
	private static void SetText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x60004D5")]
	internal static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x5274640", Offset = "0x5273640", VA = "0x5274640")]
	internal static string PreviewId(string id)
	{
		return null;
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x5274770", Offset = "0x5273770", VA = "0x5274770")]
	internal static string VisualId(string id)
	{
		return null;
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x52760D0", Offset = "0x52750D0", VA = "0x52760D0")]
	internal static string HexId(string id)
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5276110", Offset = "0x5275110", VA = "0x5276110")]
	private static string ButtonId(string id)
	{
		return null;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5272970", Offset = "0x5271970", VA = "0x5272970")]
	private static string SwatchId(string id)
	{
		return null;
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x5272AA0", Offset = "0x5271AA0", VA = "0x5272AA0")]
	private static string TextId(string id)
	{
		return null;
	}
}
