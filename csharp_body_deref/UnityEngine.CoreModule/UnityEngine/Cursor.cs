// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Cursor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000135")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Input/Cursor.bindings.h")]
public class Cursor
{
	[Token(Token = "0x170001B9")]
	public static extern bool visible
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x2F02B10", Offset = "0x2F01110", VA = "0x182F02B10")]
		set;
	}

	[Token(Token = "0x170001BA")]
	public static extern CursorLockMode lockState
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x2F02AA0", Offset = "0x2F010A0", VA = "0x182F02AA0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x2F02AD0", Offset = "0x2F010D0", VA = "0x182F02AD0")]
		set;
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x2F02A10", Offset = "0x2F01010", VA = "0x182F02A10")]
	public static void SetCursor(Texture2D texture, Vector2 hotspot, CursorMode cursorMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x2F029B0", Offset = "0x2F00FB0", VA = "0x182F029B0")]
	private static extern void SetCursor_Injected(IntPtr texture, [In] ref Vector2 hotspot, CursorMode cursorMode);
}
