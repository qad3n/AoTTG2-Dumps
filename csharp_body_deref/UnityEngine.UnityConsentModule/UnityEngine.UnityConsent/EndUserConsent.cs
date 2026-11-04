// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnityConsent.EndUserConsent
// Update status: NEW in this game update
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
	[Address(RVA = "0x3308F00", Offset = "0x3307500", VA = "0x183308F00")]
	[UnityEngine.Bindings.NativeMethod("GetConsentStateStatic")]
	public static ConsentState GetConsentState()
	{
		return default(ConsentState);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3308F40", Offset = "0x3307540", VA = "0x183308F40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnConsentStateChanged()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3308EC0", Offset = "0x33074C0", VA = "0x183308EC0")]
	private static extern void GetConsentState_Injected(out ConsentState ret);
}
