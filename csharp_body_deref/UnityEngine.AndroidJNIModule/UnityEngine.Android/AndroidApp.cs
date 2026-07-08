using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Android;

[Token(Token = "0x200000F")]
[UnityEngine.Bindings.StaticAccessor("AndroidApp", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidApp.bindings.h")]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
internal static class AndroidApp
{
	[Token(Token = "0x17000002")]
	public static extern IntPtr UnityPlayerRaw
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4A6B630", Offset = "0x4A6B630", VA = "0x4A6B630")]
		[UnityEngine.Bindings.ThreadSafe]
		get;
	}
}
