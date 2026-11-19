// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VisualEffect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x200000F")]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/ScriptBindings/VisualEffectBindings.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/VisualEffect.h")]
public class VisualEffect : Behaviour
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x18")]
	private VFXEventAttribute m_cachedEventAttribute;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x20")]
	public Action<VFXOutputEventArgs> outputEventReceived;

	[Token(Token = "0x17000001")]
	public VisualEffectAsset visualEffectAsset
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x6D20C70", Offset = "0x6D1FC70", VA = "0x6D20C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6D20D40", Offset = "0x6D1FD40", VA = "0x6D20D40")]
	public VFXEventAttribute CreateVFXEventAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6D20DC0", Offset = "0x6D1FDC0", VA = "0x6D20DC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static VFXEventAttribute InvokeGetCachedEventAttributeForOutputEvent_Internal(VisualEffect source)
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6D20E80", Offset = "0x6D1FE80", VA = "0x6D20E80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOutputEventReceived_Internal(VisualEffect source, int eventNameId)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6D20D10", Offset = "0x6D1FD10", VA = "0x6D20D10")]
	private static extern IntPtr get_visualEffectAsset_Injected(IntPtr _unity_self);
}
