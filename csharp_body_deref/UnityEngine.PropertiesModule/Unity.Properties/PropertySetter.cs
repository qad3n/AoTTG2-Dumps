using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000005")]
public delegate void PropertySetter<TContainer, in TValue>(ref TContainer container, TValue value);
