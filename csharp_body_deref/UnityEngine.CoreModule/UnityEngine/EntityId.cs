// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EntityId
// Update status: NEW in this game update
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
[Token(Token = "0x20001C1")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.NativeClass("EntityId")]
public struct EntityId : IEquatable<EntityId>, IComparable<EntityId>
{
	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_Data;

	[Token(Token = "0x17000249")]
	public static EntityId None
	{
		[Token(Token = "0x6000E53")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x2F17350", Offset = "0x2F15950", VA = "0x182F17350", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x1B28F40", Offset = "0x1B27540", VA = "0x181B28F40", Slot = "4")]
	public bool Equals(EntityId other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x2F17340", Offset = "0x2F15940", VA = "0x182F17340", Slot = "5")]
	public int CompareTo(EntityId other)
	{
		return default(int);
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x866D40", Offset = "0x865340", VA = "0x180866D40")]
	public static bool operator ==(EntityId left, EntityId right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x29B9EE0", Offset = "0x29B84E0", VA = "0x1829B9EE0")]
	public static bool operator !=(EntityId left, EntityId right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x2F173E0", Offset = "0x2F159E0", VA = "0x182F173E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static implicit operator int(EntityId entityId)
	{
		return default(int);
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static implicit operator EntityId(int intValue)
	{
		return default(EntityId);
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x2F17430", Offset = "0x2F15A30", VA = "0x182F17430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.AnimationModule", "UnityEngine.TextCoreTextEngineModule" })]
	internal static EntityId From(int input)
	{
		return default(EntityId);
	}
}
