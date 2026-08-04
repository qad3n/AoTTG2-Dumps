// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ISerializationCallbackReceiver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000194")]
[UnityEngine.Scripting.RequiredByNativeCode]
public interface ISerializationCallbackReceiver
{
	[Token(Token = "0x6000B5F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBeforeSerialize();

	[Token(Token = "0x6000B60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnAfterDeserialize();
}
