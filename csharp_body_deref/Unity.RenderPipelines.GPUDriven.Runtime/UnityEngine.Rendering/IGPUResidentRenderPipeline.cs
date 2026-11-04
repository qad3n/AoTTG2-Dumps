// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IGPUResidentRenderPipeline
// Update status: NEW in this game update
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
	[Address(RVA = "0x2BC8760", Offset = "0x2BC6D60", VA = "0x182BC8760")]
	static void ReinitializeGPUResidentDrawer()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x2BC9D50", Offset = "0x2BC8350", VA = "0x182BC9D50", Slot = "3")]
	bool IsGPUResidentDrawerSupportedBySRP(bool logReason = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x2BC9D10", Offset = "0x2BC8310", VA = "0x182BC9D10", Slot = "4")]
	bool IsGPUResidentDrawerSupportedBySRP(out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x2BC9C80", Offset = "0x2BC8280", VA = "0x182BC9C80")]
	static bool IsGPUResidentDrawerSupportedByProjectConfiguration(bool logReason = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x2BC6490", Offset = "0x2BC4A90", VA = "0x182BC6490")]
	static bool IsGPUResidentDrawerEnabled()
	{
		return default(bool);
	}
}
