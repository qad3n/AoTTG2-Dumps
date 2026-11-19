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
[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeType(Header = "Modules/VFX/Public/VFXEventAttribute.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class VFXEventAttribute : IDisposable
{
	[Token(Token = "0x2000004")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x6D201D0", Offset = "0x6D1F1D0", VA = "0x6D201D0")]
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
	[Address(RVA = "0x6D1FC60", Offset = "0x6D1EC60", VA = "0x6D1FC60")]
	private VFXEventAttribute(IntPtr ptr, bool owner, VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x6D1FCA0", Offset = "0x6D1ECA0", VA = "0x6D1FCA0")]
	internal static VFXEventAttribute CreateEventAttributeWrapper()
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x6D1FD00", Offset = "0x6D1ED00", VA = "0x6D1FD00")]
	internal void SetWrapValue(IntPtr ptrToEventAttribute)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6D1FD60", Offset = "0x6D1ED60", VA = "0x6D1FD60")]
	internal static extern IntPtr Internal_Create();

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6D1FD90", Offset = "0x6D1ED90", VA = "0x6D1FD90")]
	internal static VFXEventAttribute Internal_InstanciateVFXEventAttribute(VisualEffectAsset vfxAsset)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6D1FEC0", Offset = "0x6D1EEC0", VA = "0x6D1FEC0")]
	internal void Internal_InitFromAsset(VisualEffectAsset vfxAsset)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x6D1FFC0", Offset = "0x6D1EFC0", VA = "0x6D1FFC0")]
	private void Release()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6D20050", Offset = "0x6D1F050", VA = "0x6D20050", Slot = "1")]
	~VFXEventAttribute()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6D20130", Offset = "0x6D1F130", VA = "0x6D20130", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x6D20020", Offset = "0x6D1F020", VA = "0x6D20020")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal static extern void Internal_Destroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6D1FF80", Offset = "0x6D1EF80", VA = "0x6D1FF80")]
	private static extern void Internal_InitFromAsset_Injected(IntPtr _unity_self, IntPtr vfxAsset);
}
