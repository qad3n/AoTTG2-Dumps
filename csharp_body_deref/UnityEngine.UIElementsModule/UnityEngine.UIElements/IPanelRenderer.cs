// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IPanelRenderer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002DC")]
internal interface IPanelRenderer
{
	[Token(Token = "0x170003EF")]
	bool forceGammaRendering
	{
		[Token(Token = "0x6001355")]
		get;
		[Token(Token = "0x6001356")]
		set;
	}

	[Token(Token = "0x170003F0")]
	uint vertexBudget
	{
		[Token(Token = "0x6001357")]
		get;
		[Token(Token = "0x6001358")]
		set;
	}

	[Token(Token = "0x170003F1")]
	TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x6001359")]
		set;
	}

	[Token(Token = "0x600135A")]
	void Reset();

	[Token(Token = "0x600135B")]
	void Render();
}
