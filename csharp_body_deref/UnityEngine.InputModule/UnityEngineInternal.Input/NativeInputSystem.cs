// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngineInternal.Input.NativeInputSystem
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

namespace UnityEngineInternal.Input;

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.NativeHeader("Modules/Input/Private/InputModuleBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Input/Private/InputInternal.h")]
internal class NativeInputSystem
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	public static NativeUpdateCallback onUpdate;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x8")]
	public static Action<NativeInputUpdateType> onBeforeUpdate;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x10")]
	public static Func<NativeInputUpdateType, bool> onShouldRunUpdate;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x18")]
	private static Action<int, string> s_OnDeviceDiscoveredCallback;

	[Token(Token = "0x17000001")]
	internal static extern bool hasDeviceDiscoveredCallback
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4E71680", Offset = "0x4E71680", VA = "0x4E71680")]
		set;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4E71650", Offset = "0x4E71650", VA = "0x4E71650")]
	static NativeInputSystem()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4E716B0", Offset = "0x4E716B0", VA = "0x4E716B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyBeforeUpdate(NativeInputUpdateType updateType)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4E71740", Offset = "0x4E71740", VA = "0x4E71740")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyUpdate(NativeInputUpdateType updateType, IntPtr eventBuffer)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4E717F0", Offset = "0x4E717F0", VA = "0x4E717F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyDeviceDiscovered(int deviceId, string deviceDescriptor)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4E71880", Offset = "0x4E71880", VA = "0x4E71880")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ShouldRunUpdate(NativeInputUpdateType updateType, out bool retval)
	{
	}
}
