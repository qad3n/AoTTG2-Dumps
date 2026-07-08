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
		[Address(RVA = "0x4B1F4E0", Offset = "0x4B1F4E0", VA = "0x4B1F4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000036")]
	public bool tripleClickSelectsLine
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4B1F4F0", Offset = "0x4B1F4F0", VA = "0x4B1F4F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public Color cursorColor
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4B2B650", Offset = "0x4B2B650", VA = "0x4B2B650")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000038")]
	public float cursorFlashSpeed
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4B2B660", Offset = "0x4B2B660", VA = "0x4B2B660")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000039")]
	public Color selectionColor
	{
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x4B2B6A0", Offset = "0x4B2B6A0", VA = "0x4B2B6A0")]
		get
		{
			return default(Color);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4B2B620", Offset = "0x4B2B620", VA = "0x4B2B620")]
	private static extern float Internal_GetCursorFlashSpeed();

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4B2B6B0", Offset = "0x4B2B6B0", VA = "0x4B2B6B0")]
	public GUISettings()
	{
	}
}
