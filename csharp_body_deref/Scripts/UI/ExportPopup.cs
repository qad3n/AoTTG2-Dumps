// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExportPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExportPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000792")]
internal class ExportPopup : PromptPopup
{
	[Token(Token = "0x4002645")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _element;

	[Token(Token = "0x4002646")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _versionElement;

	[Token(Token = "0x4002647")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _mapExportSource;

	[Token(Token = "0x4002648")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private StringSetting _version;

	[Token(Token = "0x4002649")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ExportSetting;

	[Token(Token = "0x17000C7D")]
	protected override string Title
	{
		[Token(Token = "0x6004919")]
		[Address(RVA = "0x5BBCCF0", Offset = "0x5BBBCF0", VA = "0x5BBCCF0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C7E")]
	protected override float Width
	{
		[Token(Token = "0x600491A")]
		[Address(RVA = "0x5BBCD50", Offset = "0x5BBBD50", VA = "0x5BBCD50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7F")]
	protected override float Height
	{
		[Token(Token = "0x600491B")]
		[Address(RVA = "0x5BBCD60", Offset = "0x5BBBD60", VA = "0x5BBCD60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C80")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600491C")]
		[Address(RVA = "0x5BBCD70", Offset = "0x5BBBD70", VA = "0x5BBCD70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C81")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600491D")]
		[Address(RVA = "0x5BBCD80", Offset = "0x5BBBD80", VA = "0x5BBCD80", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600491E")]
	[Address(RVA = "0x5BBCD90", Offset = "0x5BBBD90", VA = "0x5BBCD90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600491F")]
	[Address(RVA = "0x5BBCED0", Offset = "0x5BBBED0", VA = "0x5BBCED0")]
	public void Show(string value)
	{
	}

	[Token(Token = "0x6004920")]
	[Address(RVA = "0x5BBD110", Offset = "0x5BBC110", VA = "0x5BBD110")]
	public void Show(MapScript mapScript)
	{
	}

	[Token(Token = "0x6004921")]
	[Address(RVA = "0x5BBD550", Offset = "0x5BBC550", VA = "0x5BBD550")]
	private void UpdateMapExport()
	{
	}

	[Token(Token = "0x6004922")]
	[Address(RVA = "0x5BBD6D0", Offset = "0x5BBC6D0", VA = "0x5BBD6D0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004923")]
	[Address(RVA = "0x5BBD740", Offset = "0x5BBC740", VA = "0x5BBD740")]
	public ExportPopup()
	{
	}
}
