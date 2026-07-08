using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000191")]
[UnityEngine.Scripting.RequiredByNativeCode]
public interface ISerializationCallbackReceiver
{
	[Token(Token = "0x6000B5D")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBeforeSerialize();

	[Token(Token = "0x6000B5E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnAfterDeserialize();
}
