using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000190")]
internal sealed class AottgProfileSocialLinksEditor : AottgComponent
{
	[Token(Token = "0x40008CC")]
	private const int MaxLinks = 8;

	[Token(Token = "0x40008CD")]
	private const string RootId = "profile-details-socials";

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x40FA330", Offset = "0x40FA330", VA = "0x40FA330", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x40FA530", Offset = "0x40FA530", VA = "0x40FA530")]
	private static void SocialRow(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x40FA7A0", Offset = "0x40FA7A0", VA = "0x40FA7A0")]
	private static void AddRow(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x40FAA50", Offset = "0x40FAA50", VA = "0x40FAA50")]
	private static void RemoveRow(GisketchActionContext context, int index)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x40FA920", Offset = "0x40FA920", VA = "0x40FA920")]
	private static GameObject Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	private static T FindComponent<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x40FA750", Offset = "0x40FA750", VA = "0x40FA750")]
	private static string RowId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x40FAC40", Offset = "0x40FAC40", VA = "0x40FAC40")]
	private static string InputId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x40FAC90", Offset = "0x40FAC90", VA = "0x40FAC90")]
	public AottgProfileSocialLinksEditor()
	{
	}
}
