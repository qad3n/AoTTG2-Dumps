// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettingsQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FB")]
public interface IDebugDisplaySettingsQuery
{
	[Token(Token = "0x170000C6")]
	bool AreAnySettingsActive
	{
		[Token(Token = "0x600082F")]
		get;
	}

	[Token(Token = "0x170000C7")]
	bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x4BAD3D0", Offset = "0x4BAD3D0", VA = "0x4BAD3D0", Slot = "1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	bool IsLightingActive
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x4BAD3E0", Offset = "0x4BAD3E0", VA = "0x4BAD3E0", Slot = "2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x4BAD3F0", Offset = "0x4BAD3F0", VA = "0x4BAD3F0", Slot = "3")]
	bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}
}
