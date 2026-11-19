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

[Token(Token = "0x20007B9")]
internal class CharacterEditorEditPerksPopup : BasePopup
{
	[Token(Token = "0x40026E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x40026E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, GameObject> _perkButtons;

	[Token(Token = "0x40026E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _perkDescriptions;

	[Token(Token = "0x17000CF6")]
	protected override string Title
	{
		[Token(Token = "0x6004A81")]
		[Address(RVA = "0x5BD1290", Offset = "0x5BD0290", VA = "0x5BD1290", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CF7")]
	protected override float Width
	{
		[Token(Token = "0x6004A82")]
		[Address(RVA = "0x5BD1330", Offset = "0x5BD0330", VA = "0x5BD1330", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF8")]
	protected override float Height
	{
		[Token(Token = "0x6004A83")]
		[Address(RVA = "0x5BD1340", Offset = "0x5BD0340", VA = "0x5BD1340", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF9")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A84")]
		[Address(RVA = "0x5BD1350", Offset = "0x5BD0350", VA = "0x5BD1350", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFA")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A85")]
		[Address(RVA = "0x5BD1360", Offset = "0x5BD0360", VA = "0x5BD1360", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CFB")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A86")]
		[Address(RVA = "0x5BD1370", Offset = "0x5BD0370", VA = "0x5BD1370", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004A87")]
	[Address(RVA = "0x5BD1380", Offset = "0x5BD0380", VA = "0x5BD1380", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A88")]
	[Address(RVA = "0x5BD1FD0", Offset = "0x5BD0FD0", VA = "0x5BD1FD0")]
	protected void CreatePerkButton(Transform group, ElementStyle style, string name, string desc)
	{
	}

	[Token(Token = "0x6004A89")]
	[Address(RVA = "0x5BD2140", Offset = "0x5BD1140", VA = "0x5BD2140")]
	protected void CreateArrow(Transform group, ElementStyle style)
	{
	}

	[Token(Token = "0x6004A8A")]
	[Address(RVA = "0x5BD2E40", Offset = "0x5BD1E40", VA = "0x5BD2E40")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6004A8B")]
	[Address(RVA = "0x5BD2180", Offset = "0x5BD1180", VA = "0x5BD2180")]
	protected void OnPerkChanged(string perkName)
	{
	}

	[Token(Token = "0x6004A8C")]
	[Address(RVA = "0x5BD30B0", Offset = "0x5BD20B0", VA = "0x5BD30B0")]
	public CharacterEditorEditPerksPopup()
	{
	}
}
