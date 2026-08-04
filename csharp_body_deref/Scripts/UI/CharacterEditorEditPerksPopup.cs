// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorEditPerksPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorEditPerksPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200059D")]
internal class CharacterEditorEditPerksPopup : BasePopup
{
	[Token(Token = "0x4001BA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x4001BA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, GameObject> _perkButtons;

	[Token(Token = "0x4001BA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _perkDescriptions;

	[Token(Token = "0x17000B19")]
	protected override string Title
	{
		[Token(Token = "0x6003A27")]
		[Address(RVA = "0x425E890", Offset = "0x425E890", VA = "0x425E890", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B1A")]
	protected override float Width
	{
		[Token(Token = "0x6003A28")]
		[Address(RVA = "0x425E930", Offset = "0x425E930", VA = "0x425E930", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B1B")]
	protected override float Height
	{
		[Token(Token = "0x6003A29")]
		[Address(RVA = "0x425E940", Offset = "0x425E940", VA = "0x425E940", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B1C")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003A2A")]
		[Address(RVA = "0x425E950", Offset = "0x425E950", VA = "0x425E950", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B1D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003A2B")]
		[Address(RVA = "0x425E960", Offset = "0x425E960", VA = "0x425E960", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B1E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003A2C")]
		[Address(RVA = "0x425E970", Offset = "0x425E970", VA = "0x425E970", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003A2D")]
	[Address(RVA = "0x425E980", Offset = "0x425E980", VA = "0x425E980", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003A2E")]
	[Address(RVA = "0x425EEF0", Offset = "0x425EEF0", VA = "0x425EEF0")]
	protected void CreatePerkButton(Transform group, ElementStyle style, string name, string desc)
	{
	}

	[Token(Token = "0x6003A2F")]
	[Address(RVA = "0x425F060", Offset = "0x425F060", VA = "0x425F060")]
	protected void CreateArrow(Transform group, ElementStyle style)
	{
	}

	[Token(Token = "0x6003A30")]
	[Address(RVA = "0x425F8B0", Offset = "0x425F8B0", VA = "0x425F8B0")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6003A31")]
	[Address(RVA = "0x425F0B0", Offset = "0x425F0B0", VA = "0x425F0B0")]
	protected void OnPerkChanged(string perkName)
	{
	}

	[Token(Token = "0x6003A32")]
	[Address(RVA = "0x425FB50", Offset = "0x425FB50", VA = "0x425FB50")]
	public CharacterEditorEditPerksPopup()
	{
	}
}
