// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgTutorialDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B8")]
[AottgDialog("tutorial")]
public sealed class AottgTutorialDialog : AottgButtonListDialog
{
	[Token(Token = "0x4000DDA")]
	public const string Id = "tutorial";

	[Token(Token = "0x4000DDB")]
	private const string BasicVideos = "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt";

	[Token(Token = "0x4000DDC")]
	private const string AdvancedVideos = "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I";

	[Token(Token = "0x4000DDD")]
	private const string MiscVideos = "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH";

	[Token(Token = "0x170001D2")]
	protected override string Title
	{
		[Token(Token = "0x6001078")]
		[Address(RVA = "0x57C3EA0", Offset = "0x57C2EA0", VA = "0x57C3EA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x57C3F00", Offset = "0x57C2F00", VA = "0x57C3F00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	protected override Entry[] Entries
	{
		[Token(Token = "0x600107A")]
		[Address(RVA = "0x57C3F30", Offset = "0x57C2F30", VA = "0x57C3F30", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x57C43B0", Offset = "0x57C33B0", VA = "0x57C43B0")]
	private static void StartBasicTutorial()
	{
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x57C45D0", Offset = "0x57C35D0", VA = "0x57C45D0")]
	public AottgTutorialDialog()
	{
	}
}
