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

[Token(Token = "0x20006B6")]
internal class MapEditorAddComponentPopup : BasePopup
{
	[Token(Token = "0x400209A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x400209B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x400209C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting FinishSetting;

	[Token(Token = "0x400209D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onLoad;

	[Token(Token = "0x17000D00")]
	protected override string Title
	{
		[Token(Token = "0x60042D7")]
		[Address(RVA = "0x4316810", Offset = "0x4316810", VA = "0x4316810", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D01")]
	protected override float Width
	{
		[Token(Token = "0x60042D8")]
		[Address(RVA = "0x4316830", Offset = "0x4316830", VA = "0x4316830", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D02")]
	protected override float Height
	{
		[Token(Token = "0x60042D9")]
		[Address(RVA = "0x4316840", Offset = "0x4316840", VA = "0x4316840", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D03")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60042DA")]
		[Address(RVA = "0x4316850", Offset = "0x4316850", VA = "0x4316850", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D04")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60042DB")]
		[Address(RVA = "0x4316860", Offset = "0x4316860", VA = "0x4316860", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D05")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60042DC")]
		[Address(RVA = "0x4316870", Offset = "0x4316870", VA = "0x4316870", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D06")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60042DD")]
		[Address(RVA = "0x4316880", Offset = "0x4316880", VA = "0x4316880", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60042DE")]
	[Address(RVA = "0x43168B0", Offset = "0x43168B0", VA = "0x43168B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042DF")]
	[Address(RVA = "0x4316B60", Offset = "0x4316B60", VA = "0x4316B60", Slot = "59")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x60042E0")]
	[Address(RVA = "0x4316C60", Offset = "0x4316C60", VA = "0x4316C60", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x60042E1")]
	[Address(RVA = "0x4316E80", Offset = "0x4316E80", VA = "0x4316E80")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60042E2")]
	[Address(RVA = "0x4316F60", Offset = "0x4316F60", VA = "0x4316F60", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60042E3")]
	[Address(RVA = "0x4317150", Offset = "0x4317150", VA = "0x4317150")]
	public void Show(UnityAction onLoad)
	{
	}

	[Token(Token = "0x60042E4")]
	[Address(RVA = "0x43166F0", Offset = "0x43166F0", VA = "0x43166F0")]
	public void OnSelectItem(string name)
	{
	}

	[Token(Token = "0x60042E5")]
	[Address(RVA = "0x4317190", Offset = "0x4317190", VA = "0x4317190")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60042E6")]
	[Address(RVA = "0x43171B0", Offset = "0x43171B0", VA = "0x43171B0")]
	public MapEditorAddComponentPopup()
	{
	}
}
