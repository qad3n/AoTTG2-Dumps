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
		[Address(RVA = "0x4A7E910", Offset = "0x4A7E910", VA = "0x4A7E910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4A7E8A0", Offset = "0x4A7E8A0", VA = "0x4A7E8A0")]
	protected RuntimeAnimatorController()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4A7E9B0", Offset = "0x4A7E9B0", VA = "0x4A7E9B0")]
	private static extern AnimationClip[] get_animationClips_Injected(IntPtr _unity_self);
}
