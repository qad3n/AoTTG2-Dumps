using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000599")]
internal class CollapsibleToggleSection : MonoBehaviour
{
	[Token(Token = "0x4001B5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _arrowText;

	[Token(Token = "0x4001B5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Toggle _enableToggle;

	[Token(Token = "0x4001B5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _title;

	[Token(Token = "0x4001B60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _expanded;

	[Token(Token = "0x4001B61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000B0F")]
	public bool IsExpanded
	{
		[Token(Token = "0x60039D3")]
		[Address(RVA = "0x3F7BE60", Offset = "0x3F7BE60", VA = "0x3F7BE60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B10")]
	public bool IsEnabled
	{
		[Token(Token = "0x60039D4")]
		[Address(RVA = "0x3F7BE70", Offset = "0x3F7BE70", VA = "0x3F7BE70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60039D5")]
	[Address(RVA = "0x3F7BEF0", Offset = "0x3F7BEF0", VA = "0x3F7BEF0")]
	public void Setup(Text arrowButtonText, Button arrowButton, Toggle enableToggle, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
	}

	[Token(Token = "0x60039D6")]
	[Address(RVA = "0x3F7C1F0", Offset = "0x3F7C1F0", VA = "0x3F7C1F0")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x60039D7")]
	[Address(RVA = "0x3F7C2E0", Offset = "0x3F7C2E0", VA = "0x3F7C2E0")]
	public void ToggleExpand()
	{
	}

	[Token(Token = "0x60039D8")]
	[Address(RVA = "0x3F7C4A0", Offset = "0x3F7C4A0", VA = "0x3F7C4A0")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x60039D9")]
	[Address(RVA = "0x3F7C130", Offset = "0x3F7C130", VA = "0x3F7C130")]
	private void UpdateArrow()
	{
	}

	[Token(Token = "0x60039DA")]
	[Address(RVA = "0x3F7C520", Offset = "0x3F7C520", VA = "0x3F7C520")]
	public CollapsibleToggleSection()
	{
	}
}
