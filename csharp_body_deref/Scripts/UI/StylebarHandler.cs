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

[Token(Token = "0x2000669")]
internal class StylebarHandler : MonoBehaviour
{
	[Token(Token = "0x4001F65")]
	[FieldOffset(Offset = "0x20")]
	private StylebarPopup _styleBarPopup;

	[Token(Token = "0x4001F66")]
	[FieldOffset(Offset = "0x28")]
	private string[] Letters;

	[Token(Token = "0x4001F67")]
	[FieldOffset(Offset = "0x30")]
	private string[] ColorTags;

	[Token(Token = "0x4001F68")]
	[FieldOffset(Offset = "0x38")]
	private string[] Sentences;

	[Token(Token = "0x4001F69")]
	[FieldOffset(Offset = "0x40")]
	private float[] Multipliers;

	[Token(Token = "0x4001F6A")]
	[FieldOffset(Offset = "0x48")]
	private int[] PointThresholds;

	[Token(Token = "0x4001F6B")]
	[FieldOffset(Offset = "0x50")]
	private int[] PointDecays;

	[Token(Token = "0x4001F6C")]
	[FieldOffset(Offset = "0x58")]
	private int _hits;

	[Token(Token = "0x4001F6D")]
	[FieldOffset(Offset = "0x5C")]
	private float _points;

	[Token(Token = "0x4001F6E")]
	[FieldOffset(Offset = "0x60")]
	private int _rank;

	[Token(Token = "0x4001F6F")]
	[FieldOffset(Offset = "0x64")]
	private bool _lostRank;

	[Token(Token = "0x4001F70")]
	[FieldOffset(Offset = "0x68")]
	private float _chainTime;

	[Token(Token = "0x4001F71")]
	[FieldOffset(Offset = "0x6C")]
	private int _chainKillRank;

	[Token(Token = "0x600406F")]
	[Address(RVA = "0x42EA920", Offset = "0x42EA920", VA = "0x42EA920")]
	public void Awake()
	{
	}

	[Token(Token = "0x6004070")]
	[Address(RVA = "0x42EADE0", Offset = "0x42EADE0", VA = "0x42EADE0")]
	public int GetRank()
	{
		return default(int);
	}

	[Token(Token = "0x6004071")]
	[Address(RVA = "0x42EADF0", Offset = "0x42EADF0", VA = "0x42EADF0")]
	public void OnHit(int damage)
	{
	}

	[Token(Token = "0x6004072")]
	[Address(RVA = "0x42EB150", Offset = "0x42EB150", VA = "0x42EB150")]
	private void UpdateRank()
	{
	}

	[Token(Token = "0x6004073")]
	[Address(RVA = "0x42EB1F0", Offset = "0x42EB1F0", VA = "0x42EB1F0")]
	private void UpdateLabels()
	{
	}

	[Token(Token = "0x6004074")]
	[Address(RVA = "0x42EB2D0", Offset = "0x42EB2D0", VA = "0x42EB2D0")]
	private int GetRankPercent()
	{
		return default(int);
	}

	[Token(Token = "0x6004075")]
	[Address(RVA = "0x42EB370", Offset = "0x42EB370", VA = "0x42EB370")]
	private void Update()
	{
	}

	[Token(Token = "0x6004076")]
	[Address(RVA = "0x42EB570", Offset = "0x42EB570", VA = "0x42EB570")]
	public StylebarHandler()
	{
	}
}
