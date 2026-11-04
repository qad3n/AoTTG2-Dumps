// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HideFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20001BD")]
[Flags]
public enum HideFlags
{
	[Token(Token = "0x400063D")]
	None = 0,
	[Token(Token = "0x400063E")]
	HideInHierarchy = 1,
	[Token(Token = "0x400063F")]
	HideInInspector = 2,
	[Token(Token = "0x4000640")]
	DontSaveInEditor = 4,
	[Token(Token = "0x4000641")]
	NotEditable = 8,
	[Token(Token = "0x4000642")]
	DontSaveInBuild = 0x10,
	[Token(Token = "0x4000643")]
	DontUnloadUnusedAsset = 0x20,
	[Token(Token = "0x4000644")]
	DontSave = DontSaveInEditor | DontSaveInBuild | DontUnloadUnusedAsset,
	[Token(Token = "0x4000645")]
	HideAndDontSave = DontSave | HideInHierarchy | NotEditable
}
