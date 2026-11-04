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

[Token(Token = "0x20007A7")]
internal class MultiTextLabel : MonoBehaviour
{
	[Token(Token = "0x40026AB")]
	[FieldOffset(Offset = "0x20")]
	private Text[] texts;

	[Token(Token = "0x6004A73")]
	[Address(RVA = "0x225E500", Offset = "0x225CB00", VA = "0x18225E500")]
	public void Setup(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
	}

	[Token(Token = "0x6004A74")]
	[Address(RVA = "0x225E440", Offset = "0x225CA40", VA = "0x18225E440")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6004A75")]
	[Address(RVA = "0x225E300", Offset = "0x225C900", VA = "0x18225E300")]
	public bool GetEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6004A76")]
	[Address(RVA = "0x225E390", Offset = "0x225C990", VA = "0x18225E390")]
	public void SetElementEnabled(int index, bool enabled)
	{
	}

	[Token(Token = "0x6004A77")]
	[Address(RVA = "0x225E2A0", Offset = "0x225C8A0", VA = "0x18225E2A0")]
	public bool GetElementEnabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A78")]
	[Address(RVA = "0x225E4A0", Offset = "0x225CAA0", VA = "0x18225E4A0")]
	public void SetValue(int index, string value)
	{
	}

	[Token(Token = "0x6004A79")]
	[Address(RVA = "0x225E240", Offset = "0x225C840", VA = "0x18225E240")]
	public void ChangeTextColor(int index, Color color)
	{
	}

	[Token(Token = "0x6004A7A")]
	[Address(RVA = "0x225E330", Offset = "0x225C930", VA = "0x18225E330")]
	public string GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6004A7B")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MultiTextLabel()
	{
	}
}
