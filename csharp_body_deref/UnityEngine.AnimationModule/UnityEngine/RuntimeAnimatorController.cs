// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RuntimeAnimatorController
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

namespace UnityEngine;

[Token(Token = "0x200001C")]
[ExcludeFromObjectFactory]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/RuntimeAnimatorController.h")]
public class RuntimeAnimatorController : Object
{
	[Token(Token = "0x1700001A")]
	public AnimationClip[] animationClips
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x4DA6130", Offset = "0x4DA6130", VA = "0x4DA6130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4DA60C0", Offset = "0x4DA60C0", VA = "0x4DA60C0")]
	protected RuntimeAnimatorController()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4DA61D0", Offset = "0x4DA61D0", VA = "0x4DA61D0")]
	private static extern AnimationClip[] get_animationClips_Injected(IntPtr _unity_self);
}
