// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RemoteSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("UnityAnalyticsScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityAnalytics/RemoteSettings/RemoteSettings.h")]
public static class RemoteSettings
{
	[Token(Token = "0x2000003")]
	public delegate void UpdatedEventHandler();

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static UpdatedEventHandler Updated;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action BeforeFetchFromServer;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool, bool, int> Completed;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x5104230", Offset = "0x5104230", VA = "0x5104230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5104280", Offset = "0x5104280", VA = "0x5104280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoteSettingsBeforeFetchFromServer()
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x51042D0", Offset = "0x51042D0", VA = "0x51042D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int response)
	{
	}
}
