using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007B")]
public sealed class GisketchUIColorPicker : AottgComponent
{
	[Token(Token = "0x200007C")]
	internal readonly struct Definition
	{
		[Token(Token = "0x4000287")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x4000288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool EnableAlpha;

		[Token(Token = "0x4000289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Action<GisketchActionContext> Save;

		[Token(Token = "0x400028A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool LivePreview;

		[Token(Token = "0x600035D")]
		[Address(RVA = "0x39FE7F0", Offset = "0x39FE7F0", VA = "0x39FE7F0")]
		public Definition(string id, bool enableAlpha, Action<GisketchActionContext> save, bool livePreview)
		{
		}
	}

	[Token(Token = "0x400027D")]
	private const string VisualType = "GisketchUIColorPickerVisual";

	[Token(Token = "0x400027E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Definition> Definitions;

	[Token(Token = "0x400027F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x4000280")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000281")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000282")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _value;

	[Token(Token = "0x4000283")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _enableAlpha;

	[Token(Token = "0x4000284")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GisketchActionContext> _save;

	[Token(Token = "0x4000285")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _livePreview;

	[Token(Token = "0x4000286")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _compact;

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x39FE0D0", Offset = "0x39FE0D0", VA = "0x39FE0D0")]
	static GisketchUIColorPicker()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x39FE450", Offset = "0x39FE450", VA = "0x39FE450")]
	public GisketchUIColorPicker(string id, string label, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool compact = false)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x39FE4E0", Offset = "0x39FE4E0", VA = "0x39FE4E0")]
	public static string Value(string id, string fallback, bool enableAlpha = false)
	{
		return null;
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x39FE6A0", Offset = "0x39FE6A0", VA = "0x39FE6A0")]
	public static void Register(string id, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x39FE830", Offset = "0x39FE830", VA = "0x39FE830")]
	public static void SetValue(string id, string value, [Optional][DefaultParameterValue(false)] bool enableAlpha, [Optional] GameObject source)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x39FECA0", Offset = "0x39FECA0", VA = "0x39FECA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x39FEFC0", Offset = "0x39FEFC0", VA = "0x39FEFC0")]
	private void BuildCompact(AottgUi ui, string value)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x39FF200", Offset = "0x39FF200", VA = "0x39FF200")]
	internal static string Current(string id, bool enableAlpha)
	{
		return null;
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x39FF280", Offset = "0x39FF280", VA = "0x39FF280")]
	internal static void Commit(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x39FF6B0", Offset = "0x39FF6B0", VA = "0x39FF6B0")]
	internal static void Preview(string id, GisketchUIColorPickerValue value, GameObject source)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x39FF910", Offset = "0x39FF910", VA = "0x39FF910")]
	internal static void Cancel(string id, GameObject source)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x39FFA90", Offset = "0x39FFA90", VA = "0x39FFA90")]
	internal static GisketchNodeDefinition PopoverNode(string id)
	{
		return null;
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x3A01590", Offset = "0x3A01590", VA = "0x3A01590")]
	public static void Open(GisketchActionContext context, string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3A01E40", Offset = "0x3A01E40", VA = "0x3A01E40")]
	private static bool BuildVisual(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x3A00860", Offset = "0x3A00860", VA = "0x3A00860")]
	private static GisketchNodeDefinition RgbInput(string id, string suffix)
	{
		return null;
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3A01120", Offset = "0x3A01120", VA = "0x3A01120")]
	private static GisketchNodeDefinition HexInput(string id, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3A00AB0", Offset = "0x3A00AB0", VA = "0x3A00AB0")]
	private static GisketchNodeDefinition Field(string id, string label, GisketchNodeDefinition input)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3A00F50", Offset = "0x3A00F50", VA = "0x3A00F50")]
	private static GisketchNodeDefinition Label(string id, string text, float width)
	{
		return null;
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3A00D60", Offset = "0x3A00D60", VA = "0x3A00D60")]
	private static GisketchNodeDefinition Row(string id, params GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3A013D0", Offset = "0x3A013D0", VA = "0x3A013D0")]
	private static GisketchNodeDefinition Button(string id, string text, string style)
	{
		return null;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3A00730", Offset = "0x3A00730", VA = "0x3A00730")]
	private static GisketchNodeDefinition SwatchNode(string id, string value, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x39FEAA0", Offset = "0x39FEAA0", VA = "0x39FEAA0")]
	private static void SetSwatch(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x39FEBD0", Offset = "0x39FEBD0", VA = "0x39FEBD0")]
	private static void SetText(Transform root, string id, string value)
	{
	}

	[Token(Token = "0x6000356")]
	internal static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3A006F0", Offset = "0x3A006F0", VA = "0x3A006F0")]
	internal static string PreviewId(string id)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3A00820", Offset = "0x3A00820", VA = "0x3A00820")]
	internal static string VisualId(string id)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x3A02170", Offset = "0x3A02170", VA = "0x3A02170")]
	internal static string HexId(string id)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3A021B0", Offset = "0x3A021B0", VA = "0x3A021B0")]
	private static string ButtonId(string id)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x39FEA60", Offset = "0x39FEA60", VA = "0x39FEA60")]
	private static string SwatchId(string id)
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x39FEB90", Offset = "0x39FEB90", VA = "0x39FEB90")]
	private static string TextId(string id)
	{
		return null;
	}
}
