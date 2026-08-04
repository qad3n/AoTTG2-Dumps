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

[Token(Token = "0x20006A0")]
internal class MultiplayerLanPopup : PromptPopup
{
	[Token(Token = "0x17000CB3")]
	protected override string Title
	{
		[Token(Token = "0x6004217")]
		[Address(RVA = "0x430A100", Offset = "0x430A100", VA = "0x430A100", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CB4")]
	protected override float Width
	{
		[Token(Token = "0x6004218")]
		[Address(RVA = "0x430A130", Offset = "0x430A130", VA = "0x430A130", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB5")]
	protected override float Height
	{
		[Token(Token = "0x6004219")]
		[Address(RVA = "0x430A140", Offset = "0x430A140", VA = "0x430A140", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB6")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600421A")]
		[Address(RVA = "0x430A150", Offset = "0x430A150", VA = "0x430A150", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600421B")]
	[Address(RVA = "0x430A160", Offset = "0x430A160", VA = "0x430A160", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600421C")]
	[Address(RVA = "0x430A540", Offset = "0x430A540", VA = "0x430A540")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600421D")]
	[Address(RVA = "0x430A620", Offset = "0x430A620", VA = "0x430A620")]
	public MultiplayerLanPopup()
	{
	}
}
