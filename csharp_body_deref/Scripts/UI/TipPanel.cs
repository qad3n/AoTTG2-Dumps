using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000665")]
internal class TipPanel : MonoBehaviour
{
	[Token(Token = "0x4001F3C")]
	[FieldOffset(Offset = "0x20")]
	private Text _label;

	[Token(Token = "0x4001F3D")]
	[FieldOffset(Offset = "0x28")]
	private int currentTipIndex;

	[Token(Token = "0x6004049")]
	[Address(RVA = "0x3FFF400", Offset = "0x3FFF400", VA = "0x3FFF400")]
	public void Setup()
	{
	}

	[Token(Token = "0x600404A")]
	[Address(RVA = "0x3FFF480", Offset = "0x3FFF480", VA = "0x3FFF480")]
	public void SetRandomTip()
	{
	}

	[Token(Token = "0x600404B")]
	[Address(RVA = "0x3FFF650", Offset = "0x3FFF650", VA = "0x3FFF650")]
	public void SetPressAnyKey()
	{
	}

	[Token(Token = "0x600404C")]
	[Address(RVA = "0x3FFF6D0", Offset = "0x3FFF6D0", VA = "0x3FFF6D0")]
	public TipPanel()
	{
	}
}
