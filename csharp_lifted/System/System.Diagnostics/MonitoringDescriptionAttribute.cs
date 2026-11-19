// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.MonitoringDescriptionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000DB")]
[AttributeUsage(AttributeTargets.All)]
public class MonitoringDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x170000F5")]
	public override string Description
	{
		[Token(Token = "0x600051F")]
		[Address(RVA = "0x6207F30", Offset = "0x6206F30", VA = "0x6207F30", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x6207ED0", Offset = "0x6206ED0", VA = "0x6207ED0")]
	public MonitoringDescriptionAttribute(string description)
	{
	}
}
