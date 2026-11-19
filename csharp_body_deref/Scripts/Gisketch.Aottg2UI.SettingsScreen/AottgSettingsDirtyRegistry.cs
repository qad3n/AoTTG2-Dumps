// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000184")]
internal static class AottgSettingsDirtyRegistry
{
	[Token(Token = "0x2000185")]
	private sealed class Entry
	{
		[Token(Token = "0x40008B3")]
		[FieldOffset(Offset = "0x10")]
		public readonly string RowId;

		[Token(Token = "0x40008B4")]
		[FieldOffset(Offset = "0x18")]
		public readonly int Order;

		[Token(Token = "0x40008B5")]
		[FieldOffset(Offset = "0x20")]
		public string Path;

		[Token(Token = "0x40008B6")]
		[FieldOffset(Offset = "0x28")]
		public string Baseline;

		[Token(Token = "0x40008B7")]
		[FieldOffset(Offset = "0x30")]
		public Func<string> Value;

		[Token(Token = "0x600087D")]
		[Address(RVA = "0x5D3C1A0", Offset = "0x5D3B1A0", VA = "0x5D3C1A0")]
		public Entry(string rowId, int order)
		{
		}
	}

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Entry> Entries;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x8")]
	private static int _nextOrder;

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x5D3BFF0", Offset = "0x5D3AFF0", VA = "0x5D3BFF0")]
	public static void Register(string rowId, string path, Func<string> value)
	{
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x5D3C280", Offset = "0x5D3B280", VA = "0x5D3C280")]
	public static void CaptureBaseline(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x5D3C720", Offset = "0x5D3B720", VA = "0x5D3C720")]
	public static void SyncRow(GisketchUIRoot root, string rowId)
	{
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x5D3C970", Offset = "0x5D3B970", VA = "0x5D3C970")]
	public static void SyncAll(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x5D3CD10", Offset = "0x5D3BD10", VA = "0x5D3CD10")]
	public static bool HasDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x5D3CF20", Offset = "0x5D3BF20", VA = "0x5D3CF20")]
	public static List<string> DirtyPaths()
	{
		return null;
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x5D3D4A0", Offset = "0x5D3C4A0", VA = "0x5D3D4A0")]
	public static int DirtyCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x5D3D6A0", Offset = "0x5D3C6A0", VA = "0x5D3D6A0")]
	public static string DirtyStateKey(string rowId)
	{
		return null;
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x5D3C8F0", Offset = "0x5D3B8F0", VA = "0x5D3C8F0")]
	private static bool IsDirty(Entry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x5D3C5A0", Offset = "0x5D3B5A0", VA = "0x5D3C5A0")]
	private static void SetRowState(GisketchUIRoot root, Entry entry, bool dirty)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x5D3C630", Offset = "0x5D3B630", VA = "0x5D3C630")]
	private static void SetSummaryState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x5D3C1D0", Offset = "0x5D3B1D0", VA = "0x5D3C1D0")]
	private static string SafeValue(Func<string> value)
	{
		return null;
	}
}
