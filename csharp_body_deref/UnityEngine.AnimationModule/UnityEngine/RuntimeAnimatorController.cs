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

[Token(Token = "0x200001D")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/RuntimeAnimatorController.h")]
[ExcludeFromObjectFactory]
[UnityEngine.Scripting.UsedByNativeCode]
public class RuntimeAnimatorController : Object
{
	[Token(Token = "0x1700001A")]
	public AnimationClip[] animationClips
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x68AC250", Offset = "0x68AB250", VA = "0x68AC250")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x68AC2D0", Offset = "0x68AB2D0", VA = "0x68AC2D0")]
	private static extern AnimationClip[] get_animationClips_Injected(IntPtr _unity_self);
}
