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

[Token(Token = "0x20005DD")]
internal class CollapsibleSection : MonoBehaviour
{
	[Token(Token = "0x4001C6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _headerText;

	[Token(Token = "0x4001C6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _title;

	[Token(Token = "0x4001C6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _expanded;

	[Token(Token = "0x4001C6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Action<bool> _onExpandedChanged;

	[Token(Token = "0x4001C6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000B78")]
	public bool IsExpanded
	{
		[Token(Token = "0x6003BDB")]
		[Address(RVA = "0x42891A0", Offset = "0x42891A0", VA = "0x42891A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003BDC")]
	[Address(RVA = "0x42891B0", Offset = "0x42891B0", VA = "0x42891B0")]
	public void Setup(string title, ElementStyle style, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
	}

	[Token(Token = "0x6003BDD")]
	[Address(RVA = "0x42796B0", Offset = "0x42796B0", VA = "0x42796B0")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x6003BDE")]
	[Address(RVA = "0x4289400", Offset = "0x4289400", VA = "0x4289400")]
	public void Toggle()
	{
	}

	[Token(Token = "0x6003BDF")]
	[Address(RVA = "0x42895F0", Offset = "0x42895F0", VA = "0x42895F0")]
	public void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x6003BE0")]
	[Address(RVA = "0x4289340", Offset = "0x4289340", VA = "0x4289340")]
	private void UpdateHeader()
	{
	}

	[Token(Token = "0x6003BE1")]
	[Address(RVA = "0x42897F0", Offset = "0x42897F0", VA = "0x42897F0")]
	public CollapsibleSection()
	{
	}
}
