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
