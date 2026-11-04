// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GradientCloner
// Update status: NEW in this game update
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
	[Address(RVA = "0x2DA81A0", Offset = "0x2DA67A0", VA = "0x182DA81A0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2DA80D0", Offset = "0x2DA66D0", VA = "0x182DA80D0", Slot = "11")]
	public override Gradient ConstructClone(Type type, Gradient original)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2DA8120", Offset = "0x2DA6720", VA = "0x182DA8120", Slot = "12")]
	public override void FillClone(Type type, ref Gradient clone, Gradient original, CloningContext context)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2DA8210", Offset = "0x2DA6810", VA = "0x182DA8210")]
	public GradientCloner()
	{
	}
}
