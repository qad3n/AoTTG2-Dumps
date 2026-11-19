// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnityConsent.EndUserConsent
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

namespace UnityEngine.UnityConsent;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityConsent/EndUserConsent.h")]
public static class EndUserConsent
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ConsentState> consentStateChanged;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x6D19470", Offset = "0x6D18470", VA = "0x6D19470")]
	[UnityEngine.Bindings.NativeMethod("GetConsentStateStatic")]
	public static ConsentState GetConsentState()
	{
		return default(ConsentState);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6D194E0", Offset = "0x6D184E0", VA = "0x6D194E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnConsentStateChanged()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6D194B0", Offset = "0x6D184B0", VA = "0x6D194B0")]
	private static extern void GetConsentState_Injected(out ConsentState ret);
}
