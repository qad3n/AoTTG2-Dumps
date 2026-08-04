// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000073")]
public sealed class GisketchGridPicker : AottgComponent
{
	[Token(Token = "0x2000074")]
	internal sealed class RuntimeDefinition
	{
		[Token(Token = "0x4000256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Id;

		[Token(Token = "0x4000257")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly GisketchGridPickerItem[] Items;

		[Token(Token = "0x4000258")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int Columns;

		[Token(Token = "0x4000259")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly float ItemWidth;

		[Token(Token = "0x400025A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly float ItemHeight;

		[Token(Token = "0x400025B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly float ThumbnailWidth;

		[Token(Token = "0x400025C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly float ThumbnailHeight;

		[Token(Token = "0x400025D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public readonly bool LazyLoadThumbnails;

		[Token(Token = "0x400025E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly Action<GisketchActionContext, GisketchGridPickerItem> Select;

		[Token(Token = "0x6000326")]
		[Address(RVA = "0x3A64800", Offset = "0x3A64800", VA = "0x3A64800")]
		public RuntimeDefinition(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, bool lazyLoadThumbnails, Action<GisketchActionContext, GisketchGridPickerItem> select)
		{
		}
	}

	[Token(Token = "0x4000247")]
	private const float Gap = 10f;

	[Token(Token = "0x4000248")]
	private const float ScrollbarReserve = 28f;

	[Token(Token = "0x4000249")]
	private const float ContentRightPadding = 8f;

	[Token(Token = "0x400024A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, RuntimeDefinition> Definitions;

	[Token(Token = "0x400024B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400024C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchGridPickerItem[] _items;

	[Token(Token = "0x400024D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly int _columns;

	[Token(Token = "0x400024E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly float _itemWidth;

	[Token(Token = "0x400024F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _itemHeight;

	[Token(Token = "0x4000250")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly float _thumbnailWidth;

	[Token(Token = "0x4000251")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _thumbnailHeight;

	[Token(Token = "0x4000252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _height;

	[Token(Token = "0x4000253")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _lazyLoadThumbnails;

	[Token(Token = "0x4000254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _searchPlaceholder;

	[Token(Token = "0x4000255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext, GisketchGridPickerItem> _select;

	[Token(Token = "0x17000065")]
	public float PreferredWidth
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x3A643B0", Offset = "0x3A643B0", VA = "0x3A643B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3A63E80", Offset = "0x3A63E80", VA = "0x3A63E80")]
	static GisketchGridPicker()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3A64260", Offset = "0x3A64260", VA = "0x3A64260")]
	public GisketchGridPicker(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, [Optional] string searchPlaceholder, [Optional] Action<GisketchActionContext, GisketchGridPickerItem> select, float height = 420f, bool lazyLoadThumbnails = true)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3A644A0", Offset = "0x3A644A0", VA = "0x3A644A0")]
	public static float PreferredWidthFor(int columns, float itemWidth)
	{
		return default(float);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x3A64530", Offset = "0x3A64530", VA = "0x3A64530", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x3A648C0", Offset = "0x3A648C0", VA = "0x3A648C0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x3A64F80", Offset = "0x3A64F80", VA = "0x3A64F80")]
	private static void Filter(GisketchActionContext context, string pickerId, string inputId)
	{
	}

	[Token(Token = "0x6000323")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}
}
