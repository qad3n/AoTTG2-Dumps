using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000071")]
public sealed class GisketchGridPicker : AottgComponent
{
	[Token(Token = "0x2000072")]
	internal sealed class RuntimeDefinition
	{
		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Id;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly GisketchGridPickerItem[] Items;

		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int Columns;

		[Token(Token = "0x4000251")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly float ItemWidth;

		[Token(Token = "0x4000252")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly float ItemHeight;

		[Token(Token = "0x4000253")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly float ThumbnailWidth;

		[Token(Token = "0x4000254")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly float ThumbnailHeight;

		[Token(Token = "0x4000255")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public readonly bool LazyLoadThumbnails;

		[Token(Token = "0x4000256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly Action<GisketchActionContext, GisketchGridPickerItem> Select;

		[Token(Token = "0x6000316")]
		[Address(RVA = "0x39F96B0", Offset = "0x39F96B0", VA = "0x39F96B0")]
		public RuntimeDefinition(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, bool lazyLoadThumbnails, Action<GisketchActionContext, GisketchGridPickerItem> select)
		{
		}
	}

	[Token(Token = "0x400023F")]
	private const float Gap = 10f;

	[Token(Token = "0x4000240")]
	private const float ScrollbarReserve = 28f;

	[Token(Token = "0x4000241")]
	private const float ContentRightPadding = 8f;

	[Token(Token = "0x4000242")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, RuntimeDefinition> Definitions;

	[Token(Token = "0x4000243")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000244")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchGridPickerItem[] _items;

	[Token(Token = "0x4000245")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly int _columns;

	[Token(Token = "0x4000246")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly float _itemWidth;

	[Token(Token = "0x4000247")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _itemHeight;

	[Token(Token = "0x4000248")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly float _thumbnailWidth;

	[Token(Token = "0x4000249")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _thumbnailHeight;

	[Token(Token = "0x400024A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _height;

	[Token(Token = "0x400024B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _lazyLoadThumbnails;

	[Token(Token = "0x400024C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _searchPlaceholder;

	[Token(Token = "0x400024D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext, GisketchGridPickerItem> _select;

	[Token(Token = "0x17000063")]
	public float PreferredWidth
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x39F9260", Offset = "0x39F9260", VA = "0x39F9260")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x39F8D30", Offset = "0x39F8D30", VA = "0x39F8D30")]
	static GisketchGridPicker()
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x39F9110", Offset = "0x39F9110", VA = "0x39F9110")]
	public GisketchGridPicker(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, [Optional] string searchPlaceholder, [Optional] Action<GisketchActionContext, GisketchGridPickerItem> select, float height = 420f, bool lazyLoadThumbnails = true)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x39F9350", Offset = "0x39F9350", VA = "0x39F9350")]
	public static float PreferredWidthFor(int columns, float itemWidth)
	{
		return default(float);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x39F93E0", Offset = "0x39F93E0", VA = "0x39F93E0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x39F9770", Offset = "0x39F9770", VA = "0x39F9770")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x39F9E30", Offset = "0x39F9E30", VA = "0x39F9E30")]
	private static void Filter(GisketchActionContext context, string pickerId, string inputId)
	{
	}

	[Token(Token = "0x6000313")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}
}
