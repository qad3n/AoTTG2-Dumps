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
[Token(Token = "0x2000064")]
public abstract class TMP_InputValidator : ScriptableObject
{
	[Token(Token = "0x6000386")]
	public abstract char Validate(ref string text, ref int pos, char ch);

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x4C840E0", Offset = "0x4C840E0", VA = "0x4C840E0")]
	protected TMP_InputValidator()
	{
	}
}
