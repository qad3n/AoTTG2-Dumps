// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Android.AndroidApplication
// Update status: unchanged since the previous dump
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
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidApplication.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("AndroidApplication", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
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
		[Address(RVA = "0x6896E90", Offset = "0x6895E90", VA = "0x6896E90")]
		[UnityEngine.Bindings.ThreadSafe]
		get;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x68A5DB0", Offset = "0x68A4DB0", VA = "0x68A5DB0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void AcquireMainThreadSynchronizationContext()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x68A5E60", Offset = "0x68A4E60", VA = "0x68A5E60")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void SetCurrentConfiguration(AndroidConfiguration config)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x68A5EB0", Offset = "0x68A4EB0", VA = "0x68A5EB0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static AndroidConfiguration GetCurrentConfiguration()
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x68A5EF0", Offset = "0x68A4EF0", VA = "0x68A5EF0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void DispatchConfigurationChanged(bool notifySubscribers)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x68A5F50", Offset = "0x68A4F50", VA = "0x68A5F50")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void SetCurrentInsets(AndroidInsets insets)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x68A5FA0", Offset = "0x68A4FA0", VA = "0x68A5FA0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static AndroidInsets GetCurrentInsets()
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x68A5FE0", Offset = "0x68A4FE0", VA = "0x68A5FE0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void DispatchInsetsChanged()
	{
	}
}
