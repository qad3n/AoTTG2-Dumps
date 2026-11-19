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

[Token(Token = "0x2000871")]
internal class StylebarHandler : MonoBehaviour
{
	[Token(Token = "0x4002AC0")]
	[FieldOffset(Offset = "0x20")]
	private StylebarPopup _styleBarPopup;

	[Token(Token = "0x4002AC1")]
	[FieldOffset(Offset = "0x28")]
	private string[] Letters;

	[Token(Token = "0x4002AC2")]
	[FieldOffset(Offset = "0x30")]
	private string[] ColorTags;

	[Token(Token = "0x4002AC3")]
	[FieldOffset(Offset = "0x38")]
	private string[] Sentences;

	[Token(Token = "0x4002AC4")]
	[FieldOffset(Offset = "0x40")]
	private float[] Multipliers;

	[Token(Token = "0x4002AC5")]
	[FieldOffset(Offset = "0x48")]
	private int[] PointThresholds;

	[Token(Token = "0x4002AC6")]
	[FieldOffset(Offset = "0x50")]
	private int[] PointDecays;

	[Token(Token = "0x4002AC7")]
	[FieldOffset(Offset = "0x58")]
	private int _hits;

	[Token(Token = "0x4002AC8")]
	[FieldOffset(Offset = "0x5C")]
	private float _points;

	[Token(Token = "0x4002AC9")]
	[FieldOffset(Offset = "0x60")]
	private int _rank;

	[Token(Token = "0x4002ACA")]
	[FieldOffset(Offset = "0x64")]
	private bool _lostRank;

	[Token(Token = "0x4002ACB")]
	[FieldOffset(Offset = "0x68")]
	private float _chainTime;

	[Token(Token = "0x4002ACC")]
	[FieldOffset(Offset = "0x6C")]
	private int _chainKillRank;

	[Token(Token = "0x600508B")]
	[Address(RVA = "0x5C50890", Offset = "0x5C4F890", VA = "0x5C50890")]
	public void Awake()
	{
	}

	[Token(Token = "0x600508C")]
	[Address(RVA = "0x5C50D60", Offset = "0x5C4FD60", VA = "0x5C50D60")]
	public int GetRank()
	{
		return default(int);
	}

	[Token(Token = "0x600508D")]
	[Address(RVA = "0x5C50D70", Offset = "0x5C4FD70", VA = "0x5C50D70")]
	public void OnHit(int damage)
	{
	}

	[Token(Token = "0x600508E")]
	[Address(RVA = "0x5C51080", Offset = "0x5C50080", VA = "0x5C51080")]
	private void UpdateRank()
	{
	}

	[Token(Token = "0x600508F")]
	[Address(RVA = "0x5C51100", Offset = "0x5C50100", VA = "0x5C51100")]
	private void UpdateLabels()
	{
	}

	[Token(Token = "0x6005090")]
	[Address(RVA = "0x5C511E0", Offset = "0x5C501E0", VA = "0x5C511E0")]
	private int GetRankPercent()
	{
		return default(int);
	}

	[Token(Token = "0x6005091")]
	[Address(RVA = "0x5C51280", Offset = "0x5C50280", VA = "0x5C51280")]
	private void Update()
	{
	}

	[Token(Token = "0x6005092")]
	[Address(RVA = "0x5C51470", Offset = "0x5C50470", VA = "0x5C51470")]
	public StylebarHandler()
	{
	}
}
