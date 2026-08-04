// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ISupportInitializeNotification
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A3")]
public interface ISupportInitializeNotification : ISupportInitialize
{
	[Token(Token = "0x170003BA")]
	bool IsInitialized
	{
		[Token(Token = "0x60010A9")]
		get;
	}

	[Token(Token = "0x14000008")]
	event EventHandler Initialized;
}
