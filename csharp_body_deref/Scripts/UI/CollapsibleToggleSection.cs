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

[Token(Token = "0x20007D8")]
internal class CollapsibleToggleSection : MonoBehaviour
{
	[Token(Token = "0x4002769")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _arrowText;

	[Token(Token = "0x400276A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Toggle _enableToggle;

	[Token(Token = "0x400276B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _title;

	[Token(Token = "0x400276C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _expanded;

	[Token(Token = "0x400276D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000D41")]
	public bool IsExpanded
	{
		[Token(Token = "0x6004BAE")]
		[Address(RVA = "0x5BE7F30", Offset = "0x5BE6F30", VA = "0x5BE7F30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D42")]
	public bool IsEnabled
	{
		[Token(Token = "0x6004BAF")]
		[Address(RVA = "0x5BE7F40", Offset = "0x5BE6F40", VA = "0x5BE7F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004BB0")]
	[Address(RVA = "0x5BE7FC0", Offset = "0x5BE6FC0", VA = "0x5BE7FC0")]
	public void Setup(Text arrowButtonText, Button arrowButton, Toggle enableToggle, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
	}

	[Token(Token = "0x6004BB1")]
	[Address(RVA = "0x5BE82C0", Offset = "0x5BE72C0", VA = "0x5BE82C0")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x6004BB2")]
	[Address(RVA = "0x5BE83A0", Offset = "0x5BE73A0", VA = "0x5BE83A0")]
	public void ToggleExpand()
	{
	}

	[Token(Token = "0x6004BB3")]
	[Address(RVA = "0x5BE8540", Offset = "0x5BE7540", VA = "0x5BE8540")]
	public void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6004BB4")]
	[Address(RVA = "0x5BE8200", Offset = "0x5BE7200", VA = "0x5BE8200")]
	private void UpdateArrow()
	{
	}

	[Token(Token = "0x6004BB5")]
	[Address(RVA = "0x5BE85C0", Offset = "0x5BE75C0", VA = "0x5BE85C0")]
	public CollapsibleToggleSection()
	{
	}
}
