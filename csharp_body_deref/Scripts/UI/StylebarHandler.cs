// ==================== AoTTG2 cross-reference ====================
// Type: UI.StylebarHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/StylebarHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007C5")]
internal class StylebarHandler : MonoBehaviour
{
	[Token(Token = "0x4002740")]
	[FieldOffset(Offset = "0x20")]
	private StylebarPopup _styleBarPopup;

	[Token(Token = "0x4002741")]
	[FieldOffset(Offset = "0x28")]
	private string[] Letters;

	[Token(Token = "0x4002742")]
	[FieldOffset(Offset = "0x30")]
	private string[] ColorTags;

	[Token(Token = "0x4002743")]
	[FieldOffset(Offset = "0x38")]
	private string[] Sentences;

	[Token(Token = "0x4002744")]
	[FieldOffset(Offset = "0x40")]
	private float[] Multipliers;

	[Token(Token = "0x4002745")]
	[FieldOffset(Offset = "0x48")]
	private int[] PointThresholds;

	[Token(Token = "0x4002746")]
	[FieldOffset(Offset = "0x50")]
	private int[] PointDecays;

	[Token(Token = "0x4002747")]
	[FieldOffset(Offset = "0x58")]
	private int _hits;

	[Token(Token = "0x4002748")]
	[FieldOffset(Offset = "0x5C")]
	private float _points;

	[Token(Token = "0x4002749")]
	[FieldOffset(Offset = "0x60")]
	private int _rank;

	[Token(Token = "0x400274A")]
	[FieldOffset(Offset = "0x64")]
	private bool _lostRank;

	[Token(Token = "0x400274B")]
	[FieldOffset(Offset = "0x68")]
	private float _chainTime;

	[Token(Token = "0x400274C")]
	[FieldOffset(Offset = "0x6C")]
	private int _chainKillRank;

	[Token(Token = "0x6004B6B")]
	[Address(RVA = "0x227FD80", Offset = "0x227E380", VA = "0x18227FD80")]
	public void Awake()
	{
	}

	[Token(Token = "0x6004B6C")]
	[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
	public int GetRank()
	{
		return default(int);
	}

	[Token(Token = "0x6004B6D")]
	[Address(RVA = "0x2280270", Offset = "0x227E870", VA = "0x182280270")]
	public void OnHit(int damage)
	{
	}

	[Token(Token = "0x6004B6E")]
	[Address(RVA = "0x2280740", Offset = "0x227ED40", VA = "0x182280740")]
	private void UpdateRank()
	{
	}

	[Token(Token = "0x6004B6F")]
	[Address(RVA = "0x2280570", Offset = "0x227EB70", VA = "0x182280570")]
	private void UpdateLabels()
	{
	}

	[Token(Token = "0x6004B70")]
	[Address(RVA = "0x2280180", Offset = "0x227E780", VA = "0x182280180")]
	private int GetRankPercent()
	{
		return default(int);
	}

	[Token(Token = "0x6004B71")]
	[Address(RVA = "0x22807D0", Offset = "0x227EDD0", VA = "0x1822807D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004B72")]
	[Address(RVA = "0x2280930", Offset = "0x227EF30", VA = "0x182280930")]
	public StylebarHandler()
	{
	}
}
