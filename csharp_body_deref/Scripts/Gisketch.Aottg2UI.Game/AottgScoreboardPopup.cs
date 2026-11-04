// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardPopup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200026D")]
internal abstract class AottgScoreboardPopup : PromptPopup
{
	[Token(Token = "0x4000C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RectTransform _canvasRect;

	[Token(Token = "0x4000C75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Transform _dim;

	[Token(Token = "0x4000C76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Transform _dialogHost;

	[Token(Token = "0x170001A0")]
	protected abstract string DialogId
	{
		[Token(Token = "0x6000E9E")]
		get;
	}

	[Token(Token = "0x170001A1")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6000E9F")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x170001A2")]
	protected AottgInGameView View
	{
		[Token(Token = "0x6000EA0")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EA1")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	protected GisketchView Dialog
	{
		[Token(Token = "0x6000EA2")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EA3")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x1DE6EF0", Offset = "0x1DE54F0", VA = "0x181DE6EF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x1DE7340", Offset = "0x1DE5940", VA = "0x181DE7340", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x1DE6D60", Offset = "0x1DE5360", VA = "0x181DE6D60")]
	private void FitCanvas(Transform target)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	protected AottgScoreboardPopup()
	{
	}
}
