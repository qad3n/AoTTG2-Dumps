// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.LicensingInitAnalytic
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
[Token(Token = "0x200000F")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class LicensingInitAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string licensingProtocolVersion;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public string licensingClientVersion;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string channelType;

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public double initTime;

	[Token(Token = "0x400002F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool isLegacy;

	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public string sessionId;

	[Token(Token = "0x4000031")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string correlationId;

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3307110", Offset = "0x3305710", VA = "0x183307110")]
	public LicensingInitAnalytic()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3307080", Offset = "0x3305680", VA = "0x183307080")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static LicensingInitAnalytic CreateLicensingInitAnalytic()
	{
		return null;
	}
}
