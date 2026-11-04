// ==================== AoTTG2 cross-reference ====================
// Type: UI.CollapsibleToggleSection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CollapsibleToggleSection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000732")]
internal class CollapsibleToggleSection : MonoBehaviour
{
	[Token(Token = "0x40023FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _arrowText;

	[Token(Token = "0x40023FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Toggle _enableToggle;

	[Token(Token = "0x40023FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _title;

	[Token(Token = "0x40023FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _expanded;

	[Token(Token = "0x4002400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000CBE")]
	public bool IsExpanded
	{
		[Token(Token = "0x6004692")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CBF")]
	public bool IsEnabled
	{
		[Token(Token = "0x6004693")]
		[Address(RVA = "0x2203290", Offset = "0x2201890", VA = "0x182203290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004694")]
	[Address(RVA = "0x2202DC0", Offset = "0x22013C0", VA = "0x182202DC0")]
	public void Setup(Text arrowButtonText, Button arrowButton, Toggle enableToggle, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
	}

	[Token(Token = "0x6004695")]
	[Address(RVA = "0x2202C90", Offset = "0x2201290", VA = "0x182202C90")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x6004696")]
	[Address(RVA = "0x2202FD0", Offset = "0x22015D0", VA = "0x182202FD0")]
	public void ToggleExpand()
	{
	}

	[Token(Token = "0x6004697")]
	[Address(RVA = "0x2202D30", Offset = "0x2201330", VA = "0x182202D30")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6004698")]
	[Address(RVA = "0x2203150", Offset = "0x2201750", VA = "0x182203150")]
	private void UpdateArrow()
	{
	}

	[Token(Token = "0x6004699")]
	[Address(RVA = "0x2203210", Offset = "0x2201810", VA = "0x182203210")]
	public CollapsibleToggleSection()
	{
	}
}
