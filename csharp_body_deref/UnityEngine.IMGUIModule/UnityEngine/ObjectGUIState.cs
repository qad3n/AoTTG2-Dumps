using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000025")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIState.h")]
internal class ObjectGUIState : IDisposable
{
	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4B39AC0", Offset = "0x4B39AC0", VA = "0x4B39AC0")]
	public ObjectGUIState()
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4B39B30", Offset = "0x4B39B30", VA = "0x4B39B30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4B39C10", Offset = "0x4B39C10", VA = "0x4B39C10", Slot = "1")]
	~ObjectGUIState()
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4B39BC0", Offset = "0x4B39BC0", VA = "0x4B39BC0")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4B39B00", Offset = "0x4B39B00", VA = "0x4B39B00")]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4B39CD0", Offset = "0x4B39CD0", VA = "0x4B39CD0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
