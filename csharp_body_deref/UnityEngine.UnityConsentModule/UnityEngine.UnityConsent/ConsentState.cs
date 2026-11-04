// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnityConsent.ConsentState
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UnityConsent;

[Token(Token = "0x2000002")]
public struct ConsentState
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public ConsentStatus AdsIntent;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x4")]
	public ConsentStatus AnalyticsIntent;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x2F7EE40", Offset = "0x2F7D440", VA = "0x182F7EE40")]
	public ConsentState()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x3308CB0", Offset = "0x33072B0", VA = "0x183308CB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
