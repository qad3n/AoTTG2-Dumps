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

[Token(Token = "0x200011A")]
[AttributeUsage(AttributeTargets.All)]
public class MonitoringDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x17000124")]
	public override string Description
	{
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x2863D80", Offset = "0x2862380", VA = "0x182863D80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x2863D20", Offset = "0x2862320", VA = "0x182863D20")]
	public MonitoringDescriptionAttribute(string description)
	{
	}
}
