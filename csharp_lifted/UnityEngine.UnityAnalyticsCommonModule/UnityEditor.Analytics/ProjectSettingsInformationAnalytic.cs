// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.ProjectSettingsInformationAnalytic
// Update status: unchanged since the previous dump
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
[Token(Token = "0x2000012")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class ProjectSettingsInformationAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000036")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int agent_types_count;

	[Token(Token = "0x4000037")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int areas_count;

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6D17CF0", Offset = "0x6D16CF0", VA = "0x6D17CF0")]
	public ProjectSettingsInformationAnalytic()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6D17D50", Offset = "0x6D16D50", VA = "0x6D17D50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static ProjectSettingsInformationAnalytic CreateProjectSettingsInformationAnalytic()
	{
		return null;
	}
}
