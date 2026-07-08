using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005FE")]
internal class MultiTextLabel : MonoBehaviour
{
	[Token(Token = "0x4001D98")]
	[FieldOffset(Offset = "0x20")]
	private Text[] texts;

	[Token(Token = "0x6003D20")]
	[Address(RVA = "0x3FC4FF0", Offset = "0x3FC4FF0", VA = "0x3FC4FF0")]
	public void Setup(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
	}

	[Token(Token = "0x6003D21")]
	[Address(RVA = "0x3FC5180", Offset = "0x3FC5180", VA = "0x3FC5180")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6003D22")]
	[Address(RVA = "0x3FC51E0", Offset = "0x3FC51E0", VA = "0x3FC51E0")]
	public bool GetEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D23")]
	[Address(RVA = "0x3FC5200", Offset = "0x3FC5200", VA = "0x3FC5200")]
	public void SetElementEnabled(int index, bool enabled)
	{
	}

	[Token(Token = "0x6003D24")]
	[Address(RVA = "0x3FC52A0", Offset = "0x3FC52A0", VA = "0x3FC52A0")]
	public bool GetElementEnabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D25")]
	[Address(RVA = "0x3FC52F0", Offset = "0x3FC52F0", VA = "0x3FC52F0")]
	public void SetValue(int index, string value)
	{
	}

	[Token(Token = "0x6003D26")]
	[Address(RVA = "0x3FC5340", Offset = "0x3FC5340", VA = "0x3FC5340")]
	public void ChangeTextColor(int index, Color color)
	{
	}

	[Token(Token = "0x6003D27")]
	[Address(RVA = "0x3FC5390", Offset = "0x3FC5390", VA = "0x3FC5390")]
	public string GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6003D28")]
	[Address(RVA = "0x3FC53F0", Offset = "0x3FC53F0", VA = "0x3FC53F0")]
	public MultiTextLabel()
	{
	}
}
