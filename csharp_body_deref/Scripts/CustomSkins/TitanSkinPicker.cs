// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanSkinPicker
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20003D5")]
internal static class TitanSkinPicker
{
	[Token(Token = "0x6001856")]
	[Address(RVA = "0x58676C0", Offset = "0x58666C0", VA = "0x58676C0")]
	public static TitanSkinSelection Pick(bool ai, [Optional] JSONNode aiData, [Optional] TitanCustomSet forcedSet)
	{
		return null;
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x58682C0", Offset = "0x58672C0", VA = "0x58682C0")]
	public static string GetSkinUrls(TitanCustomSkinSet skinSet, int slotIndex, int body, int head, bool ai)
	{
		return null;
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x5868850", Offset = "0x5867850", VA = "0x5868850")]
	private static string PickUrl(List<TitanCustomSkinSlot> slots, bool ai, Func<TitanCustomSkinSlot, string> getUrl)
	{
		return null;
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x5868CA0", Offset = "0x5867CA0", VA = "0x5868CA0")]
	public static int FindSlotIndex(TitanCustomSkinSet skinSet, int body, int head, bool ai)
	{
		return default(int);
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x5868160", Offset = "0x5867160", VA = "0x5868160")]
	private static TitanCustomSkinSlot GetSlot(TitanCustomSkinSet skinSet, int slotIndex)
	{
		return null;
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x5867E40", Offset = "0x5866E40", VA = "0x5867E40")]
	private static int PickSlotIndex(TitanCustomSkinSet skinSet, int? pinnedBody, int? pinnedHead, bool ai)
	{
		return default(int);
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x58687F0", Offset = "0x58677F0", VA = "0x58687F0")]
	private static bool MatchesTarget(TitanCustomSkinSlot slot, bool ai)
	{
		return default(bool);
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x5868240", Offset = "0x5867240", VA = "0x5868240")]
	private static bool IsEligible(int? pinned, int model)
	{
		return default(bool);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x58682B0", Offset = "0x58672B0", VA = "0x58682B0")]
	private static int ResolveModel(int model, int fallback, int count)
	{
		return default(int);
	}
}
