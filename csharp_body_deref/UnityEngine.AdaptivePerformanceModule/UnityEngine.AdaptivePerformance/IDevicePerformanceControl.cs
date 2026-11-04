// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.IDevicePerformanceControl
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000015")]
public interface IDevicePerformanceControl
{
	[Token(Token = "0x17000034")]
	int MaxCpuPerformanceLevel
	{
		[Token(Token = "0x60000AD")]
		get;
	}

	[Token(Token = "0x17000035")]
	int MaxGpuPerformanceLevel
	{
		[Token(Token = "0x60000AE")]
		get;
	}

	[Token(Token = "0x17000036")]
	int CpuLevel
	{
		[Token(Token = "0x60000AF")]
		get;
		[Token(Token = "0x60000B0")]
		set;
	}

	[Token(Token = "0x17000037")]
	int GpuLevel
	{
		[Token(Token = "0x60000B1")]
		get;
		[Token(Token = "0x60000B2")]
		set;
	}
}
