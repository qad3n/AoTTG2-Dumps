using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000D")]
public enum FocusType
{
	[Token(Token = "0x400005A")]
	[Obsolete("FocusType.Native now behaves the same as FocusType.Passive in all OS cases. (UnityUpgradable) -> Passive", false)]
	Native,
	[Token(Token = "0x400005B")]
	Keyboard,
	[Token(Token = "0x400005C")]
	Passive
}
