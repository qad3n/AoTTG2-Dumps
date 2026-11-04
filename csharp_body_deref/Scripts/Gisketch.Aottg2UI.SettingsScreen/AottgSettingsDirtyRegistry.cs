// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200017C")]
internal static class AottgSettingsDirtyRegistry
{
	[Token(Token = "0x200017D")]
	private sealed class Entry
	{
		[Token(Token = "0x400086A")]
		[FieldOffset(Offset = "0x10")]
		public readonly string RowId;

		[Token(Token = "0x400086B")]
		[FieldOffset(Offset = "0x18")]
		public readonly int Order;

		[Token(Token = "0x400086C")]
		[FieldOffset(Offset = "0x20")]
		public string Path;

		[Token(Token = "0x400086D")]
		[FieldOffset(Offset = "0x28")]
		public string Baseline;

		[Token(Token = "0x400086E")]
		[FieldOffset(Offset = "0x30")]
		public Func<string> Value;

		[Token(Token = "0x600080B")]
		[Address(RVA = "0x8FB340", Offset = "0x8F9940", VA = "0x1808FB340")]
		public Entry(string rowId, int order)
		{
		}
	}

	[Token(Token = "0x4000868")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Entry> Entries;

	[Token(Token = "0x4000869")]
	[FieldOffset(Offset = "0x8")]
	private static int _nextOrder;

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x2315F50", Offset = "0x2314550", VA = "0x182315F50")]
	public static void Register(string rowId, string path, Func<string> value)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x2315430", Offset = "0x2313A30", VA = "0x182315430")]
	public static void CaptureBaseline(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x2316580", Offset = "0x2314B80", VA = "0x182316580")]
	public static void SyncRow(GisketchUIRoot root, string rowId)
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x23162E0", Offset = "0x23148E0", VA = "0x1823162E0")]
	public static void SyncAll(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x2315CD0", Offset = "0x23142D0", VA = "0x182315CD0")]
	public static bool HasDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x2315870", Offset = "0x2313E70", VA = "0x182315870")]
	public static List<string> DirtyPaths()
	{
		return null;
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x2315670", Offset = "0x2313C70", VA = "0x182315670")]
	public static int DirtyCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x2315CC0", Offset = "0x23142C0", VA = "0x182315CC0")]
	public static string DirtyStateKey(string rowId)
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x2315ED0", Offset = "0x23144D0", VA = "0x182315ED0")]
	private static bool IsDirty(Entry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x2316170", Offset = "0x2314770", VA = "0x182316170")]
	private static void SetRowState(GisketchUIRoot root, Entry entry, bool dirty)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x2316210", Offset = "0x2314810", VA = "0x182316210")]
	private static void SetSummaryState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x2316120", Offset = "0x2314720", VA = "0x182316120")]
	private static string SafeValue(Func<string> value)
	{
		return null;
	}
}
