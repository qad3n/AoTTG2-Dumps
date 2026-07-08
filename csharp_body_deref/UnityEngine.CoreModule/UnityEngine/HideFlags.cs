using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000182")]
[Flags]
public enum HideFlags
{
	[Token(Token = "0x40005A6")]
	None = 0,
	[Token(Token = "0x40005A7")]
	HideInHierarchy = 1,
	[Token(Token = "0x40005A8")]
	HideInInspector = 2,
	[Token(Token = "0x40005A9")]
	DontSaveInEditor = 4,
	[Token(Token = "0x40005AA")]
	NotEditable = 8,
	[Token(Token = "0x40005AB")]
	DontSaveInBuild = 0x10,
	[Token(Token = "0x40005AC")]
	DontUnloadUnusedAsset = 0x20,
	[Token(Token = "0x40005AD")]
	DontSave = 0x34,
	[Token(Token = "0x40005AE")]
	HideAndDontSave = 0x3D
}
