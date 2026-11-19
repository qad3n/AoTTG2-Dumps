// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IGPUResidentRenderPipeline
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000036")]
public interface IGPUResidentRenderPipeline
{
	[Token(Token = "0x1700001F")]
	GPUResidentDrawerSettings gpuResidentDrawerSettings
	{
		[Token(Token = "0x600011F")]
		get;
	}

	[Token(Token = "0x17000020")]
	GPUResidentDrawerMode gpuResidentDrawerMode
	{
		[Token(Token = "0x6000120")]
		get;
		[Token(Token = "0x6000121")]
		set;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x65C2030", Offset = "0x65C1030", VA = "0x65C2030")]
	static void ReinitializeGPUResidentDrawer()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x65C2060", Offset = "0x65C1060", VA = "0x65C2060", Slot = "3")]
	bool IsGPUResidentDrawerSupportedBySRP(bool logReason = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x65C21B0", Offset = "0x65C11B0", VA = "0x65C21B0", Slot = "4")]
	bool IsGPUResidentDrawerSupportedBySRP(out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x65C21F0", Offset = "0x65C11F0", VA = "0x65C21F0")]
	static bool IsGPUResidentDrawerSupportedByProjectConfiguration(bool logReason = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x65C2280", Offset = "0x65C1280", VA = "0x65C2280")]
	static bool IsGPUResidentDrawerEnabled()
	{
		return default(bool);
	}
}
