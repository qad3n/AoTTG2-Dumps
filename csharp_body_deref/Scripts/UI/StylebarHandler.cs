using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200061E")]
internal class StylebarHandler : MonoBehaviour
{
	[Token(Token = "0x4001E1E")]
	[FieldOffset(Offset = "0x20")]
	private StylebarPopup _styleBarPopup;

	[Token(Token = "0x4001E1F")]
	[FieldOffset(Offset = "0x28")]
	private string[] Letters;

	[Token(Token = "0x4001E20")]
	[FieldOffset(Offset = "0x30")]
	private string[] ColorTags;

	[Token(Token = "0x4001E21")]
	[FieldOffset(Offset = "0x38")]
	private string[] Sentences;

	[Token(Token = "0x4001E22")]
	[FieldOffset(Offset = "0x40")]
	private float[] Multipliers;

	[Token(Token = "0x4001E23")]
	[FieldOffset(Offset = "0x48")]
	private int[] PointThresholds;

	[Token(Token = "0x4001E24")]
	[FieldOffset(Offset = "0x50")]
	private int[] PointDecays;

	[Token(Token = "0x4001E25")]
	[FieldOffset(Offset = "0x58")]
	private int _hits;

	[Token(Token = "0x4001E26")]
	[FieldOffset(Offset = "0x5C")]
	private float _points;

	[Token(Token = "0x4001E27")]
	[FieldOffset(Offset = "0x60")]
	private int _rank;

	[Token(Token = "0x4001E28")]
	[FieldOffset(Offset = "0x64")]
	private bool _lostRank;

	[Token(Token = "0x4001E29")]
	[FieldOffset(Offset = "0x68")]
	private float _chainTime;

	[Token(Token = "0x4001E2A")]
	[FieldOffset(Offset = "0x6C")]
	private int _chainKillRank;

	[Token(Token = "0x6003E22")]
	[Address(RVA = "0x3FD7F00", Offset = "0x3FD7F00", VA = "0x3FD7F00")]
	public void Awake()
	{
	}

	[Token(Token = "0x6003E23")]
	[Address(RVA = "0x3FD83C0", Offset = "0x3FD83C0", VA = "0x3FD83C0")]
	public int GetRank()
	{
		return default(int);
	}

	[Token(Token = "0x6003E24")]
	[Address(RVA = "0x3FD83D0", Offset = "0x3FD83D0", VA = "0x3FD83D0")]
	public void OnHit(int damage)
	{
	}

	[Token(Token = "0x6003E25")]
	[Address(RVA = "0x3FD8730", Offset = "0x3FD8730", VA = "0x3FD8730")]
	private void UpdateRank()
	{
	}

	[Token(Token = "0x6003E26")]
	[Address(RVA = "0x3FD87D0", Offset = "0x3FD87D0", VA = "0x3FD87D0")]
	private void UpdateLabels()
	{
	}

	[Token(Token = "0x6003E27")]
	[Address(RVA = "0x3FD88B0", Offset = "0x3FD88B0", VA = "0x3FD88B0")]
	private int GetRankPercent()
	{
		return default(int);
	}

	[Token(Token = "0x6003E28")]
	[Address(RVA = "0x3FD8950", Offset = "0x3FD8950", VA = "0x3FD8950")]
	private void Update()
	{
	}

	[Token(Token = "0x6003E29")]
	[Address(RVA = "0x3FD8B50", Offset = "0x3FD8B50", VA = "0x3FD8B50")]
	public StylebarHandler()
	{
	}
}
