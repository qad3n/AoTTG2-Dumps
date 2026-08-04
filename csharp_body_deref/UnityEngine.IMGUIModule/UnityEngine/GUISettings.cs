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
[Token(Token = "0x2000014")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUISkin.bindings.h")]
public sealed class GUISettings
{
	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private bool m_DoubleClickSelectsWord;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x11")]
	[SerializeField]
	private bool m_TripleClickSelectsLine;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private Color m_CursorColor;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float m_CursorFlashSpeed;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Color m_SelectionColor;

	[Token(Token = "0x17000035")]
	public bool doubleClickSelectsWord
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4E470A0", Offset = "0x4E470A0", VA = "0x4E470A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000036")]
	public bool tripleClickSelectsLine
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4E470B0", Offset = "0x4E470B0", VA = "0x4E470B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public Color cursorColor
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4E53210", Offset = "0x4E53210", VA = "0x4E53210")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000038")]
	public float cursorFlashSpeed
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4E53220", Offset = "0x4E53220", VA = "0x4E53220")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000039")]
	public Color selectionColor
	{
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x4E53260", Offset = "0x4E53260", VA = "0x4E53260")]
		get
		{
			return default(Color);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4E531E0", Offset = "0x4E531E0", VA = "0x4E531E0")]
	private static extern float Internal_GetCursorFlashSpeed();

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4E53270", Offset = "0x4E53270", VA = "0x4E53270")]
	public GUISettings()
	{
	}
}
