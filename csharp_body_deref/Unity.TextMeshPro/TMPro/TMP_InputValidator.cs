using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200004E")]
public abstract class TMP_InputValidator : ScriptableObject
{
	[Token(Token = "0x6000295")]
	public abstract char Validate(ref string text, ref int pos, char ch);

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4936B60", Offset = "0x4936B60", VA = "0x4936B60")]
	protected TMP_InputValidator()
	{
	}
}
