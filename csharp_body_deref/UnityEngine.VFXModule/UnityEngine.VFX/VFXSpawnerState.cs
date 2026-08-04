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
[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeType(Header = "Modules/VFX/Public/VFXSpawnerState.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class VFXSpawnerState : IDisposable
{
	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_Owner;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private VFXEventAttribute m_WrapEventAttribute;

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5109CF0", Offset = "0x5109CF0", VA = "0x5109CF0")]
	internal VFXSpawnerState(IntPtr ptr, bool owner)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5109D20", Offset = "0x5109D20", VA = "0x5109D20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VFXSpawnerState CreateSpawnerStateWrapper()
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5109D80", Offset = "0x5109D80", VA = "0x5109D80")]
	private void PrepareWrapper()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5109E70", Offset = "0x5109E70", VA = "0x5109E70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void SetWrapValue(IntPtr ptrToSpawnerState, IntPtr ptrToEventAttribute)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5109F40", Offset = "0x5109F40", VA = "0x5109F40")]
	private void Release()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5109FD0", Offset = "0x5109FD0", VA = "0x5109FD0", Slot = "1")]
	~VFXSpawnerState()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x510A0A0", Offset = "0x510A0A0", VA = "0x510A0A0", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5109FA0", Offset = "0x5109FA0", VA = "0x5109FA0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
