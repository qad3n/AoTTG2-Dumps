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

[Token(Token = "0x20001C3")]
internal sealed class AottgProfileSocialLinksEditor : AottgComponent
{
	[Token(Token = "0x4000992")]
	private const int MaxLinks = 8;

	[Token(Token = "0x4000993")]
	private const string RootId = "profile-details-socials";

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x442C430", Offset = "0x442C430", VA = "0x442C430", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x442C630", Offset = "0x442C630", VA = "0x442C630")]
	private static void SocialRow(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x442C8A0", Offset = "0x442C8A0", VA = "0x442C8A0")]
	private static void AddRow(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x442CB50", Offset = "0x442CB50", VA = "0x442CB50")]
	private static void RemoveRow(GisketchActionContext context, int index)
	{
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x442CA20", Offset = "0x442CA20", VA = "0x442CA20")]
	private static GameObject Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x6000ABC")]
	private static T FindComponent<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x442C850", Offset = "0x442C850", VA = "0x442C850")]
	private static string RowId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x442CD40", Offset = "0x442CD40", VA = "0x442CD40")]
	private static string InputId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x4421E40", Offset = "0x4421E40", VA = "0x4421E40")]
	public AottgProfileSocialLinksEditor()
	{
	}
}
