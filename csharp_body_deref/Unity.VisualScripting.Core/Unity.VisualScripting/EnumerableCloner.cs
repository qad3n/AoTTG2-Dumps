// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EnumerableCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000008")]
public sealed class EnumerableCloner : Cloner<IEnumerable>
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, IOptimizedInvoker> addMethods;

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4C9EE50", Offset = "0x4C9EE50", VA = "0x4C9EE50", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4C9F190", Offset = "0x4C9F190", VA = "0x4C9F190", Slot = "12")]
	public override void FillClone(Type type, ref IEnumerable clone, IEnumerable original, CloningContext context)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4C9EF50", Offset = "0x4C9EF50", VA = "0x4C9EF50")]
	private IOptimizedInvoker GetAddMethod(Type type)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4C9F640", Offset = "0x4C9F640", VA = "0x4C9F640")]
	public EnumerableCloner()
	{
	}
}
