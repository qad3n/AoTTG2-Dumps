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

[Token(Token = "0x2000136")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Input/Cursor.bindings.h")]
public class Cursor
{
	[Token(Token = "0x170001BE")]
	public static extern bool visible
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x68FB220", Offset = "0x68FA220", VA = "0x68FB220")]
		set;
	}

	[Token(Token = "0x170001BF")]
	public static extern CursorLockMode lockState
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x68FB250", Offset = "0x68FA250", VA = "0x68FB250")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x68FB280", Offset = "0x68FA280", VA = "0x68FB280")]
		set;
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x68FB140", Offset = "0x68FA140", VA = "0x68FB140")]
	public static void SetCursor(Texture2D texture, Vector2 hotspot, CursorMode cursorMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x68FB1E0", Offset = "0x68FA1E0", VA = "0x68FB1E0")]
	private static extern void SetCursor_Injected(IntPtr texture, [In] ref Vector2 hotspot, CursorMode cursorMode);
}
