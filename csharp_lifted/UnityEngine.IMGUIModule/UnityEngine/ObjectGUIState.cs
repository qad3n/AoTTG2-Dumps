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
		[Address(RVA = "0x69A30D0", Offset = "0x69A20D0", VA = "0x69A30D0")]
		public static IntPtr ConvertToNative(ObjectGUIState objectGUIState)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x69A2E90", Offset = "0x69A1E90", VA = "0x69A2E90")]
	public ObjectGUIState()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x69A2F00", Offset = "0x69A1F00", VA = "0x69A2F00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x69A2FE0", Offset = "0x69A1FE0", VA = "0x69A2FE0", Slot = "1")]
	~ObjectGUIState()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x69A2F90", Offset = "0x69A1F90", VA = "0x69A2F90")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x69A2ED0", Offset = "0x69A1ED0", VA = "0x69A2ED0")]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x69A30A0", Offset = "0x69A20A0", VA = "0x69A30A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
