// ==================== AoTTG2 cross-reference ====================
// Type: UI.DuelPlayPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/DuelPlayPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelPlayPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000682")]
internal class DuelPlayPanel : DuelCategoryPanel
{
	[Token(Token = "0x4001FFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4001FFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4001FFF")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x4002000")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000C7B")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004141")]
		[Address(RVA = "0x42FAAE0", Offset = "0x42FAAE0", VA = "0x42FAAE0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004142")]
		[Address(RVA = "0x42FAAF0", Offset = "0x42FAAF0", VA = "0x42FAAF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004143")]
	[Address(RVA = "0x42FAB00", Offset = "0x42FAB00", VA = "0x42FAB00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004144")]
	[Address(RVA = "0x42FAB10", Offset = "0x42FAB10", VA = "0x42FAB10")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004145")]
	[Address(RVA = "0x42FAB20", Offset = "0x42FAB20", VA = "0x42FAB20")]
	public DuelPlayPanel()
	{
	}
}
