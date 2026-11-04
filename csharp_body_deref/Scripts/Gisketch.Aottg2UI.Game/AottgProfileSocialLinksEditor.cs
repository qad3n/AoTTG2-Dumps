// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C9")]
internal sealed class AottgProfileSocialLinksEditor : AottgComponent
{
	[Token(Token = "0x4000E3D")]
	private const int MaxLinks = 8;

	[Token(Token = "0x4000E3E")]
	private const string RootId = "profile-details-socials";

	[Token(Token = "0x4000E3F")]
	private const string RowsDraftKey = "profile-details-socials-rows";

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x1E1E210", Offset = "0x1E1C810", VA = "0x181E1E210", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x1E1E840", Offset = "0x1E1CE40", VA = "0x181E1E840")]
	private static void SocialRow(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x1E1E080", Offset = "0x1E1C680", VA = "0x181E1E080")]
	private static void AddRow(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x1E1E580", Offset = "0x1E1CB80", VA = "0x181E1E580")]
	private static void RemoveRow(GisketchActionContext context, int index)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x1E1E410", Offset = "0x1E1CA10", VA = "0x181E1E410")]
	private static GameObject Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x600117C")]
	private static T FindComponent<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x1E1E790", Offset = "0x1E1CD90", VA = "0x181E1E790")]
	private static string RowId(int index)
	{
		return null;
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x1E1E530", Offset = "0x1E1CB30", VA = "0x181E1E530")]
	private static string InputId(int index)
	{
		return null;
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x1E1E7E0", Offset = "0x1E1CDE0", VA = "0x181E1E7E0")]
	private static string RowsState(int count)
	{
		return null;
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x1E1EA90", Offset = "0x1E1D090", VA = "0x181E1EA90")]
	private static void SyncRowsDraft(GameObject source)
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgProfileSocialLinksEditor()
	{
	}
}
