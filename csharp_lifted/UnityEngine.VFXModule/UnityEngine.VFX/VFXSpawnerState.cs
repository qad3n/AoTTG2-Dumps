// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VFXSpawnerState
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
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000B")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(Header = "Modules/VFX/Public/VFXSpawnerState.h")]
public sealed class VFXSpawnerState : IDisposable
{
	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_Owner;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private VFXEventAttribute m_WrapEventAttribute;

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x6D20780", Offset = "0x6D1F780", VA = "0x6D20780")]
	internal VFXSpawnerState(IntPtr ptr, bool owner)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6D207B0", Offset = "0x6D1F7B0", VA = "0x6D207B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VFXSpawnerState CreateSpawnerStateWrapper()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6D20810", Offset = "0x6D1F810", VA = "0x6D20810")]
	private void PrepareWrapper()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6D20900", Offset = "0x6D1F900", VA = "0x6D20900")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void SetWrapValue(IntPtr ptrToSpawnerState, IntPtr ptrToEventAttribute)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6D209C0", Offset = "0x6D1F9C0", VA = "0x6D209C0")]
	private void Release()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6D20A50", Offset = "0x6D1FA50", VA = "0x6D20A50", Slot = "1")]
	~VFXSpawnerState()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6D20B30", Offset = "0x6D1FB30", VA = "0x6D20B30", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6D20A20", Offset = "0x6D1FA20", VA = "0x6D20A20")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
