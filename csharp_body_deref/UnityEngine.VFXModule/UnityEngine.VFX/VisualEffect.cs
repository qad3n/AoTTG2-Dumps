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

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/ScriptBindings/VisualEffectBindings.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/VisualEffect.h")]
public class VisualEffect : Behaviour
{
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x18")]
	private VFXEventAttribute m_cachedEventAttribute;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x20")]
	public Action<VFXOutputEventArgs> outputEventReceived;

	[Token(Token = "0x17000001")]
	public VisualEffectAsset visualEffectAsset
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x510A2C0", Offset = "0x510A2C0", VA = "0x510A2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x510A390", Offset = "0x510A390", VA = "0x510A390")]
	public VFXEventAttribute CreateVFXEventAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x510A520", Offset = "0x510A520", VA = "0x510A520")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static VFXEventAttribute InvokeGetCachedEventAttributeForOutputEvent_Internal(VisualEffect source)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x510A580", Offset = "0x510A580", VA = "0x510A580")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOutputEventReceived_Internal(VisualEffect source, int eventNameId)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x510A360", Offset = "0x510A360", VA = "0x510A360")]
	private static extern VisualEffectAsset get_visualEffectAsset_Injected(IntPtr _unity_self);
}
