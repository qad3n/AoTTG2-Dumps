// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_InputValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000058")]
public abstract class TMP_InputValidator : ScriptableObject
{
	[Token(Token = "0x6000313")]
	public abstract char Validate(ref string text, ref int pos, char ch);

	[Token(Token = "0x6000314")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected TMP_InputValidator()
	{
	}
}
