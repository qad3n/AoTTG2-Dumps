// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VFXEventAttribute
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
[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeType(Header = "Modules/VFX/Public/VFXEventAttribute.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class VFXEventAttribute : IDisposable
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_Owner;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private VisualEffectAsset m_VfxAsset;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x51096C0", Offset = "0x51096C0", VA = "0x51096C0")]
	private VFXEventAttribute(IntPtr ptr, bool owner, VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5109700", Offset = "0x5109700", VA = "0x5109700")]
	internal static VFXEventAttribute CreateEventAttributeWrapper()
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x5109760", Offset = "0x5109760", VA = "0x5109760")]
	internal void SetWrapValue(IntPtr ptrToEventAttribute)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x51097C0", Offset = "0x51097C0", VA = "0x51097C0")]
	internal static extern IntPtr Internal_Create();

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x51097F0", Offset = "0x51097F0", VA = "0x51097F0")]
	internal static VFXEventAttribute Internal_InstanciateVFXEventAttribute(VisualEffectAsset vfxAsset)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5109930", Offset = "0x5109930", VA = "0x5109930")]
	internal void Internal_InitFromAsset(VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5109A20", Offset = "0x5109A20", VA = "0x5109A20")]
	private void Release()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x5109AB0", Offset = "0x5109AB0", VA = "0x5109AB0", Slot = "1")]
	~VFXEventAttribute()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x5109B80", Offset = "0x5109B80", VA = "0x5109B80", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x5109A80", Offset = "0x5109A80", VA = "0x5109A80")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal static extern void Internal_Destroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x51099E0", Offset = "0x51099E0", VA = "0x51099E0")]
	private static extern void Internal_InitFromAsset_Injected(VFXEventAttribute _unity_self, IntPtr vfxAsset);
}
