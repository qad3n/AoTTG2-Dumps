using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000598")]
internal class CollapsibleSection : MonoBehaviour
{
	[Token(Token = "0x4001B58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _headerText;

	[Token(Token = "0x4001B59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _title;

	[Token(Token = "0x4001B5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _expanded;

	[Token(Token = "0x4001B5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Action<bool> _onExpandedChanged;

	[Token(Token = "0x4001B5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000B0E")]
	public bool IsExpanded
	{
		[Token(Token = "0x60039CC")]
		[Address(RVA = "0x3F7B790", Offset = "0x3F7B790", VA = "0x3F7B790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60039CD")]
	[Address(RVA = "0x3F7B7A0", Offset = "0x3F7B7A0", VA = "0x3F7B7A0")]
	public void Setup(string title, ElementStyle style, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
	}

	[Token(Token = "0x60039CE")]
	[Address(RVA = "0x3F6BCA0", Offset = "0x3F6BCA0", VA = "0x3F6BCA0")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x60039CF")]
	[Address(RVA = "0x3F7B9F0", Offset = "0x3F7B9F0", VA = "0x3F7B9F0")]
	public void Toggle()
	{
	}

	[Token(Token = "0x60039D0")]
	[Address(RVA = "0x3F7BBE0", Offset = "0x3F7BBE0", VA = "0x3F7BBE0")]
	public void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x60039D1")]
	[Address(RVA = "0x3F7B930", Offset = "0x3F7B930", VA = "0x3F7B930")]
	private void UpdateHeader()
	{
	}

	[Token(Token = "0x60039D2")]
	[Address(RVA = "0x3F7BDE0", Offset = "0x3F7BDE0", VA = "0x3F7BDE0")]
	public CollapsibleSection()
	{
	}
}
