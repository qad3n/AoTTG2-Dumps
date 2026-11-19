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
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, MemberInfo[]> accessors;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, IOptimizedAccessor[]> optimizedAccessors;

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x678FAE0", Offset = "0x678EAE0", VA = "0x678FAE0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x678FAF0", Offset = "0x678EAF0", VA = "0x678FAF0", Slot = "12")]
	public override void FillClone(Type type, ref object clone, object original, CloningContext context)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x67908E0", Offset = "0x678F8E0", VA = "0x67908E0")]
	private MemberInfo[] GetAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6790290", Offset = "0x678F290", VA = "0x6790290")]
	private IOptimizedAccessor[] GetOptimizedAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x67909C0", Offset = "0x678F9C0", VA = "0x67909C0", Slot = "14")]
	protected virtual IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6790BC0", Offset = "0x678FBC0", VA = "0x6790BC0", Slot = "15")]
	protected virtual bool IncludeField(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6790BD0", Offset = "0x678FBD0", VA = "0x6790BD0", Slot = "16")]
	protected virtual bool IncludeProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x678ECB0", Offset = "0x678DCB0", VA = "0x678ECB0")]
	protected ReflectedCloner()
	{
	}
}
