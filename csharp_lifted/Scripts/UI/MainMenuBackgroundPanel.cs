// ==================== AoTTG2 cross-reference ====================
// Type: UI.MainMenuBackgroundPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MainMenuBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainMenuBackgroundPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000884")]
internal class MainMenuBackgroundPanel : LoadingBackgroundPanel
{
	[Token(Token = "0x17000E31")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6005127")]
		[Address(RVA = "0x5C58560", Offset = "0x5C57560", VA = "0x5C58560", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/MainMenuBackgroundPanel.c (UI.MainMenuBackgroundPanel$$get_AnimationTime): clean
			return 1.0;
		}
	}

	[Token(Token = "0x6005128")]
	[Address(RVA = "0x5C58570", Offset = "0x5C57570", VA = "0x5C58570")]
	public MainMenuBackgroundPanel()
	{
		// Lifted from source/cpp/UI/MainMenuBackgroundPanel.c (UI.MainMenuBackgroundPanel$$.ctor): clean
		this.BackgroundIndex = -1;
		base();
		return;
	}
}
