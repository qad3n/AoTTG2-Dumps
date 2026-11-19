// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgToolsDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ApplicationManagers;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B6")]
[AottgDialog("tools")]
public sealed class AottgToolsDialog : AottgButtonListDialog
{
	[Token(Token = "0x4000DD8")]
	public const string Id = "tools";

	[Token(Token = "0x170001CF")]
	protected override string Title
	{
		[Token(Token = "0x6001071")]
		[Address(RVA = "0x57C3A00", Offset = "0x57C2A00", VA = "0x57C3A00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001072")]
		[Address(RVA = "0x57C3A60", Offset = "0x57C2A60", VA = "0x57C3A60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	protected override Entry[] Entries
	{
		[Token(Token = "0x6001073")]
		[Address(RVA = "0x57C3A90", Offset = "0x57C2A90", VA = "0x57C3A90", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x57C3D60", Offset = "0x57C2D60", VA = "0x57C3D60")]
	private static Entry SceneEntry(string item, string icon, SceneName scene)
	{
		return default(Entry);
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x57C3E80", Offset = "0x57C2E80", VA = "0x57C3E80")]
	public AottgToolsDialog()
	{
	}
}
