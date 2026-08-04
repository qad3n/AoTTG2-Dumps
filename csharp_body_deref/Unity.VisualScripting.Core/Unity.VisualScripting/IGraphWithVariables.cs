// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphWithVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CC")]
public interface IGraphWithVariables : IGraph, IDisposable, IPrewarmable, IAotStubbable, ISerializationDepender, ISerializationCallbackReceiver
{
	[Token(Token = "0x170001E0")]
	VariableDeclarations variables
	{
		[Token(Token = "0x60010F7")]
		get;
	}

	[Token(Token = "0x60010F8")]
	IEnumerable<string> GetDynamicVariableNames(VariableKind kind, GraphReference reference);
}
