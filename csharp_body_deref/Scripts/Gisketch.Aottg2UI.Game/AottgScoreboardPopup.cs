// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000293")]
internal abstract class AottgScoreboardPopup : PromptPopup
{
	[Token(Token = "0x4000D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RectTransform _canvasRect;

	[Token(Token = "0x4000D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Transform _dim;

	[Token(Token = "0x4000D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Transform _dialogHost;

	[Token(Token = "0x170001AB")]
	protected abstract string DialogId
	{
		[Token(Token = "0x6000FAD")]
		get;
	}

	[Token(Token = "0x170001AC")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x57B5C50", Offset = "0x57B4C50", VA = "0x57B5C50", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x170001AD")]
	protected AottgInGameView View
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x57B5C60", Offset = "0x57B4C60", VA = "0x57B5C60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x57B5C70", Offset = "0x57B4C70", VA = "0x57B5C70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	protected GisketchView Dialog
	{
		[Token(Token = "0x6000FB1")]
		[Address(RVA = "0x57B5C90", Offset = "0x57B4C90", VA = "0x57B5C90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB2")]
		[Address(RVA = "0x57B5CA0", Offset = "0x57B4CA0", VA = "0x57B5CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x57B5CC0", Offset = "0x57B4CC0", VA = "0x57B5CC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x57B6020", Offset = "0x57B5020", VA = "0x57B6020", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x57B6190", Offset = "0x57B5190", VA = "0x57B6190")]
	private void FitCanvas(Transform target)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x57B6310", Offset = "0x57B5310", VA = "0x57B6310")]
	protected AottgScoreboardPopup()
	{
	}
}
