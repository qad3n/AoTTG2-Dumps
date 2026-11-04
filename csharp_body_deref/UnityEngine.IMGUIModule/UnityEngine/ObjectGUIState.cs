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

[Token(Token = "0x2000028")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIState.h")]
internal class ObjectGUIState : IDisposable
{
	[Token(Token = "0x2000029")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(ObjectGUIState objectGUIState)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x2FA9E80", Offset = "0x2FA8480", VA = "0x182FA9E80")]
	public ObjectGUIState()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x2FA9CE0", Offset = "0x2FA82E0", VA = "0x182FA9CE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x2FA9D70", Offset = "0x2FA8370", VA = "0x182FA9D70", Slot = "1")]
	~ObjectGUIState()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2FA9C90", Offset = "0x2FA8290", VA = "0x182FA9C90")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x2FA9E10", Offset = "0x2FA8410", VA = "0x182FA9E10")]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2FA9E40", Offset = "0x2FA8440", VA = "0x182FA9E40")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
