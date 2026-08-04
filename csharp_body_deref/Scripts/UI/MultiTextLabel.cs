// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiTextLabel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiTextLabel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MultiTextLabel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000649")]
internal class MultiTextLabel : MonoBehaviour
{
	[Token(Token = "0x4001EDE")]
	[FieldOffset(Offset = "0x20")]
	private Text[] texts;

	[Token(Token = "0x6003F6D")]
	[Address(RVA = "0x42D74E0", Offset = "0x42D74E0", VA = "0x42D74E0")]
	public void Setup(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
	}

	[Token(Token = "0x6003F6E")]
	[Address(RVA = "0x42D7670", Offset = "0x42D7670", VA = "0x42D7670")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6003F6F")]
	[Address(RVA = "0x42D76D0", Offset = "0x42D76D0", VA = "0x42D76D0")]
	public bool GetEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F70")]
	[Address(RVA = "0x42D76F0", Offset = "0x42D76F0", VA = "0x42D76F0")]
	public void SetElementEnabled(int index, bool enabled)
	{
	}

	[Token(Token = "0x6003F71")]
	[Address(RVA = "0x42D7790", Offset = "0x42D7790", VA = "0x42D7790")]
	public bool GetElementEnabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F72")]
	[Address(RVA = "0x42D77E0", Offset = "0x42D77E0", VA = "0x42D77E0")]
	public void SetValue(int index, string value)
	{
	}

	[Token(Token = "0x6003F73")]
	[Address(RVA = "0x42D7830", Offset = "0x42D7830", VA = "0x42D7830")]
	public void ChangeTextColor(int index, Color color)
	{
	}

	[Token(Token = "0x6003F74")]
	[Address(RVA = "0x42D7880", Offset = "0x42D7880", VA = "0x42D7880")]
	public string GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6003F75")]
	[Address(RVA = "0x42D78E0", Offset = "0x42D78E0", VA = "0x42D78E0")]
	public MultiTextLabel()
	{
	}
}
