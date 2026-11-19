// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettingsQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000D1")]
public interface IDebugDisplaySettingsQuery
{
	[Token(Token = "0x170000AF")]
	bool AreAnySettingsActive
	{
		[Token(Token = "0x6000790")]
		get;
	}

	[Token(Token = "0x170000B0")]
	bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x64D8590", Offset = "0x64D7590", VA = "0x64D8590", Slot = "1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B1")]
	bool IsLightingActive
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x64D85A0", Offset = "0x64D75A0", VA = "0x64D85A0", Slot = "2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x64D85B0", Offset = "0x64D75B0", VA = "0x64D85B0", Slot = "3")]
	bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}
}
