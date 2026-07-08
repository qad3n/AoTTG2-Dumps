using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200010D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Input/Cursor.bindings.h")]
public class Cursor
{
	[Token(Token = "0x1700015F")]
	public static extern bool visible
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x4ABC990", Offset = "0x4ABC990", VA = "0x4ABC990")]
		set;
	}

	[Token(Token = "0x17000160")]
	public static extern CursorLockMode lockState
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x4ABC9C0", Offset = "0x4ABC9C0", VA = "0x4ABC9C0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x4ABC9F0", Offset = "0x4ABC9F0", VA = "0x4ABC9F0")]
		set;
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x4ABC890", Offset = "0x4ABC890", VA = "0x4ABC890")]
	public static void SetCursor(Texture2D texture, Vector2 hotspot, CursorMode cursorMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000751")]
	[Address(RVA = "0x4ABC950", Offset = "0x4ABC950", VA = "0x4ABC950")]
	private static extern void SetCursor_Injected(IntPtr texture, [In] ref Vector2 hotspot, CursorMode cursorMode);
}
