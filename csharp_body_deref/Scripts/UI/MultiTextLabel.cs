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

[Token(Token = "0x2000853")]
internal class MultiTextLabel : MonoBehaviour
{
	[Token(Token = "0x4002A28")]
	[FieldOffset(Offset = "0x20")]
	private Text[] texts;

	[Token(Token = "0x6004F96")]
	[Address(RVA = "0x5C3A0E0", Offset = "0x5C390E0", VA = "0x5C3A0E0")]
	public void Setup(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
	}

	[Token(Token = "0x6004F97")]
	[Address(RVA = "0x5C3A270", Offset = "0x5C39270", VA = "0x5C3A270")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6004F98")]
	[Address(RVA = "0x5C3A2D0", Offset = "0x5C392D0", VA = "0x5C3A2D0")]
	public bool GetEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6004F99")]
	[Address(RVA = "0x5C3A2F0", Offset = "0x5C392F0", VA = "0x5C3A2F0")]
	public void SetElementEnabled(int index, bool enabled)
	{
	}

	[Token(Token = "0x6004F9A")]
	[Address(RVA = "0x5C3A390", Offset = "0x5C39390", VA = "0x5C3A390")]
	public bool GetElementEnabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F9B")]
	[Address(RVA = "0x5C3A3E0", Offset = "0x5C393E0", VA = "0x5C3A3E0")]
	public void SetValue(int index, string value)
	{
	}

	[Token(Token = "0x6004F9C")]
	[Address(RVA = "0x5C3A430", Offset = "0x5C39430", VA = "0x5C3A430")]
	public void ChangeTextColor(int index, Color color)
	{
	}

	[Token(Token = "0x6004F9D")]
	[Address(RVA = "0x5C3A480", Offset = "0x5C39480", VA = "0x5C3A480")]
	public string GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6004F9E")]
	[Address(RVA = "0x5C3A4E0", Offset = "0x5C394E0", VA = "0x5C3A4E0")]
	public MultiTextLabel()
	{
	}
}
