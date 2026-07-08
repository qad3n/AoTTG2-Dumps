using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000DE")]
internal delegate TResult MethodCall<T, TResult>(T target, params object?[] args);
