// ==================== AoTTG2 cross-reference ====================
// Type: UI.EditProfileEmotePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EditProfileEmotePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileEmotePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000686")]
internal class EditProfileEmotePanel : CategoryPanel
{
	[Token(Token = "0x17000C86")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600415C")]
		[Address(RVA = "0x42FB330", Offset = "0x42FB330", VA = "0x42FB330", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C87")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600415D")]
		[Address(RVA = "0x42FB340", Offset = "0x42FB340", VA = "0x42FB340", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600415E")]
	[Address(RVA = "0x42FB350", Offset = "0x42FB350", VA = "0x42FB350", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600415F")]
	[Address(RVA = "0x42FB690", Offset = "0x42FB690", VA = "0x42FB690")]
	private string[] GetAvailableEmotes()
	{
		return null;
	}

	[Token(Token = "0x6004160")]
	[Address(RVA = "0x42FBB50", Offset = "0x42FBB50", VA = "0x42FBB50")]
	private string[] GetEmotePaths(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004161")]
	[Address(RVA = "0x42FBE30", Offset = "0x42FBE30", VA = "0x42FBE30")]
	public EditProfileEmotePanel()
	{
	}
}
