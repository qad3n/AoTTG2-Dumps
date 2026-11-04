// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VisualEffect
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3311400", Offset = "0x330FA00", VA = "0x183311400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3311000", Offset = "0x330F600", VA = "0x183311000")]
	public VFXEventAttribute CreateVFXEventAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x3311190", Offset = "0x330F790", VA = "0x183311190")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static VFXEventAttribute InvokeGetCachedEventAttributeForOutputEvent_Internal(VisualEffect source)
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3311360", Offset = "0x330F960", VA = "0x183311360")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOutputEventReceived_Internal(VisualEffect source, int eventNameId)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x33113C0", Offset = "0x330F9C0", VA = "0x1833113C0")]
	private static extern IntPtr get_visualEffectAsset_Injected(IntPtr _unity_self);
}
