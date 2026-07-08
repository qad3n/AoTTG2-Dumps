using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000AB")]
public delegate void EventHandler(object sender, EventArgs e);
[Token(Token = "0x20000AC")]
public delegate void EventHandler<TEventArgs>(object sender, TEventArgs e);
