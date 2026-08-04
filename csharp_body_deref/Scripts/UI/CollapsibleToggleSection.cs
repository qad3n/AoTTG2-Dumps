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

[Token(Token = "0x20005DE")]
internal class CollapsibleToggleSection : MonoBehaviour
{
	[Token(Token = "0x4001C70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _arrowText;

	[Token(Token = "0x4001C71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Toggle _enableToggle;

	[Token(Token = "0x4001C72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _title;

	[Token(Token = "0x4001C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _expanded;

	[Token(Token = "0x4001C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000B79")]
	public bool IsExpanded
	{
		[Token(Token = "0x6003BE2")]
		[Address(RVA = "0x4289870", Offset = "0x4289870", VA = "0x4289870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B7A")]
	public bool IsEnabled
	{
		[Token(Token = "0x6003BE3")]
		[Address(RVA = "0x4289880", Offset = "0x4289880", VA = "0x4289880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003BE4")]
	[Address(RVA = "0x4289900", Offset = "0x4289900", VA = "0x4289900")]
	public void Setup(Text arrowButtonText, Button arrowButton, Toggle enableToggle, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
	}

	[Token(Token = "0x6003BE5")]
	[Address(RVA = "0x4289C00", Offset = "0x4289C00", VA = "0x4289C00")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x6003BE6")]
	[Address(RVA = "0x4289CF0", Offset = "0x4289CF0", VA = "0x4289CF0")]
	public void ToggleExpand()
	{
	}

	[Token(Token = "0x6003BE7")]
	[Address(RVA = "0x4289EB0", Offset = "0x4289EB0", VA = "0x4289EB0")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6003BE8")]
	[Address(RVA = "0x4289B40", Offset = "0x4289B40", VA = "0x4289B40")]
	private void UpdateArrow()
	{
	}

	[Token(Token = "0x6003BE9")]
	[Address(RVA = "0x4289F30", Offset = "0x4289F30", VA = "0x4289F30")]
	public CollapsibleToggleSection()
	{
	}
}
