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

[Token(Token = "0x20007E1")]
internal class EditProfileEmotePanel : CategoryPanel
{
	[Token(Token = "0x17000DCC")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004C51")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DCD")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004C52")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004C53")]
	[Address(RVA = "0x2279760", Offset = "0x2277D60", VA = "0x182279760", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004C54")]
	[Address(RVA = "0x22791A0", Offset = "0x22777A0", VA = "0x1822791A0")]
	private string[] GetAvailableEmotes()
	{
		return null;
	}

	[Token(Token = "0x6004C55")]
	[Address(RVA = "0x22794F0", Offset = "0x2277AF0", VA = "0x1822794F0")]
	private string[] GetEmotePaths(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004C56")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public EditProfileEmotePanel()
	{
	}
}
