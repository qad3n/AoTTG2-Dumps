// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameWeatherPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameWeatherPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameWeatherPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005D2")]
internal class CreateGameWeatherPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000B75")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003BA2")]
		[Address(RVA = "0x4281150", Offset = "0x4281150", VA = "0x4281150", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003BA3")]
	[Address(RVA = "0x4281160", Offset = "0x4281160", VA = "0x4281160", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003BA4")]
	[Address(RVA = "0x42828C0", Offset = "0x42828C0", VA = "0x42828C0")]
	private void OnWeatherSetSelected()
	{
	}

	[Token(Token = "0x6003BA5")]
	[Address(RVA = "0x4282960", Offset = "0x4282960", VA = "0x4282960")]
	private void OnWeatherPanelButtonClick(string name)
	{
	}

	[Token(Token = "0x6003BA6")]
	[Address(RVA = "0x4283270", Offset = "0x4283270", VA = "0x4283270")]
	private void OnWeatherSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6003BA7")]
	[Address(RVA = "0x4283A80", Offset = "0x4283A80", VA = "0x4283A80")]
	public CreateGameWeatherPanel()
	{
	}
}
