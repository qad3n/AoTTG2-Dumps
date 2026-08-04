// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ReflectedCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000D")]
public abstract class ReflectedCloner : Cloner<object>
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, MemberInfo[]> accessors;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, IOptimizedAccessor[]> optimizedAccessors;

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4CA06F0", Offset = "0x4CA06F0", VA = "0x4CA06F0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4CA0700", Offset = "0x4CA0700", VA = "0x4CA0700", Slot = "12")]
	public override void FillClone(Type type, ref object clone, object original, CloningContext context)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4CA15A0", Offset = "0x4CA15A0", VA = "0x4CA15A0")]
	private MemberInfo[] GetAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4CA0EA0", Offset = "0x4CA0EA0", VA = "0x4CA0EA0")]
	private IOptimizedAccessor[] GetOptimizedAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4CA1680", Offset = "0x4CA1680", VA = "0x4CA1680", Slot = "14")]
	protected virtual IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4CA1880", Offset = "0x4CA1880", VA = "0x4CA1880", Slot = "15")]
	protected virtual bool IncludeField(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4CA1890", Offset = "0x4CA1890", VA = "0x4CA1890", Slot = "16")]
	protected virtual bool IncludeProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4C9FA10", Offset = "0x4C9FA10", VA = "0x4C9FA10")]
	protected ReflectedCloner()
	{
	}
}
