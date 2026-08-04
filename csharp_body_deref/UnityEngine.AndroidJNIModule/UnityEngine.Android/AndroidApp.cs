// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Android.AndroidApp
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4D92E50", Offset = "0x4D92E50", VA = "0x4D92E50")]
		[UnityEngine.Bindings.ThreadSafe]
		get;
	}
}
