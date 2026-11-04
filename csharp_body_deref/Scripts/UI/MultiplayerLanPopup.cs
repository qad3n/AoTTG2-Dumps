// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiplayerLanPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiplayerLanPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerLanPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007FB")]
internal class MultiplayerLanPopup : PromptPopup
{
	[Token(Token = "0x17000DF9")]
	protected override string Title
	{
		[Token(Token = "0x6004D0B")]
		[Address(RVA = "0x2291B90", Offset = "0x2290190", VA = "0x182291B90", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DFA")]
	protected override float Width
	{
		[Token(Token = "0x6004D0C")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DFB")]
	protected override float Height
	{
		[Token(Token = "0x6004D0D")]
		[Address(RVA = "0x2291B80", Offset = "0x2290180", VA = "0x182291B80", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DFC")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004D0E")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004D0F")]
	[Address(RVA = "0x22916E0", Offset = "0x228FCE0", VA = "0x1822916E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D10")]
	[Address(RVA = "0x22915F0", Offset = "0x228FBF0", VA = "0x1822915F0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D11")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public MultiplayerLanPopup()
	{
	}
}
