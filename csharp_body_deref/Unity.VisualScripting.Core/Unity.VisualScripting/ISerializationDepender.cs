// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ISerializationDepender
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000184")]
public interface ISerializationDepender : ISerializationCallbackReceiver
{
	[Token(Token = "0x170001AC")]
	IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x6000F6E")]
		get;
	}

	[Token(Token = "0x6000F6F")]
	void OnAfterDependenciesDeserialized();
}
