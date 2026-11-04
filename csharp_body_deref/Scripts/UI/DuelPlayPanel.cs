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

[Token(Token = "0x20007DD")]
internal class DuelPlayPanel : DuelCategoryPanel
{
	[Token(Token = "0x40027D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x40027D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x40027D7")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x40027D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000DC1")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004C36")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC2")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004C37")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004C38")]
	[Address(RVA = "0x2278860", Offset = "0x2276E60", VA = "0x182278860", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004C39")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004C3A")]
	[Address(RVA = "0x2278870", Offset = "0x2276E70", VA = "0x182278870")]
	public DuelPlayPanel()
	{
	}
}
