// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddObjectPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddObjectPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000816")]
internal class MapEditorAddObjectPopup : BasePopup
{
	[Token(Token = "0x4002879")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x400287A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000E51")]
	protected override string Title
	{
		[Token(Token = "0x6004DF0")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E52")]
	protected override float Width
	{
		[Token(Token = "0x6004DF1")]
		[Address(RVA = "0x22A0680", Offset = "0x229EC80", VA = "0x1822A0680", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E53")]
	protected override float Height
	{
		[Token(Token = "0x6004DF2")]
		[Address(RVA = "0x22A0670", Offset = "0x229EC70", VA = "0x1822A0670", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E54")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004DF3")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E55")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004DF4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E56")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004DF5")]
		[Address(RVA = "0x21C3380", Offset = "0x21C1980", VA = "0x1821C3380", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E57")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004DF6")]
		[Address(RVA = "0x22A0640", Offset = "0x229EC40", VA = "0x1822A0640", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E58")]
	protected virtual bool TwoRows
	{
		[Token(Token = "0x6004DF7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004DF8")]
	[Address(RVA = "0x22A02B0", Offset = "0x229E8B0", VA = "0x1822A02B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004DF9")]
	[Address(RVA = "0x229F5B0", Offset = "0x229DBB0", VA = "0x18229F5B0", Slot = "63")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6004DFA")]
	[Address(RVA = "0x229F7D0", Offset = "0x229DDD0", VA = "0x18229F7D0", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004DFB")]
	[Address(RVA = "0x229FA70", Offset = "0x229E070", VA = "0x18229FA70", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004DFC")]
	[Address(RVA = "0x229F4C0", Offset = "0x229DAC0", VA = "0x18229F4C0")]
	protected GameObject CreateRow()
	{
		return null;
	}

	[Token(Token = "0x6004DFD")]
	[Address(RVA = "0x229F800", Offset = "0x229DE00", VA = "0x18229F800")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004DFE")]
	[Address(RVA = "0x229F8E0", Offset = "0x229DEE0", VA = "0x18229F8E0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004DFF")]
	[Address(RVA = "0xA37400", Offset = "0xA35A00", VA = "0x180A37400")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004E00")]
	[Address(RVA = "0x22A05A0", Offset = "0x229EBA0", VA = "0x1822A05A0")]
	public MapEditorAddObjectPopup()
	{
	}
}
