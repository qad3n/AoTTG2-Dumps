// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ObjectGUIState
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

[Token(Token = "0x2000025")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIState.h")]
internal class ObjectGUIState : IDisposable
{
	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4E61680", Offset = "0x4E61680", VA = "0x4E61680")]
	public ObjectGUIState()
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4E616F0", Offset = "0x4E616F0", VA = "0x4E616F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4E617D0", Offset = "0x4E617D0", VA = "0x4E617D0", Slot = "1")]
	~ObjectGUIState()
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4E61780", Offset = "0x4E61780", VA = "0x4E61780")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4E616C0", Offset = "0x4E616C0", VA = "0x4E616C0")]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4E61890", Offset = "0x4E61890", VA = "0x4E61890")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
