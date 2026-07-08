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
		[Address(RVA = "0x4B49D50", Offset = "0x4B49D50", VA = "0x4B49D50")]
		set;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4B49D20", Offset = "0x4B49D20", VA = "0x4B49D20")]
	static NativeInputSystem()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4B49D80", Offset = "0x4B49D80", VA = "0x4B49D80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyBeforeUpdate(NativeInputUpdateType updateType)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4B49E10", Offset = "0x4B49E10", VA = "0x4B49E10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyUpdate(NativeInputUpdateType updateType, IntPtr eventBuffer)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4B49EC0", Offset = "0x4B49EC0", VA = "0x4B49EC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyDeviceDiscovered(int deviceId, string deviceDescriptor)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B49F50", Offset = "0x4B49F50", VA = "0x4B49F50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ShouldRunUpdate(NativeInputUpdateType updateType, out bool retval)
	{
	}
}
