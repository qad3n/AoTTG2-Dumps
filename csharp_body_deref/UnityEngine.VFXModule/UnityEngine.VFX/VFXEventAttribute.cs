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
	[Address(RVA = "0x4DE18B0", Offset = "0x4DE18B0", VA = "0x4DE18B0")]
	private VFXEventAttribute(IntPtr ptr, bool owner, VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DE18F0", Offset = "0x4DE18F0", VA = "0x4DE18F0")]
	internal static VFXEventAttribute CreateEventAttributeWrapper()
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4DE1950", Offset = "0x4DE1950", VA = "0x4DE1950")]
	internal void SetWrapValue(IntPtr ptrToEventAttribute)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4DE19B0", Offset = "0x4DE19B0", VA = "0x4DE19B0")]
	internal static extern IntPtr Internal_Create();

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4DE19E0", Offset = "0x4DE19E0", VA = "0x4DE19E0")]
	internal static VFXEventAttribute Internal_InstanciateVFXEventAttribute(VisualEffectAsset vfxAsset)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4DE1B20", Offset = "0x4DE1B20", VA = "0x4DE1B20")]
	internal void Internal_InitFromAsset(VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DE1C10", Offset = "0x4DE1C10", VA = "0x4DE1C10")]
	private void Release()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4DE1CA0", Offset = "0x4DE1CA0", VA = "0x4DE1CA0", Slot = "1")]
	~VFXEventAttribute()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4DE1D70", Offset = "0x4DE1D70", VA = "0x4DE1D70", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4DE1C70", Offset = "0x4DE1C70", VA = "0x4DE1C70")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal static extern void Internal_Destroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4DE1BD0", Offset = "0x4DE1BD0", VA = "0x4DE1BD0")]
	private static extern void Internal_InitFromAsset_Injected(VFXEventAttribute _unity_self, IntPtr vfxAsset);
}
