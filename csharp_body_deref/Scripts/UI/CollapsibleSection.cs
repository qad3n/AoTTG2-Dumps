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

[Token(Token = "0x20007D7")]
internal class CollapsibleSection : MonoBehaviour
{
	[Token(Token = "0x4002764")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _headerText;

	[Token(Token = "0x4002765")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _title;

	[Token(Token = "0x4002766")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _expanded;

	[Token(Token = "0x4002767")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Action<bool> _onExpandedChanged;

	[Token(Token = "0x4002768")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000D40")]
	public bool IsExpanded
	{
		[Token(Token = "0x6004BA7")]
		[Address(RVA = "0x5BE77E0", Offset = "0x5BE67E0", VA = "0x5BE77E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004BA8")]
	[Address(RVA = "0x5BE77F0", Offset = "0x5BE67F0", VA = "0x5BE77F0")]
	public void Setup(string title, ElementStyle style, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
	}

	[Token(Token = "0x6004BA9")]
	[Address(RVA = "0x5BE7A40", Offset = "0x5BE6A40", VA = "0x5BE7A40")]
	public void AddChild(GameObject child)
	{
	}

	[Token(Token = "0x6004BAA")]
	[Address(RVA = "0x5BE7B20", Offset = "0x5BE6B20", VA = "0x5BE7B20")]
	public void Toggle()
	{
	}

	[Token(Token = "0x6004BAB")]
	[Address(RVA = "0x5BE7CE0", Offset = "0x5BE6CE0", VA = "0x5BE7CE0")]
	public void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x6004BAC")]
	[Address(RVA = "0x5BE7980", Offset = "0x5BE6980", VA = "0x5BE7980")]
	private void UpdateHeader()
	{
	}

	[Token(Token = "0x6004BAD")]
	[Address(RVA = "0x5BE7EB0", Offset = "0x5BE6EB0", VA = "0x5BE7EB0")]
	public CollapsibleSection()
	{
	}
}
