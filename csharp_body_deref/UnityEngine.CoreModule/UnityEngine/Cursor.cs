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

[Token(Token = "0x2000110")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Input/Cursor.bindings.h")]
public class Cursor
{
	[Token(Token = "0x17000160")]
	public static extern bool visible
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x4DE42C0", Offset = "0x4DE42C0", VA = "0x4DE42C0")]
		set;
	}

	[Token(Token = "0x17000161")]
	public static extern CursorLockMode lockState
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x4DE42F0", Offset = "0x4DE42F0", VA = "0x4DE42F0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x4DE4320", Offset = "0x4DE4320", VA = "0x4DE4320")]
		set;
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x4DE41C0", Offset = "0x4DE41C0", VA = "0x4DE41C0")]
	public static void SetCursor(Texture2D texture, Vector2 hotspot, CursorMode cursorMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000753")]
	[Address(RVA = "0x4DE4280", Offset = "0x4DE4280", VA = "0x4DE4280")]
	private static extern void SetCursor_Injected(IntPtr texture, [In] ref Vector2 hotspot, CursorMode cursorMode);
}
