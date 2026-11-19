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

[Token(Token = "0x200008D")]
public sealed class GisketchGridPicker : AottgComponent
{
	[Token(Token = "0x200008E")]
	internal sealed class RuntimeDefinition
	{
		[Token(Token = "0x40002F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Id;

		[Token(Token = "0x40002F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly GisketchGridPickerItem[] Items;

		[Token(Token = "0x40002F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int Columns;

		[Token(Token = "0x40002F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly float ItemWidth;

		[Token(Token = "0x40002FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly float ItemHeight;

		[Token(Token = "0x40002FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly float ThumbnailWidth;

		[Token(Token = "0x40002FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly float ThumbnailHeight;

		[Token(Token = "0x40002FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public readonly float ViewportHeight;

		[Token(Token = "0x40002FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly bool LazyLoadThumbnails;

		[Token(Token = "0x40002FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
		public readonly bool ReleaseThumbnails;

		[Token(Token = "0x4000300")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly Action<GisketchActionContext, GisketchGridPickerItem> Select;

		[Token(Token = "0x6000467")]
		[Address(RVA = "0x526B930", Offset = "0x526A930", VA = "0x526B930")]
		public RuntimeDefinition(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, float viewportHeight, bool lazyLoadThumbnails, Action<GisketchActionContext, GisketchGridPickerItem> select, bool releaseThumbnails = false)
		{
		}
	}

	[Token(Token = "0x40002E5")]
	private const float Gap = 10f;

	[Token(Token = "0x40002E6")]
	private const float ScrollbarReserve = 28f;

	[Token(Token = "0x40002E7")]
	private const float ContentRightPadding = 8f;

	[Token(Token = "0x40002E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, RuntimeDefinition> Definitions;

	[Token(Token = "0x40002E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40002EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchGridPickerItem[] _items;

	[Token(Token = "0x40002EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly int _columns;

	[Token(Token = "0x40002EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly float _itemWidth;

	[Token(Token = "0x40002ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _itemHeight;

	[Token(Token = "0x40002EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly float _thumbnailWidth;

	[Token(Token = "0x40002EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _thumbnailHeight;

	[Token(Token = "0x40002F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _height;

	[Token(Token = "0x40002F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _lazyLoadThumbnails;

	[Token(Token = "0x40002F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _searchAtBottom;

	[Token(Token = "0x40002F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private readonly bool _releaseThumbnails;

	[Token(Token = "0x40002F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _searchPlaceholder;

	[Token(Token = "0x40002F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext, GisketchGridPickerItem> _select;

	[Token(Token = "0x17000089")]
	public float PreferredWidth
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x526B4C0", Offset = "0x526A4C0", VA = "0x526B4C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x526AF80", Offset = "0x5269F80", VA = "0x526AF80")]
	static GisketchGridPicker()
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x526B360", Offset = "0x526A360", VA = "0x526B360")]
	public GisketchGridPicker(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, [Optional] string searchPlaceholder, [Optional] Action<GisketchActionContext, GisketchGridPickerItem> select, float height = 420f, bool lazyLoadThumbnails = true, bool searchAtBottom = false, bool releaseThumbnails = false)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x526B5B0", Offset = "0x526A5B0", VA = "0x526B5B0")]
	public static float PreferredWidthFor(int columns, float itemWidth)
	{
		return default(float);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x526B640", Offset = "0x526A640", VA = "0x526B640", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x526BA10", Offset = "0x526AA10", VA = "0x526BA10")]
	private void BuildSearch(AottgUi root)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x526BC60", Offset = "0x526AC60", VA = "0x526BC60")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x526C280", Offset = "0x526B280", VA = "0x526C280")]
	private static void Filter(GisketchActionContext context, string pickerId, string inputId)
	{
	}

	[Token(Token = "0x6000464")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}
}
