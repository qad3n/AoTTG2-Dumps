// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.IEventProviderImpl
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.InputForUI;

[Token(Token = "0x2000022")]
internal interface IEventProviderImpl
{
	[Token(Token = "0x600007F")]
	void Initialize();

	[Token(Token = "0x6000080")]
	void Shutdown();

	[Token(Token = "0x6000081")]
	void Update();

	[Token(Token = "0x6000082")]
	void OnFocusChanged(bool focus);
}
