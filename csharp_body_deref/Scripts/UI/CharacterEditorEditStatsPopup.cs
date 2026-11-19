// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorEditStatsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorEditStatsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditStatsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007BB")]
internal class CharacterEditorEditStatsPopup : BasePopup
{
	[Token(Token = "0x40026E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected IntSetting Speed;

	[Token(Token = "0x40026E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected IntSetting Acceleration;

	[Token(Token = "0x40026E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected IntSetting Ammunition;

	[Token(Token = "0x40026E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected IntSetting Gas;

	[Token(Token = "0x40026E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x17000CFC")]
	protected override string Title
	{
		[Token(Token = "0x6004A91")]
		[Address(RVA = "0x5BD3220", Offset = "0x5BD2220", VA = "0x5BD3220", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CFD")]
	protected override float Width
	{
		[Token(Token = "0x6004A92")]
		[Address(RVA = "0x5BD3280", Offset = "0x5BD2280", VA = "0x5BD3280", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFE")]
	protected override float Height
	{
		[Token(Token = "0x6004A93")]
		[Address(RVA = "0x5BD3290", Offset = "0x5BD2290", VA = "0x5BD3290", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A94")]
		[Address(RVA = "0x5BD32A0", Offset = "0x5BD22A0", VA = "0x5BD32A0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D00")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A95")]
		[Address(RVA = "0x5BD32B0", Offset = "0x5BD22B0", VA = "0x5BD32B0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D01")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A96")]
		[Address(RVA = "0x5BD32C0", Offset = "0x5BD22C0", VA = "0x5BD32C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004A97")]
	[Address(RVA = "0x5BD32D0", Offset = "0x5BD22D0", VA = "0x5BD32D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A98")]
	[Address(RVA = "0x5BD3D50", Offset = "0x5BD2D50", VA = "0x5BD3D50")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6004A99")]
	[Address(RVA = "0x5BD3A80", Offset = "0x5BD2A80", VA = "0x5BD3A80")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x6004A9A")]
	[Address(RVA = "0x5BD4070", Offset = "0x5BD3070", VA = "0x5BD4070")]
	public CharacterEditorEditStatsPopup()
	{
	}
}
