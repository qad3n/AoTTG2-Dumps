using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000B")]
public class PhotonStatsGui : MonoBehaviour
{
	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x20")]
	public bool statsWindowOn;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x21")]
	public bool statsOn;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x22")]
	public bool healthStatsVisible;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x23")]
	public bool trafficStatsOn;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x24")]
	public bool buttonsOn;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x28")]
	public Rect statsRect;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x38")]
	public int WindowId;

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3BE6740", Offset = "0x3BE6740", VA = "0x3BE6740")]
	public void Start()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3BE6750", Offset = "0x3BE6750", VA = "0x3BE6750")]
	public void Update()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3BE6760", Offset = "0x3BE6760", VA = "0x3BE6760")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3BE69B0", Offset = "0x3BE69B0", VA = "0x3BE69B0")]
	public void TrafficStatsWindow(int windowID)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3BE80F0", Offset = "0x3BE80F0", VA = "0x3BE80F0")]
	public PhotonStatsGui()
	{
	}
}
