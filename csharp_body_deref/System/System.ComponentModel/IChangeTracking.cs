// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IChangeTracking
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B0")]
public interface IChangeTracking
{
	[Token(Token = "0x17000274")]
	bool IsChanged
	{
		[Token(Token = "0x6000B50")]
		get;
	}

	[Token(Token = "0x6000B51")]
	void AcceptChanges();
}
