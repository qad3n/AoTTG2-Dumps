// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddComponentPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddComponentPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000811")]
internal class MapEditorAddComponentPopup : BasePopup
{
	[Token(Token = "0x400286E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x400286F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002870")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting FinishSetting;

	[Token(Token = "0x4002871")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onLoad;

	[Token(Token = "0x17000E46")]
	protected override string Title
	{
		[Token(Token = "0x6004DCB")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E47")]
	protected override float Width
	{
		[Token(Token = "0x6004DCC")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E48")]
	protected override float Height
	{
		[Token(Token = "0x6004DCD")]
		[Address(RVA = "0x21500A0", Offset = "0x214E6A0", VA = "0x1821500A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E49")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004DCE")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E4A")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004DCF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E4B")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004DD0")]
		[Address(RVA = "0x21C3380", Offset = "0x21C1980", VA = "0x1821C3380", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E4C")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004DD1")]
		[Address(RVA = "0x229E110", Offset = "0x229C710", VA = "0x18229E110", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004DD2")]
	[Address(RVA = "0x229DCF0", Offset = "0x229C2F0", VA = "0x18229DCF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004DD3")]
	[Address(RVA = "0x229D6F0", Offset = "0x229BCF0", VA = "0x18229D6F0", Slot = "62")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6004DD4")]
	[Address(RVA = "0x229DAE0", Offset = "0x229C0E0", VA = "0x18229DAE0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004DD5")]
	[Address(RVA = "0x229D870", Offset = "0x229BE70", VA = "0x18229D870")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004DD6")]
	[Address(RVA = "0x229D950", Offset = "0x229BF50", VA = "0x18229D950", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004DD7")]
	[Address(RVA = "0x229DFA0", Offset = "0x229C5A0", VA = "0x18229DFA0")]
	public void Show(UnityAction onLoad)
	{
	}

	[Token(Token = "0x6004DD8")]
	[Address(RVA = "0x229D7E0", Offset = "0x229BDE0", VA = "0x18229D7E0")]
	public void OnSelectItem(string name)
	{
	}

	[Token(Token = "0x6004DD9")]
	[Address(RVA = "0xA37400", Offset = "0xA35A00", VA = "0x180A37400")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004DDA")]
	[Address(RVA = "0x229E030", Offset = "0x229C630", VA = "0x18229E030")]
	public MapEditorAddComponentPopup()
	{
	}
}
