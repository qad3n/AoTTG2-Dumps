// ==================== AoTTG2 cross-reference ====================
// Type: UI.CollapsibleSection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CollapsibleSection.c
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

[Token(Token = "0x2000731")]
internal class CollapsibleSection : MonoBehaviour
{
	[Token(Token = "0x40023F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _headerText;

	[Token(Token = "0x40023F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _title;

	[Token(Token = "0x40023F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _expanded;

	[Token(Token = "0x40023FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Action<bool> _onExpandedChanged;

	[Token(Token = "0x40023FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000CBD")]
	public bool IsExpanded
	{
		[Token(Token = "0x600468B")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600468C")]
	[Address(RVA = "0x2202820", Offset = "0x2200E20", VA = "0x182202820")]
	public void Setup(string title, ElementStyle style, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
	}

	[Token(Token = "0x600468D")]
	[Address(RVA = "0x22025E0", Offset = "0x2200BE0", VA = "0x1822025E0")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x600468E")]
	[Address(RVA = "0x22029B0", Offset = "0x2200FB0", VA = "0x1822029B0")]
	public void Toggle()
	{
	}

	[Token(Token = "0x600468F")]
	[Address(RVA = "0x2202680", Offset = "0x2200C80", VA = "0x182202680")]
	public void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x6004690")]
	[Address(RVA = "0x2202B50", Offset = "0x2201150", VA = "0x182202B50")]
	private void UpdateHeader()
	{
	}

	[Token(Token = "0x6004691")]
	[Address(RVA = "0x2202C10", Offset = "0x2201210", VA = "0x182202C10")]
	public CollapsibleSection()
	{
	}
}
