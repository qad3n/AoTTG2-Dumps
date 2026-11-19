// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSocialDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B4")]
[AottgDialog("social")]
public sealed class AottgSocialDialog : AottgDialog
{
	[Token(Token = "0x4000DD2")]
	public const string Id = "social";

	[Token(Token = "0x170001CB")]
	protected override string Title
	{
		[Token(Token = "0x6001065")]
		[Address(RVA = "0x57C2F50", Offset = "0x57C1F50", VA = "0x57C2F50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001066")]
		[Address(RVA = "0x57C2FB0", Offset = "0x57C1FB0", VA = "0x57C2FB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6001067")]
		[Address(RVA = "0x57C2FE0", Offset = "0x57C1FE0", VA = "0x57C2FE0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001CE")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001068")]
		[Address(RVA = "0x57C2FF0", Offset = "0x57C1FF0", VA = "0x57C2FF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x57C30E0", Offset = "0x57C20E0", VA = "0x57C30E0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x57C34A0", Offset = "0x57C24A0", VA = "0x57C34A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x57C3260", Offset = "0x57C2260", VA = "0x57C3260")]
	private static void BuildLink(AottgUi body, JSONNode node, int index)
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x57C3510", Offset = "0x57C2510", VA = "0x57C3510")]
	public AottgSocialDialog()
	{
	}
}
