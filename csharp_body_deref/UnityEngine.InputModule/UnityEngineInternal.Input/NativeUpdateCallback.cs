using Il2CppDummyDll;

namespace UnityEngineInternal.Input;

[Token(Token = "0x2000002")]
internal unsafe delegate void NativeUpdateCallback(NativeInputUpdateType updateType, NativeInputEventBuffer* buffer);
