// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanSkinPicker
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanSkinPicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace CustomSkins;

[Token(Token = "0x200037A")]
internal static class TitanSkinPicker
{
	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x1E97010", Offset = "0x1E95610", VA = "0x181E97010")]
	public static TitanSkinSelection Pick(bool ai, [Optional] JSONNode aiData, [Optional] TitanCustomSet forcedSet)
	{
		return null;
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x1E96430", Offset = "0x1E94A30", VA = "0x181E96430")]
	public static string GetSkinUrls(TitanCustomSkinSet skinSet, int slotIndex, int body, int head, bool ai)
	{
		return null;
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x1E96D70", Offset = "0x1E95370", VA = "0x181E96D70")]
	private static string PickUrl(List<TitanCustomSkinSlot> slots, bool ai, Func<TitanCustomSkinSlot, string> getUrl)
	{
		return null;
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x1E96240", Offset = "0x1E94840", VA = "0x181E96240")]
	public static int FindSlotIndex(TitanCustomSkinSet skinSet, int body, int head, bool ai)
	{
		return default(int);
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x1E96940", Offset = "0x1E94F40", VA = "0x181E96940")]
	private static TitanCustomSkinSlot GetSlot(TitanCustomSkinSet skinSet, int slotIndex)
	{
		return null;
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x1E96B20", Offset = "0x1E95120", VA = "0x181E96B20")]
	private static int PickSlotIndex(TitanCustomSkinSet skinSet, int? pinnedBody, int? pinnedHead, bool ai)
	{
		return default(int);
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x1E96AA0", Offset = "0x1E950A0", VA = "0x181E96AA0")]
	private static bool MatchesTarget(TitanCustomSkinSlot slot, bool ai)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x1E96A30", Offset = "0x1E95030", VA = "0x181E96A30")]
	private static bool IsEligible(int? pinned, int model)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x1E97780", Offset = "0x1E95D80", VA = "0x181E97780")]
	private static int ResolveModel(int model, int fallback, int count)
	{
		return default(int);
	}
}
