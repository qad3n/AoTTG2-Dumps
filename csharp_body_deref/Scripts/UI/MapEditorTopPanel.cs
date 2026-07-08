using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200068F")]
internal class MapEditorTopPanel : HeadedPanel
{
	[Token(Token = "0x2000690")]
	public enum LayerOption
	{
		[Token(Token = "0x4002011")]
		All,
		[Token(Token = "0x4002012")]
		Active,
		[Token(Token = "0x4002013")]
		Inactive,
		[Token(Token = "0x4002014")]
		Visible,
		[Token(Token = "0x4002015")]
		Invisible,
		[Token(Token = "0x4002016")]
		Static,
		[Token(Token = "0x4002017")]
		NonStatic,
		[Token(Token = "0x4002018")]
		Colliders,
		[Token(Token = "0x4002019")]
		Triggers,
		[Token(Token = "0x400201A")]
		NoColliders,
		[Token(Token = "0x400201B")]
		Networked,
		[Token(Token = "0x400201C")]
		NonNetworked
	}

	[Token(Token = "0x4002005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntSetting _dropdownSelection;

	[Token(Token = "0x4002006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private HashSetSetting<int> _layerSelection;

	[Token(Token = "0x4002007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private StringSetting _currentMap;

	[Token(Token = "0x400200A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<DropdownSelectElement> _dropdowns;

	[Token(Token = "0x400200B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MultiSelectDropdownElement _layerDropdown;

	[Token(Token = "0x400200C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private GameObject _gizmoButton;

	[Token(Token = "0x400200D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _gizmoOrientationButton;

	[Token(Token = "0x400200E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private GameObject _snapButton;

	[Token(Token = "0x400200F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _brushButton;

	[Token(Token = "0x17000CE3")]
	protected override float Width
	{
		[Token(Token = "0x6004201")]
		[Address(RVA = "0x4024F70", Offset = "0x4024F70", VA = "0x4024F70", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE4")]
	protected override float Height
	{
		[Token(Token = "0x6004202")]
		[Address(RVA = "0x4024F80", Offset = "0x4024F80", VA = "0x4024F80", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE5")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004203")]
		[Address(RVA = "0x4024F90", Offset = "0x4024F90", VA = "0x4024F90", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE6")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004204")]
		[Address(RVA = "0x4024FA0", Offset = "0x4024FA0", VA = "0x4024FA0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE7")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004205")]
		[Address(RVA = "0x4024FB0", Offset = "0x4024FB0", VA = "0x4024FB0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE8")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004206")]
		[Address(RVA = "0x4024FC0", Offset = "0x4024FC0", VA = "0x4024FC0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CE9")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004207")]
		[Address(RVA = "0x4024FD0", Offset = "0x4024FD0", VA = "0x4024FD0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CEA")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004208")]
		[Address(RVA = "0x4024FE0", Offset = "0x4024FE0", VA = "0x4024FE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004209")]
	[Address(RVA = "0x4025010", Offset = "0x4025010", VA = "0x4025010", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600420A")]
	[Address(RVA = "0x4022690", Offset = "0x4022690", VA = "0x4022690")]
	public bool IsDropdownOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x600420B")]
	[Address(RVA = "0x40267C0", Offset = "0x40267C0", VA = "0x40267C0")]
	protected void OnFileClick()
	{
	}

	[Token(Token = "0x600420C")]
	[Address(RVA = "0x4010D00", Offset = "0x4010D00", VA = "0x4010D00")]
	public void Save()
	{
	}

	[Token(Token = "0x600420D")]
	[Address(RVA = "0x40274F0", Offset = "0x40274F0", VA = "0x40274F0")]
	public void Autosave()
	{
	}

	[Token(Token = "0x600420E")]
	[Address(RVA = "0x4027CF0", Offset = "0x4027CF0", VA = "0x4027CF0")]
	protected void OnEditClick()
	{
	}

	[Token(Token = "0x600420F")]
	[Address(RVA = "0x4027DE0", Offset = "0x4027DE0", VA = "0x4027DE0")]
	protected void OnOptionsClick()
	{
	}

	[Token(Token = "0x6004210")]
	[Address(RVA = "0x4027EF0", Offset = "0x4027EF0", VA = "0x4027EF0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004211")]
	[Address(RVA = "0x4028430", Offset = "0x4028430", VA = "0x4028430")]
	public void ToggleSnap()
	{
	}

	[Token(Token = "0x6004212")]
	[Address(RVA = "0x4028610", Offset = "0x4028610", VA = "0x4028610")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x6004213")]
	[Address(RVA = "0x4028510", Offset = "0x4028510", VA = "0x4028510")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x6004214")]
	[Address(RVA = "0x4028630", Offset = "0x4028630", VA = "0x4028630")]
	public void OnLayersChanged()
	{
	}

	[Token(Token = "0x6004215")]
	[Address(RVA = "0x4028330", Offset = "0x4028330", VA = "0x4028330")]
	public void NextGizmoOrientation()
	{
	}

	[Token(Token = "0x6004216")]
	[Address(RVA = "0x4028140", Offset = "0x4028140", VA = "0x4028140")]
	public void NextGizmo()
	{
	}

	[Token(Token = "0x6004217")]
	[Address(RVA = "0x4028670", Offset = "0x4028670", VA = "0x4028670")]
	protected void OnDeleteMap()
	{
	}

	[Token(Token = "0x6004218")]
	[Address(RVA = "0x4028700", Offset = "0x4028700", VA = "0x4028700")]
	protected void OnNewFinish()
	{
	}

	[Token(Token = "0x6004219")]
	[Address(RVA = "0x4028820", Offset = "0x4028820", VA = "0x4028820")]
	protected void OnRenameFinish()
	{
	}

	[Token(Token = "0x600421A")]
	[Address(RVA = "0x4028990", Offset = "0x4028990", VA = "0x4028990")]
	protected void OnOpenFinish()
	{
	}

	[Token(Token = "0x600421B")]
	[Address(RVA = "0x4028A50", Offset = "0x4028A50", VA = "0x4028A50")]
	protected void OnImportFinish()
	{
	}

	[Token(Token = "0x600421C")]
	[Address(RVA = "0x4028AF0", Offset = "0x4028AF0", VA = "0x4028AF0")]
	protected void OnImportConfirm()
	{
	}

	[Token(Token = "0x600421D")]
	[Address(RVA = "0x4028D00", Offset = "0x4028D00", VA = "0x4028D00")]
	protected void OnImportPresetFinish()
	{
	}

	[Token(Token = "0x600421E")]
	[Address(RVA = "0x4028DA0", Offset = "0x4028DA0", VA = "0x4028DA0")]
	protected void OnImportAutosaveFinish()
	{
	}

	[Token(Token = "0x600421F")]
	[Address(RVA = "0x4028E40", Offset = "0x4028E40", VA = "0x4028E40")]
	protected void OnImportPresetConfirm()
	{
	}

	[Token(Token = "0x6004220")]
	[Address(RVA = "0x4028F90", Offset = "0x4028F90", VA = "0x4028F90")]
	protected void OnImportAutosaveConfirm()
	{
	}

	[Token(Token = "0x6004221")]
	[Address(RVA = "0x4029090", Offset = "0x4029090", VA = "0x4029090")]
	public MapEditorTopPanel()
	{
	}
}
