// ==================== AoTTG2 cross-reference ====================
// Type: UI.AboutHelpPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/AboutHelpPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutHelpPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007D0")]
internal class AboutHelpPanel : CategoryPanel
{
	[Token(Token = "0x17000DB1")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004BC7")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004BC8")]
	[Address(RVA = "0x226E420", Offset = "0x226CA20", VA = "0x18226E420", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004BC9")]
	[Address(RVA = "0x226E2B0", Offset = "0x226C8B0", VA = "0x18226E2B0")]
	private void CreateLink(ElementStyle style, string title, string link)
	{
	}

	[Token(Token = "0x6004BCA")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public AboutHelpPanel()
	{
	}
}
