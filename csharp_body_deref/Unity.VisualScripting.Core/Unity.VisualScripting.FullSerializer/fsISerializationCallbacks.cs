using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x200020C")]
public interface fsISerializationCallbacks
{
	[Token(Token = "0x6001268")]
	void OnBeforeSerialize(Type storageType);

	[Token(Token = "0x6001269")]
	void OnAfterSerialize(Type storageType, ref fsData data);

	[Token(Token = "0x600126A")]
	void OnBeforeDeserialize(Type storageType, ref fsData data);

	[Token(Token = "0x600126B")]
	void OnAfterDeserialize(Type storageType);
}
