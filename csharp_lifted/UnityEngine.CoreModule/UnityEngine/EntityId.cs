// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EntityId
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x20001C2")]
[UnityEngine.NativeClass("EntityId")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct EntityId : IEquatable<EntityId>, IComparable<EntityId>
{
	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_Data;

	[Token(Token = "0x1700024E")]
	public static EntityId None
	{
		[Token(Token = "0x6000E65")]
		[Address(RVA = "0x691F900", Offset = "0x691E900", VA = "0x691F900")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x691F910", Offset = "0x691E910", VA = "0x691F910", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x691F970", Offset = "0x691E970", VA = "0x691F970", Slot = "4")]
	public bool Equals(EntityId other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x691F980", Offset = "0x691E980", VA = "0x691F980", Slot = "5")]
	public int CompareTo(EntityId other)
	{
		return default(int);
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x691F990", Offset = "0x691E990", VA = "0x691F990")]
	public static bool operator ==(EntityId left, EntityId right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x691F9A0", Offset = "0x691E9A0", VA = "0x691F9A0")]
	public static bool operator !=(EntityId left, EntityId right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x691F9B0", Offset = "0x691E9B0", VA = "0x691F9B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x691FA00", Offset = "0x691EA00", VA = "0x691FA00")]
	public static implicit operator int(EntityId entityId)
	{
		return default(int);
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x691FA10", Offset = "0x691EA10", VA = "0x691FA10")]
	public static implicit operator EntityId(int intValue)
	{
		return default(EntityId);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x691FA20", Offset = "0x691EA20", VA = "0x691FA20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x691FA30", Offset = "0x691EA30", VA = "0x691FA30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.AnimationModule", "UnityEngine.TextCoreTextEngineModule" })]
	internal static EntityId From(int input)
	{
		return default(EntityId);
	}
}
