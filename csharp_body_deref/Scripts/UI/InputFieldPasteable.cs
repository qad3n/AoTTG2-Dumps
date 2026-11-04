// ==================== AoTTG2 cross-reference ====================
// Type: UI.InputFieldPasteable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InputFieldPasteable.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200074E")]
public class InputFieldPasteable : InputField
{
	[Token(Token = "0x6004745")]
	[Address(RVA = "0x2212EB0", Offset = "0x22114B0", VA = "0x182212EB0")]
	protected bool IsModifier()
	{
		return default(bool);
	}

	[Token(Token = "0x6004746")]
	[Address(RVA = "0x2212E90", Offset = "0x2211490", VA = "0x182212E90")]
	protected bool IsCopy()
	{
		return default(bool);
	}

	[Token(Token = "0x6004747")]
	[Address(RVA = "0x2212F40", Offset = "0x2211540", VA = "0x182212F40")]
	protected bool IsPaste()
	{
		return default(bool);
	}

	[Token(Token = "0x6004748")]
	[Address(RVA = "0x2212EA0", Offset = "0x22114A0", VA = "0x182212EA0")]
	protected bool IsCut()
	{
		return default(bool);
	}

	[Token(Token = "0x6004749")]
	[Address(RVA = "0x2212DA0", Offset = "0x22113A0", VA = "0x182212DA0", Slot = "67")]
	protected override void Append(char input)
	{
	}

	[Token(Token = "0x600474A")]
	[Address(RVA = "0x2212B80", Offset = "0x2211180", VA = "0x182212B80", Slot = "66")]
	protected override void Append(string input)
	{
	}

	[Token(Token = "0x600474B")]
	[Address(RVA = "0x2212E50", Offset = "0x2211450", VA = "0x182212E50")]
	private string GetClipboard()
	{
		return null;
	}

	[Token(Token = "0x600474C")]
	[Address(RVA = "0x2212F50", Offset = "0x2211550", VA = "0x182212F50")]
	public InputFieldPasteable()
	{
	}
}
