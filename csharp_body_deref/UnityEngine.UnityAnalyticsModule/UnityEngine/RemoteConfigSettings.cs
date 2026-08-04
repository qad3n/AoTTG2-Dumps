// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RemoteConfigSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000004")]
[ExcludeFromDocs]
[UnityEngine.Bindings.NativeHeader("UnityAnalyticsScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityAnalytics/RemoteSettings/RemoteSettings.h")]
public class RemoteConfigSettings
{
	[NonSerialized]
	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<bool> Updated;

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5104400", Offset = "0x5104400", VA = "0x5104400")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoteConfigSettingsUpdated(RemoteConfigSettings rcs, bool wasLastUpdatedFromServer)
	{
	}
}
