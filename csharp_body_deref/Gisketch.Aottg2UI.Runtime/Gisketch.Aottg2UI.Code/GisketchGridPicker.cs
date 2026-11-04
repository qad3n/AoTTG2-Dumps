// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c
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

[Token(Token = "0x2000087")]
public sealed class GisketchGridPicker : AottgComponent
{
	[Token(Token = "0x2000088")]
	internal sealed class RuntimeDefinition
	{
		[Token(Token = "0x40002D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Id;

		[Token(Token = "0x40002D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly GisketchGridPickerItem[] Items;

		[Token(Token = "0x40002D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int Columns;

		[Token(Token = "0x40002D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly float ItemWidth;

		[Token(Token = "0x40002D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly float ItemHeight;

		[Token(Token = "0x40002D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly float ThumbnailWidth;

		[Token(Token = "0x40002D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly float ThumbnailHeight;

		[Token(Token = "0x40002D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public readonly float ViewportHeight;

		[Token(Token = "0x40002D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly bool LazyLoadThumbnails;

		[Token(Token = "0x40002DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly Action<GisketchActionContext, GisketchGridPickerItem> Select;

		[Token(Token = "0x600041B")]
		[Address(RVA = "0x18D8C10", Offset = "0x18D7210", VA = "0x1818D8C10")]
		public RuntimeDefinition(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, float viewportHeight, bool lazyLoadThumbnails, Action<GisketchActionContext, GisketchGridPickerItem> select)
		{
		}
	}

	[Token(Token = "0x40002C1")]
	private const float Gap = 10f;

	[Token(Token = "0x40002C2")]
	private const float ScrollbarReserve = 28f;

	[Token(Token = "0x40002C3")]
	private const float ContentRightPadding = 8f;

	[Token(Token = "0x40002C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, RuntimeDefinition> Definitions;

	[Token(Token = "0x40002C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40002C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchGridPickerItem[] _items;

	[Token(Token = "0x40002C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly int _columns;

	[Token(Token = "0x40002C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly float _itemWidth;

	[Token(Token = "0x40002C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _itemHeight;

	[Token(Token = "0x40002CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly float _thumbnailWidth;

	[Token(Token = "0x40002CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _thumbnailHeight;

	[Token(Token = "0x40002CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _height;

	[Token(Token = "0x40002CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _lazyLoadThumbnails;

	[Token(Token = "0x40002CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _searchAtBottom;

	[Token(Token = "0x40002CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _searchPlaceholder;

	[Token(Token = "0x40002D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext, GisketchGridPickerItem> _select;

	[Token(Token = "0x17000089")]
	public float PreferredWidth
	{
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x18D03E0", Offset = "0x18CE9E0", VA = "0x1818D03E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x18D0120", Offset = "0x18CE720", VA = "0x1818D0120")]
	static GisketchGridPicker()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x18D02B0", Offset = "0x18CE8B0", VA = "0x1818D02B0")]
	public GisketchGridPicker(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, [Optional] string searchPlaceholder, [Optional] Action<GisketchActionContext, GisketchGridPickerItem> select, float height = 420f, bool lazyLoadThumbnails = true, bool searchAtBottom = false)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x18CFC10", Offset = "0x18CE210", VA = "0x1818CFC10")]
	public static float PreferredWidthFor(int columns, float itemWidth)
	{
		return default(float);
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x18CF720", Offset = "0x18CDD20", VA = "0x1818CF720", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x18CF4C0", Offset = "0x18CDAC0", VA = "0x1818CF4C0")]
	private void BuildSearch(AottgUi root)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x18CF3C0", Offset = "0x18CD9C0", VA = "0x1818CF3C0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x18CFA00", Offset = "0x18CE000", VA = "0x1818CFA00")]
	private static void Filter(GisketchActionContext context, string pickerId, string inputId)
	{
	}

	[Token(Token = "0x6000418")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}
}
