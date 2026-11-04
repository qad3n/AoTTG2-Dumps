// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUISettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000015")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUISkin.bindings.h")]
public sealed class GUISettings
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private bool m_DoubleClickSelectsWord;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x11")]
	[SerializeField]
	private bool m_TripleClickSelectsLine;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private Color m_CursorColor;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float m_CursorFlashSpeed;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x17000038")]
	public bool doubleClickSelectsWord
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x1CC78D0", Offset = "0x1CC5ED0", VA = "0x181CC78D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public bool tripleClickSelectsLine
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x2F8D100", Offset = "0x2F8B700", VA = "0x182F8D100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public Color cursorColor
	{
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x1536EB0", Offset = "0x15354B0", VA = "0x181536EB0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700003B")]
	public float cursorFlashSpeed
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x2F8D0A0", Offset = "0x2F8B6A0", VA = "0x182F8D0A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700003C")]
	public Color selectionColor
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x2F8D0F0", Offset = "0x2F8B6F0", VA = "0x182F8D0F0")]
		get
		{
			return default(Color);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2F8D020", Offset = "0x2F8B620", VA = "0x182F8D020")]
	private static extern float Internal_GetCursorFlashSpeed();

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2F8D050", Offset = "0x2F8B650", VA = "0x182F8D050")]
	public GUISettings()
	{
	}
}
