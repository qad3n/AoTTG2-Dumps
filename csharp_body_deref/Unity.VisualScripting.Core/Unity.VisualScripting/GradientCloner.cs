// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GradientCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200000B")]
internal sealed class GradientCloner : Cloner<Gradient>
{
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x678EE60", Offset = "0x678DE60", VA = "0x678EE60", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x678EED0", Offset = "0x678DED0", VA = "0x678EED0", Slot = "11")]
	public override Gradient ConstructClone(Type type, Gradient original)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x678EF10", Offset = "0x678DF10", VA = "0x678EF10", Slot = "12")]
	public override void FillClone(Type type, ref Gradient clone, Gradient original, CloningContext context)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x678EF80", Offset = "0x678DF80", VA = "0x678EF80")]
	public GradientCloner()
	{
	}
}
