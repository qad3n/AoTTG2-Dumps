// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VFXEventAttribute
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeType(Header = "Modules/VFX/Public/VFXEventAttribute.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class VFXEventAttribute : IDisposable
{
	[Token(Token = "0x2000004")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(VFXEventAttribute eventAttibute)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_Owner;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private VisualEffectAsset m_VfxAsset;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x3310460", Offset = "0x330EA60", VA = "0x183310460")]
	private VFXEventAttribute(IntPtr ptr, bool owner, VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x330FF50", Offset = "0x330E550", VA = "0x18330FF50")]
	internal static VFXEventAttribute CreateEventAttributeWrapper()
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x33103F0", Offset = "0x330E9F0", VA = "0x1833103F0")]
	internal void SetWrapValue(IntPtr ptrToEventAttribute)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3310110", Offset = "0x330E710", VA = "0x183310110")]
	internal static extern IntPtr Internal_Create();

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3310280", Offset = "0x330E880", VA = "0x183310280")]
	internal static VFXEventAttribute Internal_InstanciateVFXEventAttribute(VisualEffectAsset vfxAsset)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x33101D0", Offset = "0x330E7D0", VA = "0x1833101D0")]
	internal void Internal_InitFromAsset(VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3310380", Offset = "0x330E980", VA = "0x183310380")]
	private void Release()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3310050", Offset = "0x330E650", VA = "0x183310050", Slot = "1")]
	~VFXEventAttribute()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x330FFB0", Offset = "0x330E5B0", VA = "0x18330FFB0", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3310140", Offset = "0x330E740", VA = "0x183310140")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal static extern void Internal_Destroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3310180", Offset = "0x330E780", VA = "0x183310180")]
	private static extern void Internal_InitFromAsset_Injected(IntPtr _unity_self, IntPtr vfxAsset);
}
