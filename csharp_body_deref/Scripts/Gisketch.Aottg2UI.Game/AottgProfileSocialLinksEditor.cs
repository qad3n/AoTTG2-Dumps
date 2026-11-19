// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000326")]
internal sealed class AottgProfileSocialLinksEditor : AottgComponent
{
	[Token(Token = "0x4000FCC")]
	private const int MaxLinks = 8;

	[Token(Token = "0x4000FCD")]
	private const string RootId = "profile-details-socials";

	[Token(Token = "0x4000FCE")]
	private const string RowsDraftKey = "profile-details-socials-rows";

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x5807F90", Offset = "0x5806F90", VA = "0x5807F90", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x5808190", Offset = "0x5807190", VA = "0x5808190")]
	private static void SocialRow(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x5808400", Offset = "0x5807400", VA = "0x5808400")]
	private static void AddRow(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x58088A0", Offset = "0x58078A0", VA = "0x58088A0")]
	private static void RemoveRow(GisketchActionContext context, int index)
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x5808590", Offset = "0x5807590", VA = "0x5808590")]
	private static GameObject Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x60013CD")]
	private static T FindComponent<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x58083B0", Offset = "0x58073B0", VA = "0x58083B0")]
	private static string RowId(int index)
	{
		return null;
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x5808AA0", Offset = "0x5807AA0", VA = "0x5808AA0")]
	private static string InputId(int index)
	{
		return null;
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x5808AF0", Offset = "0x5807AF0", VA = "0x5808AF0")]
	private static string RowsState(int count)
	{
		return null;
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x58086B0", Offset = "0x58076B0", VA = "0x58086B0")]
	private static void SyncRowsDraft(GameObject source)
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x57FE5B0", Offset = "0x57FD5B0", VA = "0x57FE5B0")]
	public AottgProfileSocialLinksEditor()
	{
	}
}
