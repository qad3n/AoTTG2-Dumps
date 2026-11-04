// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.LicensingErrorAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Analytics;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEditor.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000E")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class LicensingErrorAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string licensingErrorType;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public string additionalData;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string errorMessage;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public string correlationId;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public string sessionId;

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3307010", Offset = "0x3305610", VA = "0x183307010")]
	public LicensingErrorAnalytic()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3306F80", Offset = "0x3305580", VA = "0x183306F80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static LicensingErrorAnalytic CreateLicensingErrorAnalytic()
	{
		return null;
	}
}
