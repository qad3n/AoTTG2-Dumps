using System.Text;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000620")]
internal class TeamKDRRow : MonoBehaviour
{
	[Token(Token = "0x4001E34")]
	[FieldOffset(Offset = "0x20")]
	public Text teamText;

	[Token(Token = "0x4001E35")]
	[FieldOffset(Offset = "0x28")]
	public Text scoreText;

	[Token(Token = "0x4001E36")]
	[FieldOffset(Offset = "0x30")]
	public string team;

	[Token(Token = "0x4001E37")]
	[FieldOffset(Offset = "0x38")]
	public int kills;

	[Token(Token = "0x4001E38")]
	[FieldOffset(Offset = "0x3C")]
	public int deaths;

	[Token(Token = "0x4001E39")]
	[FieldOffset(Offset = "0x40")]
	public int maxDamage;

	[Token(Token = "0x4001E3A")]
	[FieldOffset(Offset = "0x44")]
	public int totalDamage;

	[Token(Token = "0x4001E3B")]
	[FieldOffset(Offset = "0x48")]
	public int playerCount;

	[Token(Token = "0x4001E3C")]
	[FieldOffset(Offset = "0x50")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x6003E38")]
	[Address(RVA = "0x3FD95F0", Offset = "0x3FD95F0", VA = "0x3FD95F0")]
	public void Setup(ElementStyle style, string team)
	{
	}

	[Token(Token = "0x6003E39")]
	[Address(RVA = "0x3FD97A0", Offset = "0x3FD97A0", VA = "0x3FD97A0")]
	public void ResetStats()
	{
	}

	[Token(Token = "0x6003E3A")]
	[Address(RVA = "0x3FD97B0", Offset = "0x3FD97B0", VA = "0x3FD97B0")]
	public void RemovePlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x6003E3B")]
	[Address(RVA = "0x3FD9840", Offset = "0x3FD9840", VA = "0x3FD9840")]
	public void AddPlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x6003E3C")]
	[Address(RVA = "0x3FD98D0", Offset = "0x3FD98D0", VA = "0x3FD98D0")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x6003E3D")]
	[Address(RVA = "0x3FD9A60", Offset = "0x3FD9A60", VA = "0x3FD9A60")]
	public TeamKDRRow()
	{
	}
}
