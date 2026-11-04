// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Android.AndroidApplication
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Android;

[Token(Token = "0x2000010")]
[UnityEngine.Bindings.StaticAccessor("AndroidApplication", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidApplication.bindings.h")]
public static class AndroidApplication
{
	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x0")]
	private static SynchronizationContext m_MainThreadSynchronizationContext;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x8")]
	private static AndroidConfiguration m_CurrentConfiguration;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x10")]
	private static AndroidInsets m_CurrentAndroidInsets;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<AndroidConfiguration> onConfigurationChanged;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<AndroidInsets> onInsetsChanged;

	[Token(Token = "0x17000002")]
	internal static extern IntPtr UnityPlayerRaw
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x2E99E80", Offset = "0x2E98480", VA = "0x182E99E80")]
		[UnityEngine.Bindings.ThreadSafe]
		get;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x2E99BD0", Offset = "0x2E981D0", VA = "0x182E99BD0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void AcquireMainThreadSynchronizationContext()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x2E99DC0", Offset = "0x2E983C0", VA = "0x182E99DC0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void SetCurrentConfiguration(AndroidConfiguration config)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x2E99D40", Offset = "0x2E98340", VA = "0x182E99D40")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static AndroidConfiguration GetCurrentConfiguration()
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x2E99C90", Offset = "0x2E98290", VA = "0x182E99C90")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void DispatchConfigurationChanged(bool notifySubscribers)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x2E99E20", Offset = "0x2E98420", VA = "0x182E99E20")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void SetCurrentInsets(AndroidInsets insets)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2E99D80", Offset = "0x2E98380", VA = "0x182E99D80")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static AndroidInsets GetCurrentInsets()
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2E99CF0", Offset = "0x2E982F0", VA = "0x182E99CF0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void DispatchInsetsChanged()
	{
	}
}
