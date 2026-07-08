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
	[Address(RVA = "0x4DE1EE0", Offset = "0x4DE1EE0", VA = "0x4DE1EE0")]
	internal VFXSpawnerState(IntPtr ptr, bool owner)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4DE1F10", Offset = "0x4DE1F10", VA = "0x4DE1F10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VFXSpawnerState CreateSpawnerStateWrapper()
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4DE1F70", Offset = "0x4DE1F70", VA = "0x4DE1F70")]
	private void PrepareWrapper()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4DE2060", Offset = "0x4DE2060", VA = "0x4DE2060")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void SetWrapValue(IntPtr ptrToSpawnerState, IntPtr ptrToEventAttribute)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4DE2130", Offset = "0x4DE2130", VA = "0x4DE2130")]
	private void Release()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4DE21C0", Offset = "0x4DE21C0", VA = "0x4DE21C0", Slot = "1")]
	~VFXSpawnerState()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4DE2290", Offset = "0x4DE2290", VA = "0x4DE2290", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4DE2190", Offset = "0x4DE2190", VA = "0x4DE2190")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);
}
