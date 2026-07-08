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
